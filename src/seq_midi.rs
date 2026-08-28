//! Shareable ALSA-sequencer transport for the OCTA mixer/control MIDI port.

use alsa::seq::{
    Addr, ClientIter, Event, EventType, PortCap, PortIter, PortSubscribe, PortType, Seq,
};
use anyhow::{bail, Context, Result};
use std::ffi::CString;
use std::sync::Mutex;
use std::thread;
use std::time::{Duration, Instant};

pub struct ControlPort {
    seq: Seq,
    _input_port: i32,
    output_port: i32,
    pending: Mutex<Vec<u8>>,
}

impl ControlPort {
    pub fn open(client_name: &str) -> Result<Self> {
        let seq = Seq::open(None, None, true).context("open ALSA sequencer")?;
        seq.set_client_name(&CString::new(client_name)?)
            .context("name ALSA sequencer client")?;
        let device = find_control_port(&seq)?;
        let input_port = seq
            .create_simple_port(
                &CString::new("OCTA control input")?,
                PortCap::WRITE | PortCap::SUBS_WRITE,
                PortType::MIDI_GENERIC | PortType::APPLICATION,
            )
            .context("create sequencer input port")?;
        let output_port = seq
            .create_simple_port(
                &CString::new("OCTA control output")?,
                PortCap::READ | PortCap::SUBS_READ,
                PortType::MIDI_GENERIC | PortType::APPLICATION,
            )
            .context("create sequencer output port")?;
        let local_client = seq.client_id().context("read sequencer client id")?;

        let incoming = PortSubscribe::empty().context("allocate input subscription")?;
        incoming.set_sender(device);
        incoming.set_dest(Addr {
            client: local_client,
            port: input_port,
        });
        seq.subscribe_port(&incoming)
            .context("subscribe to OCTA control replies")?;

        let outgoing = PortSubscribe::empty().context("allocate output subscription")?;
        outgoing.set_sender(Addr {
            client: local_client,
            port: output_port,
        });
        outgoing.set_dest(device);
        seq.subscribe_port(&outgoing)
            .context("connect to OCTA control port")?;

        Ok(Self {
            seq,
            _input_port: input_port,
            output_port,
            pending: Mutex::new(Vec::new()),
        })
    }

    pub fn send(&self, message: &[u8]) -> Result<()> {
        let mut event = Event::new_ext(EventType::Sysex, message);
        event.set_source(self.output_port);
        event.set_subs();
        event.set_direct();
        self.seq
            .event_output(&mut event)
            .context("queue OCTA control SysEx")?;
        self.seq.drain_output().context("send OCTA control SysEx")?;
        Ok(())
    }

    pub fn receive_until(&self, deadline: Instant) -> Result<Option<Vec<u8>>> {
        while Instant::now() < deadline {
            let mut input = self.seq.input();
            match input.event_input() {
                Ok(event) => {
                    if event.get_type() == EventType::Sysex {
                        if let Some(data) = event.get_ext() {
                            let mut pending = self.pending.lock().expect("meter buffer poisoned");
                            if data.first() == Some(&0xf0) {
                                pending.clear();
                            }
                            pending.extend_from_slice(data);
                            if let Some(end) = pending.iter().position(|byte| *byte == 0xf7) {
                                let message = pending.drain(..=end).collect();
                                return Ok(Some(message));
                            }
                        }
                    }
                }
                Err(error) if error.errno() == libc::EAGAIN => {
                    drop(input);
                    thread::sleep(Duration::from_millis(2));
                }
                Err(error) => return Err(error).context("receive OCTA control SysEx"),
            }
        }
        Ok(None)
    }

    pub fn receive_for(&self, timeout: Duration) -> Result<Option<Vec<u8>>> {
        self.receive_until(Instant::now() + timeout)
    }
}

fn find_control_port(seq: &Seq) -> Result<Addr> {
    for client in ClientIter::new(seq) {
        let client_id = client.get_client();
        if client.get_name().unwrap_or_default() != "OCTA-CAPTURE" {
            continue;
        }
        for port in PortIter::new(seq, client_id) {
            if port.get_name().unwrap_or_default().ends_with("Control") {
                return Ok(Addr {
                    client: client_id,
                    port: port.get_port(),
                });
            }
        }
    }
    bail!("OCTA-CAPTURE ALSA sequencer Control port not found")
}
