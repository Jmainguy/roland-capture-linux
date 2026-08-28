TARGET 00369846
XREF 0036968a UNCONDITIONAL_CALL FUN_0036965c
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
XREF ffa02570 COMPUTED_CALL firmware_entry_ffa0255a
FUNCTION ffa0255a firmware_entry_ffa0255a success=true

void firmware_entry_ffa0255a(undefined4 param_1)

{
  FUN_00369846(&DAT_0044777c,param_1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
XREF 00369d14 UNCONDITIONAL_CALL <no-function>
XREF 00369d5e UNCONDITIONAL_CALL <no-function>
XREF 00369db4 UNCONDITIONAL_CALL <no-function>
XREF 00369e02 UNCONDITIONAL_CALL <no-function>
XREF 00369e56 UNCONDITIONAL_CALL <no-function>
XREF 00369ea6 UNCONDITIONAL_CALL <no-function>
XREF 00369ef6 UNCONDITIONAL_CALL <no-function>
XREF 00369f3a UNCONDITIONAL_CALL <no-function>
XREF 00369f7e UNCONDITIONAL_CALL <no-function>
TARGET 003696ee
XREF 0036931e UNCONDITIONAL_CALL FUN_003692e0
FUNCTION 003692e0 FUN_003692e0 success=true

undefined4 FUN_003692e0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  
  if (DAT_00419fec != 0) {
    FUN_0032ab94();
    iVar1 = FUN_003696ee(&DAT_00419ff8,param_1,0);
    FUN_0032abd4();
    if (iVar1 == 0) {
      FUN_003696c4(&DAT_00419ff8);
    }
    else if (param_2 != 0) {
      uStack_1c = DAT_0043dadc;
      uStack_18 = DAT_0043dae0;
      uStack_14 = DAT_0043dae4;
      uStack_10 = DAT_0043dae8;
      puStack_c = PTR_DAT_0043daec;
      local_28 = DAT_00448a9c;
      local_20 = auStack_3c;
      local_2c = 1;
      local_24 = &DAT_00448af4;
      FUN_ffa00dae(&local_28);
    }
                    /* WARNING: Could not recover jumptable at 0x00369344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(iVar1);
    return uVar2;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
XREF ffa0259e COMPUTED_CALL firmware_entry_ffa0257c
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
XREF 003679c2 UNCONDITIONAL_CALL <no-function>
TARGET 00447798
XREF 00367902 WRITE <no-function>
XREF ffa025b0 READ firmware_entry_ffa0257c
XREF 00367a3c READ <no-function>
