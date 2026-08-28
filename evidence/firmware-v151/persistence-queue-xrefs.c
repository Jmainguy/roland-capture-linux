TARGET 00440fec
XREF 0031e16a READ FUN_0031e128
FUNCTION 0031e128 FUN_0031e128 success=true

void FUN_0031e128(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined *local_c;
  
  if (DAT_00441104 != '\0') {
    DAT_00441106 = 1;
    do {
      FUN_0032b6d8(10);
    } while (DAT_00441104 != '\0');
  }
  local_28 = DAT_00440fec;
  local_38 = 0;
  local_c = &DAT_004410f0;
  local_24 = &DAT_00440ff0;
  uStack_1c = DAT_00419194;
  uStack_18 = DAT_00419198;
  DAT_00441104 = 1;
  uStack_14 = DAT_0041919c;
  local_30 = 1;
  local_20 = auStack_48;
  DAT_00441107 = 0;
  uStack_10 = DAT_004191a0;
  local_34 = 0;
  local_2c = 0;
  iVar1 = FUN_ffa00dae(&local_28);
                    /* WARNING: Could not recover jumptable at 0x0031e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar1 == 0);
  return;
}


END_FUNCTION
XREF 0031e0c2 READ FUN_0031e07c
FUNCTION 0031e07c FUN_0031e07c success=true

void FUN_0031e07c(undefined4 param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined *local_c;
  
  if (DAT_00441104 != '\0') {
    DAT_00441106 = 1;
    do {
      FUN_0032b6d8(10);
    } while (DAT_00441104 != '\0');
  }
  local_28 = DAT_00440fec;
  local_38 = 0;
  local_c = &DAT_004410f0;
  local_24 = &DAT_00440ff0;
  uStack_1c = DAT_00419174;
  uStack_18 = DAT_00419178;
  DAT_00441104 = 1;
  uStack_14 = DAT_0041917c;
  local_20 = auStack_48;
  DAT_00441107 = 0;
  uStack_10 = DAT_00419180;
  local_30 = 0;
  local_2c = 0;
  local_34 = param_1;
  iVar1 = FUN_ffa00dae(&local_28);
                    /* WARNING: Could not recover jumptable at 0x0031e126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar1 == 0);
  return;
}


END_FUNCTION
XREF 0031e20c READ firmware_entry_0031e1d4
FUNCTION 0031e1d4 firmware_entry_0031e1d4 success=true

bool firmware_entry_0031e1d4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined *local_c;
  
  local_20 = auStack_48;
  uStack_1c = DAT_0043626c;
  uStack_18 = DAT_00436270;
  local_28 = DAT_00440fec;
  uStack_14 = DAT_00436274;
  local_38 = 1;
  uStack_10 = DAT_00436278;
  local_c = &DAT_004410f0;
  local_24 = &DAT_00440ff0;
  local_34 = param_1;
  local_30 = param_2;
  iVar1 = FUN_ffa00dae(&local_28);
                    /* WARNING: Treating indirect jump as return */
  return iVar1 == 0;
}


END_FUNCTION
TARGET 00440ff0
XREF 0031e186 DATA FUN_0031e128
XREF 0031e0de DATA FUN_0031e07c
XREF 0031e22c DATA firmware_entry_0031e1d4
XREF 0031e224 PARAM firmware_entry_0031e1d4
TARGET 004410f0
XREF 0031e17c DATA FUN_0031e128
XREF 0031e0d4 DATA FUN_0031e07c
XREF 0031e22a DATA firmware_entry_0031e1d4
