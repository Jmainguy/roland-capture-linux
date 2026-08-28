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
