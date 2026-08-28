FUNCTION 0031eb7c firmware_entry_0031eb7c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void firmware_entry_0031eb7c(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  
  iVar1 = DAT_004192bc;
  FUN_0031dbf0(auStack_48);
  iVar2 = DAT_004192dc;
  if (iStack_44 != 0) {
    if (((param_1 & 2) == 1) && ((param_2 & 2) != 1)) {
      if (DAT_004191ac != 0) {
        puStack_c = &DAT_004192b4;
        uStack_34 = 0;
        uStack_28 = DAT_004191b0;
        uStack_1c = DAT_00419358;
        uStack_18 = DAT_0041935c;
        uStack_14 = DAT_00419360;
        uStack_10 = DAT_00419364;
        puStack_20 = auStack_48;
        uStack_38 = 5;
        puStack_24 = &DAT_004191b4;
        FUN_0031dbd8();
        FUN_0031dbc0();
        FUN_ffa00dae(&uStack_28);
      }
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    if (param_3 != iVar1) {
      if (DAT_004191ac != 0) {
        puStack_c = &DAT_004192b4;
        uStack_28 = DAT_004191b0;
        uStack_1c = DAT_00419358;
        uStack_18 = DAT_0041935c;
        uStack_14 = DAT_00419360;
        uStack_10 = DAT_00419364;
        puStack_20 = auStack_48;
        uStack_34 = 1;
        puStack_24 = &DAT_004191b4;
        uStack_38 = 5;
        FUN_0031dbd8();
        FUN_ffa00dae(&uStack_28);
      }
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    if ((param_1 & 8) != (param_2 & 8)) {
      if (DAT_004191ac != 0) {
        puStack_c = &DAT_004192b4;
        uStack_28 = DAT_004191b0;
        uStack_1c = DAT_00419358;
        uStack_18 = DAT_0041935c;
        uStack_14 = DAT_00419360;
        uStack_10 = DAT_00419364;
        puStack_20 = auStack_48;
        uStack_34 = 1;
        puStack_24 = &DAT_004191b4;
        uStack_38 = 5;
        FUN_0031dbd8();
        FUN_ffa00dae(&uStack_28);
      }
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    if ((param_1 & 1) != (param_2 & 1)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    if ((param_1 & 4) != (param_2 & 4)) {
      uVar3 = FUN_00366aa4(s_audio_serial_00436284,3);
      FUN_003666d8(uVar3,2,(param_1 & 4) != 0);
      FUN_003667ec(uVar3);
    }
  }
  if (iVar2 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (((param_1 & 2) != 1) && ((param_2 & 2) == 1)) {
    if (DAT_004191ac != 0) {
      uStack_28 = DAT_004191b0;
      uStack_1c = DAT_00419358;
      uStack_18 = DAT_0041935c;
      uStack_14 = DAT_00419360;
      uStack_10 = DAT_00419364;
      puStack_20 = auStack_48;
      uStack_34 = 1;
      puStack_24 = &DAT_004191b4;
      uStack_38 = 5;
      puStack_c = &DAT_004192b4;
      FUN_0031dbd8();
      FUN_ffa00dae(&uStack_28);
    }
                    /* WARNING: Could not recover jumptable at 0x0031ec2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
