TARGET 004191ac
XREF 0031f110 READ FUN_0031f104
FUNCTION 0031f104 FUN_0031f104 success=true

bool FUN_0031f104(void)

{
  int iVar1;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined *local_34;
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
  uStack_1c = DAT_004193b8;
  uStack_18 = DAT_004193bc;
  uStack_14 = DAT_004193c0;
  uStack_10 = DAT_004193c4;
  local_34 = &DAT_004192b4;
  local_c = &DAT_004192b4;
  local_28 = DAT_004191b0;
  local_24 = &DAT_004191b4;
  local_38 = 4;
  local_20 = auStack_48;
  iVar1 = FUN_ffa00dae(&local_28);
                    /* WARNING: Treating indirect jump as return */
  return iVar1 == 0;
}


END_FUNCTION
XREF 0031f14c PARAM FUN_0031f104
XREF 0031f088 READ FUN_0031f07c
FUNCTION 0031f07c FUN_0031f07c success=true

bool FUN_0031f07c(void)

{
  int iVar1;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined *local_34;
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
  uStack_1c = DAT_00419398;
  uStack_18 = DAT_0041939c;
  uStack_14 = DAT_004193a0;
  uStack_10 = DAT_004193a4;
  local_34 = &DAT_004192b4;
  local_c = &DAT_004192b4;
  local_28 = DAT_004191b0;
  local_24 = &DAT_004191b4;
  local_38 = 2;
  local_20 = auStack_48;
  iVar1 = FUN_ffa00dae(&local_28);
                    /* WARNING: Treating indirect jump as return */
  return iVar1 == 0;
}


END_FUNCTION
XREF 0031f0c4 PARAM FUN_0031f07c
XREF 0031eafc READ FUN_0031eaf0
FUNCTION 0031eaf0 FUN_0031eaf0 success=true

bool FUN_0031eaf0(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
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
  uStack_1c = DAT_00419338;
  uStack_18 = DAT_0041933c;
  local_38 = 3;
  local_c = &DAT_004192b4;
  local_28 = DAT_004191b0;
  uStack_14 = DAT_00419340;
  local_20 = auStack_48;
  uStack_10 = DAT_00419344;
  local_24 = &DAT_004191b4;
  local_34 = param_1;
  FUN_0031dbd8();
  iVar1 = FUN_ffa00dae(&local_28);
                    /* WARNING: Treating indirect jump as return */
  return iVar1 == 0;
}


END_FUNCTION
XREF 0031effc READ FUN_0031eff0
FUNCTION 0031eff0 FUN_0031eff0 success=true

bool FUN_0031eff0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
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
  uStack_1c = DAT_00419378;
  uStack_18 = DAT_0041937c;
  uStack_14 = DAT_00419380;
  uStack_10 = DAT_00419384;
  local_34 = &DAT_004192b4;
  local_c = &DAT_004192b4;
  local_28 = DAT_004191b0;
  local_24 = &DAT_004191b4;
  local_38 = 6;
  local_20 = auStack_48;
  local_30 = param_2;
  local_2c = param_3;
  iVar1 = FUN_ffa00dae(&local_28);
                    /* WARNING: Treating indirect jump as return */
  return iVar1 == 0;
}


END_FUNCTION
XREF 0031f03c PARAM FUN_0031eff0
XREF 0031e95c READ FUN_0031e948
FUNCTION 0031e948 FUN_0031e948 success=true

undefined4 FUN_0031e948(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  if ((DAT_004191ac == 0) && (DAT_004191a8 == 0)) {
    DAT_004192e4 = 0;
    DAT_004192e8 = 0;
    DAT_004191a8 = 1;
  }
  FUN_0032ac10();
  uVar2 = 0;
  iVar4 = 2;
  iVar1 = 0;
  piVar3 = &DAT_004192e4;
  while( true ) {
    if (*piVar3 == 0) break;
    if ((iVar4 == 0) || (iVar4 = iVar4 + -1, iVar1 = iVar1 + 1, piVar3 = piVar3 + 1, iVar4 == 0))
    goto LAB_0031e98a;
  }
  uVar2 = 1;
  (&DAT_004192e4)[iVar1] = param_1;
LAB_0031e98a:
  FUN_0032ac64();
                    /* WARNING: Treating indirect jump as return */
  return uVar2;
}


END_FUNCTION
XREF 0031e9d8 READ FUN_0031e9c8
FUNCTION 0031e9c8 FUN_0031e9c8 success=true

bool FUN_0031e9c8(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
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
  local_28 = DAT_004191b0;
  local_24 = &DAT_004191b4;
  uStack_1c = DAT_004192f8;
  uStack_18 = DAT_004192fc;
  local_c = &DAT_004192b4;
  uStack_14 = DAT_00419300;
  local_20 = auStack_48;
  uStack_10 = DAT_00419304;
  local_38 = 0;
  local_34 = param_1;
  FUN_0031dbd8();
  iVar1 = FUN_ffa00dae(&local_28);
                    /* WARNING: Treating indirect jump as return */
  return iVar1 == 0;
}


END_FUNCTION
XREF 0031ea70 READ FUN_0031ea64
FUNCTION 0031ea64 FUN_0031ea64 success=true

bool FUN_0031ea64(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
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
  uStack_1c = DAT_00419318;
  uStack_18 = DAT_0041931c;
  local_38 = 1;
  local_c = &DAT_004192b4;
  local_28 = DAT_004191b0;
  uStack_14 = DAT_00419320;
  local_20 = auStack_48;
  uStack_10 = DAT_00419324;
  local_24 = &DAT_004191b4;
  local_34 = param_1;
  FUN_0031dbd8();
  iVar1 = FUN_ffa00dae(&local_28);
                    /* WARNING: Treating indirect jump as return */
  return iVar1 == 0;
}


END_FUNCTION
XREF 0031f198 READ firmware_entry_0031f18c
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
XREF 0031f1d6 PARAM firmware_entry_0031f18c
XREF 0031ef7e READ firmware_entry_0031ef60
FUNCTION 0031ef60 firmware_entry_0031ef60 success=true

void firmware_entry_0031ef60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_P3;
  undefined4 *unaff_P4;
  int unaff_FP;
  
  in_P3[0x48] = 1;
  iVar3 = 2;
  do {
    if ((code *)*unaff_P4 != (code *)0x0) {
      (*(code *)*unaff_P4)(0,0,0);
    }
    iVar3 = iVar3 + -1;
    unaff_P4 = unaff_P4 + 1;
  } while (iVar3 != 0);
  if (*in_P3 != 0) {
    *(undefined4 *)(unaff_FP + -0x20) = DAT_0041934c;
    *(undefined4 *)(unaff_FP + -0x1c) = DAT_00419350;
    *(undefined4 *)(unaff_FP + -0x18) = DAT_00419354;
    *(undefined4 *)(unaff_FP + -0x14) = DAT_00419358;
    *(undefined4 *)(unaff_FP + -0x10) = DAT_0041935c;
    uVar1 = DAT_00419360;
    *(int **)(unaff_FP + -4) = in_P3 + 0x42;
    uVar2 = DAT_00419364;
    *(int *)(unaff_FP + -0x20) = in_P3[1];
    *(undefined4 *)(unaff_FP + -0xc) = uVar1;
    *(undefined4 *)(unaff_FP + -8) = uVar2;
    *(int *)(unaff_FP + -0x18) = unaff_FP + -0x40;
    *(int **)(unaff_FP + -0x1c) = in_P3 + 2;
    FUN_0031dbd8();
    FUN_ffa00dae(unaff_FP + -0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x0031ef8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
XREF 0031ec1a READ <no-function>
XREF 0031ecd2 READ <no-function>
XREF 0031ed2e READ <no-function>
XREF 0031ed8a READ <no-function>
TARGET 004191b0
XREF 0031f15c READ FUN_0031f104
XREF 0031f0d4 READ FUN_0031f07c
XREF 0031eb46 READ FUN_0031eaf0
XREF 0031f04c READ FUN_0031eff0
XREF 0031ea06 READ FUN_0031e9c8
XREF 0031eaba READ FUN_0031ea64
XREF 0031f1e6 READ firmware_entry_0031f18c
XREF 0031efc4 READ firmware_entry_0031ef60
XREF 0031ec38 READ <no-function>
XREF 0031ecf0 READ <no-function>
XREF 0031ed4c READ <no-function>
XREF 0031edaa READ <no-function>
TARGET 004192b4
XREF 0031f0ca DATA FUN_0031f07c
XREF 0031f0d2 DATA FUN_0031f07c
XREF 0031f152 DATA FUN_0031f104
XREF 0031f15a DATA FUN_0031f104
XREF 0031eb44 DATA FUN_0031eaf0
XREF 0031f042 DATA FUN_0031eff0
XREF 0031f04a DATA FUN_0031eff0
XREF 0031ea32 DATA FUN_0031e9c8
XREF 0031eab8 DATA FUN_0031ea64
XREF 0031f1dc DATA firmware_entry_0031f18c
XREF 0031f1e4 DATA firmware_entry_0031f18c
XREF 0031efc2 DATA firmware_entry_0031ef60
XREF 0031ebb0 DATA <no-function>
XREF 0031ec34 DATA <no-function>
XREF 0031ecec DATA <no-function>
XREF 0031ed48 DATA <no-function>
XREF 0031eda0 DATA <no-function>
