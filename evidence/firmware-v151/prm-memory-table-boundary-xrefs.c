TARGET 00436140
TARGET 0043614c
XREF 0031d000 PARAM FUN_0031cec8
FUNCTION 0031cec8 FUN_0031cec8 success=true

void FUN_0031cec8(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  int *piVar9;
  code *UNRECOVERED_JUMPTABLE;
  int iVar10;
  
  if (DAT_0041910c != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar4 = 0;
  puVar7 = &DAT_00435e2c;
  DAT_0041910c = 1;
  uVar2 = (DAT_00435e1c & 0x700) >> 8;
  piVar9 = &DAT_00435de4 + (DAT_00435e1c & 3);
  iVar1 = (&DAT_00435df4)[(DAT_00435e0c & 0x700) >> 8] * (&DAT_00435de4)[DAT_00435e0c & 3] *
          (&DAT_00435dcc)[(DAT_00435e0c & 0x70000) >> 0x10];
  iVar10 = 0x32;
  uVar6 = (DAT_00435e1c & 0x70000) >> 0x10;
  do {
    iVar4 = iVar4 + iVar1;
    iVar1 = *piVar9;
    uVar5 = *puVar7;
    puVar7 = puVar7 + 4;
    piVar8 = &DAT_00435df4 + uVar2;
    uVar3 = (uVar5 & 0x70000) >> 0x10;
    uVar2 = (uVar5 & 0x700) >> 8;
    piVar9 = &DAT_00435de4 + (uVar5 & 3);
    iVar1 = (&DAT_00435dcc)[uVar6] * *piVar8 * iVar1;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    uVar6 = uVar3;
  } while (iVar10 != 0);
  uVar6 = iVar4 + iVar1 + (&DAT_00435dcc)[uVar3] * (&DAT_00435df4)[uVar2] * *piVar9;
  DAT_00419110 = uVar6;
  if (0x10000 < uVar6) {
    FUN_0032aad8(s_CPrmMemory_Memory_Over_0043614c);
  }
  FUN_00325a38(uVar6);
  DAT_00419114 = uVar6;
  DAT_00419118 = FUN_00325a38();
  FUN_0031c6c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0031cffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
TARGET 00436150
