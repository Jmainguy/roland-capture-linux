TARGET 00447798
XREF 00367902 WRITE firmware_entry_00367884
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
XREF ffa025b0 READ firmware_entry_ffa0257c
FUNCTION ffa0257c firmware_entry_ffa0257c success=true

void firmware_entry_ffa0257c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_003696ee(&DAT_00447768,param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_ffa00e9c(DAT_00447798);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
XREF 00367a3c READ firmware_entry_003679fc
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
TARGET 00447768
XREF 003678bc PARAM firmware_entry_00367884
XREF ffa02592 PARAM firmware_entry_ffa0257c
XREF 00367a22 PARAM firmware_entry_003679fc
XREF 00367aaa PARAM firmware_entry_00367a74
FUNCTION 00367a74 firmware_entry_00367a74 success=true

void firmware_entry_00367a74(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    FUN_0032ab94(0);
    uVar1 = FUN_0036969e(&DAT_00447740);
    FUN_0032abd4();
  }
  else if (param_1 == 1) {
    FUN_0032ab94();
    FUN_003696c4(&DAT_00447740);
    FUN_0032abd4();
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (param_1 == 2) {
      FUN_0032ab94(0);
      FUN_003696c4(&DAT_00447768);
      FUN_0032abd4();
      uVar1 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00367aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


END_FUNCTION
TARGET 0044777c
XREF 003678d6 PARAM firmware_entry_00367884
XREF ffa02564 PARAM firmware_entry_ffa0255a
FUNCTION ffa0255a firmware_entry_ffa0255a success=true

void firmware_entry_ffa0255a(undefined4 param_1)

{
  FUN_00369846(&DAT_0044777c,param_1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
TARGET 0044779c
XREF 00367908 WRITE firmware_entry_00367884
XREF 0036795c READ firmware_entry_00367950
FUNCTION 00367950 firmware_entry_00367950 success=true

undefined4 firmware_entry_00367950(void)

{
  FUN_00329b0c(DAT_0044779c);
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
XREF 0036797c READ firmware_entry_00367970
FUNCTION 00367970 firmware_entry_00367970 success=true

undefined4 firmware_entry_00367970(void)

{
  FUN_00329bc8(DAT_0044779c);
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
