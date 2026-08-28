FUNCTION 00351598 FUN_00351598 success=true

void FUN_00351598(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = FUN_0035649c(4);
  iVar3 = FUN_0035649c(4);
  if (iVar2 == 0 && iVar3 == 0) {
    iVar5 = FUN_0035649c(100);
    iVar2 = 1;
    iVar3 = 0;
    if (0x31 < iVar5) {
      iVar2 = 0;
      iVar3 = 1;
    }
  }
  iVar5 = 0x400;
  iVar2 = (int)(short)(&DAT_00439bd0)[iVar2];
  iVar3 = (int)(short)(&DAT_00439bd0)[iVar3];
  piVar6 = (int *)(param_1 + 0x94);
  do {
    if (*piVar6 != 0) {
      (**(code **)(*(int *)(*piVar6 + 0x74) + 0xc))
                (*piVar6 + (int)*(short *)(*(int *)(*piVar6 + 0x74) + 8),3);
      *piVar6 = 0;
    }
    iVar5 = iVar5 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar5 != 0);
  sVar1 = FUN_ffa038f0(0x80,iVar2);
  *(int *)(param_1 + 0x8c) = (int)sVar1;
  sVar1 = FUN_ffa038f0(0x40,iVar3);
  *(int *)(param_1 + 0x80) = iVar2;
  *(int *)(param_1 + 0x90) = (int)sVar1;
  *(undefined4 *)(param_1 + 0x1094) = 0;
  *(int *)(param_1 + 0x84) = iVar3;
  *(int *)(param_1 + 0x88) = iVar2 * iVar3;
  uVar4 = FUN_0035649c(5);
  *(undefined4 *)(param_1 + 0x1098) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00351656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
