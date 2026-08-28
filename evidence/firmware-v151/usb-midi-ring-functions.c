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
FUNCTION 0036969e FUN_0036969e success=true

int FUN_0036969e(int param_1)

{
  return (int)(short)(*(short *)(param_1 + 0x12) - *(short *)(param_1 + 0x10));
}


END_FUNCTION
FUNCTION 003696ae FUN_003696ae success=true

bool FUN_003696ae(int param_1)

{
  return *(short *)(param_1 + 0x10) == 0;
}


END_FUNCTION
FUNCTION 003696b8 FUN_003696b8 success=true

bool FUN_003696b8(int param_1)

{
  return *(short *)(param_1 + 0x10) < *(short *)(param_1 + 0x12);
}


END_FUNCTION
FUNCTION 003696c4 FUN_003696c4 success=true

void FUN_003696c4(undefined4 *param_1)

{
  param_1[4] = (uint)param_1 & 0xffff0000;
  param_1[3] = *param_1;
  param_1[2] = *param_1;
  return;
}


END_FUNCTION
FUNCTION 003696d4 FUN_003696d4 success=true

void FUN_003696d4(int *param_1,int param_2,int param_3)

{
  uint in_R3;
  
  *param_1 = param_3;
  param_1[2] = param_3;
  param_1[3] = param_3;
  param_1[1] = param_3 + param_2 * 4;
  param_1[4] = in_R3 & 0xffff0000;
  *(int *)((int)param_1 + 0x12) = param_2;
  return;
}


END_FUNCTION
FUNCTION 003696ee FUN_003696ee success=true

undefined4 FUN_003696ee(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_003696b8(param_1,param_3);
  if (iVar1 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  param_1[4] = *(short *)(param_1 + 4) + 1;
  *(undefined4 *)param_1[3] = param_2;
  iVar1 = param_1[3];
  param_1[3] = iVar1 + 4;
  if (iVar1 + 4 == param_1[1]) {
    param_1[3] = *param_1;
  }
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
FUNCTION 00369734 FUN_00369734 success=true

undefined4 FUN_00369734(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_003696ae();
  if ((int)((ulonglong)uVar2 >> 0x20) != 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  param_1[4] = *(short *)(param_1 + 4) + -1;
  *(undefined4 *)uVar2 = *(undefined4 *)param_1[2];
  iVar1 = param_1[2];
  param_1[2] = iVar1 + 4;
  if (iVar1 + 4 == param_1[1]) {
    param_1[2] = *param_1;
  }
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
FUNCTION 0036977c FUN_0036977c success=true

void FUN_0036977c(int *param_1,uint param_2,char *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  
  iVar2 = 0;
  cVar4 = (char)(param_2 >> 8);
  cVar1 = (char)(param_2 >> 0x10);
  cVar3 = (char)(param_2 >> 0x18);
  switch(param_2 & 0xf) {
  case 2:
  case 6:
    *(undefined1 *)(param_1 + 1) = 0;
    *param_3 = cVar4;
    param_3[1] = cVar1;
    iVar2 = 2;
    break;
  case 3:
  case 7:
    *(undefined1 *)(param_1 + 1) = 0;
  case 4:
    *param_3 = cVar4;
    param_3[1] = cVar1;
    param_3[2] = cVar3;
    iVar2 = 3;
    break;
  case 5:
    *param_3 = cVar4;
    iVar2 = 1;
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
    if ((*param_1 == 0) || (cVar4 != (char)param_1[1])) {
      *(char *)(param_1 + 1) = cVar4;
      *param_3 = cVar4;
      param_3 = param_3 + 1;
      iVar2 = 1;
    }
    *param_3 = cVar1;
    param_3[1] = cVar3;
    iVar2 = iVar2 + 2;
    break;
  case 0xc:
  case 0xd:
    if ((*param_1 == 0) || (cVar4 != (char)param_1[1])) {
      *(char *)(param_1 + 1) = cVar4;
      *param_3 = cVar4;
      param_3 = param_3 + 1;
      iVar2 = 1;
    }
    iVar2 = iVar2 + 1;
    *param_3 = cVar1;
    break;
  case 0xf:
    if (cVar4 == -2) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    *param_3 = cVar4;
    iVar2 = 1;
  }
  *param_4 = iVar2;
  return;
}


END_FUNCTION
FUNCTION 00369834 FUN_00369834 success=true

void FUN_00369834(undefined4 *param_1)

{
  *param_1 = 1;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


END_FUNCTION
FUNCTION 00369846 FUN_00369846 success=true

void FUN_00369846(int param_1,int param_2)

{
  (*(code *)(&PTR_LAB_0043dc30)[*(int *)(param_1 + 4) * 0xb + (uint)(byte)(&DAT_0043db30)[param_2]])
            ();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00369880 FUN_00369880 success=true

void FUN_00369880(char *param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  *(undefined4 *)(param_1 + 8) = param_2;
  *param_1 = param_3 << 4;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  return;
}


END_FUNCTION
