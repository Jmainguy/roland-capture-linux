FUNCTION 0031d7e8 firmware_entry_0031d7e8 contains=0031d7e8 success=true

void firmware_entry_0031d7e8(void)

{
  FUN_0032b2b0(8);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0031db4c firmware_entry_0031db4c contains=0031db4c success=true

void firmware_entry_0031db4c(void)

{
  undefined4 uVar1;
  
  FUN_0035aaf0(5);
  FUN_00356768(&DAT_004453c8,0,0);
  DAT_004453c8 = 0;
  FUN_0036da08();
  uVar1 = FUN_00366aa4(s_audio_serial_00436170,3);
  FUN_003666d8(uVar1,1);
  FUN_003667ec(uVar1);
  FUN_0032b6d8(1000);
  uVar1 = FUN_00366aa4(s_power_00436180,2);
  FUN_003666d8(uVar1,3);
  FUN_003667ec(uVar1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
