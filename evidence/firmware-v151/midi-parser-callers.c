SYMBOL_QUERY FUN_00369846
SYMBOL 00369846 FUN_00369846 Function
XREF 0036968a FUN_0036965c
FUNCTION 0036965c FUN_0036965c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0036965c(undefined4 param_1,int param_2)

{
  if (0 < param_2) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
XREF ffa02570 firmware_entry_ffa0255a
FUNCTION ffa0255a firmware_entry_ffa0255a success=true

void firmware_entry_ffa0255a(undefined4 param_1)

{
  FUN_00369846(&DAT_0044777c,param_1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
XREF 00369d14 firmware_entry_00369cd0
FUNCTION 00369cd0 firmware_entry_00369cd0 success=true

void firmware_entry_00369cd0(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xf] = 0xff;
  param_1[0xe] = 0xf6;
  param_1[0xc] = *param_1 | 6;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
XREF 00369d5e firmware_entry_00369d24
FUNCTION 00369d24 firmware_entry_00369d24 success=true

void firmware_entry_00369d24(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xf] = 0xf6;
  param_1[0xc] = *param_1 | 7;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
XREF 00369db4 firmware_entry_00369d70
FUNCTION 00369d70 firmware_entry_00369d70 success=true

void firmware_entry_00369d70(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xe] = 0xff;
  param_1[0xf] = 0xff;
  param_1[0xc] = *param_1 | 5;
  param_1[0xd] = 0xf6;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369dc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
XREF 00369e02 firmware_entry_00369dc4
FUNCTION 00369dc4 firmware_entry_00369dc4 success=true

void firmware_entry_00369dc4(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xe] = (byte)param_2;
  param_1[0xf] = 0xff;
  param_1[0xc] = *param_1 | 6;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
XREF 00369e56 firmware_entry_00369e14
FUNCTION 00369e14 firmware_entry_00369e14 success=true

void firmware_entry_00369e14(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xf] = 0xff;
  param_1[0xe] = 0xff;
  param_1[0xd] = (byte)param_2;
  param_1[0xc] = *param_1 | 5;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
XREF 00369ea6 firmware_entry_00369e68
FUNCTION 00369e68 firmware_entry_00369e68 success=true

void firmware_entry_00369e68(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xe] = (byte)param_2;
  param_1[0xf] = 0xff;
  param_1[0xc] = *param_1 | 5;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
XREF 00369ef6 firmware_entry_00369eb8
FUNCTION 00369eb8 firmware_entry_00369eb8 success=true

void firmware_entry_00369eb8(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xe] = (byte)param_2;
  param_1[0xf] = 0xff;
  param_1[0xc] = *param_1 | 5;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
XREF 00369f3a firmware_entry_00369f08
FUNCTION 00369f08 firmware_entry_00369f08 success=true

void firmware_entry_00369f08(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xf] = (byte)param_2;
  param_1[0xc] = *param_1 | 2;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
XREF 00369f7e firmware_entry_00369f4c
FUNCTION 00369f4c firmware_entry_00369f4c success=true

void firmware_entry_00369f4c(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xf] = (byte)param_2;
  param_1[0xc] = *param_1 | 2;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SYMBOL_QUERY FUN_00369880
SYMBOL 00369880 FUN_00369880 Function
XREF 003678ea firmware_entry_00367884
FUNCTION 00367884 firmware_entry_00367884 success=true

void firmware_entry_00367884(undefined4 *param_1)

{
  DAT_00447738 = (undefined4 *)FUN_00368f84(*param_1);
  DAT_0044773c = param_1[1];
  if (DAT_00447738 == (undefined4 *)0x0) {
    FUN_0032aad8(s_dev_midi_error_0043d8cc);
  }
  FUN_003696d4(&DAT_00447740,0x200,&DAT_004477a0);
  FUN_003696d4(&DAT_00447768,0x200,&DAT_00447fa0);
  FUN_00369880(&DAT_0044777c,firmware_entry_ffa0257c,*(undefined1 *)(param_1 + 2),1);
  FUN_00369834(&DAT_00447754);
  DAT_0044775c = 0;
  DAT_00447798 = param_1[3];
  DAT_0044779c = param_1[4];
  (*(code *)*DAT_00447738)
            (DAT_0044773c,0x7a12,firmware_entry_ffa0255a,firmware_entry_ffa024c8,
             firmware_entry_ffa024c4);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SYMBOL_QUERY FUN_003679fc
SYMBOL_QUERY FUN_00369734
SYMBOL 00369734 FUN_00369734 Function
XREF ffa0251c firmware_entry_ffa024c8
FUNCTION ffa024c8 firmware_entry_ffa024c8 success=true

void firmware_entry_ffa024c8(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000000;
  undefined4 in_stack_00000004;
  
  if (DAT_0044775c == 0) {
    iVar2 = FUN_00369734(&DAT_00447740,&stack0x00000004);
    uVar1 = 0;
    if (iVar2 != 0) {
      FUN_0036977c(&DAT_00447754,in_stack_00000004,&DAT_00447764,&stack0x00000000);
      uVar1 = 0;
      if (in_stack_00000000 != 0) {
        DAT_0044775c = in_stack_00000000 + -1;
        uVar1 = 1;
        DAT_00447760 = 1;
        *param_1 = DAT_00447764;
      }
    }
  }
  else {
    uVar1 = 1;
    *param_1 = (&DAT_00447764)[DAT_00447760];
    DAT_00447760 = DAT_00447760 + 1;
    DAT_0044775c = DAT_0044775c + -1;
  }
                    /* WARNING: Could not recover jumptable at 0xffa0250a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


END_FUNCTION
XREF 00367a24 firmware_entry_003679fc
FUNCTION 003679fc firmware_entry_003679fc success=true

undefined4 firmware_entry_003679fc(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000000;
  
  if (param_2 != 0) {
    iVar3 = 0;
    do {
      FUN_0032ab94();
      iVar1 = FUN_00369734(&DAT_00447768,&stack0x00000000);
      if (iVar1 == 0) {
        FUN_0032abd4();
        FUN_ffa00f68(DAT_00447798);
      }
      else {
        FUN_0032abd4();
        iVar3 = iVar3 + 1;
        *param_1 = in_stack_00000000;
        param_1 = param_1 + 1;
      }
    } while (param_2 != iVar3);
                    /* WARNING: Could not recover jumptable at 0x00367a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(iVar3);
    return uVar2;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
