FUNCTION 0031dae0 firmware_entry_0031dae0 contains=0031dae0 success=true

void firmware_entry_0031dae0(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_48 [16];
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_1c = uRam004361b4;
  uStack_18 = uRam004361b8;
  uStack_14 = uRam004361bc;
  uStack_10 = uRam004361c0;
  uStack_c = uRam004361c4;
  uStack_28 = uRam00440ee0;
  uStack_38 = 1;
  puStack_20 = auStack_48;
  uStack_24 = 0x440eec;
  uStack_30 = param_1;
  uStack_2c = param_2;
  FUN_ffa00dae(&uStack_28);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0031da6c firmware_entry_0031da6c contains=0031da6c success=true

void firmware_entry_0031da6c(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_48 [16];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_28 = uRam00440ee0;
  uStack_1c = uRam00436194;
  uStack_18 = uRam00436198;
  uStack_14 = uRam0043619c;
  uStack_10 = uRam004361a0;
  puStack_20 = auStack_48;
  uStack_c = uRam004361a4;
  uStack_38 = 0;
  uStack_24 = 0x440eec;
  uStack_34 = param_1;
  uStack_2c = param_2;
  FUN_ffa00dae(&uStack_28,uRam004361a4,0x440eec,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030d8f8 firmware_entry_0030d8f8 contains=0030d8f8 success=true

void firmware_entry_0030d8f8(void)

{
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00331fa4 firmware_entry_00331fa4 contains=00331fa4 success=true

int firmware_entry_00331fa4(int param_1,undefined4 param_2)

{
  FUN_0032f1a8();
  *(undefined4 *)(param_1 + 0x6c) = 0x4040d8;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  func_0x00331ee8(param_1);
  FUN_0032edc0(param_1,0xbc,8);
  FUN_0032f18c(param_1,2,param_1);
  *(undefined2 *)(param_1 + 0x70) = 8;
  *(undefined2 *)(param_1 + 0x72) = 0xbc;
  FUN_0032edc0(param_1,0xbc,8);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 100;
  *(undefined2 *)(param_1 + 0x86) = 0x29;
  *(undefined2 *)(param_1 + 0x82) = 0xfa;
  *(undefined2 *)(param_1 + 0x80) = 0;
  *(undefined2 *)(param_1 + 0x84) = 0;
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}


END_FUNCTION
FUNCTION 00331dde firmware_entry_00331dde contains=00331dde success=true

void firmware_entry_00331dde(int param_1)

{
  FUN_0032edc0(param_1,(int)*(short *)(param_1 + 0x72),(int)*(short *)(param_1 + 0x70));
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00331df8 firmware_entry_00331df8 contains=00331df8 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void firmware_entry_00331df8(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
FUNCTION 00331e6c firmware_entry_00331e6c contains=00331e6c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void firmware_entry_00331e6c(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
