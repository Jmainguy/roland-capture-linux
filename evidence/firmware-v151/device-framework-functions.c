FUNCTION 00366494 FUN_00366494 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00366494(undefined1 *param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1 & 0xffff0000;
  puVar1 = (undefined1 *)register0x0038;
  if (2 < param_2) {
    param_2 = 2;
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *puVar1 = *param_1;
    if (param_2 == 0) break;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  (**(code **)(DAT_00447008 + 0x14))(DAT_0044700c,&stack0x00000000,1);
  _DAT_00447014 = uVar2;
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 003666d8 FUN_003666d8 success=true

void FUN_003666d8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = 0;
  if ((param_1 < DAT_00447118) && (iVar2 = *(int *)(DAT_0044711c + param_1 * 0xc + 4), iVar2 != 0))
  {
    uVar1 = (**(code **)(iVar2 + 0x1c))(param_2,&stack0x00000008);
  }
                    /* WARNING: Could not recover jumptable at 0x0036672c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


END_FUNCTION
FUNCTION 00366730 FUN_00366730 success=true

undefined4 FUN_00366730(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_00447118 <= param_1) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  uVar1 = (**(code **)(*(int *)(DAT_0044711c + param_1 * 0xc + 4) + 0x18))(param_2,param_3);
                    /* WARNING: Treating indirect jump as return */
  return uVar1;
}


END_FUNCTION
FUNCTION 00366770 FUN_00366770 success=true

undefined4 FUN_00366770(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_00447118 <= param_1) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  uVar1 = (**(code **)(*(int *)(DAT_0044711c + param_1 * 0xc + 4) + 0x14))(param_2,param_3);
                    /* WARNING: Treating indirect jump as return */
  return uVar1;
}


END_FUNCTION
FUNCTION 003667b0 FUN_003667b0 success=true

undefined4 FUN_003667b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_00447118 <= param_1) {
                    /* WARNING: Treating indirect jump as return */
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*(int *)(DAT_0044711c + param_1 * 0xc + 4) + 0x10))(param_2,param_3);
                    /* WARNING: Treating indirect jump as return */
  return uVar1;
}


END_FUNCTION
FUNCTION 003667ec FUN_003667ec success=true

undefined4 FUN_003667ec(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_00447118 <= param_1) {
                    /* WARNING: Treating indirect jump as return */
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*(int *)(DAT_0044711c + param_1 * 0xc + 4) + 0xc))();
                    /* WARNING: Treating indirect jump as return */
  return uVar1;
}


END_FUNCTION
FUNCTION 00366824 FUN_00366824 success=true

void FUN_00366824(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  if (0 < DAT_00447118) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      pcVar1 = *(code **)(*(int *)(DAT_0044711c + iVar3 + 4) + 4);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < DAT_00447118);
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00366870 FUN_00366870 success=true

void FUN_00366870(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  puVar3 = &DAT_00447018;
  iVar6 = 0x10;
  puVar1 = puVar3;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar2 = puVar1 + 3;
    puVar1[2] = 0;
    puVar1 = puVar1 + 4;
    *puVar2 = 0;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = param_1[2];
  DAT_0044711c = param_1;
  if (*param_1 != 0) {
    piVar4 = param_1 + 1;
    do {
      piVar5 = param_1 + 3;
      puVar1 = (undefined4 *)*piVar4;
      piVar4 = piVar4 + 3;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(iVar6);
      }
      puVar3[0x40] = puVar3[0x40] + 1;
      iVar6 = param_1[5];
      param_1 = piVar5;
    } while (*piVar5 != 0);
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 003668de FUN_003668de success=true

void FUN_003668de(int param_1)

{
  if ((param_1 < 0x10) && ((&DAT_0044701c)[param_1 * 4] != 0)) {
    (&DAT_00447018)[param_1 * 4] = 0;
    return;
  }
  return;
}


END_FUNCTION
FUNCTION 00366900 FUN_00366900 success=true

void FUN_00366900(int param_1)

{
  if (param_1 < 0x10) {
    if ((&DAT_0044701c)[param_1 * 4] != 0) {
      (&DAT_00447024)[param_1 * 4] = 0;
      (&DAT_00447018)[param_1 * 4] = 1;
      return;
    }
  }
  return;
}


END_FUNCTION
FUNCTION 0036697c FUN_0036697c success=true

void FUN_0036697c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  
  iVar1 = 0;
  iVar4 = 0;
  do {
    iVar3 = iVar1;
    if (DAT_00447118 <= iVar3) {
                    /* WARNING: Could not recover jumptable at 0x003669d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(0xffffffff);
      return;
    }
    iVar2 = FUN_00325608(param_1,*(undefined4 *)(DAT_0044711c + iVar4));
    iVar1 = iVar3 + 1;
    iVar4 = iVar4 + 0xc;
  } while (iVar2 != 0);
                    /* WARNING: Could not recover jumptable at 0x003669c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(iVar3);
  return;
}


END_FUNCTION
FUNCTION 003669d4 FUN_003669d4 success=true

void FUN_003669d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  
  piVar4 = &DAT_0044701c;
  iVar5 = 0x10;
  iVar3 = 0;
  while( true ) {
    iVar2 = *piVar4;
    piVar4 = piVar4 + 4;
    iVar1 = iVar3 + 1;
    if (iVar2 == 0) break;
    if ((iVar5 == 0) || (iVar5 = iVar5 + -1, iVar3 = iVar1, iVar5 == 0)) goto LAB_00366a0e;
  }
  (&DAT_00447018)[iVar3 * 4] = param_3;
  (&DAT_00447024)[iVar3 * 4] = 0;
  (&DAT_00447020)[iVar3 * 4] = param_2;
  (&DAT_0044701c)[iVar3 * 4] = param_1;
  iVar1 = iVar3;
LAB_00366a0e:
  if (iVar1 == 0x10) {
    FUN_0032aad8(s_device_ctrl_add_polling_error__0043cc44);
  }
                    /* WARNING: Could not recover jumptable at 0x00366a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar1);
  return;
}


END_FUNCTION
FUNCTION 00366a4c FUN_00366a4c success=true

int FUN_00366a4c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0036697c();
  if (iVar1 == -1) {
                    /* WARNING: Treating indirect jump as return */
    return -1;
  }
  iVar2 = (**(code **)(*(int *)(DAT_0044711c + iVar1 * 0xc + 4) + 8))(param_2,param_3);
  if (iVar2 == -1) {
    iVar1 = -1;
  }
                    /* WARNING: Treating indirect jump as return */
  return iVar1;
}


END_FUNCTION
FUNCTION 00366aa4 FUN_00366aa4 success=true

void FUN_00366aa4(undefined4 param_1,undefined4 param_2)

{
  FUN_00366a4c(param_1,param_2,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00366bac FUN_00366bac success=true

uint FUN_00366bac(uint param_1,int param_2)

{
  if (DAT_00447168 == 0) {
    return 0xffffffff;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      DAT_00447170 = 0x400;
    }
    param_1 = param_1 + DAT_00447170;
  }
  if (0x400 < param_1) {
    param_1 = 0x400;
  }
  DAT_00447170 = param_1;
  return param_1;
}


END_FUNCTION
FUNCTION 00366bfc FUN_00366bfc success=true

uint FUN_00366bfc(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  iVar3 = 7;
  iVar2 = 0;
  iVar4 = 8;
  do {
    if ((param_1 & 1 << iVar2) != 0) {
      uVar1 = 1 << iVar3 | uVar1;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + -1;
  } while ((iVar4 != 0) && (iVar4 = iVar4 + -1, iVar4 != 0));
  return uVar1 & 0xff;
}


END_FUNCTION
