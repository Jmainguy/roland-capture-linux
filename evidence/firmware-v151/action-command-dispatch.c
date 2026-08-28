FUNCTION 0031f18c firmware_entry_0031f18c success=true

bool firmware_entry_0031f18c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined *local_c;
  
  if (DAT_004191ac == 0) {
                    /* WARNING: Treating indirect jump as return */
    return false;
  }
  uStack_1c = DAT_004193d8;
  uStack_18 = DAT_004193dc;
  uStack_14 = DAT_004193e0;
  uStack_10 = DAT_004193e4;
  local_34 = &DAT_004192b4;
  local_c = &DAT_004192b4;
  local_28 = DAT_004191b0;
  local_24 = &DAT_004191b4;
  local_38 = 7;
  local_20 = auStack_48;
  local_30 = param_2;
  iVar1 = FUN_ffa00dae(&local_28);
                    /* WARNING: Treating indirect jump as return */
  return iVar1 == 0;
}


END_FUNCTION
