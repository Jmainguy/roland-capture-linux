# Protocol capture workflow

This workflow creates the Phase 3 transaction corpus without accepting or
redistributing Roland software. Run the official control panel only on a host
where it is already legitimately installed and capture observable USB traffic.

## One-control experiment

For each control and value, make five short captures with the same device,
sample rate, and idle audio state:

1. `baseline-a`: open the panel and wait without touching anything.
2. `action`: change exactly one reversible control once, then wait.
3. `baseline-b`: idle at the changed value to identify periodic traffic.
4. `restore`: change exactly that control back to its initial value.
5. `baseline-c`: idle at the restored value and physically confirm restoration.

Record the model, serial, firmware, operating system, control-panel version,
initial value, requested value, final front-panel value, and whether the value
survives panel restart, USB reconnect, and cold power-up. Never use phantom
power, initialize, reset, or preset writes as the first experiment.

USBPcap/Wireshark on Windows or a supported passive USB capture mechanism on
macOS may produce `pcap` or `pcapng`. Keep raw captures private if they contain
host identifiers. Normalize them on Linux:

```console
tools/octa_trace.py normalize baseline-a.pcapng baseline-a.jsonl
tools/octa_trace.py normalize action.pcapng action.jsonl
tools/octa_trace.py normalize baseline-b.pcapng baseline-b.jsonl
tools/octa_trace.py controls baseline-a.jsonl baseline-a.controls.jsonl
tools/octa_trace.py controls action.jsonl action.controls.jsonl
tools/octa_trace.py diff baseline-a.jsonl action.jsonl > action.diff.json
tools/octa_trace.py diff baseline-b.jsonl action.jsonl > action-repeat.diff.json
tools/octa_trace.py validate-manifest manifest.json
```

Older captures that contain four-byte USB-MIDI event packets rather than
Linux usbmon records must use the dedicated decoder:

```bash
tools/usb_midi_sysex.py capture.pcapng > capture.sysex.jsonl
python3 tools/test_usb_midi_sysex.py
```

The decoder follows messages across URBs and records cable, direction, Roland
address/data, and checksum validity. Do not force these captures through
`octa_trace.py`; its low match count warning means the record format is wrong
for that path.

Linux usbmon records often omit VID/PID after enumeration. For those captures,
copy the bus and device numbers shown by `lsusb` at capture time (for example,
`Bus 001 Device 002`) into the normalize command:

```console
tools/octa_trace.py normalize --bus 1 --address 2 capture.pcapng capture.jsonl
```

The normalizer retains USB addressing, setup fields, payloads, responses, and
transfer direction while dropping unrelated devices. The diff ignores frame
numbers, timestamps, and request/completion linkage, then compares transaction
counts. A candidate command is not proven merely because it appears in a diff:
repeat both directions, test boundaries, and confirm device readback or an
independent physical effect.

For a control available on the OCTA front panel, the repository includes a
guided passive capture command. It checks that exactly one matching device is
attached, uses sudo only for usbmon, guides the three capture stages, hashes the
serial, normalizes and pairs traffic, generates diffs and a manifest, and then
deletes the raw captures:

```console
./scripts/capture-front-panel.sh --check octa
./scripts/capture-front-panel.sh octa compressor-input-1 off on \
  evidence/incoming/compressor-input-1
```

The assistant captures and diffs both directions, records the initial value as
the final physical state, and refuses names associated with phantom power,
initialize/reset, hardware backup/recall, or power-off unless `--allow-risky`
is supplied explicitly. The flag only acknowledges the experiment; it does not
send commands or waive the equipment and restoration checks.

The COMP button is a practical first capture because its light shows the state
unambiguously. The owner’s manual documents phase and low-cut in the computer
Control Panel but not as front-panel preamp operations, so those require an
official-panel capture. Do not use phantom power unless every connected source
is known to tolerate it, and do not use initialize/reset as discovery actions.

The `controls` step pairs each control URB submission with its completion and
emits one record containing the setup tuple, direction, outbound payload, and
inbound response. Diff the paired `*.controls.jsonl` files when investigating
control-panel commands; keep full normalized traces for bulk MIDI and interrupt
traffic.

## Corpus layout

Store sanitized evidence under this layout; raw captures remain excluded from
version control:

```text
evidence/protocol/<model>/<firmware>/<control>/<value>/
  manifest.json
  baseline-a.jsonl
  action.jsonl
  baseline-b.jsonl
  action.diff.json
  action-repeat.diff.json
```

Each `manifest.json` must include `model`, `usb_id`, `serial_hash`, `firmware`,
`host_os`, `panel_version`, `control`, `initial_value`, `requested_value`,
`observed_value`, `sample_rate`, `audio_active`, `persistence`, and `notes`.
Do not commit raw capture files, usernames, machine names, or unredacted serial
numbers.
