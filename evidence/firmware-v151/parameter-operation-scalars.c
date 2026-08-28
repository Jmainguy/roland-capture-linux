SCALAR 0x8 AT 00300caa INSTRUCTION LSHIFT R1 >>= 0x8
FUNCTION 00300c98 FUN_00300c98 success=true

void FUN_00300c98(void)

{
  FUN_0034db84(&DAT_0043e428,0xffffff);
  FUN_0034db84(&DAT_0043e429,0x8b);
  FUN_00325c3c(&DAT_0043e42c,4,1,&LAB_0030021c);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00300ddc INSTRUCTION LOAD R6 = 0x8
FUNCTION 00300dcc FUN_00300dcc success=true

void FUN_00300dcc(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  short *psVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  ppuVar4 = &PTR_DAT_0041c2c0;
  iVar2 = 5;
  psVar5 = &DAT_00408d20;
  do {
    iVar1 = (int)*psVar5;
    puVar3 = (undefined *)0x0;
    if ((-1 < iVar1) && (iVar1 < 8)) {
      puVar3 = ppuVar4[iVar1];
    }
    iVar2 = iVar2 + -1;
    (**(code **)(*(int *)(puVar3 + 0x10) + 0x14))
              (puVar3 + *(short *)(*(int *)(puVar3 + 0x10) + 0x10));
    psVar5 = psVar5 + 2;
  } while (iVar2 != 0);
  DAT_00408d5c = 1;
                    /* WARNING: Could not recover jumptable at 0x00300e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00300fcc INSTRUCTION LOAD R1 = 0x8
FUNCTION 00300fbe FUN_00300fbe success=true

undefined4 FUN_00300fbe(undefined4 param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  iVar1 = (int)*param_2;
  if ((-1 < iVar1) && (iVar1 < 8)) {
    puVar3 = (&PTR_DAT_0041c2c0)[iVar1];
  }
  if (puVar3 != (undefined *)0x0) {
    uVar2 = (**(code **)(*(int *)(puVar3 + 0x10) + 0x6c))
                      (puVar3 + *(short *)(*(int *)(puVar3 + 0x10) + 0x68),(int)param_2[1],
                       (int)param_2[2]);
                    /* WARNING: Treating indirect jump as return */
    return uVar2;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 00301130 INSTRUCTION LOAD R1 = 0x8
FUNCTION 0030111e FUN_0030111e success=true

void FUN_0030111e(undefined4 param_1,short *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  iVar1 = (int)*param_2;
  if ((-1 < iVar1) && (iVar1 < 8)) {
    puVar2 = (&PTR_DAT_0041c2c0)[iVar1];
  }
  if (puVar2 != (undefined *)0x0) {
    (**(code **)(*(int *)(puVar2 + 0x10) + 0x84))
              (puVar2 + *(short *)(*(int *)(puVar2 + 0x10) + 0x80),(int)param_2[1],param_3,param_4,
               (int)param_2[2]);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  *param_3 = 0;
  *param_4 = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003011f8 INSTRUCTION LOAD R2 = 0x8
FUNCTION 003011ea FUN_003011ea success=true

void FUN_003011ea(undefined4 param_1,undefined4 param_2,short *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  iVar1 = (int)*param_3;
  if ((-1 < iVar1) && (iVar1 < 8)) {
    puVar2 = (&PTR_DAT_0041c2c0)[iVar1];
  }
  if (puVar2 != (undefined *)0x0) {
    (**(code **)(*(int *)(puVar2 + 0x10) + 0x8c))
              (puVar2 + *(short *)(*(int *)(puVar2 + 0x10) + 0x88),param_2,(int)param_3[1],
               (int)param_3[2]);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_00324010(param_2,s_Undefined_0041c2ac);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0030125c INSTRUCTION LOAD R2 = 0x8
FUNCTION 0030124e FUN_0030124e success=true

void FUN_0030124e(undefined4 param_1,undefined4 param_2,short *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  iVar1 = (int)*param_3;
  if ((-1 < iVar1) && (iVar1 < 8)) {
    puVar2 = (&PTR_DAT_0041c2c0)[iVar1];
  }
  if (puVar2 != (undefined *)0x0) {
    (**(code **)(*(int *)(puVar2 + 0x10) + 0x94))
              (puVar2 + *(short *)(*(int *)(puVar2 + 0x10) + 0x90),param_2,(int)param_3[1],
               (int)param_3[2]);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_00324010(param_2,s_Undefined_0041c2ac);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003012c2 INSTRUCTION LOAD R3 = 0x8
FUNCTION 003012b2 FUN_003012b2 success=true

void FUN_003012b2(undefined4 param_1,undefined4 param_2,short *param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  iVar1 = (int)*param_3;
  if ((-1 < iVar1) && (iVar1 < 8)) {
    puVar2 = (&PTR_DAT_0041c2c0)[iVar1];
  }
  if (puVar2 != (undefined *)0x0) {
    (**(code **)(*(int *)(puVar2 + 0x10) + 0xa4))
              (puVar2 + *(short *)(*(int *)(puVar2 + 0x10) + 0xa0),param_2,(int)param_3[1],param_4,
               (int)param_3[2]);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_00324010(param_2,&DAT_0041c2b8);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0030132a INSTRUCTION LOAD R1 = 0x8
FUNCTION 0030131c FUN_0030131c success=true

undefined4 FUN_0030131c(undefined4 param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  iVar1 = (int)*param_2;
  if ((-1 < iVar1) && (iVar1 < 8)) {
    puVar3 = (&PTR_DAT_0041c2c0)[iVar1];
  }
  if (puVar3 != (undefined *)0x0) {
    uVar2 = (**(code **)(*(int *)(puVar3 + 0x10) + 0xbc))
                      (puVar3 + *(short *)(*(int *)(puVar3 + 0x10) + 0xb8),(int)param_2[1],
                       (int)param_2[2]);
                    /* WARNING: Treating indirect jump as return */
    return uVar2;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 00301384 INSTRUCTION LOAD R1 = 0x8
FUNCTION 00301376 FUN_00301376 success=true

undefined4 FUN_00301376(undefined4 param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  iVar1 = (int)*param_2;
  if ((-1 < iVar1) && (iVar1 < 8)) {
    puVar3 = (&PTR_DAT_0041c2c0)[iVar1];
  }
  if (puVar3 != (undefined *)0x0) {
    uVar2 = (**(code **)(*(int *)(puVar3 + 0x10) + 0xec))
                      (puVar3 + *(short *)(*(int *)(puVar3 + 0x10) + 0xe8),(int)param_2[1]);
                    /* WARNING: Treating indirect jump as return */
    return uVar2;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0xffffffff;
}


END_FUNCTION
SCALAR 0x8 AT 00301412 INSTRUCTION LOAD R1 = 0x8
FUNCTION 003013c8 FUN_003013c8 success=true

void FUN_003013c8(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  int iVar5;
  
  iVar5 = 0x20;
  ppuVar4 = &PTR_DAT_0041c2c0;
  uVar2 = 1;
  iVar1 = 0;
  do {
    if (param_2 == 0) {
      return;
    }
    if ((uVar2 & param_2) != 0) {
      param_2 = param_2 & (uVar2 ^ 0xffffffff);
      puVar3 = (undefined *)0x0;
      if ((-1 < iVar1) && (iVar1 < 8)) {
        puVar3 = *ppuVar4;
      }
      if (puVar3 != (undefined *)0x0) {
        *(undefined4 *)(puVar3 + 0xc) = 1;
        (**(code **)(*(int *)(puVar3 + 0x10) + 100))
                  (puVar3 + *(short *)(*(int *)(puVar3 + 0x10) + 0x60));
      }
    }
    iVar5 = iVar5 + -1;
    uVar2 = uVar2 << 1;
    ppuVar4 = ppuVar4 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar5 != 0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003017c6 INSTRUCTION ADD R2 += 0x8
FUNCTION 00301798 FUN_00301798 success=true

undefined4 FUN_00301798(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int in_stack_00000000;
  int in_stack_00000004;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x6c))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x68),param_2,param_4);
  param_3 = param_3 + iVar1;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x84))
            (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x80),param_2,&stack0x00000004,
             &stack0x00000000,param_2);
  if ((param_3 <= in_stack_00000000) && (in_stack_00000000 = param_3, param_3 < in_stack_00000004))
  {
    in_stack_00000000 = in_stack_00000004;
  }
  if (iVar1 == in_stack_00000000) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  (**(code **)(*(int *)(param_1 + 0x10) + 0x7c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x78),param_2,in_stack_00000000,param_4
            );
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
SCALAR 0x8 AT 0030191e INSTRUCTION ADD R2 += 0x8
FUNCTION 00301908 FUN_00301908 success=true

undefined4 FUN_00301908(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int in_stack_00000000;
  int in_stack_00000004;
  
  (**(code **)(*(int *)(param_1 + 0x10) + 0x84))
            (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x80),param_2,&stack0x00000004,
             &stack0x00000000,param_4,param_3);
  if ((in_stack_00000004 <= param_3) && (param_3 <= in_stack_00000000)) {
                    /* WARNING: Treating indirect jump as return */
    return 1;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 00301d52 INSTRUCTION STORE W [P1 + 0x8] = R0
SCALAR 0x8 AT 00301dda INSTRUCTION LOAD R1 = [P1 + 0x8]
FUNCTION 00301db4 FUN_00301db4 success=true

void FUN_00301db4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_003535dc();
  while ((iVar1 != 0 && (iVar2 = FUN_003535ec(param_1,iVar1), iVar2 != 0))) {
    if (*(int *)(iVar2 + 8) != 0) {
      (**(code **)(*(int *)(iVar2 + 0xc) + 0x14))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 0x10));
    }
    iVar1 = FUN_003535cc(param_1,iVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00301e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00301e2a INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 00302570 INSTRUCTION STORE [P5 + 0x8] = R7
FUNCTION 00302480 FUN_00302480 success=true

void FUN_00302480(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00325a76(0xa0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0034f31c(iVar1,DAT_00445300);
  }
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  FUN_0035b786(param_1 + 0x1c,0,0,0x7f,0x3f);
  iVar1 = FUN_00325a76(0xa0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0034f2d4(iVar1,param_1 + 0x1c,0);
  }
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  FUN_0034e03a(uVar2,param_1 + 0xc);
  FUN_0033e4c4(param_1 + 0x2c,*(undefined4 *)(param_1 + 0x28));
  puVar3 = &DAT_0043ee28;
  (**(code **)(*(int *)(param_1 + 0x880) + 0x1c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x18));
  (**(code **)(*(int *)(param_1 + 0x880) + 100))
            (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x60));
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x14;
  FUN_0035890e(0x32);
  *puVar3 = 0;
  puVar3[1] = 0;
  DAT_0043ed98 = 1;
  puVar3[2] = 0;
  DAT_0043ed9c = 1;
  puVar3[3] = 0;
  DAT_0043eda0 = 1;
  puVar3[4] = 0;
  DAT_0043eda4 = 1;
  puVar3[5] = 0;
  DAT_0043eda8 = 1;
  puVar3[6] = 0;
  DAT_0043edac = 1;
  puVar3[7] = 0;
  DAT_0043edb8 = 0;
  DAT_0043edb0 = 1;
  puVar3[8] = 0;
  *(undefined4 *)(param_1 + 8) = 1;
  DAT_0043edbc = 0;
  DAT_0043edb4 = 1;
  puVar3[9] = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003025e2 INSTRUCTION STORE W [FP + 0x8] = R1
FUNCTION 003025a4 FUN_003025a4 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_003025a4(int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  code *UNRECOVERED_JUMPTABLE;
  int iVar16;
  int *piVar15;
  
  if (DAT_00408d5c != 0) {
    DAT_00408d5c = 0;
  }
  piVar12 = &DAT_0043ed10;
  if (0 < DAT_ff801650) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  if (0 < DAT_ff801658) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  if (0 < DAT_ff801660) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  puVar9 = &DAT_0043ed88;
  if (0 < DAT_ff801648) {
    iVar10 = 0;
    iVar3 = 0;
    do {
      iVar16 = -1;
      puVar13 = puVar9;
      do {
        iVar3 = iVar3 + 1;
        puVar6 = (undefined2 *)(DAT_ff80164c + iVar10);
        iVar10 = iVar10 + 2;
        uVar5 = *puVar6;
        *puVar6 = 0x7fff;
        puVar9 = (undefined4 *)((int)puVar13 + 2);
        *(undefined2 *)puVar13 = uVar5;
        if (DAT_ff801648 <= iVar3) goto LAB_003026e0;
      } while ((iVar16 != 0) && (iVar16 = iVar16 + -1, puVar13 = puVar9, iVar16 != 0));
    } while( true );
  }
LAB_003026e0:
  iVar3 = FUN_ffa00738();
  if (iVar3 != 0) {
    *piVar12 = 0;
    DAT_0043ed38 = 0;
    DAT_0043ed60 = 0;
    piVar12[1] = 0;
    DAT_0043ed3c = 0;
    DAT_0043ed64 = 0;
    piVar12[2] = 0;
    DAT_0043ed40 = 0;
    DAT_0043ed68 = 0;
    piVar12[3] = 0;
    DAT_0043ed44 = 0;
    DAT_0043ed6c = 0;
    piVar12[4] = 0;
    DAT_0043ed48 = 0;
    DAT_0043ed70 = 0;
    piVar12[5] = 0;
    DAT_0043ed4c = 0;
    DAT_0043ed74 = 0;
    piVar12[6] = 0;
    DAT_0043ed50 = 0;
    DAT_0043ed78 = 0;
    piVar12[7] = 0;
    DAT_0043ed54 = 0;
    DAT_0043ed7c = 0;
    piVar12[8] = 0;
    DAT_0043ed58 = 0;
    DAT_0043ed80 = 0;
    piVar12[9] = 0;
    DAT_0043ed5c = 0;
    DAT_0043ed84 = 0;
    DAT_0043ed88 = 0x7fff7fff;
    DAT_0043ed8c = 0x7fff7fff;
    DAT_0043ed90 = 0x7fff7fff;
    DAT_0043ed94 = 0x7fff7fff;
  }
  FUN_0032ac10();
  iVar3 = 8;
  puVar7 = &DAT_0043ede8;
  piVar8 = piVar12;
  do {
    if (*puVar7 < (uint)(*piVar8 >> 0xd)) {
      *puVar7 = *piVar8 >> 0xd;
    }
    if (0x3ffe < *puVar7) {
      *puVar7 = 0x3fff;
    }
  } while ((iVar3 != 0) &&
          (iVar3 = iVar3 + -1, puVar7 = puVar7 + 1, piVar8 = piVar8 + 1, iVar3 != 0));
  FUN_0032ac64();
  iVar3 = 10;
  piVar8 = &DAT_0043ee28;
  piVar11 = piVar12;
  do {
    iVar10 = *piVar8;
    if (iVar10 != 0) {
      *piVar11 = 0;
      *piVar8 = iVar10 + -1;
    }
    piVar11 = piVar11 + 1;
  } while ((iVar3 != 0) && (iVar3 = iVar3 + -1, piVar8 = piVar8 + 1, iVar3 != 0));
  puVar9 = (undefined4 *)0x43edc0;
  bVar2 = false;
  iVar3 = 8;
  piVar8 = piVar12;
  piVar11 = &DAT_0043ed98;
  do {
    if ((*piVar11 != 0) && (0x6666668 < *piVar8)) {
      *puVar9 = 1;
      bVar2 = true;
    }
    puVar9 = puVar9 + 1;
    piVar8 = piVar8 + 1;
  } while ((iVar3 != 0) && (iVar3 = iVar3 + -1, piVar11 = piVar11 + 1, iVar3 != 0));
  if (bVar2) {
    FUN_0030eaf4();
  }
  piVar8 = &DAT_0043ee08;
  if ((DAT_00408d4c == 0) || (DAT_00408d68 != 0)) {
    if (DAT_00408d4c == 0) {
      DAT_00408d68 = 0;
    }
    else {
      iVar3 = 7;
      piVar14 = piVar8;
      piVar11 = piVar12;
      do {
        piVar8 = piVar8 + 1;
        piVar11 = piVar11 + 1;
        iVar10 = *piVar11;
        piVar15 = piVar14 + 1;
        *piVar14 = iVar10;
        if (iVar10 < *piVar8) {
          iVar10 = *piVar8;
        }
      } while ((iVar3 != 0) && (iVar3 = iVar3 + -1, piVar14 = piVar15, iVar3 != 0));
      *piVar15 = iVar10;
    }
  }
  else {
    DAT_0043ee08 = 0;
    DAT_0043ee0c = 0;
    DAT_0043ee10 = 0;
    DAT_0043ee14 = 0;
    DAT_0043ee18 = 0;
    DAT_0043ee1c = 0;
    DAT_0043ee20 = 0;
    DAT_00408d68 = 1;
    DAT_0043ee24 = 0;
  }
  uVar1 = DAT_00408d6c + 0x32;
  if (9999 < DAT_00408d6c + 0x32) {
    DAT_00408d6c = DAT_00408d6c - 0x3b6;
    iVar3 = FUN_00302e6c();
    if (iVar3 == 0) {
      iVar10 = 10;
      iVar3 = 0;
      do {
        iVar16 = iVar3 + 1;
        if ((DAT_0043ed08 < *piVar12) || (iVar3 = iVar16, iVar10 == 0)) break;
        iVar10 = iVar10 + -1;
        piVar12 = piVar12 + 1;
      } while (iVar10 != 0);
      uVar1 = DAT_00408d6c;
      if (iVar3 != 10) {
        uVar4 = FUN_00366aa4(s_power_0041c348,3);
        FUN_003666d8(uVar4,6);
        FUN_003667ec(uVar4);
        uVar1 = DAT_00408d6c;
      }
    }
    else {
      uVar4 = FUN_00366aa4(s_power_0041c348,3);
      FUN_003666d8(uVar4,6);
      FUN_003667ec(uVar4);
      uVar1 = DAT_00408d6c;
    }
  }
  DAT_00408d6c = uVar1;
  bVar2 = false;
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (iVar3 = (int)(short)(*(short *)(param_1 + 0x14) + -1), *(int *)(param_1 + 0x14) = iVar3,
     iVar3 < 1)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    bVar2 = true;
  }
  if (bVar2) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar3 = FUN_003585b8();
    if (iVar3 == 3) {
      FUN_00358678(0x18);
    }
    else {
      FUN_00358678(3);
    }
  }
  FUN_0030ed14();
  (**(code **)(*(int *)(param_1 + 0x880) + 0x4c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x48));
                    /* WARNING: Could not recover jumptable at 0x003028be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00302616 INSTRUCTION STORE W [FP + 0x8] = R1
SCALAR 0x8 AT 0030265e INSTRUCTION STORE W [FP + 0x8] = R1
SCALAR 0x8 AT 0030274a INSTRUCTION LOAD P4 = 0x8
SCALAR 0x8 AT 00302ac0 INSTRUCTION STORE [P4 + 0x8] = R7
FUNCTION 00302a34 FUN_00302a34 success=true

int FUN_00302a34(int param_1,undefined2 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  switch(*param_2) {
  case 0:
    (**(code **)(*(int *)(param_1 + 0x880) + 0x14))
              (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x10));
    break;
  case 1:
    FUN_00302480();
    break;
  case 2:
    (**(code **)(*(int *)(param_1 + 0x880) + 0x24))
              (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x20));
    FUN_0033e720(param_1 + 0x2c);
    FUN_0034e17e(*(undefined4 *)(param_1 + 0x28),3);
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_0034e17e(*(undefined4 *)(param_1 + 0x24),3);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    break;
  case 3:
    FUN_0034df50(*(undefined4 *)(param_1 + 0x28));
    (**(code **)(*(int *)(param_1 + 0x880) + 0x3c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x38));
    FUN_0034df02(*(undefined4 *)(param_1 + 0x28));
    break;
  case 4:
    FUN_0034df50(*(undefined4 *)(param_1 + 0x28));
    (**(code **)(*(int *)(param_1 + 0x880) + 0x44))
              (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x40));
    FUN_0034df02(*(undefined4 *)(param_1 + 0x28));
    FUN_0033e9f0(param_1 + 0x2c);
    break;
  case 5:
    sVar1 = param_2[1];
    uVar2 = FUN_00366aa4(s_power_0041c348,3);
    FUN_003666d8(uVar2,6);
    FUN_003667ec(uVar2);
    iVar4 = (**(code **)(*(int *)(param_1 + 0x880) + 0x2c))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x28),(int)sVar1);
    if (iVar4 == 0) {
      iVar4 = 0;
      DAT_0043ed0c = sVar1;
      switch((int)sVar1) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
        FUN_00358678(2);
        iVar4 = 1;
        break;
      case 4:
        *(int *)(param_1 + 0x14) = (int)*(short *)(param_1 + 0x16);
        iVar4 = 1;
        *(undefined4 *)(param_1 + 0x18) = 1;
        break;
      case 7:
        FUN_00358678(7);
        iVar4 = 1;
      }
    }
                    /* WARNING: Treating indirect jump as return */
    return iVar4;
  case 6:
    iVar4 = FUN_0030294c(param_1,(int)(short)param_2[1]);
                    /* WARNING: Treating indirect jump as return */
    return iVar4;
  case 7:
    iVar3 = (int)(short)param_2[1];
    sVar1 = param_2[2];
    uVar2 = FUN_00366aa4(s_power_0041c348,3);
    FUN_003666d8(uVar2,6);
    FUN_003667ec(uVar2);
    iVar4 = (**(code **)(*(int *)(param_1 + 0x880) + 0x6c))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x68),iVar3,(int)sVar1);
    if (iVar4 == 0) {
      if (iVar3 == 0) {
        FUN_00358678(2);
        iVar4 = 1;
      }
      else {
        iVar4 = 0;
        if (iVar3 == 2) {
          FUN_00358678(9);
          iVar4 = 1;
        }
      }
    }
                    /* WARNING: Treating indirect jump as return */
    return iVar4;
  case 8:
    FUN_003025a4();
    break;
  case 9:
    iVar4 = (**(code **)(*(int *)(param_1 + 0x880) + 0x54))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x50),(int)(short)param_2[1]
                       ,(int)(short)param_2[2]);
    if (iVar4 == 0) {
      DAT_0043ed0c = -1;
      iVar4 = 1;
    }
    break;
  case 0xb:
    FUN_0033e954(param_1 + 0x2c,(int)(short)param_2[1],(int)(short)param_2[2]);
    (**(code **)(*(int *)(param_1 + 0x880) + 0x5c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x58),(int)(short)param_2[1],
               (int)(short)param_2[2],(int)(short)param_2[3]);
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    break;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
    break;
  case 0x21:
    if ((short)param_2[1] < 10000) {
      (**(code **)(*(int *)(param_1 + 0x880) + 0x74))
                (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x70));
    }
    break;
  case 0x22:
    break;
  case 0x24:
    (**(code **)(*(int *)(param_1 + 0x880) + 0x7c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x78),*(undefined4 *)(param_2 + 2));
    break;
  case 0x25:
    (**(code **)(*(int *)(param_1 + 0x880) + 0x84))
              (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x80),*(undefined4 *)(param_2 + 2));
    break;
  case 0x26:
    iVar3 = param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x88);
    (**(code **)(*(int *)(param_1 + 0x880) + 0x8c))
              (iVar3,(int)(short)param_2[1],(int)*(char *)(param_2 + 2),iVar3,
               (int)*(char *)(param_2 + 3));
  }
                    /* WARNING: Treating indirect jump as return */
  return iVar4;
}


END_FUNCTION
SCALAR 0x8 AT 00302b50 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00302d68 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00302d82 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00302eb4 INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00303046 INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 003035a2 INSTRUCTION LOAD R0 = [P5 + 0x8]
FUNCTION 0030353c FUN_0030353c success=true

/* WARNING: Control flow encountered unimplemented instructions */

int FUN_0030353c(int *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  switch(param_1[6]) {
  case 0:
    break;
  case 1:
    sVar2 = *(short *)((int)param_1 + 0x16);
    iVar6 = 0;
    if (sVar2 <= param_2) {
      sVar1 = (short)param_1[5];
      if (param_2 <= sVar1) {
        if (param_2 == sVar1) {
          iVar6 = param_1[1];
        }
        else {
          iVar6 = param_1[3];
          if (sVar2 < param_2) {
            uVar5 = FUN_ffa031f8(param_1[1],iVar6);
            uVar3 = FUN_ffa03270((int)(short)(sVar1 - sVar2));
            uVar5 = FUN_ffa02e14(uVar5,uVar3);
            uVar3 = FUN_ffa03270(param_2);
            uVar5 = FUN_ffa03068(uVar3,uVar5);
            iVar6 = FUN_ffa02c10(uVar5,iVar6);
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00303698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(iVar6);
    return iVar6;
  case 2:
    sVar2 = *(short *)((int)param_1 + 0x16);
    iVar6 = 0;
    if (sVar2 <= param_2) {
      sVar1 = (short)param_1[5];
      if (param_2 <= sVar1) {
        if (param_2 == sVar1) {
          iVar6 = param_1[1];
        }
        else if (sVar2 < param_2) {
          uVar5 = FUN_ffa03270((int)(short)((sVar1 - sVar2) + 1));
          uVar5 = FUN_ffa03e88(0x3fc00000,uVar5);
          uVar3 = FUN_ffa031f8(param_1[1],param_1[3]);
          sVar2 = *(short *)((int)param_1 + 0x16);
          uVar5 = FUN_ffa02e14(uVar3,uVar5);
          uVar3 = FUN_ffa03270(param_2 - sVar2);
          uVar3 = FUN_ffa03e88(0x3fc00000,uVar3);
          uVar4 = FUN_ffa03270((int)*(short *)((int)param_1 + 0x16));
          uVar5 = FUN_ffa03068(uVar3,uVar5);
          iVar6 = FUN_ffa02c10(uVar5,uVar4);
        }
        else {
          iVar6 = param_1[3];
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0030371c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(iVar6);
    return iVar6;
  case 3:
    iVar6 = 0;
    if (((*(short *)((int)param_1 + 0x16) <= param_2) &&
        (iVar7 = (int)(short)param_1[5], param_2 <= iVar7)) &&
       (iVar6 = param_1[1], param_2 != iVar7)) {
      iVar8 = param_1[4];
      uVar5 = FUN_ffa03270(iVar7 - param_2);
      uVar5 = FUN_ffa03068(uVar5,iVar8);
      iVar6 = FUN_ffa031f8(iVar6,uVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00303804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(iVar6);
    return iVar6;
  case 4:
    iVar6 = 0;
    if ((*(short *)((int)param_1 + 0x16) <= param_2) && (param_2 <= (short)param_1[5])) {
      iVar6 = param_1[2];
      iVar7 = (int)(short)((int)(short)param_1[5] + (int)*(short *)((int)param_1 + 0x16) + 1 >> 1);
      if (iVar7 < param_2) {
        iVar8 = param_1[4];
        uVar5 = FUN_ffa03270(param_2 - iVar7);
        uVar5 = FUN_ffa03068(uVar5,iVar8);
        iVar6 = FUN_ffa02c10(uVar5,iVar6);
      }
      else if (param_2 != iVar7) {
        iVar8 = param_1[4];
        uVar5 = FUN_ffa03270(iVar7 - param_2);
        uVar5 = FUN_ffa03068(uVar5,iVar8);
        iVar6 = FUN_ffa031f8(iVar6,uVar5);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0030385a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(iVar6);
    return iVar6;
  case 5:
    iVar7 = (int)*(short *)((int)param_1 + 0x16);
    iVar6 = 0;
    if (((iVar7 <= param_2) && (param_2 <= (short)param_1[5])) &&
       (iVar6 = param_1[3], param_2 != iVar7)) {
      iVar8 = param_1[4];
      uVar5 = FUN_ffa03270(param_2 - iVar7);
      uVar5 = FUN_ffa03068(uVar5,iVar8);
      iVar6 = FUN_ffa02c10(uVar5,iVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x003038da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(iVar6);
    return iVar6;
  case 6:
                    /* WARNING: Treating indirect jump as return */
    return param_1[1];
  case 7:
    iVar6 = 0;
    if ((*(short *)((int)param_1 + 0x16) <= param_2) && (param_2 <= (short)param_1[5])) {
      iVar6 = *(int *)(*param_1 + (param_2 - *(short *)((int)param_1 + 0x16)) * 4);
    }
                    /* WARNING: Treating indirect jump as return */
    return iVar6;
  case 8:
    uVar5 = 0x41200000;
    if (param_2 < 0x7f) {
      if (param_2 < 0x42) {
        uVar5 = 0x3f800000;
        if (param_2 != 0x41) {
          uVar5 = 0;
          if ((param_2 != 0x40) && (uVar5 = 0xbf800000, param_2 != 0x3f)) {
            if (param_2 < 0x10) {
              if (param_2 < 2) {
                uVar5 = 0xc2400000;
                if ((param_2 != 1) && (uVar5 = 0, param_2 == 0)) {
                  uVar5 = 0xc2c80000;
                }
              }
              else {
                uVar5 = FUN_ffa03270(param_2 + -1);
                uVar5 = FUN_ffa03068(uVar5,0x3fcccccd);
                uVar5 = FUN_ffa031f8(uVar5,0x42400000);
              }
            }
            else {
              FUN_ffa03270(param_2);
              uVar5 = FUN_ffa03cb0();
              uVar5 = FUN_ffa03068(uVar5,0x42180000);
              uVar5 = FUN_ffa031f8(uVar5,0x428c0000);
            }
          }
        }
      }
      else {
        FUN_ffa03270(param_2);
        uVar5 = FUN_ffa03cb0();
        uVar5 = FUN_ffa03068(uVar5,0x41f770a4);
        uVar5 = FUN_ffa031f8(uVar5,0x425c51ec);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00303994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar5);
    return iVar6;
  case 9:
    uVar5 = 0x41200000;
    if (param_2 < 0x7f) {
      if (param_2 < 0x41) {
        uVar5 = 0xc0400000;
        if (param_2 != 0x40) {
          if (param_2 < 2) {
            uVar5 = 0xc2700000;
            if (param_2 != 1) {
              uVar5 = 0;
              if (param_2 == 0) {
                uVar5 = 0xc2c80000;
              }
            }
          }
          else {
            FUN_ffa03270(param_2);
            uVar5 = FUN_ffa03cb0();
            uVar5 = FUN_ffa03068(uVar5,0x41fd5c29);
            uVar5 = FUN_ffa031f8(uVar5,0x42700000);
          }
        }
      }
      else {
        FUN_ffa03270(param_2);
        uVar5 = FUN_ffa03cb0();
        uVar5 = FUN_ffa03068(uVar5,0x422d51ec);
        uVar5 = FUN_ffa031f8(uVar5,0x42a33333);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00303a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar5);
    return iVar6;
  case 10:
    uVar5 = 0;
    if (param_2 < 0x7f) {
      if (param_2 < 0x41) {
        uVar5 = 0xc0800000;
        if (param_2 != 0x40) {
          if (param_2 < 1) {
            uVar5 = 0;
            if (param_2 == 0) {
              uVar5 = 0xc2c80000;
            }
          }
          else {
            FUN_ffa03270(param_2);
            uVar5 = FUN_ffa03cb0();
            uVar5 = FUN_ffa03068(uVar5,0x41fd5c29);
            uVar5 = FUN_ffa031f8(uVar5,0x42740000);
          }
        }
      }
      else {
        FUN_ffa03270(param_2);
        uVar5 = FUN_ffa03cb0();
        uVar5 = FUN_ffa03068(uVar5,0x4156c083);
        uVar5 = FUN_ffa031f8(uVar5,0x41e1eb85);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00303b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar5);
    return iVar6;
  case 0xb:
    iVar6 = (int)(short)(0x7f - (short)param_2);
    uVar5 = 0;
    if (iVar6 < 0x7f) {
      if (iVar6 < 0x41) {
        uVar5 = 0xc0800000;
        if (iVar6 != 0x40) {
          if (iVar6 < 1) {
            uVar5 = 0;
            if (iVar6 == 0) {
              uVar5 = 0xc2c80000;
            }
          }
          else {
            FUN_ffa03270(iVar6);
            uVar5 = FUN_ffa03cb0();
            uVar5 = FUN_ffa03068(uVar5,0x41fd5c29);
            uVar5 = FUN_ffa031f8(uVar5,0x42740000);
          }
        }
      }
      else {
        FUN_ffa03270(iVar6);
        uVar5 = FUN_ffa03cb0();
        uVar5 = FUN_ffa03068(uVar5,0x4156c083);
        uVar5 = FUN_ffa031f8(uVar5,0x41e1eb85);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00303be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar5);
    return iVar6;
  case 0xc:
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  case 0xd:
    uVar5 = FUN_ffa03270(-param_2);
    uVar5 = FUN_ffa02e14(uVar5,0x40000000);
    iVar6 = FUN_ffa031f8(uVar5,0x41800000);
                    /* WARNING: Treating indirect jump as return */
    return iVar6;
  case 0xe:
    uVar5 = 0x3f000000;
    if (param_2 != 0) {
      uVar5 = FUN_ffa03270(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00303dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar5);
    return iVar6;
  case 0xf:
    uVar5 = 0x41200000;
    if ((((param_2 != 0) && (uVar5 = 0x41400000, param_2 != 1)) &&
        (uVar5 = 0x41700000, param_2 != 2)) && (uVar5 = 0x41900000, param_2 != 3)) {
      if (param_2 < 0x15) {
        uVar5 = FUN_ffa03270(param_2);
        uVar5 = FUN_ffa03068(uVar5,0x40a00000);
      }
      else if (param_2 < 0x1f) {
        uVar5 = FUN_ffa03270(param_2 + -0x14);
        uVar5 = FUN_ffa03068(uVar5,0x41200000);
        uVar5 = FUN_ffa02c10(uVar5,0x42c80000);
      }
      else {
        uVar5 = FUN_ffa03270(param_2 + -0x1e);
        uVar5 = FUN_ffa03068(uVar5,0x41a00000);
        uVar5 = FUN_ffa02c10(uVar5,0x43480000);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00303e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar5);
    return iVar6;
  default:
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  iVar7 = (int)*(short *)((int)param_1 + 0x16);
  iVar6 = 0;
  if ((iVar7 <= param_2) && (iVar8 = (int)(short)param_1[5], param_2 <= iVar8)) {
    if (param_2 == iVar8) {
      iVar6 = param_1[1];
    }
    else {
      iVar6 = (int)(short)(iVar8 + iVar7 + 1 >> 1);
      if (iVar6 < param_2) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      if (param_2 == iVar6) {
        iVar6 = param_1[2];
      }
      else {
        iVar6 = param_1[3];
        if (iVar7 < param_2) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
      }
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return iVar6;
}


END_FUNCTION
SCALAR 0x8 AT 003035b2 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00303614 INSTRUCTION LOAD R6 = [P5 + 0x8]
SCALAR 0x8 AT 00303818 INSTRUCTION _LOAD R6 = [P5 + 0x8]
SCALAR 0x8 AT 00304dba INSTRUCTION _STORE [FP + 0x8] = P2
SCALAR 0x8 AT 00304de2 INSTRUCTION LOAD P0 = [FP + 0x8]
SCALAR 0x8 AT 00304e08 INSTRUCTION LOAD P0 = [FP + 0x8]
SCALAR 0x8 AT 00304f0c INSTRUCTION LOAD R6 = 0x8
SCALAR 0x8 AT 00304f40 INSTRUCTION STORE W [P1 + 0x8] = R3
SCALAR 0x8 AT 00304f6c INSTRUCTION LOAD P3 = [FP + 0x8]
SCALAR 0x8 AT 00304fa6 INSTRUCTION STORE [P3 + 0x8] = R2
SCALAR 0x8 AT 00304fb0 INSTRUCTION _STORE [P3 + 0x8] = R0
SCALAR 0x8 AT 00304fba INSTRUCTION _STORE [P4 + 0x8] = R0
SCALAR 0x8 AT 00304fc4 INSTRUCTION _STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 00304fce INSTRUCTION _STORE [P2 + 0x8] = R0
SCALAR 0x8 AT 00304fda INSTRUCTION _STORE [P0 + 0x8] = R0
SCALAR 0x8 AT 00304fe4 INSTRUCTION _STORE [P3 + 0x8] = R0
SCALAR 0x8 AT 00305000 INSTRUCTION _STORE [P3 + 0x8] = R0
SCALAR 0x8 AT 00305006 INSTRUCTION STORE [P3 + 0x8] = R0
SCALAR 0x8 AT 00305008 INSTRUCTION LOAD P3 = 0x8
SCALAR 0x8 AT 00305036 INSTRUCTION STORE W [P1 + 0x8] = R3
SCALAR 0x8 AT 0030507a INSTRUCTION STORE [P1 + 0x8] = R0
SCALAR 0x8 AT 00305084 INSTRUCTION STORE [P1 + 0x8] = R0
SCALAR 0x8 AT 0030508c INSTRUCTION STORE [P1 + 0x8] = R0
SCALAR 0x8 AT 00305222 INSTRUCTION LOAD R0 = B [P1 + 0x8] (Z)
FUNCTION 003051b0 FUN_003051b0 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_003051b0(undefined4 param_1,undefined1 *param_2,undefined4 param_3,int param_4,int param_5)

{
  if (param_5 == -1) {
    if (param_4 != 0) {
      *param_2 = DAT_0041c9c0;
      param_2[1] = DAT_0041c9c1;
      param_2[2] = DAT_0041c9c2;
      param_2[3] = DAT_0041c9c3;
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    *param_2 = DAT_0041c9c4;
    param_2[1] = DAT_0041c9c5;
    param_2[2] = DAT_0041c9c6;
    param_2[3] = DAT_0041c9c7;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (param_5 == -2) {
    if (param_4 != 0) {
      *param_2 = DAT_0041c9c8;
      param_2[1] = DAT_0041c9c9;
      param_2[2] = DAT_0041c9ca;
      param_2[3] = DAT_0041c9cb;
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    *param_2 = DAT_0041c9cc;
    param_2[1] = DAT_0041c9cd;
    param_2[2] = DAT_0041c9ce;
    param_2[3] = DAT_0041c9cf;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (param_5 != 3) {
    if (param_5 == 4) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    *param_2 = DAT_0041c9ec;
    param_2[1] = DAT_0041c9ed;
    param_2[2] = DAT_0041c9ee;
    param_2[3] = DAT_0041c9ef;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if ((-1 < param_4) && (param_4 < 10)) {
    FUN_00324010(param_2,&DAT_0041c9d0);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if ((-10 < param_4) && (param_4 < 100)) {
    FUN_00324010(param_2,&DAT_0041c9d8);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if ((-100 < param_4) && (param_4 < 1000)) {
    FUN_00324010(param_2,&DAT_0041c9dc);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if ((-1 < param_4) && (param_4 < 10000)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  if ((-1000 < param_4) && (param_4 < 0)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  if ((-1 < param_4) && (param_4 < 100000)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  *param_2 = DAT_0041c9ec;
  param_2[1] = DAT_0041c9ed;
  param_2[2] = DAT_0041c9ee;
  param_2[3] = DAT_0041c9ef;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003056e6 INSTRUCTION LOAD R0 = [P5 + 0x8]
FUNCTION 00305680 FUN_00305680 success=true

/* WARNING: Control flow encountered unimplemented instructions */

int FUN_00305680(int *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  switch(param_1[6]) {
  case 0:
    break;
  case 1:
    sVar2 = *(short *)((int)param_1 + 0x16);
    iVar6 = 0;
    if (sVar2 <= param_2) {
      sVar1 = (short)param_1[5];
      if (param_2 <= sVar1) {
        if (param_2 == sVar1) {
          iVar6 = param_1[1];
        }
        else {
          iVar6 = param_1[3];
          if (sVar2 < param_2) {
            uVar5 = FUN_ffa031f8(param_1[1],iVar6);
            uVar3 = FUN_ffa03270((int)(short)(sVar1 - sVar2));
            uVar5 = FUN_ffa02e14(uVar5,uVar3);
            uVar3 = FUN_ffa03270(param_2);
            uVar5 = FUN_ffa03068(uVar3,uVar5);
            iVar6 = FUN_ffa02c10(uVar5,iVar6);
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x003057e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(iVar6);
    return iVar6;
  case 2:
    sVar2 = *(short *)((int)param_1 + 0x16);
    iVar6 = 0;
    if (sVar2 <= param_2) {
      sVar1 = (short)param_1[5];
      if (param_2 <= sVar1) {
        if (param_2 == sVar1) {
          iVar6 = param_1[1];
        }
        else if (sVar2 < param_2) {
          uVar5 = FUN_ffa03270((int)(short)((sVar1 - sVar2) + 1));
          uVar5 = FUN_ffa03e88(0x3fc00000,uVar5);
          uVar3 = FUN_ffa031f8(param_1[1],param_1[3]);
          sVar2 = *(short *)((int)param_1 + 0x16);
          uVar5 = FUN_ffa02e14(uVar3,uVar5);
          uVar3 = FUN_ffa03270(param_2 - sVar2);
          uVar3 = FUN_ffa03e88(0x3fc00000,uVar3);
          uVar4 = FUN_ffa03270((int)*(short *)((int)param_1 + 0x16));
          uVar5 = FUN_ffa03068(uVar3,uVar5);
          iVar6 = FUN_ffa02c10(uVar5,uVar4);
        }
        else {
          iVar6 = param_1[3];
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00305864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(iVar6);
    return iVar6;
  case 3:
    iVar6 = 0;
    if (((*(short *)((int)param_1 + 0x16) <= param_2) &&
        (iVar7 = (int)(short)param_1[5], param_2 <= iVar7)) &&
       (iVar6 = param_1[1], param_2 != iVar7)) {
      iVar8 = param_1[4];
      uVar5 = FUN_ffa03270(iVar7 - param_2);
      uVar5 = FUN_ffa03068(uVar5,iVar8);
      iVar6 = FUN_ffa031f8(iVar6,uVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x0030594c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(iVar6);
    return iVar6;
  case 4:
    iVar6 = 0;
    if ((*(short *)((int)param_1 + 0x16) <= param_2) && (param_2 <= (short)param_1[5])) {
      iVar6 = param_1[2];
      iVar7 = (int)(short)((int)(short)param_1[5] + (int)*(short *)((int)param_1 + 0x16) + 1 >> 1);
      if (iVar7 < param_2) {
        iVar8 = param_1[4];
        uVar5 = FUN_ffa03270(param_2 - iVar7);
        uVar5 = FUN_ffa03068(uVar5,iVar8);
        iVar6 = FUN_ffa02c10(uVar5,iVar6);
      }
      else if (param_2 != iVar7) {
        iVar8 = param_1[4];
        uVar5 = FUN_ffa03270(iVar7 - param_2);
        uVar5 = FUN_ffa03068(uVar5,iVar8);
        iVar6 = FUN_ffa031f8(iVar6,uVar5);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x003059a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(iVar6);
    return iVar6;
  case 5:
    iVar7 = (int)*(short *)((int)param_1 + 0x16);
    iVar6 = 0;
    if (((iVar7 <= param_2) && (param_2 <= (short)param_1[5])) &&
       (iVar6 = param_1[3], param_2 != iVar7)) {
      iVar8 = param_1[4];
      uVar5 = FUN_ffa03270(param_2 - iVar7);
      uVar5 = FUN_ffa03068(uVar5,iVar8);
      iVar6 = FUN_ffa02c10(uVar5,iVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00305a22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(iVar6);
    return iVar6;
  case 6:
                    /* WARNING: Treating indirect jump as return */
    return param_1[1];
  case 7:
    iVar6 = 0;
    if ((*(short *)((int)param_1 + 0x16) <= param_2) && (param_2 <= (short)param_1[5])) {
      iVar6 = *(int *)(*param_1 + (param_2 - *(short *)((int)param_1 + 0x16)) * 4);
    }
                    /* WARNING: Treating indirect jump as return */
    return iVar6;
  case 8:
    uVar5 = 0x41200000;
    if (param_2 < 0x7f) {
      if (param_2 < 0x42) {
        uVar5 = 0x3f800000;
        if (param_2 != 0x41) {
          uVar5 = 0;
          if ((param_2 != 0x40) && (uVar5 = 0xbf800000, param_2 != 0x3f)) {
            if (param_2 < 0x10) {
              if (param_2 < 2) {
                uVar5 = 0xc2400000;
                if ((param_2 != 1) && (uVar5 = 0, param_2 == 0)) {
                  uVar5 = 0xc2c80000;
                }
              }
              else {
                uVar5 = FUN_ffa03270(param_2 + -1);
                uVar5 = FUN_ffa03068(uVar5,0x3fcccccd);
                uVar5 = FUN_ffa031f8(uVar5,0x42400000);
              }
            }
            else {
              FUN_ffa03270(param_2);
              uVar5 = FUN_ffa03cb0();
              uVar5 = FUN_ffa03068(uVar5,0x42180000);
              uVar5 = FUN_ffa031f8(uVar5,0x428c0000);
            }
          }
        }
      }
      else {
        FUN_ffa03270(param_2);
        uVar5 = FUN_ffa03cb0();
        uVar5 = FUN_ffa03068(uVar5,0x41f770a4);
        uVar5 = FUN_ffa031f8(uVar5,0x425c51ec);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00305adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar5);
    return iVar6;
  case 9:
    uVar5 = 0x41200000;
    if (param_2 < 0x7f) {
      if (param_2 < 0x41) {
        uVar5 = 0xc0400000;
        if (param_2 != 0x40) {
          if (param_2 < 2) {
            uVar5 = 0xc2700000;
            if (param_2 != 1) {
              uVar5 = 0;
              if (param_2 == 0) {
                uVar5 = 0xc2c80000;
              }
            }
          }
          else {
            FUN_ffa03270(param_2);
            uVar5 = FUN_ffa03cb0();
            uVar5 = FUN_ffa03068(uVar5,0x41fd5c29);
            uVar5 = FUN_ffa031f8(uVar5,0x42700000);
          }
        }
      }
      else {
        FUN_ffa03270(param_2);
        uVar5 = FUN_ffa03cb0();
        uVar5 = FUN_ffa03068(uVar5,0x422d51ec);
        uVar5 = FUN_ffa031f8(uVar5,0x42a33333);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00305bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar5);
    return iVar6;
  case 10:
    uVar5 = 0;
    if (param_2 < 0x7f) {
      if (param_2 < 0x41) {
        uVar5 = 0xc0800000;
        if (param_2 != 0x40) {
          if (param_2 < 1) {
            uVar5 = 0;
            if (param_2 == 0) {
              uVar5 = 0xc2c80000;
            }
          }
          else {
            FUN_ffa03270(param_2);
            uVar5 = FUN_ffa03cb0();
            uVar5 = FUN_ffa03068(uVar5,0x41fd5c29);
            uVar5 = FUN_ffa031f8(uVar5,0x42740000);
          }
        }
      }
      else {
        FUN_ffa03270(param_2);
        uVar5 = FUN_ffa03cb0();
        uVar5 = FUN_ffa03068(uVar5,0x4156c083);
        uVar5 = FUN_ffa031f8(uVar5,0x41e1eb85);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00305c66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar5);
    return iVar6;
  case 0xb:
    iVar6 = (int)(short)(0x7f - (short)param_2);
    uVar5 = 0;
    if (iVar6 < 0x7f) {
      if (iVar6 < 0x41) {
        uVar5 = 0xc0800000;
        if (iVar6 != 0x40) {
          if (iVar6 < 1) {
            uVar5 = 0;
            if (iVar6 == 0) {
              uVar5 = 0xc2c80000;
            }
          }
          else {
            FUN_ffa03270(iVar6);
            uVar5 = FUN_ffa03cb0();
            uVar5 = FUN_ffa03068(uVar5,0x41fd5c29);
            uVar5 = FUN_ffa031f8(uVar5,0x42740000);
          }
        }
      }
      else {
        FUN_ffa03270(iVar6);
        uVar5 = FUN_ffa03cb0();
        uVar5 = FUN_ffa03068(uVar5,0x4156c083);
        uVar5 = FUN_ffa031f8(uVar5,0x41e1eb85);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00305d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar5);
    return iVar6;
  case 0xc:
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  case 0xd:
    uVar5 = FUN_ffa03270(-param_2);
    uVar5 = FUN_ffa02e14(uVar5,0x40000000);
    iVar6 = FUN_ffa031f8(uVar5,0x41800000);
                    /* WARNING: Treating indirect jump as return */
    return iVar6;
  case 0xe:
    uVar5 = 0x3f000000;
    if (param_2 != 0) {
      uVar5 = FUN_ffa03270(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00305f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar5);
    return iVar6;
  case 0xf:
    uVar5 = 0x41200000;
    if ((((param_2 != 0) && (uVar5 = 0x41400000, param_2 != 1)) &&
        (uVar5 = 0x41700000, param_2 != 2)) && (uVar5 = 0x41900000, param_2 != 3)) {
      if (param_2 < 0x15) {
        uVar5 = FUN_ffa03270(param_2);
        uVar5 = FUN_ffa03068(uVar5,0x40a00000);
      }
      else if (param_2 < 0x1f) {
        uVar5 = FUN_ffa03270(param_2 + -0x14);
        uVar5 = FUN_ffa03068(uVar5,0x41200000);
        uVar5 = FUN_ffa02c10(uVar5,0x42c80000);
      }
      else {
        uVar5 = FUN_ffa03270(param_2 + -0x1e);
        uVar5 = FUN_ffa03068(uVar5,0x41a00000);
        uVar5 = FUN_ffa02c10(uVar5,0x43480000);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00305f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar5);
    return iVar6;
  default:
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  iVar7 = (int)*(short *)((int)param_1 + 0x16);
  iVar6 = 0;
  if ((iVar7 <= param_2) && (iVar8 = (int)(short)param_1[5], param_2 <= iVar8)) {
    if (param_2 == iVar8) {
      iVar6 = param_1[1];
    }
    else {
      iVar6 = (int)(short)(iVar8 + iVar7 + 1 >> 1);
      if (iVar6 < param_2) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      if (param_2 == iVar6) {
        iVar6 = param_1[2];
      }
      else {
        iVar6 = param_1[3];
        if (iVar7 < param_2) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
      }
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return iVar6;
}


END_FUNCTION
SCALAR 0x8 AT 003056f6 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 0030575c INSTRUCTION LOAD R6 = [P5 + 0x8]
SCALAR 0x8 AT 00305960 INSTRUCTION _LOAD R6 = [P5 + 0x8]
SCALAR 0x8 AT 003061f6 INSTRUCTION _LOAD R2 = W [FP + 0x8] (Z)
SCALAR 0x8 AT 0030620c INSTRUCTION STORE W [FP + 0x8] = R1
SCALAR 0x8 AT 00306960 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 003069aa INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 00306a96 INSTRUCTION _STORE [FP + 0x8] = R2
FUNCTION 00306a4c FUN_00306a4c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00306a4c(undefined4 param_1,uint param_2)

{
  if ((int)((param_2 & 0xfffffffe) + 1) < 10) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00306b5a INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 00306b6c INSTRUCTION _LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 00306b96 INSTRUCTION _LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 00306bae INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 00306bd0 INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 00306cca INSTRUCTION _LOAD R1 = [P3 + 0x8]
SCALAR 0x8 AT 00306cda INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 00306d38 INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 00306d50 INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 00306e24 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00307302 INSTRUCTION ADD R3 += 0x8
SCALAR 0x8 AT 00307402 INSTRUCTION ADD R7 += 0x8
SCALAR 0x8 AT 00307486 INSTRUCTION _STORE [P1 + 0x8] = R1
SCALAR 0x8 AT 003074a8 INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT 003074bc INSTRUCTION STORE [P0 + 0x8] = R0
SCALAR 0x8 AT 003074d8 INSTRUCTION STORE [P2 + 0x8] = R2
SCALAR 0x8 AT 0030752a INSTRUCTION STORE [P1 + 0x8] = R3
SCALAR 0x8 AT 0030765a INSTRUCTION STORE [P1 + 0x8] = R0
SCALAR 0x8 AT 00307cfc INSTRUCTION _LOAD R3 = [P2 + 0x8]
SCALAR 0x8 AT 00307d6e INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 00307dac INSTRUCTION LOAD R3 = [FP + 0x8]
SCALAR 0x8 AT 00307dd2 INSTRUCTION STORE [FP + 0x8] = P2
SCALAR 0x8 AT 00307e6c INSTRUCTION STORE W [P5 + 0x8] = R2
SCALAR 0x8 AT 00307f08 INSTRUCTION STORE W [P3 + 0x8] = R0
SCALAR 0x8 AT 00307f1c INSTRUCTION STORE [P2 + 0x8] = R0
SCALAR 0x8 AT 00307f66 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 00307f92 INSTRUCTION STORE W [P3 + 0x8] = R0
SCALAR 0x8 AT 00307f9c INSTRUCTION STORE W [P3 + 0x8] = R0
SCALAR 0x8 AT 00307fa2 INSTRUCTION STORE W [P3 + 0x8] = R0
SCALAR 0x8 AT 00307fa6 INSTRUCTION STORE W [P3 + 0x8] = R0
SCALAR 0x8 AT 00307fae INSTRUCTION _LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 00308016 INSTRUCTION LOAD P3 = [FP + 0x8]
SCALAR 0x8 AT 00308022 INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 003080c4 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 003080ce INSTRUCTION STORE W [P0 + 0x8] = R7
SCALAR 0x8 AT 0030811c INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0030814a INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 00308312 INSTRUCTION _STORE W [P1 + 0x8] = R1
SCALAR 0x8 AT 00308346 INSTRUCTION LOAD P2 = 0x8
FUNCTION 0030832c FUN_0030832c success=true

void FUN_0030832c(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_00327b78(1,&PTR_DAT_00409414);
  puVar2 = &DAT_ff80246c;
  iVar4 = 8;
  puVar1 = &DAT_ff800158;
  do {
    *puVar2 = 0;
    puVar2[1] = puVar1;
    puVar3 = puVar2 + 3;
    puVar2[2] = 0x10000;
    puVar2[4] = 0;
    puVar2 = puVar2 + 5;
    *puVar3 = 0xd0000;
    *puVar1 = 0x2000;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar4 != 0);
  FUN_0031d70c(param_1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003088ea INSTRUCTION _STORE [FP + 0x8] = R2
FUNCTION 003088d4 FUN_003088d4 success=true

int FUN_003088d4(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int local_30 [6];
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(int *)(param_1 + 0x24) = param_2;
  *(undefined **)(param_1 + 0x10) = &DAT_00403a20;
  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00325c3c(param_1 + 0x3c,2,4,&LAB_003082a4);
  FUN_00325c3c(param_1 + 0x44,2,4,&LAB_003082a4);
  FUN_00325c3c(param_1 + 0x50,2,2,&LAB_00308298);
  FUN_00325c3c(param_1 + 0x54,2,2,&LAB_00308298);
  FUN_00325c3c(param_1 + 0x58,2,2,&LAB_00308298);
  piVar5 = local_30;
  local_30[1] = DAT_00409444;
  local_30[2] = param_2;
  local_30[3] = DAT_0040944c;
  local_30[4] = param_2 + 6;
  local_30[5] = DAT_00409454;
  uStack_14 = DAT_0040945c;
  uStack_10 = DAT_00409460;
  uStack_c = DAT_00409464;
  *(undefined4 **)(param_1 + 8) = param_3;
  local_30[0] = param_2 + 4;
  local_18 = param_2 + 10;
  if (param_2 + 4 != 0) {
    do {
      iVar6 = -1;
      piVar4 = piVar5 + 1;
      do {
        iVar1 = *piVar4;
        *param_3 = 0;
        iVar2 = *piVar5;
        piVar5 = piVar5 + 2;
        param_3[1] = iVar2;
        iVar2 = *piVar5;
        *(undefined2 *)(param_3 + 2) = 0;
        *(undefined2 *)((int)param_3 + 10) = 1;
        param_3[4] = 0;
        puVar3 = (undefined2 *)((int)param_3 + 0xe);
        *(undefined2 *)(param_3 + 3) = 0;
        param_3 = param_3 + 5;
        *puVar3 = (short)iVar1;
        if (iVar2 == 0) goto LAB_00308a40;
      } while ((iVar6 != 0) && (iVar6 = iVar6 + -1, piVar4 = piVar4 + 2, iVar6 != 0));
    } while( true );
  }
LAB_00308a40:
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}


END_FUNCTION
SCALAR 0x8 AT 003088fe INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 003089e6 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 003089ea INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 003089f8 INSTRUCTION _LOAD P2 = [FP + 0x8]
SCALAR 0x8 AT 00308a02 INSTRUCTION LOAD M0 = 0x8
SCALAR 0x8 AT 00308a06 INSTRUCTION LOAD P3 = 0x8
SCALAR 0x8 AT 00308a08 INSTRUCTION ADD P4 += 0x8
SCALAR 0x8 AT 00308ace INSTRUCTION STORE [FP + 0x8] = R1
SCALAR 0x8 AT 00308aee INSTRUCTION STORE [P2 + 0x8] = R1
SCALAR 0x8 AT 00308b64 INSTRUCTION STORE [P2 + 0x8] = R0
SCALAR 0x8 AT 00308b66 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00308be8 INSTRUCTION STORE [P2 + 0x8] = R0
SCALAR 0x8 AT 00308bea INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00308c6c INSTRUCTION STORE [P2 + 0x8] = R0
SCALAR 0x8 AT 00308c6e INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00308cf0 INSTRUCTION STORE [P2 + 0x8] = R0
SCALAR 0x8 AT 00308cf2 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00308d74 INSTRUCTION STORE [P2 + 0x8] = R0
SCALAR 0x8 AT 00308d76 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00308df8 INSTRUCTION STORE [P2 + 0x8] = R0
SCALAR 0x8 AT 00308dfa INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00308e7c INSTRUCTION STORE [P2 + 0x8] = R0
SCALAR 0x8 AT 00308e7e INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00308efc INSTRUCTION STORE [P2 + 0x8] = R0
SCALAR 0x8 AT 00308efe INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00308f6e INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00308f80 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00308fc4 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 00308ff8 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0030902e INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00309062 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00309080 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 0030909c INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 003090ea INSTRUCTION _STORE [P4 + 0x8] = R0
SCALAR 0x8 AT 0030912e INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00309150 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 003091f2 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 0030927e INSTRUCTION STORE [P4 + 0x8] = R0
SCALAR 0x8 AT 003093ae INSTRUCTION STORE [P3 + 0x8] = R0
SCALAR 0x8 AT 003093cc INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 00309400 INSTRUCTION LOAD P2 = 0x8
SCALAR 0x8 AT 00309402 INSTRUCTION LOAD M0 = 0x8
SCALAR 0x8 AT 00309406 INSTRUCTION ADD P1 += 0x8
SCALAR 0x8 AT 00309462 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00309486 INSTRUCTION STORE [P1 + 0x8] = R4
SCALAR 0x8 AT 0030949c INSTRUCTION STORE [P1 + 0x8] = R4
SCALAR 0x8 AT 00309a1a INSTRUCTION _STORE W [FP + 0x8] = R0
FUNCTION 003099d0 FUN_003099d0 success=true

void FUN_003099d0(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  
  bVar2 = false;
  if (param_2 < 0xe) {
    bVar2 = false;
    if (param_4 < 9) {
      bVar2 = true;
    }
  }
  bVar1 = false;
  if (bVar2) {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x10) + 0x6c))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x68),param_2,param_4);
    if ((param_3 != iVar3) && ((param_2 != 0 || (iVar3 = FUN_003022d8(param_4), iVar3 == 0)))) {
      bVar1 = true;
      iVar3 = *(int *)((&PTR_DAT_0041d024)[param_4] + 4);
      (**(code **)(iVar3 + 0x2c))
                ((&PTR_DAT_0041d024)[param_4] + *(short *)(iVar3 + 0x28),param_2,param_3);
    }
  }
  if (!bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00309a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x10) + 0x114))
            (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x110));
  iVar3 = FUN_0033e07e();
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      piVar4 = (int *)FUN_0033e030(param_1 + 0x14,iVar5);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0xc))((int)piVar4 + (int)*(short *)(*piVar4 + 8),&stack0x00000000);
      }
      iVar3 = iVar3 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar3 != 0);
  }
  (**(code **)(*(int *)(param_1 + 0x10) + 0x10c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x108),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00309a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00309a56 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00309a5c INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 00309ff2 INSTRUCTION ADD R1 += 0x8
FUNCTION 00309f14 FUN_00309f14 success=true

void FUN_00309f14(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar1 = FUN_ffa03270(param_2);
  FUN_ffa02e14(uVar1,0x4a000000);
  uVar1 = FUN_ffa03cb0();
  uVar2 = FUN_ffa03068(uVar1,0x41a00000);
  if (uVar2 == 0 || (0x7f800000 < (int)uVar2 || (uVar2 & 0x80000000) != 0)) {
    FUN_ffa031f8(uVar2,0x3f000000);
  }
  else {
    FUN_ffa02c10();
  }
  iVar3 = FUN_ffa02b74();
  if ((param_2 == 0) || (iVar3 < -99)) {
    *param_1 = 0x2d;
    param_1[1] = 0x3c;
    param_1[2] = 0x3d;
    param_1[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x00309fbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (iVar3 == 0) {
    if (param_2 == 0x200000) {
      FUN_00324010(param_1,&DAT_0041d060);
                    /* WARNING: Could not recover jumptable at 0x0030a014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    if (0x200000 < param_2) {
      FUN_00324010(param_1,&PTR_DAT_0041d064);
                    /* WARNING: Could not recover jumptable at 0x00309fee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    FUN_00324010(param_1,&PTR_DAT_0041d068);
                    /* WARNING: Could not recover jumptable at 0x0030a002. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (iVar3 < 1) {
    if (-10 < iVar3) {
      FUN_00324010(param_1,&DAT_0041d078,-iVar3);
                    /* WARNING: Could not recover jumptable at 0x0030a062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    FUN_00324010(param_1,&DAT_0041d080);
                    /* WARNING: Could not recover jumptable at 0x0030a076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (iVar3 < 10) {
    FUN_00324010(param_1,&DAT_0041d06c);
                    /* WARNING: Could not recover jumptable at 0x0030a032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_00324010(param_1,&DAT_0041d074);
                    /* WARNING: Could not recover jumptable at 0x0030a046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0030c332 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
FUNCTION 0030c29c FUN_0030c29c success=true

undefined4 FUN_0030c29c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  
  iVar1 = FUN_00301908();
  if (iVar1 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  switch(param_2) {
  case 0:
    *(int *)(param_1 + 0x2c) = param_3;
  case 1:
    local_10 = 2;
    iVar4 = param_1 + 0x14;
    local_e = (**(code **)(*(int *)(param_1 + 0x10) + 0x114))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x110));
    local_c = 2;
    iVar1 = FUN_0033e07e(iVar4);
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        piVar2 = (int *)FUN_0033e030(iVar4,iVar3);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),&local_10);
        }
        iVar1 = iVar1 + -1;
        iVar3 = iVar3 + 1;
      } while (iVar1 != 0);
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x10c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x108),2,0);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x114))
              (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x110));
    iVar1 = FUN_0033e07e();
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        piVar2 = (int *)FUN_0033e030(iVar4,iVar3);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),&stack0x00000000);
        }
        iVar1 = iVar1 + -1;
        iVar3 = iVar3 + 1;
      } while (iVar1 != 0);
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x10c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x108),3,0);
    break;
  case 2:
    if (DAT_004094bc == '\0') {
      *(int *)(param_1 + 0x24) = param_3;
      DAT_004094bc = '\x01';
    }
    if (DAT_004094b8 != 0) {
                    /* WARNING: Treating indirect jump as return */
      return 0;
    }
    iVar1 = FUN_0030cf94(&DAT_0043f8c0,0xd,0,param_4);
    if ((iVar1 != 0) && ((&DAT_0041d2a4)[param_3] == 0x2ee00)) {
                    /* WARNING: Treating indirect jump as return */
      return 0;
    }
    FUN_0031e9c8((&DAT_0041d2a4)[param_3]);
    break;
  case 3:
    if (*(int *)(param_1 + 0x28) == -1) {
      FUN_0032b2b0(3);
    }
    FUN_0031ea64(param_3 != 0);
  }
  *(int *)(param_1 + 0x24 + param_2 * 4) = param_3;
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
SCALAR 0x8 AT 0030c35a INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 0030c390 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 0030c396 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0030c6be INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0030c70a INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 0030c742 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 0030c748 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0030ccba INSTRUCTION ADD R3 += 0x8
FUNCTION 0030cc96 firmware_entry_0030cc96 success=true

void firmware_entry_0030cc96
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool in_CCflag;
  
  if (in_CCflag) {
    FUN_00324010(param_2,&DAT_0041d344,param_4);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_00324010(param_2,&DAT_0041d34c,param_4);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0030cd2a INSTRUCTION STORE W [FP + 0x8] = R1
FUNCTION 0030cce8 firmware_entry_0030cce8 success=true

void firmware_entry_0030cce8(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  int iVar4;
  
  switch(param_2) {
  case 5:
    puVar3 = (undefined2 *)(param_1 + 0x24);
    break;
  case 6:
    puVar3 = (undefined2 *)(param_1 + 0x26);
    break;
  case 7:
    puVar3 = (undefined2 *)(param_1 + 0x28);
    break;
  case 8:
    puVar3 = (undefined2 *)(param_1 + 0x2a);
    break;
  case 9:
    puVar3 = (undefined2 *)(param_1 + 0x2c);
    break;
  default:
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  *puVar3 = param_3;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x114))
            (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x110));
  iVar1 = FUN_0033e07e();
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      piVar2 = (int *)FUN_0033e030(param_1 + 0x14,iVar4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),&stack0x00000000);
      }
      iVar1 = iVar1 + -1;
      iVar4 = iVar4 + 1;
    } while (iVar1 != 0);
  }
  (**(code **)(*(int *)(param_1 + 0x10) + 0x10c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x108),param_2,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0030cd62 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 0030cd68 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0030da8a INSTRUCTION LOAD R2 = W [P0 + 0x8] (X)
FUNCTION 0030da4e FUN_0030da4e success=true

void FUN_0030da4e(int param_1)

{
  int iVar1;
  
  switch(*(undefined2 *)(param_1 + 4)) {
  case 0x11:
    FUN_00358490(&DAT_0044543c,(int)*(short *)(param_1 + 6),(int)*(short *)(param_1 + 8));
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x12:
    FUN_00356230(&DAT_00445310);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x13:
    FUN_003565e4();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x14:
    FUN_00356598(&DAT_004453b8,(int)*(short *)(param_1 + 6),*(undefined4 *)(param_1 + 8));
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x15:
    break;
  default:
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = FUN_00356558(&DAT_004453b8);
  if (iVar1 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = FUN_00355d36(&DAT_00445310,0xffffffff);
  if (iVar1 < 0) {
    FUN_0035aa8c();
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0030dac4 INSTRUCTION LOAD R2 = [P0 + 0x8]
SCALAR 0x8 AT 0030dc58 INSTRUCTION ADD R1 += 0x8
FUNCTION 0030dc04 FUN_0030dc04 success=true

void FUN_0030dc04(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00355484(&DAT_00445310,(int)*(short *)(param_1 + 2),(int)*(short *)(param_1 + 4));
  iVar1 = FUN_0033e07e(&DAT_00445978);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      piVar2 = (int *)FUN_0033e030(&DAT_00445978,iVar3);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),&stack0x00000000);
      }
      iVar1 = iVar1 + -1;
      iVar3 = iVar3 + 1;
    } while (iVar1 != 0);
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0030dc5e INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0030dc7c INSTRUCTION LINK 0x8
FUNCTION 0030dc7a FUN_0030dc7a success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0030dc7a(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if (0xc < uVar1) {
    if (uVar1 == 0xd) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    if (uVar1 == 0xe) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0030dce4 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 0030dcea INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0030dd42 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0030df30 INSTRUCTION ADD R1 += 0x8
FUNCTION 0030ddc8 FUN_0030ddc8 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0030ddc8(void)

{
  undefined4 *puVar1;
  undefined4 local_54;
  short local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined1 auStack_48 [64];
  
  FUN_00301db4(&DAT_0043ecf0);
  puVar1 = &DAT_004094e4;
  if (DAT_004094e4 != 0) {
    local_54._2_2_ = DAT_0041d5ac;
    local_50 = DAT_0041d5ae;
    local_4e = (undefined2)DAT_0041d5b0;
    local_4c = DAT_0041d5b0._2_2_;
    FUN_0034df50(DAT_00440944);
    if (-1 < DAT_00445204) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    FUN_00324010(auStack_48,s___________0041d5c4);
    FUN_0034dfdc(DAT_00440944,0xe);
    FUN_0034dee2(DAT_00440944,0x1000000,0x1000002);
    FUN_0034e6aa(DAT_00440944,(int)&local_54 + 2);
    FUN_0034dee2(DAT_00440944,0x1000000,0x1000002);
    FUN_0034edd8(DAT_00440944,(int)(short)(local_54._2_2_ + 1),(int)(short)(local_50 + 2),auStack_48
                );
    FUN_0034df02(DAT_00440944);
  }
  if (puVar1[1] == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  local_54 = DAT_0041d5a8;
  FUN_0034df50(DAT_00440944);
  FUN_00324010(&local_50,s_Free_Total__8ld__8ld_bytes_0041d5e4,0,0);
  FUN_0034dfdc(DAT_00440944,0);
  FUN_0034dee2(DAT_00440944,0x1000000,0x1000002);
  FUN_0034dee2(DAT_00440944,0x1000000,0x1000002);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0030e3fe INSTRUCTION STORE [P5 + 0x8] = R4
SCALAR 0x8 AT 0030e66c INSTRUCTION LOAD R0 = [P3 + 0x8]
FUNCTION 0030e650 FUN_0030e650 success=true

void FUN_0030e650(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar8;
  undefined4 auStack_190 [50];
  undefined1 auStack_c8 [192];
  undefined4 *puVar7;
  
  puVar4 = &DAT_00418be0;
  if ((short)DAT_00418be0 != 0) {
    iVar2 = (int)(short)DAT_00418be8;
    iVar8 = (int)(short)DAT_00418be4 * (uint)(0 < (short)DAT_00418be4);
    iVar3 = iVar8 * 0x10;
    if (*(char *)((int)DAT_00445304 + 10) == '\x02') {
      FUN_00357f58(*DAT_00445304 + iVar3,&DAT_0044094c + iVar3,
                   (((iVar2 * (uint)(iVar2 < 0x3f) + (uint)(iVar2 >= 0x3f) * 0x3f) - iVar8) + 1) *
                   0x10);
    }
    else {
      puVar5 = &DAT_00445218;
      iVar8 = 0x31;
      puVar6 = auStack_190;
      do {
        puVar5 = puVar5 + 1;
        uVar1 = *puVar5;
        puVar7 = puVar6 + 1;
        *puVar6 = uVar1;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        puVar6 = puVar7;
      } while (iVar8 != 0);
      *puVar7 = uVar1;
      FUN_0033fc20(&DAT_00445218,9,0x8b);
      FUN_0033fc20(&DAT_00445218,8,0xffffff);
      FUN_0034f31c(auStack_c8,DAT_00445304);
      FUN_0034dd28(auStack_c8,0,0,&PTR_DAT_00418bd0);
      FUN_0033fee2(&DAT_00445218,auStack_190);
      FUN_0034e17e(auStack_c8,2);
    }
    *puVar4 = 0xffff0000;
  }
  FUN_003481f0();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0030e700 INSTRUCTION STORE [FP + 0x8] = P1
SCALAR 0x8 AT 0030e70a INSTRUCTION LSHIFT R2 >>= 0x8
SCALAR 0x8 AT 0030e712 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 0030e72a INSTRUCTION _LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0030e820 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
FUNCTION 0030e808 FUN_0030e808 success=true

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Removing unreachable block (ram,0x0030e858) */

undefined4 FUN_0030e808(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 0030e840 INSTRUCTION LOAD R6 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0030e888 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
FUNCTION 0030e870 FUN_0030e870 success=true

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Removing unreachable block (ram,0x0030e8c0) */

undefined4 FUN_0030e870(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 0030e8a8 INSTRUCTION LOAD R6 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0030ee30 INSTRUCTION STORE [FP + 0x8] = R3
FUNCTION 0030ee24 FUN_0030ee24 success=true

undefined4 FUN_0030ee24(undefined1 *param_1,uint param_2,uint param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  
  uVar4 = 2;
  if ((param_4 != 0) && (uVar4 = 2, param_4 == 1)) {
    uVar4 = 0;
  }
  do {
    iVar9 = -1;
    do {
      if ((int)param_3 < 1) {
                    /* WARNING: Treating indirect jump as return */
        return 1;
      }
      uVar5 = uVar4;
      if (((((uint)param_1 & 1) == 1) || ((param_2 & 1) == 1)) || (param_3 == 1)) {
        MDMA_D0_START_ADDR = 0x440000;
        MDMA_D0_X_COUNT = 1;
        MDMA_D0_X_MODIFY = 2;
        MDMA_S0_START_ADDR = param_2 & 0xfffffffe;
        MDMA_S0_X_COUNT = 1;
        MDMA_S0_X_MODIFY = 0;
        SIC_IWR0 = 0x200000;
        MDMA_S0_CONFIG = 5;
        csync();
        MDMA_D0_CONFIG = 0x87;
        csync();
        uVar1 = MDMA_S0_IRQ_STATUS;
        if ((uVar1 & 8) == 1) {
          do {
            iVar8 = -1;
            do {
              uVar1 = MDMA_S0_IRQ_STATUS;
              if ((uVar1 & 8) != 1) goto LAB_0030ef2c;
            } while ((iVar8 != 0) && (iVar8 = iVar8 + -1, iVar8 != 0));
          } while( true );
        }
LAB_0030ef2c:
        SIC_IWR0 = 0xffffffff;
        MDMA_D0_IRQ_STATUS = 1;
        bVar7 = (param_2 & 1) != 1;
        puVar6 = &DAT_00440dde;
        if (bVar7) {
          puVar6 = param_1;
        }
        DAT_00440ddc = *puVar6;
        puVar6 = &DAT_00440ddf;
        if (!bVar7) {
          puVar6 = param_1;
        }
        DAT_00440ddd = *puVar6;
        MDMA_D0_START_ADDR = param_2 & 0xfffffffe;
        MDMA_D0_X_COUNT = 1;
        MDMA_D0_X_MODIFY = 2;
        MDMA_S0_START_ADDR = 0x440000;
        MDMA_S0_X_COUNT = 1;
        MDMA_S0_X_MODIFY = 0;
        SIC_IWR0 = 0x200000;
        MDMA_S0_CONFIG = 5;
        csync();
        MDMA_D0_CONFIG = 0x87;
        csync();
        uVar1 = MDMA_S0_IRQ_STATUS;
        if ((uVar1 & 8) == 1) {
          do {
            iVar8 = -1;
            do {
              uVar1 = MDMA_S0_IRQ_STATUS;
              if ((uVar1 & 8) != 1) goto LAB_0030ef9e;
            } while ((iVar8 != 0) && (iVar8 = iVar8 + -1, iVar8 != 0));
          } while( true );
        }
LAB_0030ef9e:
        SIC_IWR0 = 0xffffffff;
        MDMA_D0_IRQ_STATUS = 1;
        if (uVar4 != 0) {
          uVar5 = 1;
        }
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
      }
      else {
        uVar2 = param_3 & 0xfffffffe;
        MDMA_D0_START_ADDR = param_2;
        uVar3 = (undefined2)(param_3 >> 1);
        MDMA_D0_X_COUNT = uVar3;
        MDMA_D0_X_MODIFY = 2;
        MDMA_S0_START_ADDR = param_1;
        MDMA_S0_X_COUNT = uVar3;
        MDMA_S0_X_MODIFY = (short)uVar4;
        SIC_IWR0 = 0x200000;
        MDMA_S0_CONFIG = 5;
        csync();
        MDMA_D0_CONFIG = 0x87;
        csync();
        uVar1 = MDMA_S0_IRQ_STATUS;
        if ((uVar1 & 8) == 1) {
          do {
            iVar8 = -1;
            do {
              uVar1 = MDMA_S0_IRQ_STATUS;
              if ((uVar1 & 8) != 1) goto LAB_0030f01a;
            } while ((iVar8 != 0) && (iVar8 = iVar8 + -1, iVar8 != 0));
          } while( true );
        }
LAB_0030f01a:
        SIC_IWR0 = 0xffffffff;
        MDMA_D0_IRQ_STATUS = 1;
        param_2 = param_2 + uVar2;
        if (uVar4 != 0) {
          uVar5 = uVar2;
        }
        param_3 = param_3 - uVar2;
      }
      param_1 = param_1 + uVar5;
    } while ((iVar9 != 0) && (iVar9 = iVar9 + -1, iVar9 != 0));
  } while( true );
}


END_FUNCTION
SCALAR 0x8 AT 0030ee3a INSTRUCTION STORE [FP + 0x8] = R3
SCALAR 0x8 AT 0030eeae INSTRUCTION LOAD R3 = [FP + 0x8]
SCALAR 0x8 AT 0030eeb2 INSTRUCTION STORE W [FP + 0x8] = R3
SCALAR 0x8 AT 0030efa4 INSTRUCTION LOAD R3 = [FP + 0x8]
SCALAR 0x8 AT 0030efda INSTRUCTION LOAD R3 = [FP + 0x8]
SCALAR 0x8 AT 0030f02c INSTRUCTION _LOAD R3 = [FP + 0x8]
SCALAR 0x8 AT 0030f044 INSTRUCTION LINK 0x8
FUNCTION 0030f044 FUN_0030f044 success=true

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Removing unreachable block (ram,0x0030f254) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0030f044(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 in_AZflag;
  code *UNRECOVERED_JUMPTABLE;
  
  if (PTR_DAT_0036e66c == (undefined *)0x0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  csync();
  if ((*(short *)(PTR_DAT_0036e66c + 2) != -1) || (*PTR_DAT_0036e66c != '\0')) {
                    /* WARNING: Treating indirect jump as return */
    return 0xffffffff;
  }
  uVar2 = *(uint *)(PTR_DAT_0036e66c + 4);
  if (uVar2 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  uVar6 = 0;
  puVar11 = (uint *)(PTR_DAT_0036e66c + 8);
LAB_0030f086:
  do {
    bVar16 = uVar2 <= uVar6;
    uVar6 = uVar6 + 1;
    if (bVar16) {
      DAT_00440de0 = 0;
      DAT_00440de2 = 0;
      DAT_00440de4 = 0;
      DAT_00440de6 = 0;
      DAT_00440de8 = 0;
      DAT_00440dea = 0;
      DAT_00440dec = 0;
      DAT_00440dee = 0;
      _DAT_00440ddc = 0;
      _DAT_00440dde = 0;
                    /* WARNING: Could not recover jumptable at 0x0030f370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)(0);
      return uVar5;
    }
    uVar3 = puVar11[2];
    puVar15 = puVar11 + 4;
    if ((uVar3 & 0x3c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0030f334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffffe);
      return uVar5;
    }
    if ((uVar3 & 3) != 2) {
                    /* WARNING: Could not recover jumptable at 0x0030f326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffffd);
      return uVar5;
    }
    uVar3 = (uVar3 & 0x1c0) >> 6;
    if (uVar3 == 0) {
      puVar7 = (undefined1 *)*puVar11;
      uVar3 = puVar11[1];
      if (puVar7 < (undefined1 *)0xffa14001 && (undefined1 *)0xff9fffff < puVar7) {
        iVar4 = FUN_0030ee24(puVar15,puVar7,uVar3,0);
        if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0030f318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffffc);
          return uVar5;
        }
        puVar11 = (uint *)((int)puVar15 + uVar3);
      }
      else {
        puVar11 = puVar15;
        if (0 < (int)uVar3) {
          puVar11 = (uint *)((int)puVar15 + uVar3);
          do {
            *puVar7 = (char)*puVar15;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            puVar7 = puVar7 + 1;
            puVar15 = (uint *)((int)puVar15 + 1);
          } while (uVar3 != 0);
        }
      }
      if (!(bool)in_AZflag) {
        puVar11 = puVar11 + 1;
      }
      puVar11 = (uint *)((uint)puVar11 & 0xfffffffc);
      goto LAB_0030f086;
    }
    if (uVar3 != 1) {
      if (uVar3 != 3) {
                    /* WARNING: Could not recover jumptable at 0x0030f1da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffff7);
        return uVar5;
      }
      uVar14 = puVar11[1];
      uVar3 = *puVar11;
      if (uVar3 < 0xffa14001 && 0xff9fffff < uVar3) {
        uVar1 = puVar11[3];
        puVar8 = (uint *)((int)puVar15 + uVar14);
        if (0x10 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x0030f1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffffa);
          return uVar5;
        }
        puVar12 = puVar15;
        if (uVar1 != 0) {
          puVar9 = &DAT_00440de0;
          puVar13 = puVar15;
          uVar14 = uVar1;
          do {
            *(char *)puVar9 = (char)*puVar13;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            puVar9 = (undefined2 *)((int)puVar9 + 1);
            puVar13 = (uint *)((int)puVar13 + 1);
          } while (uVar14 != 0);
        }
        do {
          uVar14 = uVar3 + uVar1;
          puVar12 = (uint *)((int)puVar12 + uVar1);
          iVar4 = FUN_0030ee24(&DAT_00440de0,uVar3,uVar1,3);
          if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0030f1be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffff9);
            return uVar5;
          }
          uVar3 = uVar14;
        } while (puVar12 < puVar8);
        if ((puVar8 != puVar12) &&
           (iVar4 = FUN_0030ee24(&DAT_00440de0,uVar14,(int)puVar8 - (int)puVar12,3), iVar4 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0030f1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffff8);
          return uVar5;
        }
      }
      else {
        puVar7 = (undefined1 *)*puVar11;
        puVar8 = puVar15;
        if (0 < (int)uVar14) {
          do {
            puVar12 = (uint *)((int)puVar8 + 1);
            *puVar7 = (char)*puVar8;
            puVar8 = puVar12;
            if (puVar12 == (uint *)((int)puVar15 + puVar11[3])) {
              puVar8 = puVar15;
            }
          } while ((uVar14 != 0) && (uVar14 = uVar14 - 1, puVar7 = puVar7 + 1, uVar14 != 0));
        }
      }
      uVar3 = puVar11[3];
      if (!(bool)in_AZflag) {
        uVar3 = puVar11[3] + 4;
      }
      puVar11 = (uint *)((int)puVar15 + (uVar3 & 0xfffffffc));
      goto LAB_0030f086;
    }
    puVar9 = (undefined2 *)*puVar11;
    uVar3 = puVar11[1];
    puVar11 = puVar15;
    if ((undefined2 *)0xffa14000 < puVar9 || puVar9 < &LAB_ffa00000) {
      if ((int)uVar3 < 1) goto LAB_0030f086;
      if (!(bool)in_AZflag) {
        do {
          *(undefined1 *)puVar9 = 0;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          puVar9 = (undefined2 *)((int)puVar9 + 1);
        } while (uVar3 != 0);
        goto LAB_0030f086;
      }
      puVar10 = puVar9;
      if (uVar3 != 1) {
        if ((int)uVar3 >> 1 != 1) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
        puVar10 = puVar9 + 1;
        *puVar9 = 0;
        if ((uVar3 & 1) != 1) goto LAB_0030f086;
      }
      *(undefined1 *)puVar10 = 0;
      goto LAB_0030f086;
    }
    DAT_00440de0 = 0;
    iVar4 = FUN_0030ee24(&DAT_00440de0,puVar9,uVar3,1);
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0030f296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffffb);
      return uVar5;
    }
  } while( true );
}


END_FUNCTION
SCALAR 0x8 AT 0030f084 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 0030f094 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00310924 INSTRUCTION LOAD R7 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 00311b88 INSTRUCTION LOAD R7 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 00312bf0 INSTRUCTION LOAD R7 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0031357a INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 0031545c INSTRUCTION _LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 003154a8 INSTRUCTION _STORE [FP + 0x8] = R0
SCALAR 0x8 AT 003154d2 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0031554c INSTRUCTION _STORE [FP + 0x8] = R0
SCALAR 0x8 AT 00315576 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00315922 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 00319228 INSTRUCTION LOAD R2 = W [P0 + 0x8] (X)
FUNCTION 0031920a firmware_entry_0031920a success=true

void firmware_entry_0031920a(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x888);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x6c) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x6c) + 8),3);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00319332 INSTRUCTION LOAD R1 = 0x8
FUNCTION 003192e4 firmware_entry_003192e4 success=true

void firmware_entry_003192e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x884) = 0;
  func_0x0031dae0(0,0x31929c);
  iVar1 = FUN_00325a76(0x88);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = func_0x00331fa4(iVar1,*(undefined4 *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x888) = uVar2;
  FUN_0032ece8(uVar2,10,0x14);
  iVar1 = *(int *)(param_1 + 0x888);
  *(undefined2 *)(iVar1 + 0x72) = 0x68;
  *(undefined2 *)(iVar1 + 0x70) = 8;
  func_0x00331dde(iVar1);
  uRam00440e10 = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x888) + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x88c) = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003193d8 INSTRUCTION LOAD R2 = W [P0 + 0x8] (X)
FUNCTION 00319368 firmware_entry_00319368 success=true

void firmware_entry_00319368(int param_1)

{
  int iVar1;
  
  FUN_0034e0d4(*(undefined4 *)(param_1 + 0x28));
  FUN_0034eb60(*(undefined4 *)(param_1 + 0x28),0,10,s_POWER_OFF_0043581c);
  if (*(int *)(param_1 + 0x884) == 0) {
    FUN_0034eb60(*(undefined4 *)(param_1 + 0x28),0,0x1e,s_Saving_Parameters_0043582c);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = *(int *)(param_1 + 0x888);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x6c) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x6c) + 8),3);
  }
  *(undefined4 *)(param_1 + 0x888) = 0;
  FUN_0034eb60(*(undefined4 *)(param_1 + 0x28),0,0x1e,s_Save_Complete_00435840);
  FUN_0034eb60(*(undefined4 *)(param_1 + 0x28),0,0x28,0x4357f8);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003194d2 INSTRUCTION LOAD R0 = W [P1 + 0x8] (X)
FUNCTION 00319484 firmware_entry_00319484 success=true

void firmware_entry_00319484(short *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  sVar1 = *param_1;
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      puVar3 = (undefined4 *)FUN_00325a76(0x890);
      puVar4 = (undefined4 *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        FUN_00325a24(puVar3,0x890);
        puVar3[6] = 0;
        puVar3[0x220] = &DAT_004001e0;
        *puVar3 = s_NO_NAME_004357f0;
        *(undefined4 **)((int)puVar3 + 0x16) = puVar3;
        FUN_0033eaac(puVar3 + 0xb);
        puVar3[0x220] = &DAT_00402548;
        puVar4 = puVar3;
      }
      uVar2 = 0;
      DAT_00419018 = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        uVar2 = (**(code **)(puVar4[0x220] + 0xc))
                          ((int)puVar4 + (int)*(short *)(puVar4[0x220] + 8),param_1);
      }
      goto LAB_003194d8;
    }
    if (sVar1 == 2) {
      uVar2 = 0;
      if (DAT_00419018 != (undefined4 *)0x0) {
        uVar2 = (**(code **)(DAT_00419018[0x220] + 0xc))
                          ((int)DAT_00419018 + (int)*(short *)(DAT_00419018[0x220] + 8),param_1);
      }
      puVar4 = DAT_00419018;
      if (DAT_00419018 != (undefined4 *)0x0) {
        DAT_00419018[0x220] = &DAT_004001e0;
        FUN_0033e7c4(puVar4 + 0xb,2);
        FUN_003259f8(puVar4);
      }
      DAT_00419018 = (undefined4 *)0x0;
      goto LAB_003194d8;
    }
  }
  uVar2 = 0;
  if (DAT_00419018 != (undefined4 *)0x0) {
    uVar2 = (**(code **)(DAT_00419018[0x220] + 0xc))
                      ((int)DAT_00419018 + (int)*(short *)(DAT_00419018[0x220] + 8),param_1);
  }
LAB_003194d8:
                    /* WARNING: Could not recover jumptable at 0x003194e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0031950a INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 003195a0 INSTRUCTION LOAD R0 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 003198a4 INSTRUCTION LOAD R1 = 0x8
FUNCTION 00319808 firmware_entry_00319808 success=true

void firmware_entry_00319808(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam0043f90d == '\x01') {
    if (DAT_004094f0 == 2) {
      FUN_0035b288(&DAT_00446db8,2);
    }
    else {
      FUN_0035b288(&DAT_00446db8,1);
    }
  }
  *(undefined2 *)(param_1 + 0x884) = DAT_200200f8;
  *(undefined2 *)(param_1 + 0x886) = DAT_200efffc;
  func_0x0031da6c(0,0x319740);
  iVar1 = FUN_00325a76(0x88);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = func_0x00331fa4(iVar1,*(undefined4 *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x888) = uVar2;
  FUN_0032ece8(uVar2,10,0x22);
  iVar1 = *(int *)(param_1 + 0x888);
  *(undefined2 *)(iVar1 + 0x72) = 0x68;
  *(undefined2 *)(iVar1 + 0x70) = 8;
  func_0x00331dde(iVar1);
  *(undefined2 *)(*(int *)(param_1 + 0x888) + 0x80) = 1;
  func_0x00331e6c(*(undefined4 *)(param_1 + 0x888),100);
  func_0x00331df8(*(undefined4 *)(param_1 + 0x888),0);
  FUN_0030ebb8(6);
  func_0x0031da6c(1,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00319924 INSTRUCTION LOAD R2 = W [P0 + 0x8] (X)
FUNCTION 003198f0 firmware_entry_003198f0 success=true

void firmware_entry_003198f0(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (iRam00419020 == 0) {
    iRam00419020 = 1;
    func_0x0030d8f8();
  }
  iVar1 = *(int *)(param_1 + 0x888);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x6c) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x6c) + 8),3);
                    /* WARNING: Could not recover jumptable at 0x00319932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0031993c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0031bdf8 INSTRUCTION STORE [P1 + 0x8] = R1
FUNCTION 0031bdd4 FUN_0031bdd4 success=true

void FUN_0031bdd4(int *param_1,int param_2,int param_3,int param_4)

{
  *param_1 = param_2;
  param_1[3] = param_2;
  param_1[2] = param_2;
  param_1[5] = param_4;
  param_1[1] = param_2 + param_3 * 4;
  param_1[4] = 0;
  param_1[6] = (int)&DAT_00402c68;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0031bfb0 INSTRUCTION STORE [P1 + 0x8] = R2
FUNCTION 0031bf9c FUN_0031bf9c success=true

void FUN_0031bf9c(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = &DAT_00402c78;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0031c642 INSTRUCTION ADD P1 += 0x8
SCALAR 0x8 AT 0031d734 INSTRUCTION STORE [P1 + 0x8] = R0
FUNCTION 0031d70c FUN_0031d70c success=true

void FUN_0031d70c(void)

{
  DAT_ffb00644 = &DAT_ff80255c;
  DAT_ffb00648 = &DAT_ff802630;
  DAT_ffb0064c = &DAT_ff802704;
  DAT_ffb00650 = &DAT_ff8027d8;
  FUN_00302e18();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0031d79c INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 0031d7b6 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 0031d7ec INSTRUCTION LOAD R0 = 0x8
FUNCTION 0031d7e8 firmware_entry_0031d7e8 success=true

void firmware_entry_0031d7e8(void)

{
  FUN_0032b2b0(8);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0031d89a INSTRUCTION LOAD R0 = [P4 + 0x8]
FUNCTION 0031d7fc firmware_entry_0031d7fc success=true

void firmware_entry_0031d7fc(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar8;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (1 < iVar2) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  (&DAT_00440ed4)[iVar2] = 1;
  puVar9 = (undefined4 *)0x419130;
  iVar5 = 2;
  pcVar8 = &DAT_00440ed0;
  do {
    pcVar7 = pcVar8 + 1;
    if (*pcVar8 == '\0') {
      if (*(int *)(param_1 + 0x1c) != 0) {
        iVar3 = puVar9[1];
        piVar6 = (int *)*puVar9;
        if (0 < iVar3) {
          while (iVar2 != *piVar6) {
            if ((iVar3 == 0) || (iVar3 = iVar3 + -1, piVar6 = piVar6 + 1, iVar3 == 0))
            goto code_r0x0031d874;
          }
          puVar9[2] = *(int *)(param_1 + 0x1c);
        }
      }
code_r0x0031d874:
      iVar3 = puVar9[1];
      bVar1 = true;
      piVar6 = (int *)*puVar9;
      if (0 < iVar3) {
        do {
          if ((&DAT_00440ed4)[*piVar6] == '\0') {
            bVar1 = false;
            goto LAB_0031d896;
          }
        } while ((iVar3 != 0) && (iVar3 = iVar3 + -1, piVar6 = piVar6 + 1, iVar3 != 0));
        bVar1 = true;
      }
LAB_0031d896:
      if (bVar1) {
        pcVar4 = (code *)puVar9[2];
        *pcVar8 = '\x01';
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)();
        }
      }
    }
    iVar5 = iVar5 + -1;
    puVar9 = puVar9 + 3;
    pcVar8 = pcVar7;
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0031d846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  } while( true );
}


END_FUNCTION
SCALAR 0x8 AT 0031d8b2 INSTRUCTION STORE [P4 + 0x8] = R1
SCALAR 0x8 AT 0031d98a INSTRUCTION LOAD R0 = [P4 + 0x8]
FUNCTION 0031d8c4 firmware_entry_0031d8c4 success=true

void firmware_entry_0031d8c4(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (1 < iVar2) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  puVar9 = (undefined4 *)0x419148;
  (&DAT_00440edc)[iVar2] = 1;
  iVar5 = 2;
  pcVar7 = &DAT_00440ed8;
  do {
    pcVar8 = pcVar7 + 1;
    if (*pcVar7 == '\0') {
      if (*(int *)(param_1 + 0x1c) != 0) {
        iVar3 = puVar9[1];
        piVar6 = (int *)*puVar9;
        if (0 < iVar3) {
          while (iVar2 != *piVar6) {
            if ((iVar3 == 0) || (iVar3 = iVar3 + -1, piVar6 = piVar6 + 1, iVar3 == 0))
            goto code_r0x0031d940;
          }
          puVar9[2] = *(int *)(param_1 + 0x1c);
        }
      }
code_r0x0031d940:
      iVar3 = puVar9[1];
      bVar1 = true;
      piVar6 = (int *)*puVar9;
      if (0 < iVar3) {
        do {
          if ((&DAT_00440edc)[*piVar6] == '\0') {
            bVar1 = false;
            goto LAB_0031d962;
          }
        } while ((iVar3 != 0) && (iVar3 = iVar3 + -1, piVar6 = piVar6 + 1, iVar3 != 0));
        bVar1 = true;
      }
LAB_0031d962:
      if (bVar1) {
        pcVar4 = (code *)puVar9[2];
        *pcVar7 = '\x01';
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)();
        }
      }
      iVar3 = 2;
      pcVar7 = &DAT_00440ed8;
      do {
        if (*pcVar7 == '\0') {
          bVar1 = false;
          goto LAB_0031d976;
        }
      } while ((iVar3 != 0) && (iVar3 = iVar3 + -1, pcVar7 = pcVar7 + 1, iVar3 != 0));
      bVar1 = true;
LAB_0031d976:
      if (bVar1) {
        DAT_0041912c = 1;
      }
    }
    iVar5 = iVar5 + -1;
    puVar9 = puVar9 + 3;
    pcVar7 = pcVar8;
    if (iVar5 == 0) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
  } while( true );
}


END_FUNCTION
SCALAR 0x8 AT 0031d9a2 INSTRUCTION STORE [P4 + 0x8] = R1
SCALAR 0x8 AT 0031dc0e INSTRUCTION STORE [P1 + 0x8] = R0
FUNCTION 0031dbf0 FUN_0031dbf0 success=true

void FUN_0031dbf0(undefined4 *param_1)

{
  *param_1 = DAT_004410f8;
  param_1[1] = (uint)DAT_004410fc;
  param_1[2] = (uint)DAT_00441107;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0031ea12 INSTRUCTION ADD R0 += 0x8
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
SCALAR 0x8 AT 0031eac6 INSTRUCTION ADD R0 += 0x8
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
SCALAR 0x8 AT 0031eb52 INSTRUCTION ADD R0 += 0x8
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
SCALAR 0x8 AT 0031eb90 INSTRUCTION _STORE [FP + 0x8] = R2
SCALAR 0x8 AT 0031ebc6 INSTRUCTION ADD R7 += 0x8
SCALAR 0x8 AT 0031ebdc INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0031ebe4 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 0031ec86 INSTRUCTION STORE [FP + 0x8] = R1
SCALAR 0x8 AT 0031ec98 INSTRUCTION LOAD R2 = [FP + 0x8]
SCALAR 0x8 AT 0031ec9a INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0031eca2 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0031ecb0 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0031ecc0 INSTRUCTION LOAD R2 = [FP + 0x8]
SCALAR 0x8 AT 0031ecc2 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0031ecca INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0031ef1e INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 0031efd0 INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT 0031f052 INSTRUCTION ADD R0 += 0x8
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
SCALAR 0x8 AT 0031f0da INSTRUCTION ADD R0 += 0x8
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
SCALAR 0x8 AT 0031f162 INSTRUCTION ADD R0 += 0x8
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
SCALAR 0x8 AT 0031f1ec INSTRUCTION ADD R0 += 0x8
FUNCTION 0031f18c FUN_0031f18c success=true

bool FUN_0031f18c(undefined4 param_1,undefined4 param_2)

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
SCALAR 0x8 AT 0031f236 INSTRUCTION STORE [P5 + 0x8] = R0
FUNCTION 0031f214 FUN_0031f214 success=true

void FUN_0031f214(undefined4 *param_1)

{
  undefined1 auStack_14 [8];
  undefined4 local_c;
  
  FUN_0031dbf0(auStack_14);
  *param_1 = DAT_004192bc;
  param_1[2] = DAT_004192c0;
  param_1[4] = local_c;
  param_1[1] = DAT_004192c8;
  param_1[3] = 1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0031f414 INSTRUCTION ASH|| R0 = R0 >>> 0x8
SCALAR 0x8 AT 0031f436 INSTRUCTION LSH R2 = R1 << 0x8
SCALAR 0x8 AT 0031f43c INSTRUCTION ASH|| R0 = R1 >>> 0x8
SCALAR 0x8 AT 0031f474 INSTRUCTION STORE W [P4 + 0x8] = R0
SCALAR 0x8 AT 0031f966 INSTRUCTION LOAD R0 = 0x8
FUNCTION 0031f95c FUN_0031f95c success=true

undefined4 FUN_0031f95c(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 8;
}


END_FUNCTION
SCALAR 0x8 AT 0031fafc INSTRUCTION ADD P4 += 0x8
FUNCTION 0031fad8 FUN_0031fad8 success=true

void FUN_0031fad8(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte local_14 [4];
  ushort local_10;
  ushort local_e;
  ushort local_c;
  
  piVar1 = (int *)(&DAT_00441a1c)[param_1];
  local_14[0] = *(byte *)(piVar1 + 2);
  local_14[1] = *(undefined1 *)((int)piVar1 + 9);
  local_14[2] = *(undefined1 *)((int)piVar1 + 10);
  local_14[3] = *(undefined1 *)((int)piVar1 + 0xb);
  iVar6 = 4;
  pbVar4 = local_14;
  do {
    if (*pbVar4 == 0xff) {
      *pbVar4 = (byte)((param_2 & 7) << 4) | (byte)param_3 & 0xf;
    }
  } while ((iVar6 != 0) && (iVar6 = iVar6 + -1, pbVar4 = pbVar4 + 1, iVar6 != 0));
  iVar5 = piVar1[1];
  iVar6 = (**(code **)(piVar1[4] + 0x34))((int)piVar1 + (int)*(short *)(piVar1[4] + 0x30));
  iVar3 = 0;
  uVar2 = *(undefined4 *)(*piVar1 + (param_3 + iVar6 * param_2) * 4);
  bVar7 = (byte)uVar2;
  bVar8 = (byte)((uint)uVar2 >> 8);
  switch(iVar5) {
  case 1:
  case 2:
  case 3:
  case 8:
    local_10 = CONCAT11(local_10._1_1_,bVar7);
    iVar3 = 1;
    break;
  case 4:
    local_e = (ushort)(bVar7 >> 4) | (bVar7 & 0xf) << 8;
    local_10 = (ushort)(bVar8 >> 4) | (bVar8 & 0xf) << 8;
    iVar3 = 4;
    break;
  case 5:
    bVar9 = (byte)((uint)uVar2 >> 0x10);
    local_e = (ushort)(bVar8 >> 4) | (bVar8 & 0xf) << 8;
    local_c = (ushort)(bVar7 >> 4) | (bVar7 & 0xf) << 8;
    local_10 = (ushort)(bVar9 >> 4) | (bVar9 & 0xf) << 8;
    iVar3 = 6;
    break;
  case 6:
    break;
  case 7:
    local_10 = bVar7 & 0xf | (ushort)(bVar7 >> 4) << 8;
    iVar3 = 2;
  }
  if (iVar3 != 0) {
    FUN_0031fa2c(local_14);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0031fbba INSTRUCTION LSHIFT R2 <<= 0x8
SCALAR 0x8 AT 0031fbbe INSTRUCTION LSHIFT R1 <<= 0x8
SCALAR 0x8 AT 0031fbe4 INSTRUCTION LSHIFT R1 <<= 0x8
SCALAR 0x8 AT 0031fbf6 INSTRUCTION LSH R7 = R0 << 0x8
SCALAR 0x8 AT 0031fbfc INSTRUCTION LSHIFT R1 <<= 0x8
SCALAR 0x8 AT 0031fc1e INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT 0031fe74 INSTRUCTION _LOAD R3 = [FP + 0x8]
SCALAR 0x8 AT 0031feb4 INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT 0031feba INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 0031fefc INSTRUCTION LSH R0 = R1 << 0x8
SCALAR 0x8 AT 0031ff02 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 0032015a INSTRUCTION LSH|| R1 = R1 << 0x8
SCALAR 0x8 AT 003201ee INSTRUCTION LSH|| R2 = R0 << 0x8
SCALAR 0x8 AT 00320390 INSTRUCTION ADD P5 += 0x8
FUNCTION 0032036c FUN_0032036c success=true

void FUN_0032036c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  if (0 < DAT_00441a18) {
    iVar9 = 0;
    piVar8 = &DAT_00441a1c;
    do {
      piVar1 = (int *)*piVar8;
      iVar2 = (**(code **)(piVar1[4] + 0x2c))((int)piVar1 + (int)*(short *)(piVar1[4] + 0x28));
      iVar3 = (**(code **)(piVar1[4] + 0x34))((int)piVar1 + (int)*(short *)(piVar1[4] + 0x30));
      FUN_0032ac10();
      iVar6 = piVar1[3];
      *(undefined1 *)(piVar1 + 3) = 0;
      FUN_0032ac64();
      if (0 < iVar2) {
        iVar7 = 0;
        if ((char)iVar6 == '\0') {
          do {
            if (param_1 == 0) {
              if (0 < iVar3) {
                iVar6 = 0;
                do {
                  iVar4 = (**(code **)(piVar1[4] + 0x34))
                                    ((int)piVar1 + (int)*(short *)(piVar1[4] + 0x30));
                  iVar4 = *(int *)(*piVar1 + (iVar6 + iVar4 * iVar7) * 4);
                  iVar5 = (**(code **)(piVar1[4] + 0x14))
                                    ((int)piVar1 + (int)*(short *)(piVar1[4] + 0x10),iVar7,iVar6);
                  if (iVar4 != iVar5) {
                    iVar4 = (**(code **)(piVar1[4] + 0x34))
                                      ((int)piVar1 + (int)*(short *)(piVar1[4] + 0x30));
                    *(int *)(*piVar1 + (iVar6 + iVar4 * iVar7) * 4) = iVar5;
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < iVar3);
              }
            }
            else if (0 < iVar3) {
              iVar6 = 0;
              do {
                iVar4 = (**(code **)(piVar1[4] + 0x34))
                                  ((int)piVar1 + (int)*(short *)(piVar1[4] + 0x30));
                iVar4 = *(int *)(*piVar1 + (iVar6 + iVar4 * iVar7) * 4);
                iVar5 = (**(code **)(piVar1[4] + 0x14))
                                  ((int)piVar1 + (int)*(short *)(piVar1[4] + 0x10),iVar7,iVar6);
                if (iVar4 != iVar5) {
                  iVar4 = (**(code **)(piVar1[4] + 0x34))
                                    ((int)piVar1 + (int)*(short *)(piVar1[4] + 0x30));
                  *(int *)(*piVar1 + (iVar6 + iVar4 * iVar7) * 4) = iVar5;
                  FUN_0031fad8(iVar9,iVar7,iVar6);
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar3);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar2);
        }
        else {
          do {
            if (0 < iVar3) {
              iVar6 = 0;
              do {
                iVar4 = (**(code **)(piVar1[4] + 0x34))
                                  ((int)piVar1 + (int)*(short *)(piVar1[4] + 0x30));
                iVar4 = *(int *)(*piVar1 + (iVar6 + iVar4 * iVar7) * 4);
                iVar5 = (**(code **)(piVar1[4] + 0x14))
                                  ((int)piVar1 + (int)*(short *)(piVar1[4] + 0x10),iVar7,iVar6);
                if (iVar4 != iVar5) {
                  iVar4 = (**(code **)(piVar1[4] + 0x34))
                                    ((int)piVar1 + (int)*(short *)(piVar1[4] + 0x30));
                  *(int *)(*piVar1 + (iVar6 + iVar4 * iVar7) * 4) = iVar5;
                }
                FUN_0031fad8(iVar9,iVar7,iVar6);
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar3);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar2);
        }
      }
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar9 < DAT_00441a18);
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00320684 INSTRUCTION ADD P0 += 0x8
SCALAR 0x8 AT 003206a4 INSTRUCTION STORE [FP + 0x8] = R7
SCALAR 0x8 AT 003208d4 INSTRUCTION LSHIFT R2 <<= 0x8
SCALAR 0x8 AT 003208e6 INSTRUCTION LSH R3 = R2 << 0x8
SCALAR 0x8 AT 00320976 INSTRUCTION LSHIFT R2 <<= 0x8
SCALAR 0x8 AT 00320988 INSTRUCTION LSH R4 = R2 << 0x8
SCALAR 0x8 AT 0032099a INSTRUCTION LSH R4 = R1 << 0x8
SCALAR 0x8 AT 00320a40 INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 00320a74 INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT 00320a84 INSTRUCTION LSH|| R6 = R1 << 0x8
SCALAR 0x8 AT 00320a9c INSTRUCTION LSH|| R6 = R1 << 0x8
SCALAR 0x8 AT 00320ab4 INSTRUCTION LSH|| R0 = R1 << 0x8
SCALAR 0x8 AT 00320af6 INSTRUCTION LSHIFT R2 <<= 0x8
SCALAR 0x8 AT 00320b0a INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT 00320b22 INSTRUCTION LSHIFT R3 <<= 0x8
SCALAR 0x8 AT 00320b36 INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT 00320b4a INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT 00320b68 INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT 00322e6c INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 00322ef6 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 00322f82 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 0032300e INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 0032309a INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 00323126 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 003231b2 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 0032323e INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 003232ca INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 00323354 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 003233e0 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 0032346c INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 003234f8 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 00323582 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 0032360e INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 0032369a INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 00323726 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 003237b2 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 0032383e INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 003238cc INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 00323958 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 003239e2 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 00323a70 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 00323afc INSTRUCTION ADD P3 += 0x8
SCALAR 0x8 AT 00323b8a INSTRUCTION ADD P3 += 0x8
SCALAR 0x8 AT 00323c18 INSTRUCTION ADD P3 += 0x8
SCALAR 0x8 AT 00323ca6 INSTRUCTION ADD P3 += 0x8
SCALAR 0x8 AT 00323d34 INSTRUCTION ADD P3 += 0x8
SCALAR 0x8 AT 00323dc0 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 00323e4e INSTRUCTION ADD P3 += 0x8
SCALAR 0x8 AT 0032402e INSTRUCTION ADD R2 += 0x8
FUNCTION 00324010 FUN_00324010 success=true

undefined4 FUN_00324010(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 != (undefined1 *)0x0) && (param_2 != 0)) {
    uVar1 = FUN_00325070(param_2,&stack0x00000008,&LAB_00325264,&stack0x00000000);
    *param_1 = 0;
  }
  return uVar1;
}


END_FUNCTION
SCALAR 0x8 AT 00324068 INSTRUCTION ADD R2 += 0x8
FUNCTION 0032404c FUN_0032404c success=true

undefined4 FUN_0032404c(undefined1 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (((param_1 != (undefined1 *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar1 = FUN_00325070(param_2,param_3,&LAB_00325264,&stack0x00000000);
    *param_1 = 0;
  }
  return uVar1;
}


END_FUNCTION
SCALAR 0x8 AT 003240ba INSTRUCTION LOAD R1 = [P5 + 0x8]
FUNCTION 00324084 FUN_00324084 success=true

char * FUN_00324084(int param_1,code *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar3 = *(char **)(param_1 + 0x1c);
  do {
    pcVar5 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar5;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + (-1 - (int)*(char **)(param_1 + 0x1c));
  if (*(char *)(param_1 + 0xc) == 's') {
    iVar2 = *(int *)(param_1 + 4);
    if (-1 < iVar2) {
      pcVar5 = (char *)((int)pcVar5 * (uint)((int)pcVar5 < iVar2) +
                       iVar2 * (uint)((int)pcVar5 >= iVar2));
    }
    iVar2 = *(int *)(param_1 + 8) - (int)pcVar5;
    pcVar6 = (char *)0x0;
    pcVar4 = (char *)0x0;
  }
  else {
    pcVar3 = *(char **)(param_1 + 0x18);
    do {
      pcVar6 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + (-1 - (int)*(char **)(param_1 + 0x18));
    pcVar3 = *(char **)(param_1 + 0x20);
    do {
      pcVar4 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar4;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + (-1 - (int)*(char **)(param_1 + 0x20));
    if (*(int *)(param_1 + 0x14) < 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    if (*(int *)(param_1 + 0x10) < 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    iVar2 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar2 = ((((((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x14)) - (int)pcVar4) - (int)pcVar5)
                - *(int *)(param_1 + 0x10)) - (int)pcVar6) - *(int *)(param_1 + 0x2c)) -
              (uint)(*(int *)(param_1 + 0x28) != 0);
    }
  }
  iVar2 = iVar2 * (uint)(0 < iVar2);
  pcVar3 = pcVar4 + (int)(pcVar5 + (int)(pcVar6 + iVar2) +
                         *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14));
  if ((*(char *)(param_1 + 0x30) != '\0') && (0 < iVar2)) {
    *(int *)(param_1 + 0x10) = iVar2 + *(int *)(param_1 + 0x10);
    iVar2 = 0;
  }
  if ((*(char *)(param_1 + 0x31) == '\0') && (0 < iVar2)) {
    FUN_00324360(param_2,param_3,0x20,iVar2);
  }
  if (0 < (int)pcVar6) {
    FUN_0032522c(param_2,param_3,*(undefined4 *)(param_1 + 0x18),pcVar6);
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    FUN_00324360(param_2,param_3,0x30,*(int *)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x28) == 1) {
    (*param_2)(param_3,0x2e);
    FUN_00324360(param_2,param_3,0x30,*(undefined4 *)(param_1 + 0x2c));
    pcVar3 = pcVar3 + *(int *)(param_1 + 0x2c) + 1;
  }
  FUN_0032522c(param_2,param_3,*(undefined4 *)(param_1 + 0x1c),pcVar5);
  if (*(int *)(param_1 + 0x28) == 2) {
    FUN_00324360(param_2,param_3,0x30,*(undefined4 *)(param_1 + 0x2c));
    (*param_2)(param_3,0x2e);
    pcVar3 = pcVar3 + *(int *)(param_1 + 0x2c) + 1;
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    FUN_00324360(param_2,param_3,0x30,*(int *)(param_1 + 0x14));
  }
  if (0 < (int)pcVar4) {
    FUN_0032522c(param_2,param_3,*(undefined4 *)(param_1 + 0x20),pcVar4);
  }
  if ((*(char *)(param_1 + 0x31) != '\0') && (0 < iVar2)) {
    FUN_00324360(param_2,param_3,0x20,iVar2);
  }
  return pcVar3;
}


END_FUNCTION
SCALAR 0x8 AT 003241fe INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00324208 INSTRUCTION LOAD P0 = [P5 + 0x8]
SCALAR 0x8 AT 003245ba INSTRUCTION STORE [FP + 0x8] = R2
FUNCTION 003245a4 FUN_003245a4 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_003245a4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  undefined1 local_70 [2];
  char acStack_6e [50];
  char local_3c [2];
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined1 local_34;
  
  puVar1 = (uint *)*param_1;
  if (param_1[9] == 4) {
    *param_1 = (int)(puVar1 + 2);
    param_1[7] = (int)local_3c;
    local_3c[1] = (char)param_1[3];
    local_3c[0] = 0x4c;
    local_3a = local_3a & 0xff00;
  }
  else {
    uVar2 = *puVar1;
    *param_1 = (int)(puVar1 + 1);
    if (param_1[1] < 0) {
      param_1[1] = 6;
    }
    bVar8 = (char)param_1[3] == 'A';
    if ((uVar2 & 0x7fffffff) < 0x7f800001) {
      if ((uVar2 & 0x7fffffff) != 0x7f800000) {
        uVar4 = (int)uVar2 >> 0x17 & 0xff;
        param_1[7] = (int)local_70;
        uVar5 = uVar2 & 0x7fffff;
        if (uVar4 == 0) {
          local_70[0] = 0x30;
        }
        else {
          local_70[0] = 0x31;
        }
        if (((uVar5 == 0) && (5 < param_1[1])) && (*(char *)((int)param_1 + 0x33) == '\0')) {
          param_1[1] = 0;
        }
        else {
          iVar3 = param_1[1];
          if (((iVar3 != 0) && (iVar3 < 6)) && (iVar3 = uVar4 + iVar3 * -4 + -1, 0 < iVar3)) {
            uVar5 = FUN_ffa02c10(uVar2 & 0x80000000 | iVar3 * 0x800000);
            uVar5 = uVar5 & 0x7fffff;
          }
        }
        FUN_00324564(uVar5 << 1,6,bVar8,local_3c);
        if ((param_1[1] != 0) || (*(char *)((int)param_1 + 0x33) != '\0')) {
          param_1[5] = param_1[1];
          pcVar6 = acStack_6e;
          for (pcVar7 = local_3c; (0 < param_1[5] && (*pcVar7 != '\0')); pcVar7 = pcVar7 + 1) {
            param_1[5] = param_1[5] + -1;
            *pcVar6 = *pcVar7;
            pcVar6 = pcVar6 + 1;
          }
        }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      param_1[7] = (int)local_3c;
      if (bVar8) {
        local_3c[0] = 'I';
        local_3c[1] = 'N';
        local_3a._0_1_ = 0x46;
      }
      else {
        local_3c[0] = 'i';
        local_3c[1] = 'n';
        local_3a._0_1_ = 0x66;
      }
      if (param_1[1] < 7) {
        local_3a = (ushort)(byte)local_3a;
      }
      else if (bVar8) {
        local_34 = 0;
        local_38 = 0x494e;
        local_36 = 0x5954;
        local_3a = CONCAT11(0x49,(byte)local_3a);
      }
      else {
        local_34 = 0;
        local_38 = 0x696e;
        local_36 = 0x7974;
        local_3a = CONCAT11(0x69,(byte)local_3a);
      }
    }
    else {
      param_1[7] = (int)local_3c;
      if (bVar8) {
        local_3c[0] = 'N';
        local_3c[1] = 'A';
        local_3a = 0x4e;
      }
      else {
        local_3c[0] = 'n';
        local_3c[1] = 'a';
        local_3a = 0x6e;
      }
    }
  }
  FUN_00324084(param_1,param_2,param_3);
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003246f0 INSTRUCTION LOAD R2 = [FP + 0x8]
SCALAR 0x8 AT 00324808 INSTRUCTION ADD P1 += 0x8
SCALAR 0x8 AT 0032483c INSTRUCTION STORE [FP + 0x8] = R1
FUNCTION 0032482c FUN_0032482c success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_0032482c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  uint *puVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool in_AZflag;
  undefined1 auStack_38 [30];
  undefined1 auStack_1a [18];
  char *pcVar11;
  
  iVar8 = 100;
  cVar2 = (char)param_1[3];
  iVar7 = 1;
  iVar9 = param_1[9];
  if (cVar2 != 'd') {
    iVar7 = 0x69;
  }
  bVar14 = cVar2 == 'd';
  uVar4 = param_1[1];
  if ((int)uVar4 < 0) {
    uVar4 = 1;
    param_1[1] = 1;
  }
  if (iVar9 == 3) {
    piVar1 = (int *)*param_1;
    *param_1 = *param_1 + 8;
    iVar8 = *piVar1;
    iVar7 = piVar1[1];
  }
  else {
    puVar12 = (uint *)*param_1 + 1;
    uVar4 = *(uint *)*param_1;
    if (iVar9 == 2) {
      *param_1 = (int)puVar12;
    }
    else {
      *param_1 = (int)puVar12;
    }
  }
  if (bVar14 || cVar2 == 'i') {
    if (iVar9 == 3) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    if ((int)uVar4 < 0) {
      param_1[6] = (int)&DAT_0043650c;
    }
    else if ((char)param_1[0xd] == '\0') {
      if (*(char *)((int)param_1 + 0x32) != '\0') {
        param_1[6] = (int)&DAT_00436514;
      }
    }
    else {
      param_1[6] = (int)&DAT_00436510;
    }
    if (((int)uVar4 < 0) && (uVar4 != 0x80000000)) {
      uVar4 = -uVar4;
    }
  }
  if ((char)param_1[3] == 'p') {
    *(undefined1 *)(param_1 + 3) = 0x78;
    bVar15 = false;
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[1] = 8;
  }
  else {
    if (iVar9 == 3) {
      bVar15 = iVar8 == 0 && in_AZflag;
    }
    else {
      bVar15 = uVar4 == 0;
    }
    if ((param_1[1] == 0) && (bVar15)) {
      if ((char)param_1[3] != 'o') {
        return 0;
      }
      if (*(char *)((int)param_1 + 0x33) == '\0') {
        return 0;
      }
    }
    if ((!bVar14 && cVar2 != 'i') && (param_1[9] == 1)) {
      uVar4 = uVar4 & 0xffff;
    }
  }
  if ((char)param_1[0xc] != '\0') {
    pcVar11 = (char *)param_1[6];
    do {
      pcVar10 = pcVar11 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar2 != '\0');
    iVar13 = param_1[2] - (int)(pcVar10 + (-1 - param_1[6]));
    if (param_1[1] < iVar13) {
      param_1[1] = iVar13;
    }
  }
  bVar14 = (char)param_1[3] == 'X';
  if (iVar9 == 3) {
    puVar5 = (undefined1 *)FUN_003242b4(iVar8,iVar7,param_2,bVar14,auStack_38,0x1f);
  }
  else {
    puVar5 = (undefined1 *)FUN_0032422c(uVar4,param_2,bVar14,auStack_38,0x1f);
  }
  param_1[4] = (int)(puVar5 + (param_1[1] - (int)auStack_1a));
  param_1[7] = (int)puVar5;
  if (((*(char *)((int)param_1 + 0x33) != '\0') && (auStack_1a != puVar5)) && (!bVar15)) {
    bVar3 = *(byte *)(param_1 + 3);
    if (bVar3 < 0x6f) {
      if (bVar3 == 0x58) {
        param_1[6] = (int)&DAT_0043651c;
      }
    }
    else if (bVar3 == 0x6f) {
      if (param_1[4] < 1) {
        param_1[4] = 1;
      }
    }
    else if (bVar3 == 0x78) {
      param_1[6] = (int)&DAT_00436518;
    }
  }
  uVar6 = FUN_00324084(param_1,param_3,param_4);
  return uVar6;
}


END_FUNCTION
SCALAR 0x8 AT 0032486a INSTRUCTION ADD P1 += 0x8
SCALAR 0x8 AT 003248c4 INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 003248dc INSTRUCTION LOAD P3 = [P5 + 0x8]
SCALAR 0x8 AT 0032490a INSTRUCTION LOAD R2 = [FP + 0x8]
SCALAR 0x8 AT 00324918 INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 00324a14 INSTRUCTION LOAD R7 = [P4 + 0x8]
SCALAR 0x8 AT 0032501e INSTRUCTION ADD R1 += 0x8
FUNCTION 00324a60 FUN_00324a60 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00324a60(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  bool bVar15;
  code *UNRECOVERED_JUMPTABLE;
  uint local_3c;
  int local_30;
  int local_28;
  undefined4 local_24;
  char local_20 [12];
  undefined1 local_14;
  ushort local_c;
  undefined1 local_a;
  
  puVar1 = (uint *)*param_1;
  bVar2 = *(byte *)(param_1 + 3);
  local_24 = param_1;
  if (param_1[9] == 4) {
    *param_1 = (int)(puVar1 + 2);
    param_1[7] = (int)&local_c;
    local_c = (ushort)*(byte *)(param_1 + 3) << 8 | 0x4c;
    local_a = 0;
    goto LAB_00324e9e;
  }
  uVar6 = *puVar1;
  uVar5 = uVar6 & 0x7fffffff;
  *param_1 = (int)(puVar1 + 1);
  if (uVar5 < 0x7f800001) {
    if ((int)uVar6 < 0) {
      param_1[6] = (int)&DAT_00436538;
    }
    else if ((char)param_1[0xd] == '\0') {
      if (*(char *)((int)param_1 + 0x32) != '\0') {
        param_1[6] = (int)&DAT_00436540;
      }
    }
    else {
      param_1[6] = (int)&DAT_0043653c;
    }
    bVar15 = false;
    if (uVar5 == 0x7f800000) {
      if (((bVar2 == 0x66) || (bVar2 == 0x65)) || (bVar2 == 0x67)) {
        param_1[7] = (int)&DAT_0043654c;
      }
      else {
        param_1[7] = (int)&DAT_00436550;
      }
      bVar15 = true;
    }
  }
  else {
    if (((bVar2 == 0x66) || (bVar2 == 0x65)) || (bVar2 == 0x67)) {
      param_1[7] = (int)&DAT_00436544;
    }
    else {
      param_1[7] = (int)&DAT_00436548;
    }
    bVar15 = true;
  }
  if (bVar15) goto LAB_00324e9e;
  local_20[0] = '\0';
  local_14 = 0;
  if (param_1[1] < 0) {
    param_1[1] = 6;
  }
  if ((uVar6 & 0x80000000) == 1) {
    uVar6 = uVar5;
  }
  uVar5 = (uVar6 & 0x7f800000) >> 0x17;
  bVar15 = uVar5 == 0;
  if (!bVar15) {
    uVar7 = FUN_ffa03270(uVar5 - 0x7f);
    FUN_ffa03068(uVar7,0x3e9a209b);
    FUN_ffa02b74();
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  FUN_ffa03c54(uVar6,0x49742400);
  uVar5 = 7;
  if (bVar15) {
    uVar5 = 6;
  }
  iVar9 = uVar5 - 6;
  if (bVar2 < 0x47) {
    bVar15 = false;
    if (((0x44 < bVar2) && (local_28 = 2, bVar2 != 0x45)) && (bVar2 == 0x46)) {
      local_28 = 0;
    }
  }
  else if (bVar2 == 0x47) {
LAB_00324f5a:
    if (param_1[1] == 0) {
      param_1[1] = 1;
    }
    if ((iVar9 < -4) || (param_1[1] <= iVar9)) {
      param_1[1] = param_1[1] + -1;
      local_28 = 2;
      if (bVar2 == 0x67) {
        local_28 = 1;
      }
    }
    else {
      param_1[1] = (param_1[1] - iVar9) + -1;
      local_28 = 0;
    }
    bVar15 = false;
    if (*(char *)((int)param_1 + 0x33) == '\0') {
      bVar15 = true;
    }
  }
  else if (bVar2 < 0x66) {
    bVar15 = false;
    if (bVar2 == 0x65) {
      local_28 = 1;
    }
  }
  else {
    local_28 = 0;
    bVar15 = false;
    if ((bVar2 != 0x66) && (bVar2 == 0x67)) goto LAB_00324f5a;
  }
  if (local_28 == 0) {
    if ((iVar9 < 0) || (iVar14 = 10, iVar9 + param_1[1] < 10)) {
      iVar14 = iVar9 + param_1[1] + 1;
    }
  }
  else {
    iVar14 = param_1[1] + 1;
    if (9 < iVar14) {
      iVar14 = 10;
    }
  }
  iVar11 = 0;
  if (-1 < iVar14) {
    local_30 = 0;
    bVar3 = true;
    local_3c = uVar5;
    do {
      uVar10 = local_3c;
      if (iVar14 < (int)local_3c) {
        uVar10 = iVar14 + 1;
      }
      if (bVar3) {
        if (uVar10 < local_3c) {
          uVar6 = FUN_ffa02e14(uVar6,*(undefined4 *)((local_3c - uVar10) * 4 + 0x436570));
        }
        local_3c = 7;
        bVar3 = false;
      }
      else {
        uVar6 = FUN_ffa03068(*(undefined4 *)(uVar10 * 4 + 0x436570),uVar6);
      }
      iVar14 = iVar14 - uVar10;
      uVar7 = FUN_ffa03c10(uVar6);
      uVar8 = FUN_ffa0370c();
      uVar6 = FUN_ffa031f8(uVar6,uVar8);
      iVar11 = local_30 + uVar10;
      if (uVar10 != 0) {
        local_30 = local_30 + uVar10;
        UNRECOVERED_JUMPTABLE = (code *)0x324d02;
        cVar4 = FUN_ffa03974(uVar7,10);
        local_20[local_30 + -1] = (char)uVar7 + cVar4 * -10 + '0';
                    /* WARNING: Could not recover jumptable at 0x00324d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        if ((uVar10 != 0) && (uVar10 != 1)) {
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
      local_30 = iVar11;
    } while (-1 < iVar14);
  }
  uVar6 = 0;
  if (iVar11 != 0) {
    iVar14 = iVar11 + -1;
    if ('4' < local_20[iVar11 + -1]) {
      if (iVar14 == 0) {
        iVar11 = iVar11 + 1;
        iVar9 = uVar5 - 5;
        local_20[0] = '1';
      }
      else {
        iVar14 = iVar11 + -2;
        local_20[iVar11 + -2] = local_20[iVar11 + -2] + '\x01';
      }
    }
    cVar4 = local_20[iVar14];
    while (cVar4 == ':') {
      if (iVar14 == 0) {
        local_20[0] = '1';
        iVar9 = iVar9 + 1;
        iVar12 = 0;
      }
      else {
        local_20[iVar14] = '0';
        iVar12 = iVar14 + -1;
        local_20[iVar14 + -1] = local_20[iVar14 + -1] + '\x01';
      }
      iVar14 = iVar12;
      cVar4 = local_20[iVar12];
    }
    uVar6 = iVar11 - 1;
  }
  if (bVar15) {
    iVar14 = uVar6 - 1;
    pcVar13 = local_20 + (uVar6 - 1);
    if (1 < uVar6) {
      do {
        uVar5 = uVar6 - 1;
        if ((*pcVar13 != '0') || (uVar6 = uVar5, iVar14 == 0)) break;
        iVar14 = iVar14 + -1;
        pcVar13 = pcVar13 + -1;
      } while (iVar14 != 0);
    }
    if (((uVar6 == 1) && (local_20[0] == '0')) || (uVar6 == 0)) {
      param_1[7] = (int)&DAT_00436554;
      goto LAB_00324e9e;
    }
  }
  if (local_28 != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  uVar5 = iVar9 + 1;
  iVar14 = param_1[1];
  if (((iVar14 == 0) && (*(char *)((int)param_1 + 0x33) == '\0')) ||
     ((bVar15 && ((int)uVar6 <= (int)uVar5)))) {
    if ((int)uVar5 < 1) {
      param_1[7] = (int)&DAT_00436554;
    }
    else {
      if (uVar6 < uVar5) {
        local_20[uVar6] = '\0';
        param_1[5] = uVar5 - uVar6;
      }
      else {
        local_20[uVar5] = '\0';
      }
      param_1[7] = (int)local_20;
    }
  }
  else {
    if (((int)uVar5 < 1) || (uVar6 <= uVar5)) {
      if ((int)uVar5 < 1) {
        param_1[0xb] = -uVar5;
        param_1[10] = 1;
        param_1[4] = 1;
        if (iVar14 <= (int)-uVar5) {
          param_1[0xb] = iVar14;
        }
        iVar14 = uVar6 + param_1[0xb];
      }
      else {
        param_1[0xb] = uVar5 - uVar6;
        param_1[10] = 2;
        iVar14 = 0;
      }
    }
    else {
      iVar14 = uVar6 - uVar5;
      pcVar13 = local_20 + uVar6;
      iVar11 = iVar14;
      if (uVar5 == uVar6 - 1) {
        iVar11 = 1;
      }
      do {
        *pcVar13 = pcVar13[-1];
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar13 = pcVar13 + -1;
      } while (iVar11 != 0);
      local_20[iVar9 + 1] = '.';
      uVar6 = uVar6 + 1;
    }
    if (!bVar15) {
      param_1[5] = param_1[1] - iVar14;
    }
    local_20[uVar6] = '\0';
    param_1[7] = (int)local_20;
  }
LAB_00324e9e:
  FUN_00324084(local_24,param_2,param_3);
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032504e INSTRUCTION ADD P1 += 0x8
SCALAR 0x8 AT 00325056 INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT 00325152 INSTRUCTION LOAD R1 = 0x8
FUNCTION 00325070 FUN_00325070 success=true

/* WARNING: Type propagation algorithm not settling */

int FUN_00325070(char *param_1,int *param_2,code *param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  ushort *puVar6;
  int **ppiVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined **ppuVar11;
  int iVar12;
  int *local_44;
  char *pcStack_40;
  int iStack_3c;
  char local_38;
  ushort *puStack_28;
  int iStack_20;
  ushort auStack_c [2];
  ushort *puVar7;
  
  iVar12 = 0xe;
  ppiVar8 = &local_44;
  puVar10 = &DAT_004365a4;
  do {
    *ppiVar8 = (int *)*puVar10;
    if (iVar12 == 0) break;
    iVar12 = iVar12 + -1;
    ppiVar8 = ppiVar8 + 1;
    puVar10 = puVar10 + 1;
  } while (iVar12 != 0);
  iVar12 = 0;
  if (*param_1 != '\0') {
    ppuVar11 = &PTR_caseD_61_00436660;
    iVar12 = 0;
    local_44 = param_2;
    do {
      pcVar5 = param_1 + 1;
      if (*param_1 == '%') {
        pcVar5 = (char *)FUN_003243d8(pcVar5,&local_44);
        uVar2 = (uint)local_38;
        if (uVar2 < 0x41) {
          if (uVar2 != 0) goto switchD_0032511c_caseD_59;
          pcVar5 = pcVar5 + -1;
        }
        else {
          if (uVar2 - 0x41 < 7) {
                    /* WARNING: Could not recover jumptable at 0x00325106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            iVar12 = (*(code *)ppuVar11[uVar2 - 0x41])();
            return iVar12;
          }
          switch(uVar2) {
          case 0x58:
          case 0x70:
          case 0x78:
            iVar4 = FUN_0032482c(&local_44,8,param_3,param_4);
            iVar12 = iVar12 + iVar4;
            break;
          default:
switchD_0032511c_caseD_59:
            (*param_3)(param_4);
            iVar12 = iVar12 + 1;
            break;
          case 0x61:
            iVar4 = FUN_003245a4(&local_44,param_3,param_4);
            iVar12 = iVar12 + iVar4;
            break;
          case 99:
            iVar4 = *local_44;
            if (iStack_3c < 1) {
              local_44 = local_44 + 1;
              (*param_3)(param_4,(int)(char)iVar4);
              iVar12 = iVar12 + 1;
            }
            else {
              auStack_c[0] = (ushort)iVar4 & 0xff;
              puStack_28 = auStack_c;
              local_44 = local_44 + 1;
              iVar4 = FUN_00324084(&local_44,param_3,param_4);
              iVar12 = iVar12 + iVar4;
            }
            break;
          case 100:
          case 0x69:
          case 0x75:
            iVar4 = FUN_0032482c(&local_44,5,param_3,param_4);
            iVar12 = iVar12 + iVar4;
            break;
          case 0x65:
          case 0x66:
          case 0x67:
            iVar4 = FUN_00324a60(&local_44,param_3,param_4);
            iVar12 = iVar12 + iVar4;
            break;
          case 0x6e:
            piVar9 = local_44 + 1;
            piVar1 = (int *)*local_44;
            local_44 = piVar9;
            if (iStack_20 == 2) {
              *piVar1 = iVar12;
            }
            else if (iStack_20 == 3) {
              *piVar1 = iVar12;
              piVar1[1] = iVar12 >> 0x1f;
            }
            else if (iStack_20 == 1) {
              *(short *)piVar1 = (short)iVar12;
            }
            else {
              *piVar1 = iVar12;
            }
            break;
          case 0x6f:
            iVar4 = FUN_0032482c(&local_44,4,param_3,param_4);
            iVar12 = iVar12 + iVar4;
            break;
          case 0x73:
            puStack_28 = (ushort *)*local_44;
            if ((ushort *)*local_44 == (ushort *)0x0) {
              puStack_28 = (ushort *)&DAT_0043659c;
            }
            if ((iStack_3c == 0) && (puVar7 = puStack_28, (int)pcStack_40 < 0)) {
              do {
                puVar6 = (ushort *)((int)puVar7 + 1);
                uVar3 = *puVar7;
                puVar7 = puVar6;
              } while ((char)uVar3 != '\0');
              pcStack_40 = (char *)((int)puVar6 + (-1 - (int)puStack_28));
              local_44 = local_44 + 1;
              FUN_0032522c(param_3,param_4,puStack_28,pcStack_40);
              iVar12 = iVar12 + (int)pcStack_40;
            }
            else {
              local_44 = local_44 + 1;
              iVar4 = FUN_00324084(&local_44,param_3,param_4);
              iVar12 = iVar12 + iVar4;
            }
          }
        }
      }
      else {
        (*param_3)(param_4);
        iVar12 = iVar12 + 1;
      }
      param_1 = pcVar5;
    } while (*pcVar5 != '\0');
  }
  return iVar12;
}


END_FUNCTION
SCALAR 0x8 AT 003253aa INSTRUCTION LOAD R0 = [P0 + 0x8]
FUNCTION 00325354 FUN_00325354 success=true

int FUN_00325354(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  
  iVar4 = -1;
  puVar1 = DAT_00442b88;
  if (0x22 < param_2) {
    if (param_4 == 0 && DAT_00442b8c == 0) {
      FUN_00325270();
    }
    iVar2 = 0;
    puVar1 = DAT_00442b88;
    puVar6 = (uint *)0x0;
    while (puVar5 = puVar1, iVar2 < DAT_00442b8c) {
      if (puVar5 == (uint *)0x0) {
        return -1;
      }
      if (param_3 == puVar5[2]) {
        return -1;
      }
      iVar2 = iVar2 + 1;
      puVar1 = (uint *)puVar5[4];
      puVar6 = puVar5;
    }
    if ((puVar6 == (uint *)0x0) || (puVar1 = DAT_00442b88, puVar6[4] == 0)) {
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      uVar3 = (int)param_1 + 0x23U & 0xfffffff8;
      param_1[3] = uVar3;
      *param_1 = uVar3;
      param_1[2] = param_3;
      param_1[1] = param_2 - (uVar3 - (int)param_1);
      DAT_00442b8c = DAT_00442b8c + 1;
      iVar4 = iVar2;
      puVar1 = param_1;
      if (puVar6 != (uint *)0x0) {
        puVar6[4] = (uint)param_1;
        puVar1 = DAT_00442b88;
      }
    }
  }
  DAT_00442b88 = puVar1;
  return iVar4;
}


END_FUNCTION
SCALAR 0x8 AT 003253ea INSTRUCTION STORE [P5 + 0x8] = R5
SCALAR 0x8 AT 003254d2 INSTRUCTION LSH R2 = R1 << 0x8
FUNCTION 003254bc FUN_003254bc success=true

undefined4 * FUN_003254bc(undefined4 *param_1,ushort param_2,uint param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  
  puVar5 = (undefined4 *)((int)param_1 + param_3);
  puVar6 = param_1;
  uVar2 = param_2;
  if (7 < param_3) {
    uVar2 = param_2 & 0xff;
    uVar4 = (uint)param_1 & 3;
    puVar7 = param_1;
    if (uVar4 != 0) {
      uVar1 = (undefined1)param_2;
      if (((uint)param_1 & 1) == 1) {
        puVar7 = (undefined4 *)((int)param_1 + 1);
        *(undefined1 *)param_1 = uVar1;
      }
      param_3 = param_3 - (4 - uVar4);
      if (uVar4 < 3) {
        puVar8 = (undefined1 *)((int)puVar7 + 1);
        *(undefined1 *)puVar7 = uVar1;
        puVar7 = (undefined4 *)((int)puVar7 + 2);
        *puVar8 = uVar1;
      }
    }
    param_3 = param_3 >> 2;
    sVar3 = param_2 * 0x100 + uVar2;
    do {
      puVar6 = puVar7 + 1;
      *puVar7 = CONCAT22(sVar3,sVar3);
      if (param_3 == 0) break;
      param_3 = param_3 - 1;
      puVar7 = puVar6;
    } while (param_3 != 0);
    if (puVar6 == puVar5) {
      return param_1;
    }
    param_3 = (int)puVar5 - (int)puVar6;
  }
  while( true ) {
    if (param_3 == 0) {
      return param_1;
    }
    *(char *)puVar6 = (char)uVar2;
    if (param_3 == 0) break;
    param_3 = param_3 - 1;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  return param_1;
}


END_FUNCTION
SCALAR 0x8 AT 00325534 INSTRUCTION LOAD P1 = 0x8
FUNCTION 0032551c FUN_0032551c success=true

uint FUN_0032551c(void)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  if (DAT_004193fc == '\0') {
    iVar4 = 8;
    do {
      DAT_00419404 = DAT_00419404 * 0x19660d + 0x3c6ef35f;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = 0x20;
    piVar3 = &DAT_00442b90;
    do {
      DAT_00419404 = DAT_00419404 * 0x19660d + 0x3c6ef35f;
      *piVar3 = DAT_00419404;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      piVar3 = piVar3 + 1;
    } while (iVar4 != 0);
    DAT_0041940c = DAT_00442c0c;
    DAT_004193fc = '\x01';
  }
  uVar1 = DAT_0041940c & 0x1f;
  DAT_0041940c = (&DAT_00442b90)[uVar1];
  uVar2 = DAT_0041940c & 0x3fffffff;
  DAT_00419404 = DAT_00419404 * 0x19660d + 0x3c6ef35f;
  (&DAT_00442b90)[uVar1] = DAT_00419404;
  return uVar2;
}


END_FUNCTION
SCALAR 0x8 AT 00325536 INSTRUCTION LOAD R0 = [P2 + 0x8]
SCALAR 0x8 AT 00325550 INSTRUCTION STORE [P2 + 0x8] = R0
SCALAR 0x8 AT 00325556 INSTRUCTION LOAD R0 = [P2 + 0x8]
SCALAR 0x8 AT 00325562 INSTRUCTION STORE [P2 + 0x8] = R0
SCALAR 0x8 AT 00325578 INSTRUCTION LOAD R0 = [P2 + 0x8]
SCALAR 0x8 AT 00325598 INSTRUCTION STORE [P2 + 0x8] = R1
SCALAR 0x8 AT 003256e2 INSTRUCTION LOAD R0 = [P1 + 0x8]
FUNCTION 0032568c FUN_0032568c success=true

uint * FUN_0032568c(uint *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  bool in_AZflag;
  int iVar5;
  
  if ((param_2 == (uint *)0x0) || (param_1 = (uint *)((int)param_2 << 0x1e), !in_AZflag)) {
                    /* WARNING: Treating indirect jump as return */
    return param_1;
  }
  puVar1 = (uint *)0x10;
  puVar4 = param_2 + -2;
  if ((*puVar4 < 0x10) || (puVar1 = (uint *)(*puVar4 << 0x1d), !in_AZflag)) {
                    /* WARNING: Treating indirect jump as return */
    return puVar1;
  }
  iVar2 = FUN_00325416(param_2[-1]);
  if (iVar2 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return (uint *)0x0;
  }
  puVar1 = *(uint **)(iVar2 + 0x18);
  if ((puVar1 != (uint *)0x0) && (puVar1 <= puVar4)) {
    do {
      iVar5 = -1;
      puVar3 = puVar1;
      do {
        puVar1 = (uint *)puVar3[2];
        if ((puVar1 == (uint *)0x0) || (puVar4 <= puVar1)) {
          if (puVar4 < (uint *)((int)puVar3 + *puVar3)) {
                    /* WARNING: Treating indirect jump as return */
            return puVar1;
          }
          if ((puVar4 == (uint *)((int)puVar3 + *puVar3)) && (puVar3[1] == param_2[-1])) {
            *puVar3 = *puVar4 + *puVar3;
            puVar4 = puVar3;
          }
          else {
            puVar1 = (uint *)puVar3[2];
            if ((puVar1 != (uint *)0x0) && (puVar1 < (uint *)((int)puVar4 + *puVar4))) {
                    /* WARNING: Treating indirect jump as return */
              return puVar1;
            }
            *param_2 = (uint)puVar1;
            puVar3[2] = (uint)puVar4;
          }
          goto LAB_00325730;
        }
      } while ((iVar5 != 0) && (iVar5 = iVar5 + -1, puVar3 = puVar1, iVar5 != 0));
    } while( true );
  }
  *param_2 = (uint)puVar1;
  *(uint **)(iVar2 + 0x18) = puVar4;
LAB_00325730:
  puVar1 = (uint *)puVar4[2];
  if (((puVar1 != (uint *)0x0) && (puVar1 == (uint *)((int)puVar4 + *puVar4))) &&
     (puVar1 = (uint *)puVar1[1], (uint *)puVar4[1] == puVar1)) {
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *puVar4 = *(int *)puVar4[2] + *puVar4;
    puVar1 = (uint *)((int *)puVar4[2])[2];
    puVar4[2] = (uint)puVar1;
                    /* WARNING: Treating indirect jump as return */
    return puVar1;
  }
                    /* WARNING: Treating indirect jump as return */
  return puVar1;
}


END_FUNCTION
SCALAR 0x8 AT 00325710 INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 0032572e INSTRUCTION STORE [P1 + 0x8] = P5
SCALAR 0x8 AT 00325730 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00325758 INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00325762 INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 00325764 INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 0032580e INSTRUCTION ADD P0 += 0x8
FUNCTION 003257d8 FUN_003257d8 success=true

void FUN_003257d8(uint param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar5;
  
LAB_003257e8:
  puVar2 = *(uint **)(param_3 + 0x14);
  puVar3 = puVar2;
  uVar4 = DAT_00419410;
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)(param_3 + 0x18);
    do {
      iVar5 = -1;
      do {
        puVar2 = (uint *)*puVar3;
        if (puVar2 == (uint *)0x0) goto LAB_0032587a;
        if ((param_2 <= *puVar2) && (param_1 == puVar2[1])) {
                    /* WARNING: Could not recover jumptable at 0x003258f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)(puVar3);
          return;
        }
        puVar3 = puVar2 + 2;
      } while ((iVar5 != 0) && (iVar5 = iVar5 + -1, iVar5 != 0));
    } while( true );
  }
  do {
    iVar5 = -1;
    do {
      puVar1 = (uint *)*puVar3;
      if (puVar1 == (uint *)0x0) {
        puVar3 = (uint *)(param_3 + 0x18);
        goto LAB_0032583c;
      }
      if ((param_2 <= *puVar1) && (param_1 == puVar1[1])) {
                    /* WARNING: Could not recover jumptable at 0x00325828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(puVar3);
        return;
      }
      puVar3 = puVar1 + 2;
    } while ((iVar5 != 0) && (iVar5 = iVar5 + -1, iVar5 != 0));
  } while( true );
LAB_0032583c:
  iVar5 = -1;
  do {
    puVar1 = (uint *)*puVar3;
    if ((uint *)*puVar2 == puVar1) goto LAB_0032587a;
    if ((param_2 <= *puVar1) && (param_1 == puVar1[1])) {
                    /* WARNING: Could not recover jumptable at 0x0032586c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(puVar3);
      return;
    }
    puVar3 = puVar1 + 2;
  } while ((iVar5 != 0) && (iVar5 = iVar5 + -1, iVar5 != 0));
  goto LAB_0032583c;
LAB_0032587a:
  while( true ) {
    if (uVar4 < param_2) {
      uVar4 = param_2;
    }
    puVar3 = (uint *)FUN_003257b4(param_1,uVar4);
    if (puVar3 != (uint *)0x0) break;
    if (param_2 == uVar4) {
                    /* WARNING: Could not recover jumptable at 0x003258a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(0);
      return;
    }
    uVar4 = uVar4 >> 1;
  }
  *puVar3 = uVar4;
  puVar3[1] = param_1;
  FUN_0032568c(param_1,puVar3 + 2);
  goto LAB_003257e8;
}


END_FUNCTION
SCALAR 0x8 AT 00325852 INSTRUCTION ADD P0 += 0x8
SCALAR 0x8 AT 003258b8 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 003258e0 INSTRUCTION ADD P1 += 0x8
SCALAR 0x8 AT 00325950 INSTRUCTION LOAD R2 = [P2 + 0x8]
FUNCTION 003258f8 FUN_003258f8 success=true

uint * FUN_003258f8(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = param_2 + 0xf & 0xfffffff8;
  iVar2 = FUN_00325416();
  if (iVar2 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return (uint *)0x0;
  }
  if (uVar4 <= param_2) {
                    /* WARNING: Treating indirect jump as return */
    return (uint *)0x0;
  }
  if (uVar4 < 0x10) {
    uVar4 = 0x10;
  }
  puVar3 = (uint *)FUN_003257d8(param_1,uVar4,iVar2);
  if (puVar3 != (uint *)0x0) {
    puVar1 = (uint *)*puVar3;
    if (*puVar1 - 0x10 < uVar4) {
      *puVar3 = puVar1[2];
    }
    else {
      *puVar3 = (int)puVar1 + uVar4;
      *(uint *)((int)puVar1 + uVar4 + 8) = puVar1[2];
      *(uint *)*puVar3 = *puVar1 - uVar4;
      *(uint *)(*puVar3 + 4) = puVar1[1];
      *puVar1 = uVar4;
    }
    *(uint **)(iVar2 + 0x14) = puVar1 + 2;
                    /* WARNING: Treating indirect jump as return */
    return puVar1 + 2;
  }
                    /* WARNING: Treating indirect jump as return */
  return (uint *)0x0;
}


END_FUNCTION
SCALAR 0x8 AT 00325956 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00325972 INSTRUCTION LOAD R2 = [P2 + 0x8]
SCALAR 0x8 AT 00325974 INSTRUCTION STORE [P1 + 0x8] = R2
SCALAR 0x8 AT 00325b80 INSTRUCTION ADD R1 += 0x8
FUNCTION 00325b7a FUN_00325b7a success=true

void FUN_00325b7a(int param_1,int param_2,code *param_3,int param_4)

{
  if (param_3 == (code *)0x0) {
    FUN_003259e8(param_1 + -8,param_2 + 8);
  }
  else if (param_4 == 0) {
    (*param_3)();
  }
  else {
    (*param_3)();
  }
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00325c10 INSTRUCTION ADD R0 += 0x8
FUNCTION 00325ba4 FUN_00325ba4 success=true

int FUN_00325ba4(int param_1,int param_2,int param_3,int param_4,code *param_5,undefined4 param_6,
                code *param_7,undefined4 param_8,undefined4 param_9,int param_10)

{
  int iVar1;
  
  if (param_1 == 0) {
    if (param_7 == (code *)0x0) {
      param_1 = FUN_00325a38(param_2 * param_3 + 8);
    }
    else {
      param_1 = (*param_7)();
    }
    if (param_1 != 0) {
      param_1 = param_1 + 8;
    }
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = FUN_00325b60(param_1,param_2 * param_3,param_2);
    if (iVar1 != 0) {
      return param_1;
    }
  }
  if (param_10 != 0) {
    FUN_003254bc(param_1,0,param_2 * param_3);
  }
  if ((param_5 != (code *)0x0) && (iVar1 = param_1, 0 < param_2)) {
    do {
      if (param_4 == 0) {
        (*param_5)(iVar1);
      }
      else {
        (*param_5)(iVar1,param_4);
      }
      param_2 = param_2 + -1;
      if (param_4 != 0) {
        param_4 = param_4 + param_3;
      }
      iVar1 = iVar1 + param_3;
    } while (param_2 != 0);
  }
  return param_1;
}


END_FUNCTION
SCALAR 0x8 AT 00325c1e INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT 003260a4 INSTRUCTION LOAD P0 = [P4 + 0x8]
FUNCTION 0032608c FUN_0032608c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0032608c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  
  iVar2 = *(int *)(param_1 + 8);
  if (*(short *)(*(int *)(param_1 + 0x14) + 2) == 0) {
    if (*(short *)(param_1 + 0x74) == 0) {
      if (iVar2 != 0) {
        FUN_ffa00458(PTR_DAT_0041943c,iVar2,0,10);
      }
      if (*(int *)(param_1 + 8) != 0) {
        FUN_ffa03e88(0x41200000,0);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
    }
    else {
      if (iVar2 != 0) {
        uVar1 = FUN_ffa02e14(*(undefined4 *)(param_1 + 0x7c),0x41a00000);
        FUN_ffa03e88(0x41200000,uVar1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      if (*(int *)(param_1 + 8) != 0) {
        FUN_ffa00458(PTR_DAT_0041943c,*(int *)(param_1 + 8) + 0x28,0,10);
      }
    }
    iVar2 = *(int *)(param_1 + 8);
    if (*(short *)(param_1 + 0x76) != 0) {
      if (iVar2 != 0) {
        uVar1 = FUN_ffa02e14(*(undefined4 *)(param_1 + 0x80),0x41a00000);
        FUN_ffa03e88(0x41200000,uVar1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      if (*(int *)(param_1 + 8) != 0) {
        FUN_ffa00458(PTR_DAT_0041943c,*(int *)(param_1 + 8) + 0x3c,0,10);
                    /* WARNING: Could not recover jumptable at 0x003264b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x003264bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(*(undefined4 *)(param_1 + 0x80));
      return;
    }
    if (iVar2 != 0) {
      FUN_ffa00458(PTR_DAT_0041943c,iVar2 + 0x14,0,10);
    }
    if (*(int *)(param_1 + 8) != 0) {
      FUN_ffa03e88(0x41200000,0);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
                    /* WARNING: Could not recover jumptable at 0x00326568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (*(short *)(param_1 + 0x74) == 0) {
    if (iVar2 != 0) {
      FUN_ffa00458(PTR_DAT_0041943c,iVar2,0,10);
    }
    if (*(int *)(param_1 + 8) != 0) {
      FUN_ffa00458(PTR_DAT_0041943c,*(int *)(param_1 + 8) + 0x14,0,10);
    }
    if (*(int *)(param_1 + 8) != 0) {
      FUN_ffa03e88(0x41200000,0);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    if (*(int *)(param_1 + 8) != 0) {
      FUN_ffa03e88(0x41200000,0);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
                    /* WARNING: Could not recover jumptable at 0x00326350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (iVar2 != 0) {
    uVar1 = FUN_ffa02e14(*(undefined4 *)(param_1 + 0x7c),0x41a00000);
    FUN_ffa03e88(0x41200000,uVar1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = FUN_ffa02e14(uVar1,0x41a00000);
    FUN_ffa03e88(0x41200000,uVar1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = FUN_ffa00458(PTR_DAT_0041943c,*(int *)(param_1 + 8) + 0x28,0,10);
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_ffa00458(PTR_DAT_0041943c,*(int *)(param_1 + 8) + 0x3c,0,10);
                    /* WARNING: Could not recover jumptable at 0x003261fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0032620a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(uVar1);
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003260a6 INSTRUCTION LOAD R5 = [P4 + 0x8]
SCALAR 0x8 AT 0032612c INSTRUCTION LOAD R1 = [P4 + 0x8]
SCALAR 0x8 AT 003261b0 INSTRUCTION LOAD R1 = [P4 + 0x8]
SCALAR 0x8 AT 003261d4 INSTRUCTION LOAD R1 = [P4 + 0x8]
SCALAR 0x8 AT 00326232 INSTRUCTION LOAD R1 = [P4 + 0x8]
SCALAR 0x8 AT 00326256 INSTRUCTION LOAD R0 = [P4 + 0x8]
SCALAR 0x8 AT 003262c8 INSTRUCTION LOAD R0 = [P4 + 0x8]
SCALAR 0x8 AT 003263d0 INSTRUCTION LOAD R1 = [P4 + 0x8]
SCALAR 0x8 AT 003263fa INSTRUCTION LOAD P1 = [P4 + 0x8]
SCALAR 0x8 AT 003263fc INSTRUCTION LOAD R1 = [P4 + 0x8]
SCALAR 0x8 AT 00326486 INSTRUCTION LOAD R1 = [P4 + 0x8]
SCALAR 0x8 AT 003264e0 INSTRUCTION LOAD R0 = [P4 + 0x8]
SCALAR 0x8 AT 00326590 INSTRUCTION LOAD R0 = [P4 + 0x8]
SCALAR 0x8 AT 0032668e INSTRUCTION LOAD R1 = [P5 + 0x8]
FUNCTION 00326656 FUN_00326656 success=true

void FUN_00326656(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)(param_1 + 100 + param_2 * 4);
  uVar3 = FUN_ffa031f8(0x3f800000,*puVar2);
  uVar3 = FUN_ffa03068(uVar3,puVar2[2]);
  puVar2[-2] = uVar3;
  FUN_ffa03068(uVar3,0x46fffe00);
  uVar1 = FUN_ffa02b74();
  *(undefined2 *)(param_1 + 0x58 + param_2 * 2) = uVar1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00326ca6 INSTRUCTION _STORE [P5 + 0x8] = R0
FUNCTION 00326c48 FUN_00326c48 success=true

void FUN_00326c48(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_ffa03068(param_1[0x17],param_1[0x14]);
  *param_1 = 0x3f800000;
  param_1[4] = uVar1;
  uVar2 = FUN_ffa02c10(uVar1,0x40000000);
  uVar3 = FUN_ffa02e14(0x40000000,uVar2);
  param_1[1] = uVar3;
  param_1[2] = 0x40000000;
  uVar1 = FUN_ffa031f8(0x40000000,uVar1);
  uVar1 = FUN_ffa02e14(uVar1,uVar2);
  param_1[3] = uVar1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00326d2c INSTRUCTION _STORE [P5 + 0x8] = R0
FUNCTION 00326cd0 FUN_00326cd0 success=true

void FUN_00326cd0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_ffa03068(param_1[0x14],param_1[0x17]);
  *param_1 = 0x3f800000;
  param_1[4] = uVar1;
  uVar2 = FUN_ffa02c10(uVar1,0x40000000);
  uVar3 = FUN_ffa02e14(uVar1,uVar2);
  param_1[1] = uVar3;
  param_1[2] = 0x40000000;
  uVar1 = FUN_ffa031f8(0x40000000,uVar1);
  uVar1 = FUN_ffa02e14(uVar1,uVar2);
  param_1[3] = uVar1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00326de0 INSTRUCTION STORE [P5 + 0x8] = R0
FUNCTION 00326d54 FUN_00326d54 success=true

void FUN_00326d54(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_ffa03068(param_1[0x14],param_1[0x17]);
  *param_1 = 0x3f800000;
  param_1[4] = 0x3f800000;
  uVar2 = FUN_ffa031f8(0x40000000,uVar1);
  uVar3 = FUN_ffa02c10(uVar1,0x40000000);
  uVar2 = FUN_ffa02e14(uVar2,uVar3);
  param_1[1] = uVar2;
  uVar1 = FUN_ffa031f8(0xc0000000,uVar1);
  param_1[3] = uVar2;
  uVar1 = FUN_ffa02e14(uVar1,uVar3);
  param_1[2] = uVar1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003271ea INSTRUCTION _STORE [P5 + 0x8] = R0
FUNCTION 00326f64 FUN_00326f64 success=true

void FUN_00326f64(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar1 = FUN_ffa03068(0x40000000,param_1[0x13]);
  uVar1 = FUN_ffa031f8(uVar1,0x3f800000);
  param_1[0x1d] = uVar1;
  FUN_ffa03068(0x40000000,param_1[0x19]);
  uVar2 = FUN_ffa03764();
  if ((uVar2 & 0x7fffffff) == 0) {
    param_1[0x21] = 0;
  }
  else {
    FUN_ffa03068(0x40000000,param_1[0x19]);
    uVar2 = FUN_ffa0449c();
    uVar1 = FUN_ffa03068(param_1[0x1d],param_1[0x1d]);
    FUN_ffa031f8(0x3f800000,uVar1);
    uVar1 = FUN_ffa04630();
    uVar1 = FUN_ffa03068(uVar1,uVar2 & 0x7fffffff);
    FUN_ffa03068(param_1[0x19],0x40000000);
    uVar3 = FUN_ffa03764();
    uVar3 = FUN_ffa03068(uVar3,param_1[0x1d]);
    uVar3 = FUN_ffa031f8(uVar3,0x3f800000);
    FUN_ffa03068(0x40000000,param_1[0x19]);
    uVar4 = FUN_ffa03764();
    uVar4 = FUN_ffa02c10(uVar4,param_1[0x1d]);
    uVar5 = FUN_ffa02c10(uVar1,uVar3);
    uVar5 = FUN_ffa03068(uVar5,0xbf800000);
    uVar2 = FUN_ffa02e14(uVar5,uVar4);
    param_1[0x21] = uVar2;
    if ((uVar2 & 0x7fffffff) < 0x40000001 && 0x3f7fffff < (uVar2 & 0x7fffffff)) {
      uVar1 = FUN_ffa031f8(uVar3,uVar1);
      uVar1 = FUN_ffa03068(uVar1,0xbf800000);
      uVar1 = FUN_ffa02e14(uVar1,uVar4);
      param_1[0x21] = uVar1;
    }
  }
  uVar1 = FUN_ffa02e14(0x3f800000,param_1[0x15]);
  uVar6 = param_1[0xd];
  uVar3 = FUN_ffa031f8(0x3f800000,0x3f800000);
  *param_1 = 0x3f800000;
  uVar1 = FUN_ffa03068(uVar3,uVar1);
  FUN_ffa02c10(0x3f800000,0x3f800000);
  param_1[4] = 0x3f800000;
  uVar3 = FUN_ffa02c10(uVar1,uVar1);
  uVar3 = FUN_ffa03068(uVar3,0x3f000000);
  uVar1 = FUN_ffa031f8(uVar1,uVar1);
  uVar2 = FUN_ffa03068(uVar1,0x3f000000);
  param_1[0x1f] = uVar3;
  param_1[0x20] = uVar2;
  if (uVar6 == 0x80000000 || (int)uVar6 < 0x7f800001 && (uVar6 & 0x80000000) == 0) {
    uVar1 = FUN_ffa02e14(0x3f800000,uVar3);
    param_1[1] = uVar1;
    uVar1 = FUN_ffa02e14(0xbf800000,uVar3);
    param_1[2] = uVar1;
    uVar1 = FUN_ffa02e14(uVar2 ^ 0x80000000,uVar3);
    param_1[3] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00327206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  param_1[2] = uVar2;
  param_1[1] = uVar3;
  param_1[3] = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x0032721a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00327208 INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 0032749e INSTRUCTION _STORE [P5 + 0x8] = R0
FUNCTION 00327224 FUN_00327224 success=true

void FUN_00327224(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar1 = FUN_ffa03068(0x40000000,param_1[0x13]);
  uVar1 = FUN_ffa031f8(uVar1,0x3f800000);
  param_1[0x1d] = uVar1;
  FUN_ffa03068(0x40000000,param_1[0x19]);
  uVar2 = FUN_ffa03764();
  if ((uVar2 & 0x7fffffff) == 0) {
    param_1[0x21] = 0;
  }
  else {
    FUN_ffa03068(0x40000000,param_1[0x19]);
    uVar2 = FUN_ffa0449c();
    uVar1 = FUN_ffa03068(param_1[0x1d],param_1[0x1d]);
    FUN_ffa031f8(0x3f800000,uVar1);
    uVar1 = FUN_ffa04630();
    uVar1 = FUN_ffa03068(uVar1,uVar2 & 0x7fffffff);
    FUN_ffa03068(param_1[0x19],0x40000000);
    uVar3 = FUN_ffa03764();
    uVar3 = FUN_ffa03068(uVar3,param_1[0x1d]);
    uVar3 = FUN_ffa02c10(uVar3,0x3f800000);
    FUN_ffa03068(0x40000000,param_1[0x19]);
    uVar4 = FUN_ffa03764();
    uVar4 = FUN_ffa031f8(param_1[0x1d],uVar4);
    uVar5 = FUN_ffa02c10(uVar1,uVar3);
    uVar5 = FUN_ffa03068(uVar5,0xbf800000);
    uVar2 = FUN_ffa02e14(uVar5,uVar4);
    param_1[0x21] = uVar2;
    if ((uVar2 & 0x7fffffff) < 0x40000001 && 0x3f7fffff < (uVar2 & 0x7fffffff)) {
      uVar1 = FUN_ffa031f8(uVar3,uVar1);
      uVar1 = FUN_ffa03068(uVar1,0xbf800000);
      uVar1 = FUN_ffa02e14(uVar1,uVar4);
      param_1[0x21] = uVar1;
    }
  }
  uVar6 = param_1[0xd];
  *param_1 = 0x3f800000;
  FUN_ffa031f8(0x3f800000,0x3f800000);
  uVar1 = FUN_ffa02e14(0x3f800000,param_1[0x15]);
  param_1[4] = 0x3f800000;
  uVar3 = FUN_ffa02c10(0x3f800000,0x3f800000);
  uVar1 = FUN_ffa03068(uVar3,uVar1);
  uVar3 = FUN_ffa02c10(0x3f800000,uVar1);
  uVar3 = FUN_ffa03068(uVar3,0x3f000000);
  uVar1 = FUN_ffa031f8(0x3f800000,uVar1);
  uVar2 = FUN_ffa03068(uVar1,0x3f000000);
  param_1[0x1f] = uVar3;
  param_1[0x20] = uVar2;
  if (uVar6 == 0x80000000 || (int)uVar6 < 0x7f800001 && (uVar6 & 0x80000000) == 0) {
    uVar1 = FUN_ffa02e14(0x3f800000,uVar3);
    param_1[1] = uVar1;
    uVar1 = FUN_ffa02e14(0xbf800000,uVar3);
    param_1[2] = uVar1;
    uVar1 = FUN_ffa02e14(uVar2 ^ 0x80000000,uVar3);
    param_1[3] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x003274ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  param_1[2] = uVar2;
  param_1[1] = uVar3;
  param_1[3] = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x003274ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003274bc INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 00327b8a INSTRUCTION STORE [P1 + 0x8] = R1
FUNCTION 00327b78 FUN_00327b78 success=true

void FUN_00327b78(undefined4 param_1,int *param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = *param_2;
  DAT_00419438 = param_2;
  DAT_00419430 = param_1;
  while (iVar1 != 0) {
    FUN_00327b04(*param_2);
    (**(code **)(*(int *)(*param_2 + 0x10) + 0x14))
              (*param_2 + (int)*(short *)(*(int *)(*param_2 + 0x10) + 0x10));
    *(uint *)(*param_2 + 0xc) = *(uint *)(*param_2 + 0xc) | 1;
    iVar1 = param_2[1];
    param_2 = param_2 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00327bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00328246 INSTRUCTION _STORE [P1 + 0x8] = R0
SCALAR 0x8 AT 0032824e INSTRUCTION _STORE [P2 + 0x8] = R0
SCALAR 0x8 AT 003283ba INSTRUCTION _LOAD R1 = [P5 + 0x8]
FUNCTION 00328388 FUN_00328388 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00328388(undefined4 param_1,undefined4 *param_2)

{
  FUN_ffa03068(*param_2,0x46800000);
  FUN_ffa02b74();
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00328438 INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 00328430 FUN_00328430 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00328430(undefined4 *param_1,uint *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  int aiStack_3c [13];
  
  iVar3 = 0xd;
  uVar1 = FUN_ffa03270(*param_1);
  UNRECOVERED_JUMPTABLE = (code *)0x328466;
  uVar2 = *param_2;
  aiStack_3c[0] = 4;
  if (uVar2 != 0 && ((int)uVar2 < 0x7f800001 && (uVar2 & 0x80000000) == 0)) {
    uVar1 = FUN_ffa03068(uVar1);
    FUN_ffa02e14(uVar1,0x447a0000);
    aiStack_3c[0] = FUN_ffa02b74();
    aiStack_3c[0] = aiStack_3c[0] << 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0032849e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((iVar3 != 0) && (iVar3 != 1)) {
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (param_3 != 0) {
    FUN_00327c5c(param_1 + 0x1c,aiStack_3c,0x34);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_003281c0(&DAT_00419440,param_1[0x17],param_1[0x17] + 0x14,500);
  FUN_00327c5c(param_1 + 0x1c,aiStack_3c,0x34);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00328440 INSTRUCTION LOAD P4 = [FP + 0x8]
SCALAR 0x8 AT 003284a6 INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 003284e0 INSTRUCTION LOAD R2 = [FP + 0x8]
SCALAR 0x8 AT 00328584 INSTRUCTION STORE W [FP + 0x8] = R0
FUNCTION 00328540 FUN_00328540 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00328540(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_ffa03270(*param_1);
  uVar1 = FUN_ffa03068(uVar1,*param_2);
  FUN_ffa02e14(uVar1,0x447a0000);
  FUN_ffa02b74();
  if (param_3 != 0) {
    FUN_00327c5c(param_1[0x18],&stack0x00000000,2);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_003281c0(&DAT_00419440,param_1[0x17],param_1[0x17] + 0x14,500);
  FUN_00327c5c(param_1[0x18],&stack0x00000000,2);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0032858a INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00328596 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 003285ce INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00328624 INSTRUCTION LINK 0x8
FUNCTION 00328624 FUN_00328624 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00328624(undefined4 param_1,undefined4 *param_2,int param_3)

{
  if ((param_3 < 4) && (-1 < param_3)) {
    FUN_ffa03068(param_2[1],0x46800000);
    FUN_ffa02b74();
    FUN_ffa03068(0x46800000,*param_2);
    FUN_ffa02b74();
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032869c INSTRUCTION _LOAD R1 = [P4 + 0x8]
SCALAR 0x8 AT 003286e4 INSTRUCTION LINK 0x8
FUNCTION 003286e4 FUN_003286e4 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_003286e4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined2 local_c;
  
  local_10 = DAT_00436a0c;
  local_c = DAT_00436a10;
  if (param_3 == 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  if (param_3 != 1) {
    if (param_3 != 2) {
      FUN_00327c5c(*(int *)(param_1 + 0x60) + 0x1e + param_4 * 6,&local_10,6);
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    FUN_003274d8(*(undefined4 *)(param_1 + 0xe4),0,0xe,0,0,0);
    iVar1 = *(int *)(param_1 + 0xe4);
    FUN_ffa03068(0x46800000,*(undefined4 *)(iVar1 + 4));
    FUN_ffa02b74();
    FUN_ffa03068(*(undefined4 *)(iVar1 + 8),0x46800000);
    FUN_ffa02b74();
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  FUN_003274d8(*(undefined4 *)(param_1 + 0xe4),0,0xd,0,0,0);
  iVar1 = *(int *)(param_1 + 0xe4);
  FUN_ffa03068(0x46800000,*(undefined4 *)(iVar1 + 4));
  FUN_ffa02b74();
  FUN_ffa03068(0x46800000,*(undefined4 *)(iVar1 + 8));
  FUN_ffa02b74();
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00328774 INSTRUCTION _LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 00328800 INSTRUCTION _LOAD R1 = [P3 + 0x8]
SCALAR 0x8 AT 003288ae INSTRUCTION STORE W [FP + 0x8] = R0
FUNCTION 00328864 FUN_00328864 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00328864(undefined4 param_1,undefined4 param_2,int param_3)

{
  if ((param_3 < 4) && (-1 < param_3)) {
    FUN_ffa03068(0x46800000);
    FUN_ffa02b74();
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003288c4 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 003288d8 INSTRUCTION LINK 0x8
FUNCTION 003288d8 FUN_003288d8 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_003288d8(undefined4 param_1,undefined4 *param_2,int param_3)

{
  if ((param_3 < 4) && (-1 < param_3)) {
    FUN_ffa03068(param_2[1],0x46800000);
    FUN_ffa02b74();
    FUN_ffa03068(0x46800000,*param_2);
    FUN_ffa02b74();
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032894c INSTRUCTION LOAD R1 = [P4 + 0x8]
SCALAR 0x8 AT 00328abc INSTRUCTION STORE [FP + 0x8] = R1
FUNCTION 00328aac FUN_00328aac success=true

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Removing unreachable block (ram,0x00328ada) */

void FUN_00328aac(undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  short local_10;
  
  if ((3 < (int)param_3) || ((int)param_3 < 0)) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  local_10 = (short)DAT_0041945c;
  if ((param_3 & 1) != 0) {
    local_10 = 1;
  }
  uVar1 = FUN_ffa03270(*param_1);
  UNRECOVERED_JUMPTABLE = (code *)0x328b0a;
  iVar2 = 3;
  uVar1 = FUN_ffa03068(uVar1,*(undefined4 *)(param_2 + local_10 * 4));
  FUN_ffa02e14(uVar1,0x447a0000);
  FUN_ffa02b74();
                    /* WARNING: Could not recover jumptable at 0x00328b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((iVar2 != 0) && (iVar2 != 1)) {
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00328afe INSTRUCTION ADD P3 += 0x8
SCALAR 0x8 AT 00328b14 INSTRUCTION LOAD P0 = [FP + 0x8]
SCALAR 0x8 AT 00328c7a INSTRUCTION STORE W [FP + 0x8] = R0
FUNCTION 00328ba8 FUN_00328ba8 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00328ba8(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *param_1;
  if ((3 < param_3) || (param_3 < 0)) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if ((param_2 & 0x7fffffff) != 0) {
    uVar1 = FUN_ffa03270((int)*(short *)(param_1[0x18] + 0x34 + param_3 * 0x14));
    uVar1 = FUN_ffa03068(uVar1,0x447a0000);
    uVar2 = FUN_ffa03270(uVar2);
    uVar3 = FUN_ffa02e14(uVar1,uVar2);
    if ((uVar3 & 0x7fffffff) != 0) {
      uVar2 = FUN_ffa03e88(0x41200000,0xc0400000);
      uVar1 = FUN_ffa02e14(uVar3,param_2);
      uVar2 = FUN_ffa03e88(uVar2,uVar1);
      FUN_ffa03068(uVar2,0x46800000);
      FUN_ffa02b74();
    }
  }
  if (param_4 == 0) {
    FUN_003281c0(&DAT_00419440,param_1[0x17],param_1[0x17] + 0x14,500);
    FUN_00327c5c(param_1[0x18] + 0x2c + param_3 * 0x14,&stack0x00000000,2);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  FUN_00327c5c(param_1[0x18] + 0x2c + param_3 * 0x14,&stack0x00000000,2);
                    /* WARNING: Could not recover jumptable at 0x00328ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00328c8c INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00328cce INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00328d96 INSTRUCTION _STORE W [FP + 0x8] = R0
FUNCTION 00328d38 FUN_00328d38 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00328d38(void)

{
  int in_stack_0000000c;
  
  if ((in_stack_0000000c < 4) && (-1 < in_stack_0000000c)) {
    FUN_ffa03068(0x46800000);
    FUN_ffa02b74();
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00328d9a INSTRUCTION ADD R7 += 0x8
SCALAR 0x8 AT 00328dd2 INSTRUCTION _STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00328ee2 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00328ef6 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00329a9c INSTRUCTION STORE [P5 + 0x8] = R7
FUNCTION 00329a7c FUN_00329a7c success=true

void FUN_00329a7c(int param_1,undefined4 param_2)

{
  *(int *)(param_1 + 0x14) = param_1;
  *(undefined1 **)(param_1 + 0x10) = &LAB_00329c64;
  FUN_0032b898(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = param_2;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00329c6e INSTRUCTION LOAD R1 = [P5 + 0x8]
SCALAR 0x8 AT 00329c88 INSTRUCTION LOAD P0 = [P1 + 0x8]
SCALAR 0x8 AT 00329cee INSTRUCTION LOAD P2 = 0x8
FUNCTION 00329cd6 FUN_00329cd6 success=true

void FUN_00329cd6(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (DAT_ff8003c0 != 0) {
    puVar3 = &DAT_ff800988;
    puVar2 = &DAT_ff800978;
    puVar1 = &DAT_ff80097c;
    iVar5 = DAT_ff8003c0;
    do {
      *puVar3 = puVar3;
      puVar3[1] = puVar3;
      puVar4 = puVar3 + 3;
      puVar3[2] = puVar2;
      puVar3 = puVar3 + 4;
      *puVar4 = *puVar1;
      puVar2 = puVar2 + 8;
      if (iVar5 == 0) {
        return;
      }
      iVar5 = iVar5 + -1;
      puVar1 = puVar1 + 2;
    } while (iVar5 != 0);
  }
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00329d0e INSTRUCTION ADD P1 += 0x8
SCALAR 0x8 AT 00329efa INSTRUCTION ADD P0 += 0x8
FUNCTION 00329ed8 FUN_00329ed8 success=true

void FUN_00329ed8(void)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  int iVar5;
  int *piVar6;
  
  uVar2 = DAT_ff8003dc;
  if (DAT_ff8003dc != 0) {
    piVar6 = &DAT_ff800b24;
    ppuVar3 = &PTR_LAB_ff800b2c;
    if ((DAT_ff8003dc & 1) != 0) {
      ppuVar3 = &PTR_LAB_ff800b38;
      piVar6 = &DAT_ff800b30;
      (&DAT_00442c20)[DAT_ff800b24] = PTR_LAB_ff800b2c;
    }
    uVar2 = uVar2 >> 1;
    if (uVar2 != 0) {
      ppuVar4 = ppuVar3 + 3;
      iVar5 = piVar6[3];
      (&DAT_00442c20)[*piVar6] = *ppuVar3;
      do {
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) break;
        iVar1 = piVar6[6];
        ppuVar3 = ppuVar4 + 3;
        (&DAT_00442c20)[iVar5] = *ppuVar4;
        iVar5 = piVar6[9];
        ppuVar4 = ppuVar4 + 6;
        (&DAT_00442c20)[iVar1] = *ppuVar3;
        piVar6 = piVar6 + 6;
      } while (uVar2 != 0);
      (&DAT_00442c20)[iVar5] = *ppuVar4;
    }
  }
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032a052 INSTRUCTION STORE [FP + 0x8] = R2
FUNCTION 0032a040 FUN_0032a040 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0032a040(char *param_1,int *param_2,code *param_3)

{
  char cVar1;
  int iVar2;
  int *extraout_R1;
  int *extraout_R1_00;
  int *extraout_R1_01;
  int *extraout_R1_02;
  int *extraout_R1_03;
  int *extraout_R1_04;
  int *extraout_R1_05;
  int *extraout_R1_06;
  int *extraout_R1_07;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  
  cVar1 = *param_1;
  piVar4 = param_2;
  do {
    iVar2 = (int)cVar1;
    if (iVar2 == 0) {
      (*param_3)(10);
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    pcVar6 = param_1 + 1;
    if (iVar2 == 0x25) {
      uVar3 = (uint)*pcVar6;
      bVar8 = uVar3 == 0x30;
      pcVar7 = param_1 + 2;
      if (bVar8) {
        pcVar7 = param_1 + 3;
        uVar3 = (uint)param_1[2];
      }
      param_2 = (int *)0xa;
      if ((0x2f < (int)uVar3) && ((int)uVar3 < 0x3a)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      pcVar6 = pcVar7;
      if (uVar3 == 0x6c) {
        pcVar6 = pcVar7 + 1;
        uVar3 = (uint)*pcVar7;
      }
      if (uVar3 < 0x58) {
        if (uVar3 == 0) {
          pcVar6 = pcVar6 + -1;
        }
        else if (uVar3 == 0x25) {
          (*param_3)(0x25);
          param_2 = extraout_R1_03;
        }
      }
      else if (uVar3 == 0x58) {
        FUN_00329f74(*piVar4,0x10,s_0123456789ABCDEF_00437b58,0,0,bVar8,param_3);
        param_2 = extraout_R1_02;
        piVar4 = piVar4 + 1;
      }
      else if (uVar3 < 100) {
        if (uVar3 == 99) {
          (*param_3)((int)(char)*piVar4);
          param_2 = extraout_R1_01;
          piVar4 = piVar4 + 1;
        }
      }
      else if (uVar3 == 100) {
        iVar2 = *piVar4;
        if (iVar2 < 0) {
          FUN_00329f74(-iVar2,10,s_0123456789_00437b38,0,1,bVar8,param_3);
          param_2 = extraout_R1_00;
          piVar4 = piVar4 + 1;
        }
        else {
          FUN_00329f74(iVar2,10,s_0123456789_00437b38,0,0,bVar8,param_3);
          param_2 = extraout_R1;
          piVar4 = piVar4 + 1;
        }
      }
      else {
        switch(uVar3) {
        case 0x70:
        case 0x78:
          FUN_00329f74(*piVar4,0x10,s_0123456789abcdef_00437b44,0,0,bVar8,param_3);
          param_2 = extraout_R1_05;
          piVar4 = piVar4 + 1;
          break;
        case 0x72:
          break;
        case 0x73:
          piVar5 = piVar4 + 1;
          pcVar7 = (char *)*piVar4;
          cVar1 = *pcVar7;
          while (piVar4 = piVar5, cVar1 != '\0') {
            pcVar7 = pcVar7 + 1;
            (*param_3)();
            param_2 = extraout_R1_06;
            cVar1 = *pcVar7;
          }
          break;
        case 0x74:
          break;
        case 0x75:
          FUN_00329f74(*piVar4,10,s_0123456789_00437b38,0,0,bVar8,param_3);
          param_2 = extraout_R1_07;
          piVar4 = piVar4 + 1;
          break;
        case 0x76:
        }
      }
    }
    else {
      (*param_3)(iVar2,param_2);
      param_2 = extraout_R1_04;
    }
    cVar1 = *pcVar6;
    param_1 = pcVar6;
  } while( true );
}


END_FUNCTION
SCALAR 0x8 AT 0032a0ec INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0032a120 INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0032a13c INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0032a146 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0032a16c INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0032a178 INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0032a17e INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0032a1a8 INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0032a1b6 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0032a1ee INSTRUCTION ADD R0 += 0x8
FUNCTION 0032a1ce FUN_0032a1ce success=true

void FUN_0032a1ce(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (8 < uVar1) {
    if (uVar1 == 9) {
      FUN_0032a040(param_1[2],param_1 + 3,param_2);
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    if (uVar1 == 10) {
      FUN_0032a040(s__s__u__Assertion___s__failed__00437b90,param_1 + 2,param_2);
                    /* WARNING: Treating indirect jump as return */
      return;
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032a20e INSTRUCTION _LOAD R3 = [P1 + 0x8]
SCALAR 0x8 AT 0032a242 INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 0032a224 FUN_0032a224 success=true

void FUN_0032a224(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint *puStack_c;
  
  iVar2 = 0;
  local_28 = DAT_00437bc8;
  uStack_24 = DAT_00437bcc;
  uStack_20 = DAT_00437bd0;
  uStack_1c = DAT_00437bd4;
  uStack_18 = DAT_00437bd8;
  uStack_14 = DAT_00437bdc;
  uStack_10 = DAT_00437be0;
  puStack_c = &local_28;
  iVar1 = FUN_0032ae88();
  while (-1 < iVar1) {
    iVar2 = iVar1 + iVar2;
    if (8 < local_28) {
      if (0 < iVar2) {
        FUN_0032a040(s__d_messages_are_lost__00437bb0,&stack0x00000000,param_1);
        iVar2 = 0;
      }
      FUN_0032a1ce(&local_28,param_1);
    }
    iVar1 = FUN_0032ae88(&local_28);
  }
  if (iVar2 < 1) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0032a040(s__d_messages_are_lost__00437bb0,&stack0x00000000,param_1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032a27e INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0032a28a INSTRUCTION STORE [FP + 0x8] = R1
SCALAR 0x8 AT 0032a298 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0032a2b0 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 0032a2d6 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 0032a2de INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0032a2f2 INSTRUCTION LOAD R1 = 0x8
FUNCTION 0032a2e4 FUN_0032a2e4 success=true

void FUN_0032a2e4(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (DAT_ff8003d0 != 0) {
    iVar1 = -0x7ff658;
    puVar2 = &DAT_ff8009d8;
    iVar3 = DAT_ff8003d0;
    do {
      *puVar2 = puVar2;
      puVar2[1] = puVar2;
      iVar1 = iVar1 + 8;
      puVar2[2] = iVar1;
      puVar2[3] = 0;
      puVar2 = puVar2 + 5;
      if (iVar3 == 0) {
        return;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032a318 INSTRUCTION _STORE [P1 + 0x8] = R0
SCALAR 0x8 AT 0032a39a INSTRUCTION LOAD P2 = [P1 + 0x8]
FUNCTION 0032a324 FUN_0032a324 success=true

undefined4 FUN_0032a324(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  uVar2 = IPEND;
  if (((uVar2 & 0x706f) == 0) && (uVar2 = IMASK, (uVar2 & 0x3060) != 0)) {
    uVar3 = 0xffffffee;
    if ((0 < param_1) && (param_1 <= DAT_ff8003d0)) {
      param_1 = param_1 + -1;
      piVar4 = &DAT_ff8009d8 + param_1 * 5;
      if ((*(uint *)(&DAT_ff8009e0)[param_1 * 5] & 2) != 0) {
        if ((int)param_2[1] < 1) {
          return 0xffffffef;
        }
        if ((int)((uint *)(&DAT_ff8009e0)[param_1 * 5])[1] < (int)param_2[1]) {
          return 0xffffffef;
        }
      }
      csync();
      uVar2 = IMASK;
      IMASK = 0;
      IMASK = uVar2 & 0xffffcf9f;
      csync();
      piVar1 = (int *)*piVar4;
      if (piVar4 == piVar1) {
        if ((*(uint *)(&DAT_ff8009e0)[param_1 * 5] & 2) == 1) {
          puVar5 = &DAT_ff8009e4 + param_1 * 5;
          do {
            iVar7 = -1;
            puVar6 = puVar5;
            do {
              puVar5 = (undefined4 *)*puVar6;
              if ((puVar5 == (undefined4 *)0x0) || ((int)param_2[1] < (int)puVar5[1])) {
                *param_2 = puVar5;
                *puVar6 = param_2;
                goto LAB_0032a3ea;
              }
            } while ((iVar7 != 0) && (iVar7 = iVar7 + -1, puVar6 = puVar5, iVar7 != 0));
          } while( true );
        }
        *param_2 = 0;
        if ((&DAT_ff8009e4)[param_1 * 5] == 0) {
          (&DAT_ff8009e4)[param_1 * 5] = param_2;
        }
        else {
          **(undefined4 **)(&DAT_ff8009e8 + param_1 * 0x14) = param_2;
        }
        *(undefined4 **)(&DAT_ff8009e8 + param_1 * 0x14) = param_2;
      }
      else {
        *piVar4 = *piVar1;
        *(int **)(*piVar1 + 4) = piVar4;
        *(undefined4 **)(piVar1[5] + 8) = param_2;
        iVar7 = FUN_0032bbf8(piVar1);
        if (iVar7 != 0) {
          FUN_ffa00798();
        }
      }
LAB_0032a3ea:
      csync();
      uVar2 = IMASK;
      IMASK = 0;
      IMASK = uVar2 | 0x3060;
      csync();
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xffffffe7;
  }
                    /* WARNING: Treating indirect jump as return */
  return uVar3;
}


END_FUNCTION
SCALAR 0x8 AT 0032a3cc INSTRUCTION LOAD P0 = [P1 + 0x8]
SCALAR 0x8 AT 0032a438 INSTRUCTION STORE [P1 + 0x8] = R2
SCALAR 0x8 AT 0032a63a INSTRUCTION ADD P0 += 0x8
FUNCTION 0032a60e FUN_0032a60e success=true

void FUN_0032a60e(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (DAT_ff8003d4 != 0) {
    puVar3 = &DAT_ff800a60;
    puVar2 = &DAT_ff800a50;
    ppuVar1 = &PTR_DAT_ff800a58;
    iVar5 = DAT_ff8003d4;
    do {
      *puVar3 = puVar3;
      puVar3[1] = puVar3;
      puVar3[2] = puVar2;
      puVar4 = puVar3 + 4;
      puVar3[3] = *ppuVar1;
      puVar3 = puVar3 + 5;
      *puVar4 = 0;
      puVar2 = puVar2 + 0x10;
      if (iVar5 == 0) {
        return;
      }
      iVar5 = iVar5 + -1;
      ppuVar1 = ppuVar1 + 4;
    } while (iVar5 != 0);
  }
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032aaea INSTRUCTION ADD R2 += 0x8
FUNCTION 0032aad8 FUN_0032aad8 success=true

void FUN_0032aad8(undefined4 param_1)

{
  FUN_0032404c(&DAT_0041946c,param_1,&stack0x00000004);
  DAT_00419468 = 1;
  if (DAT_00419464 != (code *)0x0) {
    (*DAT_00419464)(&DAT_0041946c);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032acf8 INSTRUCTION STORE [P1 + 0x8] = R0
FUNCTION 0032acec FUN_0032acec success=true

void FUN_0032acec(void)

{
  DAT_00444d40 = 0;
  DAT_00444d48 = 0;
  DAT_00444d44 = 0;
  DAT_00444d4c = 0;
  DAT_00444d50 = 0;
  DAT_00444d54 = 0x3f;
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032afd2 INSTRUCTION LOAD R2 = 0x8
FUNCTION 0032afc2 FUN_0032afc2 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0032afc2(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0032b092 INSTRUCTION LOAD R0 = [P2 + 0x8]
FUNCTION 0032b034 FUN_0032b034 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0032b034(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0032b0bc INSTRUCTION LOAD R0 = [P2 + 0x8]
SCALAR 0x8 AT 0032b0da INSTRUCTION LOAD R6 = 0x8
FUNCTION 0032b0d2 FUN_0032b0d2 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0032b0d2(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0032b0e6 INSTRUCTION _LOAD P0 = [P1 + 0x8]
SCALAR 0x8 AT 0032b11e INSTRUCTION LOAD P0 = [P1 + 0x8]
FUNCTION 0032b106 FUN_0032b106 success=true

void FUN_0032b106(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 0x14) + *(int *)(iVar1 + 0x10);
  *(undefined4 *)(iVar2 + -4) = *(undefined4 *)(iVar1 + 4);
  *(undefined1 **)(iVar2 + -8) = &LAB_0032b380;
  *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  *(undefined1 **)(param_1 + 0x1c) = &LAB_ffa0082c;
  *(int *)(param_1 + 0x18) = iVar2 + -0xc;
  FUN_0032afc2();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032b130 INSTRUCTION LOAD P2 = [P1 + 0x8]
SCALAR 0x8 AT 0032b132 INSTRUCTION LOAD R1 = [P2 + 0x8]
SCALAR 0x8 AT 0032b166 INSTRUCTION STORE [P1 + 0x8] = R7
FUNCTION 0032b14c FUN_0032b14c success=true

void FUN_0032b14c(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = 0;
  DAT_0044515c = 0;
  DAT_00445158 = 0;
  DAT_00445160 = 0;
  DAT_00445164 = 1;
  iVar7 = 0x10;
  puVar3 = &DAT_0044516c;
  do {
    *puVar3 = puVar3;
    puVar3[1] = puVar3;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    puVar3 = puVar3 + 2;
  } while (iVar7 != 0);
  DAT_00445168 = 0;
  if (DAT_ff8003b8 != 0) {
    piVar5 = &DAT_ff8005e8;
    while( true ) {
      UNRECOVERED_JUMPTABLE = (code *)0x32b1aa;
      iVar8 = -1;
      piVar6 = piVar5 + 1;
      iVar7 = *piVar5 + -1;
      puVar1 = &DAT_ff800628 + iVar7 * 0x20;
      (&DAT_ff800630)[iVar7 * 8] = &DAT_ff8003e8 + iVar7 * 8;
      (&DAT_ff800634)[iVar7 * 8] = (&DAT_ff800634)[iVar7 * 8] & 0xfffeffff;
      puVar4 = puVar1;
      FUN_0032b0d2(puVar1);
      if ((**(uint **)(puVar4 + 8) & 2) == 1) {
        FUN_0032b106(puVar1);
      }
      uVar2 = uVar2 + 1;
                    /* WARNING: Could not recover jumptable at 0x0032b1d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (DAT_ff8003b8 <= uVar2) break;
      piVar5 = piVar6;
      if ((iVar8 != 0) && (iVar8 != 1)) {
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032b1b8 INSTRUCTION STORE [P2 + 0x8] = R1
SCALAR 0x8 AT 0032b1c4 INSTRUCTION LOAD P1 = [P2 + 0x8]
SCALAR 0x8 AT 0032b270 INSTRUCTION LOAD P1 = [P1 + 0x8]
FUNCTION 0032b238 FUN_0032b238 success=true

void FUN_0032b238(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    iVar2 = DAT_00445158;
    uVar3 = *(undefined4 *)(DAT_00445158 + 0x10);
    *(uint *)(DAT_00445158 + 0xc) = *(uint *)(DAT_00445158 + 0xc) & 0xfffbffff;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    csync();
    uVar1 = IMASK;
    IMASK = 0;
    IMASK = uVar1 | 0x3060;
    csync();
    (**(code **)(*(int *)(DAT_00445158 + 8) + 0x1c))
              (uVar3,*(undefined4 *)(*(int *)(DAT_00445158 + 8) + 4));
    uVar1 = IMASK;
    if ((uVar1 & 0x3060) != 0) {
      csync();
      uVar1 = IMASK;
      IMASK = 0;
      IMASK = uVar1 & 0xffffcf9f;
      csync();
    }
  } while (*(int *)(DAT_00445158 + 0x10) != 0);
  *(uint *)(DAT_00445158 + 0xc) = *(uint *)(DAT_00445158 + 0xc) | 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0032b29e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032b760 INSTRUCTION LOAD R1 = 0x8
FUNCTION 0032b6d8 FUN_0032b6d8 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_0032b6d8(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = IPEND;
  if ((((uVar1 & 0x706f) == 0) && (uVar1 = IMASK, (uVar1 & 0x3060) != 0)) && (DAT_00445164 != 0)) {
    uVar2 = 0xffffffef;
    if (param_1 < 0x80000000) {
      csync();
      uVar1 = IMASK;
      IMASK = 0;
      IMASK = uVar1 & 0xffffcf9f;
      csync();
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
  }
  else {
    uVar2 = 0xffffffe7;
  }
                    /* WARNING: Treating indirect jump as return */
  return uVar2;
}


END_FUNCTION
SCALAR 0x8 AT 0032b77c INSTRUCTION ADD P1 += 0x8
SCALAR 0x8 AT 0032b892 INSTRUCTION STORE [P1 + 0x8] = R0
FUNCTION 0032b880 FUN_0032b880 success=true

void FUN_0032b880(void)

{
  DAT_004451ec = 0;
  DAT_004451f0 = 0;
  DAT_004451f8 = 0;
  DAT_004451f4 = 1;
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032bbd8 INSTRUCTION _STORE [P0 + 0x8] = R1
FUNCTION 0032bb80 FUN_0032bb80 success=true

void FUN_0032bb80(int *param_1,int param_2,int param_3)

{
  FUN_0032b034(DAT_00445158);
  *(int **)(DAT_00445158 + 0x14) = param_1;
  if (param_3 < 1) {
    *param_1 = 0;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  *param_1 = param_2;
  *(int *)(param_2 + 8) = param_3 + DAT_004451f4;
  *(undefined1 **)(param_2 + 4) = &LAB_0032bc3e;
  FUN_0032b898(param_2);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032bc20 INSTRUCTION LOAD R1 = 0x8
FUNCTION 0032bbf8 FUN_0032bbf8 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0032bbf8(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (**(int **)(param_1 + 0x14) != 0) {
    FUN_0032b8e0();
  }
  **(undefined4 **)(param_1 + 0x14) = 0;
  if ((*(uint *)(param_1 + 0xc) & 4) == 1) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  FUN_0032afc2(param_1);
                    /* WARNING: Could not recover jumptable at 0x0032bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032bc56 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 0032bcae INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 0032bd34 INSTRUCTION LOAD R2 = 0x8
FUNCTION 0032bd1c FUN_0032bd1c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0032bd1c(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0032bd5e INSTRUCTION LOAD P1 = [P0 + 0x8]
SCALAR 0x8 AT 0032bde0 INSTRUCTION LOAD R3 = 0x8
FUNCTION 0032bdc4 FUN_0032bdc4 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0032bdc4(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0032be04 INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 0032bf7c INSTRUCTION LOAD R7 = W [P1 + 0x8] (X)
FUNCTION 0032bf68 FUN_0032bf68 success=true

void FUN_0032bf68(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar2 = (int)*(short *)((int)param_1 + 6);
  iVar5 = *param_1;
  if (0 < param_2) {
    if (iVar2 <= param_2) {
      param_2 = iVar2 + -1;
    }
    param_2 = (short)param_1[2] * param_2;
    iVar2 = param_1[3] - param_2;
    if (param_3 != 0) {
      uVar1 = FUN_00325a38(param_2);
      FUN_00325cec(uVar1,iVar5 + iVar2,param_2);
      FUN_00325d40(iVar5 + param_2,iVar5,iVar2);
      FUN_00325cec(iVar5,uVar1,param_2);
      FUN_003259e8(uVar1);
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    FUN_00325d40(iVar5 + param_2,iVar5,iVar2);
    FUN_00357fe0(iVar5,0,param_2);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (-1 < param_2) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar3 = -param_2;
  if (iVar2 <= -param_2) {
    iVar3 = iVar2 + -1;
  }
  iVar3 = (short)param_1[2] * iVar3;
  iVar2 = param_1[3] - iVar3;
  if (param_3 != 0) {
    uVar1 = FUN_00325a38(iVar3);
    iVar4 = iVar5;
    FUN_00325cec(uVar1,iVar5,iVar3);
    FUN_00325d40(iVar5,iVar4 + iVar3,iVar2);
    FUN_00325cec(iVar4 + iVar2,uVar1,iVar3);
    FUN_003259e8(uVar1);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_00325d40(iVar5,iVar5 + iVar3,iVar2);
  FUN_00357fe0(iVar5 + iVar2,0,iVar3);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032c0aa INSTRUCTION LOAD R5 = W [P1 + 0x8] (X)
FUNCTION 0032c096 FUN_0032c096 success=true

void FUN_0032c096(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int extraout_R1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar4 = (int)(short)param_1[2];
  iVar2 = (int)(short)param_1[1];
  iVar3 = (int)*(short *)((int)param_1 + 6);
  iVar9 = *param_1;
  if (*(char *)((int)param_1 + 10) != '\b') {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (0 < param_2) {
    if (iVar2 <= param_2) {
      param_2 = iVar2 + -1;
    }
    if (0 < iVar3) {
      iVar5 = (iVar9 + iVar2) - param_2;
      if (param_3 == 0) {
        do {
          iVar3 = iVar3 + -1;
          FUN_00325d40(iVar9 + param_2,iVar9,iVar2 - param_2);
          FUN_00357fe0(iVar9,0,param_2);
          iVar9 = iVar9 + iVar4;
        } while (iVar3 != 0);
      }
      else {
        do {
          uVar1 = FUN_00325a38(param_2);
          iVar3 = iVar3 + -1;
          iVar7 = iVar5 + iVar4;
          FUN_00325cec(uVar1,iVar5,param_2);
          FUN_00325d40(iVar9 + param_2,iVar9,iVar2 - param_2);
          FUN_00325cec(iVar9,uVar1,param_2);
          FUN_003259e8(uVar1);
          iVar5 = iVar7;
          iVar9 = iVar9 + iVar4;
        } while (iVar3 != 0);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0032c110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (-1 < param_2) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar5 = -param_2;
  if (iVar2 <= -param_2) {
    iVar5 = iVar2 + -1;
  }
  if (0 < iVar3) {
    iVar7 = (iVar9 + iVar2) - iVar5;
    iVar6 = (iVar9 + iVar4) - iVar5;
    iVar8 = iVar7;
    if (param_3 == 0) {
      do {
        iVar3 = iVar3 + -1;
        FUN_00325d40(iVar9,iVar9 + iVar5,iVar2 - iVar5);
        FUN_00357fe0(iVar6,0,iVar5);
        iVar9 = iVar9 + iVar4;
        iVar6 = iVar6 + iVar4;
      } while (iVar3 != 0);
    }
    else {
      do {
        uVar1 = FUN_00325a38(iVar5,iVar7);
        iVar3 = iVar3 + -1;
        FUN_00325cec(uVar1,iVar9,iVar5);
        FUN_00325d40(iVar9,iVar9 + iVar5,iVar2 - iVar5);
        FUN_00325cec(iVar8,uVar1,iVar5);
        FUN_003259e8(uVar1);
        iVar8 = iVar8 + iVar4;
        iVar7 = extraout_R1;
        iVar9 = iVar9 + iVar4;
      } while (iVar3 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0032c1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032c0b0 INSTRUCTION LOAD R3 = 0x8
SCALAR 0x8 AT 0032c274 INSTRUCTION ADD R4 += 0x8
FUNCTION 0032c234 FUN_0032c234 success=true

/* WARNING: Control flow encountered unimplemented instructions */

int FUN_0032c234(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  FUN_00325c3c(param_1,0x100,1,&LAB_0032be6c);
  iVar1 = param_1;
  if (param_2 == 100) {
    do {
      FUN_0034daac(&stack0x00000004,&stack0x00000000);
      FUN_0034da6a(iVar1,&stack0x00000000);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar2 < 0x100);
                    /* WARNING: Treating indirect jump as return */
    return param_1;
  }
  FUN_0034daac(&stack0x00000004,&stack0x00000000);
  if (param_2 < 0x65) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0032c3da INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT 0032c3e4 INSTRUCTION _STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 0032c410 INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT 0032c5b0 INSTRUCTION STORE W [FP + 0x8] = R0
FUNCTION 0032c438 FUN_0032c438 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0032c438(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte abStack_12c [256];
  undefined1 local_2c [20];
  undefined2 local_18;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  bVar1 = *(byte *)((int)param_1 + 10);
  if (bVar1 < 0x10) {
    if (bVar1 == 8) {
      FUN_0032c234(abStack_12c);
      uVar2 = param_1[3];
      pbVar4 = (byte *)*param_1;
      if (0 < (int)uVar2) {
        pbVar3 = pbVar4;
        if ((uVar2 & 1) != 0) {
          pbVar3 = pbVar4 + 1;
          *pbVar4 = abStack_12c[*pbVar4];
        }
        uVar2 = uVar2 >> 1;
        if (uVar2 != 0) {
          uVar6 = (uint)pbVar3[1];
          pbVar4 = pbVar3 + 1;
          *pbVar3 = abStack_12c[*pbVar3];
          do {
            uVar2 = uVar2 - 1;
            if (uVar2 == 0) break;
            bVar1 = pbVar3[2];
            pbVar5 = pbVar4 + 1;
            *pbVar4 = abStack_12c[uVar6];
            uVar6 = (uint)pbVar3[3];
            pbVar4 = pbVar4 + 2;
            *pbVar5 = abStack_12c[bVar1];
            pbVar3 = pbVar3 + 2;
          } while (uVar2 != 0);
          *pbVar4 = abStack_12c[uVar6];
        }
      }
                    /* WARNING: Treating indirect jump as return */
      return;
    }
  }
  else {
    if (bVar1 == 0x10) {
      if (((uint)param_1[3] >> 1 != 0) && (local_18 = 0x1f, param_2 != 100)) {
        FUN_0034d84e(*param_1,local_2c);
        if (param_2 < 0x65) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    if (bVar1 == 0x20) {
      if (((uint)param_1[3] >> 2 != 0) && (param_2 != 100)) {
        if (param_2 < 0x65) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
                    /* WARNING: Treating indirect jump as return */
      return;
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032c71e INSTRUCTION LOAD R3 = [FP + 0x8]
SCALAR 0x8 AT 0032c75c INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 0032c860 INSTRUCTION STORE [FP + 0x8] = R1
FUNCTION 0032c800 FUN_0032c800 success=true

/* WARNING: Control flow encountered unimplemented instructions */

int FUN_0032c800(int *param_1,int param_2,int param_3)

{
  short sVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar20;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_24;
  byte *local_20;
  int local_1c;
  int *local_14;
  undefined4 *local_10;
  byte local_c;
  byte local_b;
  byte local_a;
  
  if (((param_1 == (int *)0x0) || (param_2 < 1)) || (param_3 < 1)) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  bVar2 = *(byte *)((int)param_1 + 10);
  if (bVar2 < 0x10) {
    if (bVar2 == 8) {
      sVar1 = *(short *)((int)param_1 + 6);
      iVar5 = param_2 * param_3;
      iVar9 = param_1[1];
      iVar6 = FUN_ffa038f0();
      local_14 = (int *)0x0;
      local_20 = (byte *)FUN_ffa038f0((int)sVar1,param_3);
      iVar12 = FUN_00325a76(0x78);
      if (iVar12 != 0) {
        local_14 = (int *)FUN_00340a48(iVar12,(int)(short)iVar6,(int)(short)local_20,
                                       (int)*(char *)((int)param_1 + 10));
      }
      piVar10 = (int *)0x0;
      if (local_14 != (int *)0x0) {
        local_24 = *param_1;
        local_38 = *local_14;
        piVar10 = local_14;
        if ((0 < (int)local_20) && (0 < iVar6)) {
          do {
            local_40 = local_24;
            local_34 = iVar6;
            do {
              iVar15 = 0;
              iVar12 = 0;
              local_3c = param_2;
              if (param_2 < 2) {
                local_3c = 1;
              }
              local_30 = 0;
              local_44 = local_40;
              do {
                iVar13 = local_44;
                iVar14 = param_3;
                if (param_3 < 2) {
                  iVar14 = 1;
                }
                do {
                  FUN_0034db1a(iVar13,&local_c);
                  iVar12 = iVar12 + (uint)local_a;
                  iVar15 = iVar15 + (uint)local_b;
                  iVar14 = iVar14 + -1;
                  local_30 = local_30 + (uint)local_c;
                  iVar13 = iVar13 + (short)iVar9;
                } while (iVar14 != 0);
                local_3c = local_3c + -1;
                local_44 = local_44 + 1;
              } while (local_3c != 0);
              local_40 = local_40 + param_2;
              FUN_ffa038f0(local_30,iVar5);
              uVar3 = FUN_ffa038f0(iVar15,iVar5);
              uVar4 = FUN_ffa038f0(iVar12,iVar5);
              FUN_0034da34(local_38,iVar15,uVar3,uVar4);
              local_34 = local_34 + -1;
              local_38 = local_38 + 1;
            } while (local_34 != 0);
            local_20 = (byte *)((int)local_20 + -1);
            local_24 = local_24 + param_3 * (short)iVar9;
          } while (local_20 != (byte *)0x0);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0032cd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar9 = (*UNRECOVERED_JUMPTABLE_00)(piVar10);
      return iVar9;
    }
  }
  else {
    if (bVar2 == 0x10) {
      sVar1 = *(short *)((int)param_1 + 6);
      iVar5 = param_2 * param_3;
      iVar9 = param_1[1];
      iVar6 = FUN_ffa038f0();
      local_14 = (int *)0x0;
      iVar12 = FUN_ffa038f0((int)sVar1,param_3);
      iVar15 = FUN_00325a76(0x78);
      if (iVar15 != 0) {
        local_14 = (int *)FUN_00340a48(iVar15,(int)(short)iVar6,(int)(short)iVar12,
                                       (int)*(char *)((int)param_1 + 10));
      }
      piVar10 = (int *)0;
      if (((local_14 != (int *)0x0) && (local_3c = *param_1, piVar10 = local_14, 0 < iVar12)) &&
         (0 < iVar6)) {
        iVar12 = 0;
        iVar6 = 0;
        if (param_2 < 2) {
          param_2 = 1;
        }
        local_44 = 0;
        local_38 = param_2;
        do {
          iVar15 = param_3;
          if (param_3 < 2) {
            iVar15 = 1;
          }
          iVar13 = local_3c;
          do {
            FUN_0034d84e(iVar13,&local_c);
            iVar13 = iVar13 + (short)iVar9 * 2;
            iVar6 = iVar6 + (uint)local_a;
            iVar12 = iVar12 + (uint)local_b;
            iVar15 = iVar15 + -1;
            local_44 = local_44 + (uint)local_c;
          } while (iVar15 != 0);
          local_38 = local_38 + -1;
          local_3c = local_3c + 2;
        } while (local_38 != 0);
        FUN_ffa038f0(local_44,iVar5);
        FUN_ffa038f0(iVar12,iVar5);
        FUN_ffa038f0(iVar6,iVar5);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
                    /* WARNING: Treating indirect jump as return */
      return (int)piVar10;
    }
    if (bVar2 == 0x20) {
      iVar9 = param_1[1];
      iVar5 = FUN_ffa038f0();
      iVar12 = (int)*(short *)((int)param_1 + 6);
      local_1c = FUN_ffa038f0(iVar12,param_3);
      iVar6 = FUN_00325a76(0x78);
      iVar15 = param_2 * param_3;
      local_10 = (undefined4 *)0x0;
      if (iVar6 != 0) {
        local_10 = (undefined4 *)
                   FUN_00340a48(iVar6,(int)(short)iVar5,(int)(short)local_1c,
                                (int)*(char *)((int)param_1 + 10));
      }
      puVar8 = (undefined4 *)0x0;
      if (local_10 != (undefined4 *)0x0) {
        pbVar18 = (byte *)*param_1;
        puVar16 = (undefined1 *)*local_10;
        puVar8 = local_10;
        if ((0 < local_1c) && (iVar6 = iVar12, local_20 = pbVar18, 0 < iVar5)) {
LAB_0032c8de:
          iVar13 = 0;
          iVar14 = 0;
          iVar5 = param_2;
          if (param_2 < 2) {
            iVar5 = 1;
          }
          iVar7 = 0;
          iVar11 = param_3;
          if (param_3 < 2) {
            iVar11 = 1;
          }
          pbVar17 = pbVar18;
          iVar20 = iVar11;
          pbVar19 = pbVar18;
LAB_0032c916:
          do {
            local_c = pbVar17[2];
            iVar7 = iVar7 + (uint)local_c;
            local_b = pbVar17[1];
            iVar13 = iVar13 + (uint)local_b;
            local_a = *pbVar17;
            pbVar17 = pbVar17 + (short)iVar9 * 4;
            iVar14 = iVar14 + (uint)local_a;
            if (iVar20 != 0) {
              iVar20 = iVar20 + -1;
              if (iVar20 != 0) goto LAB_0032c916;
            }
            pbVar17 = pbVar19 + 4;
            if ((iVar5 == 0) || (iVar5 = iVar5 + -1, iVar20 = iVar11, pbVar19 = pbVar17, iVar5 == 0)
               ) goto code_r0x0032c93a;
          } while( true );
        }
      }
LAB_0032c99e:
                    /* WARNING: Could not recover jumptable at 0x0032c9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar9 = (*UNRECOVERED_JUMPTABLE_00)(puVar8);
      return iVar9;
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
code_r0x0032c93a:
  uVar3 = FUN_ffa038f0(iVar7,iVar15);
  uVar4 = FUN_ffa038f0(iVar13,iVar15);
  puVar16[3] = 0;
  puVar16[2] = uVar3;
  puVar16[1] = uVar4;
  uVar3 = FUN_ffa038f0(iVar14,iVar15);
  iVar6 = iVar6 + -1;
  *puVar16 = uVar3;
  pbVar18 = pbVar18 + param_2 * 4;
  puVar16 = puVar16 + 4;
  if (iVar6 != 0) goto LAB_0032c8de;
  local_1c = local_1c + -1;
  pbVar18 = local_20 + param_3 * (short)iVar9 * 4;
  iVar6 = iVar12;
  local_20 = pbVar18;
  if (local_1c == 0) goto LAB_0032c99e;
  goto LAB_0032c8de;
}


END_FUNCTION
SCALAR 0x8 AT 0032c8e2 INSTRUCTION _LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0032c8ec INSTRUCTION _LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0032c93e INSTRUCTION _LOAD P5 = [FP + 0x8]
SCALAR 0x8 AT 0032c9c2 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0032caca INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0032cae0 INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0032caf2 INSTRUCTION _LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0032cb84 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 0032cb9c INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0032cc98 INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0032ccae INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0032ccc0 INSTRUCTION _LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0032cd2a INSTRUCTION LOAD R2 = 0x8
FUNCTION 0032cd14 FUN_0032cd14 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_0032cd14(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = (uint)*(char *)(param_1 + 10);
  if (param_2 == uVar1) {
                    /* WARNING: Treating indirect jump as return */
    return 1;
  }
  if (uVar1 < 8) {
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        if (param_2 != 8) {
                    /* WARNING: Treating indirect jump as return */
          return 0;
        }
        FUN_00340a24((int)*(short *)(param_1 + 4),(int)*(short *)(param_1 + 6));
        iVar3 = FUN_00325a38();
        if (iVar3 != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
      }
      else if (uVar1 == 2) {
        if (param_2 == 0) {
                    /* WARNING: Treating indirect jump as return */
          return 0;
        }
        if (param_2 == 1) {
          FUN_00340a24((int)*(short *)(param_1 + 4),(int)*(short *)(param_1 + 6),1);
          iVar3 = FUN_00325a38();
          if (iVar3 != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
            halt_unimplemented();
          }
        }
        else {
          if (param_2 != 8) {
            return 0;
          }
          FUN_00340a24((int)*(short *)(param_1 + 4),(int)*(short *)(param_1 + 6));
          iVar3 = FUN_00325a38();
          if (iVar3 != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
            halt_unimplemented();
          }
        }
      }
    }
  }
  else if (uVar1 == 8) {
    if (param_2 < 2) {
      if (param_2 != 1) {
        return 0;
      }
      FUN_00340a24((int)*(short *)(param_1 + 4),(int)*(short *)(param_1 + 6),1);
      iVar3 = FUN_00325a38();
      if (iVar3 != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
    }
    else if (param_2 == 2) {
      FUN_00340a24((int)*(short *)(param_1 + 4),(int)*(short *)(param_1 + 6),2);
      iVar3 = FUN_00325a38();
      if (iVar3 != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
    }
    else {
      if (param_2 < 0x10) {
                    /* WARNING: Treating indirect jump as return */
        return 0;
      }
      if (param_2 == 0x10) {
        FUN_00340a24((int)*(short *)(param_1 + 4),(int)*(short *)(param_1 + 6),0x10);
        iVar3 = FUN_00325a38();
        if (iVar3 != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
      }
      else {
        if (param_2 != 0x20) {
          return 0;
        }
        FUN_00340a24((int)*(short *)(param_1 + 4),(int)*(short *)(param_1 + 6),0x20);
        iVar3 = FUN_00325a38();
        if (iVar3 != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
      }
    }
  }
  else if (0xf < uVar1) {
    if (uVar1 == 0x10) {
                    /* WARNING: Treating indirect jump as return */
      return 0;
    }
    if (uVar1 == 0x20) {
      if (param_2 < 8) {
                    /* WARNING: Treating indirect jump as return */
        return 0;
      }
      if (param_2 == 8) {
        FUN_00340a24((int)*(short *)(param_1 + 4),(int)*(short *)(param_1 + 6),8);
        iVar3 = FUN_00325a38();
        if (iVar3 != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
      }
      else {
        if (param_2 != 0x10) {
          return 0;
        }
        FUN_00340a24((int)*(short *)(param_1 + 4),(int)*(short *)(param_1 + 6),0x10);
        iVar3 = FUN_00325a38();
        if (iVar3 != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0032cdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(1);
  return uVar2;
}


END_FUNCTION
SCALAR 0x8 AT 0032cd46 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 0032cd5e INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0032cdb2 INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0032cdba INSTRUCTION STORE W [P1 + 0x8] = R0
SCALAR 0x8 AT 0032cdce INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 0032cdd4 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0032ce30 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 0032ce3c INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0032ce40 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 0032ce46 INSTRUCTION STORE W [P1 + 0x8] = R0
SCALAR 0x8 AT 0032ce94 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0032cee8 INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0032cef2 INSTRUCTION STORE W [P1 + 0x8] = R0
SCALAR 0x8 AT 0032cf00 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0032cf58 INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0032cf60 INSTRUCTION STORE W [P1 + 0x8] = R0
SCALAR 0x8 AT 0032cf6e INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0032cf92 INSTRUCTION _LOAD R0 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0032d08a INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0032d090 INSTRUCTION STORE W [P1 + 0x8] = R0
SCALAR 0x8 AT 0032d0a2 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0032d0d0 INSTRUCTION LOAD R0 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0032d122 INSTRUCTION LOAD R7 = 0x8
SCALAR 0x8 AT 0032d17a INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 0032d1b8 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0032d1c2 INSTRUCTION STORE W [P1 + 0x8] = R0
SCALAR 0x8 AT 0032d1f0 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 0032d21e INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 0032d226 INSTRUCTION _LOAD R3 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0032d260 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0032d2b4 INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0032d2d0 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 0032d2da INSTRUCTION STORE W [P1 + 0x8] = R5
SCALAR 0x8 AT 0032d2e8 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0032d30c INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0032d3fc INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0032d400 INSTRUCTION STORE W [P1 + 0x8] = R7
SCALAR 0x8 AT 0032d416 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 0032d424 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0032d436 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 0032d440 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0032d4a0 INSTRUCTION LOAD P2 = 0x8
SCALAR 0x8 AT 0032d518 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 0032d51e INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0032d524 INSTRUCTION STORE W [P1 + 0x8] = R0
SCALAR 0x8 AT 0032d558 INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 0032d548 FUN_0032d548 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_0032d548(int param_1,int param_2,short *param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 auStack_c8 [184];
  int local_10;
  int local_c;
  
  local_c = (int)*(short *)(param_1 + 8);
  if (param_4 == (short *)0x0) {
    param_4 = param_3;
  }
  if (('\a' < *(char *)(param_2 + 10)) && (*(char *)(param_2 + 10) == *(char *)(param_1 + 10))) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  local_10 = param_2;
  FUN_0034f31c(auStack_c8,param_1);
  sVar3 = *param_4;
  sVar1 = param_4[1];
  sVar4 = *param_3;
  sVar2 = param_3[1];
  FUN_0034e162(auStack_c8,param_3);
  FUN_0034e900(auStack_c8,(int)(short)(sVar4 - sVar3),(int)(short)(sVar2 - sVar1),auStack_c8);
  FUN_0034e17e(auStack_c8,2);
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
SCALAR 0x8 AT 0032d55a INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 0032d560 INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0032d56c INSTRUCTION LOAD R2 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 0032d572 INSTRUCTION LOAD R1 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0032d588 INSTRUCTION LOAD R4 = 0x8
SCALAR 0x8 AT 0032d5be INSTRUCTION _LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0032d5f0 INSTRUCTION _LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0032d60c INSTRUCTION _LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0032d652 INSTRUCTION _LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0032d69e INSTRUCTION STORE [FP + 0x8] = R2
SCALAR 0x8 AT 0032d6b8 INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0032d6e0 INSTRUCTION _STORE [FP + 0x8] = R0
FUNCTION 0032d6d4 FUN_0032d6d4 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_0032d6d4(int param_1,int *param_2,uint param_3,uint param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 auStack_d8 [196];
  int local_14;
  int local_10;
  uint local_c;
  
  bVar1 = *(byte *)((int)param_2 + 10);
  bVar2 = *(byte *)(param_1 + 10);
  if (bVar2 == bVar1) {
    local_c = param_3 | param_4;
    if ((int)local_c < 0) {
                    /* WARNING: Treating indirect jump as return */
      return 0;
    }
    local_10 = (int)(short)param_2[1];
    if (param_5 != 0) {
      local_14 = param_5;
      iVar3 = FUN_0035b828(param_5,0,0);
      local_10 = iVar3 * (uint)(iVar3 < local_10) + local_10 * (uint)(iVar3 >= local_10);
      FUN_0035b80c(local_14);
    }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  if (bVar2 < 0x10) {
LAB_0032da9a:
    FUN_0034f31c(auStack_d8,param_1);
    FUN_0034dd28(auStack_d8,0,0,param_2);
    FUN_0034e17e(auStack_d8,2);
                    /* WARNING: Treating indirect jump as return */
    return 1;
  }
  if (bVar2 == 0x10) {
    if (bVar1 == 8) {
      if (((((int)param_3 <= (int)*(short *)(param_1 + 0x1c)) &&
           ((int)param_4 <= (int)*(short *)(param_1 + 0x1e))) && (*param_2 != 0)) &&
         (((int)*(short *)(param_1 + 0x18) <= (int)param_3 ||
          ((int)((int)*(short *)(param_1 + 0x18) - param_3) < 0)))) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
                    /* WARNING: Treating indirect jump as return */
      return 0;
    }
  }
  else {
    if (bVar2 != 0x20) goto LAB_0032da9a;
    if (bVar1 == 8) {
      if ((((int)param_3 <= (int)*(short *)(param_1 + 0x1c)) &&
          ((int)param_4 <= (int)*(short *)(param_1 + 0x1e))) &&
         ((*param_2 != 0 &&
          (((int)*(short *)(param_1 + 0x18) <= (int)param_3 ||
           ((int)((int)*(short *)(param_1 + 0x18) - param_3) < (int)(short)param_2[1])))))) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
                    /* WARNING: Treating indirect jump as return */
      return 0;
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 0032d6f0 INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0032d6f6 INSTRUCTION LOAD R4 = W [P3 + 0x8] (X)
SCALAR 0x8 AT 0032d6fc INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0032d746 INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0032d748 INSTRUCTION LOAD P0 = [FP + 0x8]
SCALAR 0x8 AT 0032d788 INSTRUCTION _LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0032d7e8 INSTRUCTION _LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0032d84e INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 0032d8d8 INSTRUCTION LOAD R1 = W [P3 + 0x8] (X)
SCALAR 0x8 AT 0032d94a INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0032d96c INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 0032d9fc INSTRUCTION LOAD R2 = W [P3 + 0x8] (X)
SCALAR 0x8 AT 0032da74 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0032dafe INSTRUCTION LOAD R6 = W [P1 + 0x8] (X)
FUNCTION 0032dad0 FUN_0032dad0 success=true

undefined4 FUN_0032dad0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) &&
      (*(short *)(param_1 + 1) == *(short *)(param_2 + 1))) &&
     ((*(short *)((int)param_1 + 6) == *(short *)((int)param_2 + 6) &&
      (*(short *)(param_1 + 2) == *(short *)(param_2 + 2))))) {
    bVar2 = *(char *)((int)param_1 + 10) == *(char *)((int)param_2 + 10);
  }
  if (bVar2) {
    FUN_00325cec(*param_1,*param_2,param_1[3]);
    FUN_003408dc(param_1);
                    /* WARNING: Treating indirect jump as return */
    return 1;
  }
  uVar1 = FUN_0032d6d4(param_1,param_2,0,0,0);
                    /* WARNING: Treating indirect jump as return */
  return uVar1;
}


END_FUNCTION
SCALAR 0x8 AT 0032db00 INSTRUCTION LOAD R5 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 0032db60 INSTRUCTION LINK 0x8
FUNCTION 0032db60 FUN_0032db60 success=true

undefined4 FUN_0032db60(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  iVar2 = 1;
  if (param_2 < -1) {
    iVar2 = -param_2;
  }
  iVar3 = 1;
  if (param_3 < -1) {
    iVar3 = -param_3;
  }
  if ((iVar2 == 1) && (iVar3 == 1)) {
    iVar2 = FUN_00325a76(0x78);
    puVar6 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar6 = (undefined4 *)
               FUN_00340a48(iVar2,(int)*(short *)(param_1 + 1),(int)*(short *)((int)param_1 + 6),
                            (int)*(char *)((int)param_1 + 10));
    }
    if (puVar6 != (undefined4 *)0x0) {
      FUN_00325cec(*puVar6,*param_1,puVar6[3]);
    }
                    /* WARNING: Could not recover jumptable at 0x0032dc9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE_00)(puVar6);
    return uVar4;
  }
  if (*(char *)((int)param_1 + 10) < *(char *)(DAT_00445304 + 10)) {
    iVar1 = FUN_00325a76(0x78);
    iVar5 = 0;
    if (iVar1 != 0) {
      iVar5 = FUN_00340a48(iVar1,(int)*(short *)(param_1 + 1),(int)*(short *)((int)param_1 + 6),
                           (int)*(char *)(DAT_00445304 + 10));
    }
    if (iVar5 != 0) {
      local_10 = DAT_00437c94;
      local_c = CONCAT22(*(short *)((int)param_1 + 6) + -1,*(short *)(param_1 + 1) + -1);
      FUN_0032d6d4(iVar5,param_1,0,0,&local_10);
    }
    uVar4 = 0;
    if (iVar5 != 0) {
      uVar4 = FUN_0032c800(iVar5,iVar2,iVar3);
    }
  }
  else {
    uVar4 = FUN_0032c800(param_1,iVar2,iVar3);
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    (**(code **)(*(int *)(iVar5 + 0x74) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0x74) + 8),3);
  }
                    /* WARNING: Could not recover jumptable at 0x0032dc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE_00)(uVar4);
  return uVar4;
}


END_FUNCTION
SCALAR 0x8 AT 0032dc2a INSTRUCTION LOAD R0 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0032e256 INSTRUCTION _LOAD R2 = [P2 + 0x8]
FUNCTION 0032e214 FUN_0032e214 success=true

void FUN_0032e214(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x1074) + 1;
  if (0xff < iVar3) {
    iVar3 = 0;
  }
  if (iVar3 != *(int *)(param_1 + 0x1078)) {
    uVar5 = param_2[1];
    puVar1 = (undefined4 *)(param_1 + 0x74 + *(int *)(param_1 + 0x1074) * 0x10);
    uVar4 = param_2[2];
    uVar2 = param_2[3];
    *puVar1 = *param_2;
    *(int *)(param_1 + 0x1074) = iVar3;
    puVar1[3] = uVar2;
    puVar1[2] = uVar4;
    puVar1[1] = uVar5;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032e266 INSTRUCTION STORE [P1 + 0x8] = R2
SCALAR 0x8 AT 0032e8c2 INSTRUCTION LOAD R2 = [P1 + 0x8]
FUNCTION 0032e888 FUN_0032e888 success=true

void FUN_0032e888(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x1078);
    bVar1 = false;
    if (*(int *)(param_1 + 0x1074) != iVar3) {
      puVar2 = (undefined4 *)(param_1 + 0x74 + iVar3 * 0x10);
      iVar3 = iVar3 + 1;
      if (0xff < iVar3) {
        iVar3 = 0;
      }
      bVar1 = true;
      local_c = puVar2[3];
      local_10 = puVar2[2];
      local_14 = puVar2[1];
      local_18 = *puVar2;
      *(int *)(param_1 + 0x1078) = iVar3;
    }
    if (!bVar1) break;
    FUN_0032e9c0(param_1,&local_18);
  }
                    /* WARNING: Could not recover jumptable at 0x0032e8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032ed60 INSTRUCTION LOAD R0 = W [P5 + 0x8] (X)
FUNCTION 0032ed38 FUN_0032ed38 success=true

void FUN_0032ed38(int param_1)

{
  FUN_0035b7f0();
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_1 + 0x40);
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_1 + 0x44);
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(param_1 + 0x42);
  *(undefined2 *)(param_1 + 0x3e) = *(undefined2 *)(param_1 + 0x46);
  (**(code **)(*(int *)(param_1 + 0x6c) + 0x3c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0x38));
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032eda4 INSTRUCTION LOAD R0 = W [P5 + 0x8] (X)
FUNCTION 0032ed7c FUN_0032ed7c success=true

void FUN_0032ed7c(int param_1)

{
  FUN_0035b7d6();
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_1 + 0x40);
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_1 + 0x44);
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(param_1 + 0x42);
  *(undefined2 *)(param_1 + 0x3e) = *(undefined2 *)(param_1 + 0x46);
  (**(code **)(*(int *)(param_1 + 0x6c) + 0x3c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0x38));
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032ede8 INSTRUCTION LOAD R0 = W [P5 + 0x8] (X)
FUNCTION 0032edc0 FUN_0032edc0 success=true

void FUN_0032edc0(int param_1)

{
  FUN_0035b75c();
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_1 + 0x40);
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_1 + 0x44);
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(param_1 + 0x42);
  *(undefined2 *)(param_1 + 0x3e) = *(undefined2 *)(param_1 + 0x46);
  (**(code **)(*(int *)(param_1 + 0x6c) + 0x3c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0x38));
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0032f8d4 INSTRUCTION _STORE [FP + 0x8] = R1
FUNCTION 0032f8c4 FUN_0032f8c4 success=true

int FUN_0032f8c4(int param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  undefined2 *puVar8;
  short *psVar9;
  bool bVar10;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined4 uStack_20;
  short sStack_1c;
  undefined4 auStack_18 [4];
  
  iVar5 = 0;
  puVar8 = param_2;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x6c) + 0x54))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0x50));
  uVar1 = DAT_004451fc;
  if (iVar2 == 0) {
    switch(*puVar8) {
    case 1:
      *(undefined4 *)(param_1 + 0x58) = 1;
      if (*(int *)(param_1 + 0x30) == 0) {
        *(undefined4 *)(param_1 + 0x30) = 1;
        FUN_0032dfc8(DAT_004451fc);
      }
      uStack_28 = CONCAT22(uStack_28._2_2_,1);
      FUN_0032f884(param_1,&uStack_28);
      (**(code **)(*(int *)(param_1 + 0x6c) + 0xc4))
                (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0xc0));
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x58) = 0;
      uStack_28 = CONCAT22(uStack_28._2_2_,2);
      FUN_0032f884(param_1,&uStack_28);
      auStack_18[0] = CONCAT22(*(undefined2 *)(param_1 + 0x2c),0xf);
      FUN_0032e214(DAT_004451fc,auStack_18);
      (**(code **)(*(int *)(param_1 + 0x6c) + 0xcc))
                (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 200));
      break;
    case 3:
      *(undefined4 *)(param_1 + 100) = 1;
      if (*(int *)(param_1 + 0x30) == 0) {
        *(undefined4 *)(param_1 + 0x30) = 1;
        FUN_0032dfc8(DAT_004451fc);
      }
      break;
    case 4:
      if (*(int *)(param_1 + 0x30) == 0) {
        *(undefined4 *)(param_1 + 0x30) = 1;
        FUN_0032dfc8(uVar1);
      }
      break;
    case 5:
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_0032f06c(param_1);
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      break;
    case 7:
      break;
    case 9:
      if (((*(int *)(param_1 + 0x24) == 0) || (*(int *)(param_1 + 0x60) != 0)) &&
         (*(int *)(param_1 + 0x58) != 0)) {
        (**(code **)(*(int *)(param_1 + 0x6c) + 0x74))
                  (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0x70),*(undefined4 *)(puVar8 + 2)
                  );
      }
                    /* WARNING: Treating indirect jump as return */
      return 0;
    case 10:
      if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Treating indirect jump as return */
        return 0;
      }
      iVar2 = (**(code **)(*(int *)(param_1 + 0x6c) + 0xac))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0xa8),(int)(short)puVar8[1]
                        );
                    /* WARNING: Treating indirect jump as return */
      return iVar2;
    case 0xb:
      if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Treating indirect jump as return */
        return 0;
      }
      iVar2 = (**(code **)(*(int *)(param_1 + 0x6c) + 0xb4))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0xb0),(int)(short)puVar8[1]
                        );
                    /* WARNING: Treating indirect jump as return */
      return iVar2;
    case 0xc:
      if (*(int *)(param_1 + 0x58) != 0) {
        iVar2 = (**(code **)(*(int *)(param_1 + 0x6c) + 0xbc))
                          (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0xb8),
                           (int)(short)puVar8[1],(int)(short)puVar8[2]);
                    /* WARNING: Treating indirect jump as return */
        return iVar2;
      }
      break;
    case 0xd:
      iVar2 = (**(code **)(*(int *)(param_1 + 0x6c) + 0x4c))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0x48),(int)(short)puVar8[1]
                         ,param_2 + 2);
                    /* WARNING: Treating indirect jump as return */
      return iVar2;
    case 0xe:
      if (*(int *)(param_1 + 0x58) != 0) {
        (**(code **)(*(int *)(param_1 + 0x6c) + 0x6c))
                  (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0x68));
      }
      if (*(int *)(param_1 + 0x34) != 0) {
        psVar9 = (short *)(param_1 + 0x40);
        uStack_28 = *(undefined4 *)psVar9;
        uStack_24 = *(undefined2 *)(param_1 + 0x44);
        uStack_22 = *(undefined2 *)(param_1 + 0x46);
        FUN_0035b844(psVar9,(int)(short)puVar8[1],(int)(short)puVar8[2]);
        sVar6 = *psVar9 - (short)uStack_28;
        sVar7 = *(short *)(param_1 + 0x42) - (short)((uint)uStack_28 >> 0x10);
        iVar2 = (int)sVar6;
        iVar5 = (int)sVar7;
        FUN_0035b844(param_1 + 0x38,iVar2,iVar5);
        FUN_0035b844(param_1 + 0x48,iVar2,iVar5);
        uStack_20 = CONCAT22(sVar6,0xe);
        sStack_1c = sVar7;
        FUN_0032f884(param_1,&uStack_20);
        (**(code **)(*(int *)(param_1 + 0x6c) + 0x8c))
                  (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0x88),iVar2,iVar5);
      }
      iVar5 = 1;
    }
  }
  if (iVar5 == 0) {
    iVar2 = FUN_0033e07e(param_1);
    iVar4 = 0;
    while ((bVar10 = iVar4 < iVar2, iVar4 = iVar4 + 1, bVar10 &&
           (iVar3 = FUN_0033e030(param_1), iVar3 != 0))) {
      if (param_1 != iVar3) {
        FUN_0032f8c4(iVar3,param_2);
      }
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return iVar5;
}


END_FUNCTION
SCALAR 0x8 AT 0032f97a INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0033004e INSTRUCTION STORE [P5 + 0x8] = R3
FUNCTION 00330000 FUN_00330000 success=true

void FUN_00330000(int param_1,undefined2 *param_2)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 auStack_128 [288];
  
  puVar6 = (undefined2 *)(param_1 + 0x7c);
  sVar1 = param_2[2];
  sVar2 = param_2[1];
  *puVar6 = *param_2;
  *(int *)(param_1 + 0x80) = (int)sVar1;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(int *)(param_1 + 0x7e) = (int)sVar2;
  FUN_0030111e(&DAT_0043ece0,puVar6,param_1 + 0x98,param_1 + 0x9c);
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar5 = FUN_00300fbe(&DAT_0043ece0,puVar6);
    *(undefined4 *)(param_1 + 0xa0) = uVar5;
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    FUN_003012b2(&DAT_0043ece0,auStack_128,puVar6,*(undefined4 *)(param_1 + 0x98));
  }
  else {
    (**(code **)(*(int *)(param_1 + 0x6c) + 0x124))
              (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0x120),auStack_128);
  }
  uVar3 = FUN_003536d8(auStack_128);
  *(undefined2 *)(param_1 + 0x90) = uVar3;
  iVar4 = FUN_0030131c(&DAT_0043ece0,puVar6);
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003300c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0032f00c(param_1);
                    /* WARNING: Could not recover jumptable at 0x003300d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003304b2 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 00330a04 INSTRUCTION LINK 0x8
FUNCTION 00330a04 FUN_00330a04 success=true

int FUN_00330a04(int param_1)

{
  int local_10 [2];
  
  FUN_0032de60();
  *(undefined4 *)(param_1 + 0x84) = 0x3f;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffe0;
  *(undefined2 *)(param_1 + 0x70) = 2;
  *(undefined2 *)(param_1 + 0x72) = 0;
  *(undefined2 *)(param_1 + 0x74) = 0x12;
  *(undefined2 *)(param_1 + 0x76) = 0xffff;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined **)(param_1 + 0x6c) = &DAT_00403ed0;
  local_10[1] = 0x3f007f;
  local_10[0] = param_1;
  FUN_0032ebfc(param_1,local_10);
  FUN_0032f18c(param_1,2,param_1);
  FUN_0032f18c(param_1,3,param_1);
  FUN_0032f18c(param_1,4,param_1);
  FUN_0032ee5e(param_1);
  *(undefined4 *)(param_1 + 0x188) = 1;
  *(undefined4 *)(param_1 + 400) = 0x15e;
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}


END_FUNCTION
SCALAR 0x8 AT 00330b1a INSTRUCTION _LOAD R1 = [P1 + 0x8]
FUNCTION 00330b08 FUN_00330b08 success=true

void FUN_00330b08(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0x78) = param_2[2];
  iVar1 = param_2[3];
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  uVar2 = *param_2;
  *(int *)(param_1 + 0x7c) = iVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined1 *)(param_1 + 0x88) = 0;
  if (iVar1 == 0) {
    if ((code *)param_2[2] != (code *)0x0) {
      (*(code *)param_2[2])(param_1 + 0x88);
    }
  }
  else {
    FUN_00353794(param_1 + 0x88,iVar1,0xff);
  }
  FUN_0032ebd0(param_1,(int)*(short *)(param_1 + 0x76));
                    /* WARNING: Could not recover jumptable at 0x00330b5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00330b60 INSTRUCTION LOAD R1 = [P1 + 0x8]
SCALAR 0x8 AT 003316e8 INSTRUCTION ADD P2 += 0x8
FUNCTION 00331668 FUN_00331668 success=true

void FUN_00331668(int param_1,short param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  short sVar6;
  int *piVar7;
  int iVar8;
  
  iVar3 = FUN_0032ec4a();
  if (iVar3 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  sVar1 = *(short *)(param_1 + 0x78);
  iVar3 = param_1 + 0x8c;
  piVar5 = (int *)(iVar3 + (short)(sVar1 + -1) * 4);
  sVar6 = -1;
  do {
    iVar8 = -1;
    piVar7 = piVar5;
    sVar2 = sVar1;
    do {
      sVar1 = sVar2 + -1;
      if ((-1 < param_2) || (sVar2 = sVar1, sVar1 < 0)) {
        sVar2 = sVar2 + 1;
        piVar5 = (int *)(iVar3 + sVar2 * 4);
        do {
          iVar8 = -1;
          piVar7 = piVar5;
          sVar1 = sVar2;
          do {
            sVar2 = sVar1 + 1;
            if ((param_2 < 1) || (*(short *)(*(int *)(param_1 + 0x88) + 8) <= sVar1)) {
              iVar8 = (int)sVar6;
              if (iVar8 < 0) {
                    /* WARNING: Treating indirect jump as return */
                return;
              }
              iVar4 = FUN_0032ec4a(param_1);
              if (iVar4 == 0) {
                    /* WARNING: Treating indirect jump as return */
                return;
              }
              if (*(short *)(*(int *)(param_1 + 0x88) + 8) <= iVar8) {
                *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
                    /* WARNING: Treating indirect jump as return */
                return;
              }
              if (*(int *)(param_1 + 0x78) != iVar8) {
                if (*(int *)(iVar3 + iVar8 * 4) == 0) {
                    /* WARNING: Treating indirect jump as return */
                  return;
                }
                *(int *)(param_1 + 0x78) = iVar8;
                if (iVar8 < *(int *)(param_1 + 0x7c)) {
                  *(int *)(param_1 + 0x7c) = iVar8;
                }
                else if (*(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x70) + -1 < iVar8) {
                  *(int *)(param_1 + 0x7c) = (iVar8 - *(int *)(param_1 + 0x70)) + 1;
                }
                FUN_0032ee5e(param_1);
                    /* WARNING: Treating indirect jump as return */
                return;
              }
                    /* WARNING: Treating indirect jump as return */
              return;
            }
            piVar5 = piVar7 + 1;
            if (*piVar7 != 0) {
              param_2 = param_2 + -1;
              sVar6 = sVar1;
            }
          } while ((iVar8 != 0) && (iVar8 = iVar8 + -1, piVar7 = piVar5, sVar1 = sVar2, iVar8 != 0))
          ;
        } while( true );
      }
      piVar5 = piVar7 + -1;
      if (*piVar7 != 0) {
        param_2 = param_2 + 1;
        sVar6 = sVar1;
      }
    } while ((iVar8 != 0) && (iVar8 = iVar8 + -1, piVar7 = piVar5, iVar8 != 0));
  } while( true );
}


END_FUNCTION
SCALAR 0x8 AT 00331734 INSTRUCTION LOAD R0 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 00331850 INSTRUCTION LOAD R0 = W [P1 + 0x8] (X)
FUNCTION 003317c0 FUN_003317c0 success=true

void FUN_003317c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (param_2 == iVar1) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  piVar4 = (int *)(param_1 + 0x8c + param_2 * 4);
  sVar5 = (short)param_2;
  sVar3 = 1;
  if (-1 < param_2 - iVar1) {
    sVar3 = -1;
  }
  do {
    iVar7 = -1;
    sVar6 = sVar5;
    do {
      sVar5 = sVar3 + sVar6;
      iVar2 = *piVar4;
      piVar4 = piVar4 + sVar3;
      if (iVar2 != 0) {
        iVar1 = FUN_0032ec4a();
        if (iVar1 == 0) {
                    /* WARNING: Treating indirect jump as return */
          return;
        }
        iVar1 = (int)sVar6;
        if ((iVar1 < 0) || (*(short *)(*(int *)(param_1 + 0x88) + 8) <= iVar1)) {
          *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
                    /* WARNING: Treating indirect jump as return */
          return;
        }
        if (*(int *)(param_1 + 0x78) == iVar1) {
                    /* WARNING: Treating indirect jump as return */
          return;
        }
        if (*(int *)(param_1 + 0x8c + iVar1 * 4) == 0) {
                    /* WARNING: Treating indirect jump as return */
          return;
        }
        *(int *)(param_1 + 0x78) = iVar1;
        if (iVar1 < *(int *)(param_1 + 0x7c)) {
          *(int *)(param_1 + 0x7c) = iVar1;
        }
        else if (*(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x70) + -1 < iVar1) {
          *(int *)(param_1 + 0x7c) = (iVar1 - *(int *)(param_1 + 0x70)) + 1;
        }
        FUN_0032ee5e(param_1);
                    /* WARNING: Treating indirect jump as return */
        return;
      }
      if (sVar5 == iVar1) {
                    /* WARNING: Treating indirect jump as return */
        return;
      }
    } while ((iVar7 != 0) && (iVar7 = iVar7 + -1, sVar6 = sVar5, iVar7 != 0));
  } while( true );
}


END_FUNCTION
SCALAR 0x8 AT 00331b58 INSTRUCTION LOAD R1 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 00331fd0 INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00331fe4 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 00331ff4 INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00332888 INSTRUCTION LOAD R2 = [P5 + 0x8]
FUNCTION 00332870 FUN_00332870 success=true

void FUN_00332870(int param_1,undefined4 *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  sVar2 = 0;
  uVar5 = param_2[2];
  *(undefined4 *)(param_1 + 0x7c) = param_2[3];
  *(undefined4 *)(param_1 + 0x74) = param_2[1];
  *(undefined4 *)(param_1 + 0x70) = *param_2;
  *(undefined4 *)(param_1 + 0x78) = uVar5;
  *(undefined4 *)(param_1 + 0xa8) = param_2[2];
  if (*(int *)(param_1 + 0x94) != 0) {
    sVar2 = FUN_0030e964(4);
    sVar2 = sVar2 + 2;
  }
  *(short *)(param_1 + 0xac) = sVar2;
  *(undefined4 *)(param_1 + 0x80) = 0;
  sVar2 = *(short *)(param_1 + 0x9c);
  sVar1 = *(short *)(param_1 + 0xa8) + -1;
  iVar3 = (int)*(short *)(param_1 + 0x70);
  if (sVar2 != 0) {
    if (sVar2 == 1) {
      if (iVar3 < 0) {
        iVar3 = (iVar3 - *(int *)(param_1 + 0xa8)) + 1;
        *(int *)(param_1 + 0x80) = iVar3;
        if (iVar3 < 0) {
          *(undefined4 *)(param_1 + 0x80) = 0;
        }
      }
      else if (sVar1 < iVar3) {
        iVar3 = *(int *)(param_1 + 0xa8);
        *(int *)(param_1 + 0x80) = iVar3;
        if ((*(int *)(param_1 + 0x74) <= iVar3) &&
           (iVar3 = *(int *)(param_1 + 0x74) - iVar3, *(int *)(param_1 + 0x80) = iVar3, iVar3 < 0))
        {
          *(undefined4 *)(param_1 + 0x80) = 0;
        }
      }
      goto LAB_003328d6;
    }
    if (sVar2 == 2) {
      if (iVar3 < 0) {
        iVar3 = iVar3 - *(int *)(param_1 + 0xa8) / 2;
        *(int *)(param_1 + 0x80) = iVar3;
        if (iVar3 < 0) {
          *(undefined4 *)(param_1 + 0x80) = 0;
        }
      }
      else if (sVar1 < iVar3) {
        iVar3 = (iVar3 - *(int *)(param_1 + 0xa8) / 2) + 1;
        *(int *)(param_1 + 0x80) = iVar3;
        iVar4 = *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0xa8);
        if ((iVar4 < iVar3) && (*(int *)(param_1 + 0x80) = iVar4, iVar4 < 0)) {
          *(undefined4 *)(param_1 + 0x80) = 0;
        }
      }
      goto LAB_003328d6;
    }
  }
  if (iVar3 < 0) {
    *(int *)(param_1 + 0x80) = iVar3;
  }
  else if (sVar1 < iVar3) {
    *(int *)(param_1 + 0x80) = (iVar3 - *(int *)(param_1 + 0xa8)) + 1;
  }
LAB_003328d6:
  *(int *)(param_1 + 0x98) = (int)*(short *)(param_2 + 3);
  (**(code **)(*(int *)(param_1 + 0x6c) + 0x15c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0x158));
                    /* WARNING: Could not recover jumptable at 0x003328f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003328a4 INSTRUCTION LOAD R1 = [P5 + 0x8]
SCALAR 0x8 AT 00332d40 INSTRUCTION ADD R7 += 0x8
SCALAR 0x8 AT 00333dc6 INSTRUCTION LOAD R0 = W [P5 + 0x8] (X)
FUNCTION 00333db4 FUN_00333db4 success=true

void FUN_00333db4(int param_1,int param_2)

{
  undefined2 uVar1;
  
  FUN_00330000();
  uVar1 = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 0xbc) = uVar1;
  switch(uVar1) {
  case 2:
  case 3:
    *(undefined2 *)(param_1 + 0xae) = 0xffff;
    *(undefined2 *)(param_1 + 0xb0) = 0;
    break;
  case 4:
  case 5:
    *(undefined2 *)(param_1 + 0xae) = 0xd;
    *(undefined2 *)(param_1 + 0xb0) = 0;
    break;
  case 6:
    *(undefined2 *)(param_1 + 0xae) = 0xf;
    *(undefined2 *)(param_1 + 0xb0) = 0;
    break;
  default:
    *(undefined2 *)(param_1 + 0xae) = 0xffff;
    *(undefined2 *)(param_1 + 0xb0) = 0;
  }
  FUN_00333be4(param_1);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_2 + 6);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_2 + 4);
  FUN_00333be4(param_1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00333e8c INSTRUCTION STORE [FP + 0x8] = R6
FUNCTION 00333e48 FUN_00333e48 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00333e48(int param_1)

{
  undefined1 auStack_88 [128];
  
  FUN_0034e03a(*(undefined4 *)(param_1 + 0x34),&stack0x00000000,0x2c);
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xae));
  FUN_00324010(auStack_88,&DAT_00437e28,*(short *)(param_1 + 0xbe) + 1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00333e94 INSTRUCTION ADD R7 += 0x8
SCALAR 0x8 AT 00334312 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00334322 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00334334 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 003345b4 INSTRUCTION ADD R2 += 0x8
FUNCTION 00334564 FUN_00334564 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00334564(int param_1)

{
  short in_stack_00000000;
  short in_stack_00000002;
  
  switch(*(undefined2 *)(param_1 + 0xbc)) {
  case 1:
    *(undefined2 *)(param_1 + 0xc4) = 4;
    *(undefined2 *)(param_1 + 0xc2) = 4;
    break;
  case 2:
    *(undefined2 *)(param_1 + 0xc4) = 4;
    *(undefined2 *)(param_1 + 0xc2) = 4;
    break;
  case 3:
    *(undefined2 *)(param_1 + 0xc4) = 4;
    *(undefined2 *)(param_1 + 0xc2) = 4;
    break;
  case 4:
    *(undefined2 *)(param_1 + 0xc4) = 4;
    *(undefined2 *)(param_1 + 0xc2) = 4;
    break;
  case 5:
  case 6:
    *(undefined2 *)(param_1 + 0xc4) = 4;
    *(undefined2 *)(param_1 + 0xc2) = 4;
    break;
  case 7:
    *(undefined2 *)(param_1 + 0xc4) = 4;
    *(undefined2 *)(param_1 + 0xc2) = 4;
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    *(undefined2 *)(param_1 + 0xb0) = 0xb;
    *(undefined2 *)(param_1 + 0xae) = 0xb;
    *(undefined2 *)(param_1 + 0xc2) = 0x58;
    *(undefined2 *)(param_1 + 0xc4) = 100;
    break;
  case 0xc:
    *(undefined2 *)(param_1 + 0xb0) = 0xb;
    *(undefined2 *)(param_1 + 0xae) = 0xb;
    *(undefined2 *)(param_1 + 0xc2) = 0x58;
    *(undefined2 *)(param_1 + 0xc4) = 100;
    break;
  case 0xd:
    *(undefined2 *)(param_1 + 0xb0) = 0xb;
    *(undefined2 *)(param_1 + 0xae) = 0xb;
    *(undefined2 *)(param_1 + 0xc2) = 0x58;
    *(undefined2 *)(param_1 + 0xc4) = 100;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
    *(undefined2 *)(param_1 + 0xb0) = 0xb;
    *(undefined2 *)(param_1 + 0xae) = 0xb;
    *(undefined2 *)(param_1 + 0xc2) = 0x7f;
    *(undefined2 *)(param_1 + 0xc4) = 0x95;
    break;
  case 0x13:
    *(undefined2 *)(param_1 + 0xb0) = 0x12;
    *(undefined2 *)(param_1 + 0xae) = 0x12;
    *(undefined2 *)(param_1 + 0xc2) = 0x7f;
    *(undefined2 *)(param_1 + 0xc4) = 0x95;
    break;
  case 0x15:
    *(undefined2 *)(param_1 + 0xc2) = 4;
    *(undefined2 *)(param_1 + 0xc4) = 3;
    break;
  case 0x16:
    *(undefined2 *)(param_1 + 0xc2) = 4;
    *(undefined2 *)(param_1 + 0xc4) = 3;
    break;
  case 0x17:
    *(undefined2 *)(param_1 + 0xc2) = 4;
    *(undefined2 *)(param_1 + 0xc4) = 3;
    break;
  case 0x18:
    *(undefined2 *)(param_1 + 0xc2) = 4;
    *(undefined2 *)(param_1 + 0xc4) = 3;
    break;
  case 0x19:
    *(undefined2 *)(param_1 + 0xc2) = 4;
    *(undefined2 *)(param_1 + 0xc4) = 3;
    *(undefined4 *)(param_1 + 200) = 0;
    FUN_0030e910(4,&stack0x00000002,&stack0x00000000);
    FUN_0032edc0(param_1,(int)in_stack_00000002,(int)in_stack_00000000);
                    /* WARNING: Treating indirect jump as return */
    return;
  default:
    *(undefined2 *)(param_1 + 0xc4) = 4;
    *(undefined2 *)(param_1 + 0xc2) = 4;
  }
  FUN_0030e764((int)*(short *)(param_1 + 0xb0));
  FUN_0030e764((int)*(short *)(param_1 + 0xb0));
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00334600 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00334736 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00334750 INSTRUCTION LOAD R2 = W [FP + 0x8] (X)
SCALAR 0x8 AT 00334762 INSTRUCTION LOAD R0 = W [FP + 0x8] (X)
SCALAR 0x8 AT 00334766 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00334770 INSTRUCTION LOAD R2 = W [FP + 0x8] (X)
SCALAR 0x8 AT 003347c8 INSTRUCTION LOAD R0 = W [FP + 0x8] (X)
SCALAR 0x8 AT 003347cc INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 003347d6 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 003347e0 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 003347ea INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 003347f0 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00334966 INSTRUCTION ADD R5 += 0x8
FUNCTION 0033487c FUN_0033487c success=true

void FUN_0033487c(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  short sVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  short local_130;
  short sStack_12e;
  undefined2 local_12c;
  short local_12a;
  undefined1 auStack_128 [288];
  
  local_12a = *(short *)(param_1 + 0x46);
  local_12c = *(undefined2 *)(param_1 + 0x44);
  sStack_12e = *(short *)(param_1 + 0x42);
  local_130 = *(short *)(param_1 + 0x40);
  if (*(short *)(param_1 + 0xbc) == 6) {
    FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_130);
  }
  iVar3 = FUN_ffa038f0((*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x98)) *
                       *(int *)(param_1 + 200),*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98));
  uVar4 = iVar3 + *(short *)(param_1 + 0xc2);
  if ((int)uVar4 < (int)*(short *)(param_1 + 0xc2)) {
    uVar4 = (uint)*(ushort *)(param_1 + 0xc2);
  }
  else if ((int)*(short *)(param_1 + 0xc4) <= (int)uVar4) {
    uVar4 = (uint)*(ushort *)(param_1 + 0xc4);
  }
  FUN_0034e958(*(undefined4 *)(param_1 + 0x34),(int)(short)(local_130 + *(short *)(param_1 + 0xbe)),
               (int)sStack_12e,(int)(short)uVar4);
  FUN_0032ff16(param_1,auStack_128,*(undefined4 *)(param_1 + 0xa0));
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xb0));
  iVar3 = (int)local_130;
  iVar5 = FUN_0030e764((int)*(short *)(param_1 + 0xb0));
  uVar1 = *(ushort *)(param_1 + 0xbc);
  sVar7 = local_12a - (*(char *)(iVar5 + 0xd) + 1);
  if ((4 < uVar1) && ((uVar1 == 5 || (uVar1 == 6)))) {
    sVar7 = sVar7 + 1;
  }
  iVar5 = FUN_0032ec4a(param_1);
  if (iVar5 == 0) {
    FUN_0034dee2(*(undefined4 *)(param_1 + 0x34),0x1000003,0x1000001);
  }
  else {
    iVar5 = FUN_0032ec5a(param_1);
    if (iVar5 == 0) {
      FUN_00340654(&DAT_00445218,&stack0x00000000);
      FUN_0034e03a(*(undefined4 *)(param_1 + 0x34),&stack0x00000000);
    }
    else {
      FUN_003405f0(&DAT_00445218,&stack0x00000000);
      FUN_0034e03a(*(undefined4 *)(param_1 + 0x34),&stack0x00000000);
      if (*(short *)(param_1 + 0xbc) == 6) {
        FUN_0034df50(*(undefined4 *)(param_1 + 0x34));
        uVar6 = FUN_003405c4(&DAT_00445218,0x18);
        FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),uVar6);
        FUN_0034e550(*(undefined4 *)(param_1 + 0x34),&local_130);
        FUN_0034df02(*(undefined4 *)(param_1 + 0x34));
      }
    }
  }
  sVar2 = *(short *)(param_1 + 0x90);
  iVar5 = FUN_003536d8(auStack_128);
  if (sVar2 < iVar5) {
                    /* WARNING: Could not recover jumptable at 0x003349a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),iVar3,(int)sVar7,auStack_128);
                    /* WARNING: Could not recover jumptable at 0x003349ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003349f4 INSTRUCTION ADD R5 += 0x8
SCALAR 0x8 AT 00334c22 INSTRUCTION ADD R1 += 0x8
FUNCTION 00334a44 FUN_00334a44 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00334a44(int param_1)

{
  FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),0x1000000);
  if (*(int *)(param_1 + 0x9c) != *(int *)(param_1 + 0x98)) {
    FUN_ffa038f0(*(int *)(param_1 + 200) * (*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x98)));
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00334c3e INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00334eda INSTRUCTION ADD R7 += 0x8
FUNCTION 00334cf4 FUN_00334cf4 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00334cf4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  char *pcVar6;
  char *pcVar7;
  short local_28;
  short local_26;
  undefined2 local_24;
  undefined2 local_22;
  char local_20 [16];
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  local_22 = *(undefined2 *)(param_1 + 0x46);
  local_24 = *(undefined2 *)(param_1 + 0x44);
  local_26 = *(short *)(param_1 + 0x42);
  local_28 = *(short *)(param_1 + 0x40);
  iVar2 = FUN_0032ec4a();
  if ((iVar2 == 0) || (iVar2 = FUN_0032ec5a(param_1), iVar2 == 0)) {
    FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),0x1000003);
    FUN_0034e5fe(*(undefined4 *)(param_1 + 0x34),&local_28);
    FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),0x1000000);
  }
  else {
    FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),0x1000000);
    FUN_0034e5fe(*(undefined4 *)(param_1 + 0x34),&local_28);
  }
  sVar5 = local_28 + 1;
  iVar2 = (int)local_26;
  iVar3 = 0;
  if (*(int *)(param_1 + 0x9c) != *(int *)(param_1 + 0x98)) {
    iVar3 = FUN_ffa038f0(*(int *)(param_1 + 200) *
                         (*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x98)));
  }
  uVar4 = iVar3 + *(short *)(param_1 + 0xc2);
  if ((int)uVar4 < (int)*(short *)(param_1 + 0xc2)) {
    uVar4 = (uint)*(ushort *)(param_1 + 0xc2);
  }
  else if ((int)*(short *)(param_1 + 0xc4) <= (int)uVar4) {
    uVar4 = (uint)*(ushort *)(param_1 + 0xc4);
  }
  iVar3 = FUN_0032ec4a(param_1);
  if (iVar3 == 0) {
    FUN_0034e958(*(undefined4 *)(param_1 + 0x34),(int)sVar5,iVar2,(int)(short)uVar4);
  }
  else {
    iVar3 = FUN_0032ec5a(param_1);
    if (iVar3 == 0) {
      FUN_0034e958(*(undefined4 *)(param_1 + 0x34),(int)sVar5,iVar2,(int)(short)uVar4);
    }
    else {
      FUN_0034ea14(*(undefined4 *)(param_1 + 0x34),(int)sVar5,iVar2);
    }
  }
  FUN_0032ff16(param_1,local_20,*(undefined4 *)(param_1 + 0xa0));
  if (local_20[0] == '-') {
    local_20[0] = '\0';
  }
  if (local_20[0] == '+') {
    local_20[0] = '\0';
  }
  if (local_20[0] == ' ') {
    do {
      iVar2 = -1;
      do {
        pcVar7 = local_20;
        iVar3 = 0x10;
        pcVar6 = local_20;
        do {
          pcVar7 = pcVar7 + 1;
          cVar1 = *pcVar7;
          *pcVar6 = cVar1;
          if ((cVar1 == '\0') || (iVar3 == 0)) break;
          iVar3 = iVar3 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iVar3 != 0);
        if (local_20[0] != ' ') goto LAB_00334e2e;
      } while ((iVar2 != 0) && (iVar2 = iVar2 + -1, iVar2 != 0));
    } while( true );
  }
LAB_00334e2e:
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xb0));
  local_a = *(undefined2 *)(param_1 + 0x46);
  local_e = *(undefined2 *)(param_1 + 0x42);
  local_c = *(undefined2 *)(param_1 + 0x44);
  local_10 = *(undefined2 *)(param_1 + 0x44);
  pcVar7 = local_20;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00334ef0 INSTRUCTION ADD R7 += 0x8
SCALAR 0x8 AT 00335182 INSTRUCTION ADD R1 += 0x8
FUNCTION 00334f70 FUN_00334f70 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00334f70(int param_1)

{
  int iVar1;
  
  FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34));
  iVar1 = FUN_0032ec5a(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0033519e INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00335288 INSTRUCTION _STORE [FP + 0x8] = R7
FUNCTION 00335250 FUN_00335250 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00335250(int param_1)

{
  int iVar1;
  
  FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),0x1000000);
  iVar1 = FUN_0032ec5a(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00335368 INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT 0033537e INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 003353ac INSTRUCTION _LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0033546c INSTRUCTION _STORE [FP + 0x8] = R7
FUNCTION 00335458 FUN_00335458 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00335458(int param_1)

{
  int iVar1;
  
  FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),0x1000000);
  iVar1 = FUN_0032ec5a(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0033557a INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 003355a8 INSTRUCTION _LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 003359ba INSTRUCTION STORE W [FP + 0x8] = R2
FUNCTION 00335988 FUN_00335988 success=true

void FUN_00335988(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short in_stack_00000000;
  short sVar5;
  short in_stack_00000002;
  short sVar6;
  
  switch(*(undefined2 *)(param_1 + 0xbc)) {
  case 1:
    FUN_0032edc0(param_1,5);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 3:
    *(undefined2 *)(param_1 + 0xb0) = 0xb;
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    *(undefined2 *)(param_1 + 0xae) = 0xb;
    *(undefined2 *)(param_1 + 200) = 0x20;
    *(undefined2 *)(param_1 + 0xb0) = 0xb;
    *(undefined2 *)(param_1 + 0xc6) = 0x16;
    goto LAB_00335a64;
  case 0xd:
    goto LAB_00335a64;
  case 0xe:
    goto LAB_00335a64;
  case 0xf:
    goto LAB_00335a64;
  case 0x10:
    goto LAB_00335a64;
  case 0x11:
    goto LAB_00335a64;
  case 0x12:
    goto LAB_00335a64;
  case 0x13:
    goto LAB_00335a64;
  case 0x14:
    goto LAB_00335a64;
  case 0x15:
    FUN_0032edc0(param_1,5);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x16:
LAB_00335a64:
    *(undefined2 *)(param_1 + 0xc6) = 0x21;
    *(undefined2 *)(param_1 + 200) = 0x2f;
    *(undefined2 *)(param_1 + 0xae) = 0xb;
    *(undefined2 *)(param_1 + 0xb0) = 0xb;
    break;
  case 0x17:
    *(undefined2 *)(param_1 + 0xc6) = 0x30;
    *(undefined2 *)(param_1 + 200) = 0x3e;
    break;
  case 0x18:
  case 0x19:
    *(undefined2 *)(param_1 + 0xb0) = 0xb;
    *(undefined2 *)(param_1 + 0xae) = 0xb;
    *(undefined2 *)(param_1 + 0xc6) = 0x3f;
    *(undefined2 *)(param_1 + 200) = 0x56;
    break;
  case 0x1a:
    *(undefined2 *)(param_1 + 0xc6) = 0x3f;
    *(undefined2 *)(param_1 + 200) = 0x56;
    *(undefined2 *)(param_1 + 0xae) = 0x12;
    *(undefined2 *)(param_1 + 0xb0) = 0xd;
    break;
  case 0x1b:
    *(undefined2 *)(param_1 + 0xc6) = 0x3f;
    *(undefined2 *)(param_1 + 200) = 0x56;
    *(undefined2 *)(param_1 + 0xae) = 0xd;
    *(undefined2 *)(param_1 + 0xb0) = 0xb;
    break;
  case 0x1c:
    *(undefined2 *)(param_1 + 0xb0) = 0;
    *(undefined2 *)(param_1 + 0xae) = 0;
    break;
  case 0x1d:
  case 0x1e:
    FUN_0030ea64(0x10,&stack0x00000002);
    FUN_0032edc0(param_1,(int)in_stack_00000002,(int)in_stack_00000000);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  uVar3 = FUN_0034dfba(*(undefined4 *)(param_1 + 0x34));
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xb0));
  FUN_0034ee38(*(undefined4 *)(param_1 + 0x34),&DAT_00438000);
  uVar4 = FUN_0034f038(*(undefined4 *)(param_1 + 0x34),&DAT_00438008);
  sVar5 = (short)uVar4;
  sVar6 = (short)((uint)uVar4 >> 0x10);
  switch(*(undefined2 *)(param_1 + 0xbc)) {
  case 3:
  case 6:
  case 7:
    sVar6 = sVar6 + -1;
    break;
  case 5:
    break;
  case 8:
    sVar6 = sVar6 + -1;
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    sVar5 = 0xf;
    sVar6 = 0;
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
    sVar5 = 0x1a;
    sVar6 = 0;
    break;
  case 0x17:
    sVar5 = 0x1a;
    sVar6 = 0;
    break;
  case 0x18:
  case 0x19:
    sVar5 = 0x21;
    sVar6 = 0;
    break;
  case 0x1a:
    sVar5 = 0x21;
    sVar6 = 0;
    break;
  case 0x1b:
    sVar5 = 0x21;
    sVar6 = 0;
    break;
  case 0x1c:
    sVar6 = sVar6 + 1;
  }
  iVar1 = CONCAT22(sVar6,sVar5);
  switch(*(undefined2 *)(param_1 + 0xbc)) {
  case 4:
    sVar6 = sVar6 + 4;
  default:
    goto switchD_00335bfe_caseD_5;
  case 6:
    goto switchD_00335bfe_caseD_5;
  case 7:
    goto switchD_00335bfe_caseD_5;
  case 8:
switchD_00335bfe_caseD_5:
    iVar1 = (uint)(ushort)(*(short *)(param_1 + 0xc2) + *(short *)(param_1 + 0xc0)) +
            CONCAT22(sVar6,sVar5);
    break;
  case 9:
  case 0x1b:
    break;
  case 10:
    iVar1 = CONCAT22(sVar6,sVar5);
    break;
  case 0xb:
    iVar1 = CONCAT22(sVar6,sVar5);
    break;
  case 0xc:
    iVar1 = CONCAT22(sVar6,sVar5);
    break;
  case 0xd:
    iVar1 = CONCAT22(sVar6,sVar5);
    break;
  case 0xe:
    iVar1 = CONCAT22(sVar6,sVar5);
    break;
  case 0xf:
    iVar1 = CONCAT22(sVar6,sVar5);
    break;
  case 0x10:
    iVar1 = CONCAT22(sVar6,sVar5);
    break;
  case 0x11:
    iVar1 = CONCAT22(sVar6,sVar5);
    break;
  case 0x12:
    iVar1 = CONCAT22(sVar6,sVar5);
    break;
  case 0x13:
    iVar1 = CONCAT22(sVar6,sVar5);
    break;
  case 0x14:
    iVar1 = CONCAT22(sVar6,sVar5);
    break;
  case 0x16:
    iVar1 = CONCAT22(sVar6,sVar5);
    break;
  case 0x17:
    iVar1 = CONCAT22(sVar6,sVar5);
    break;
  case 0x18:
    iVar1 = CONCAT22(sVar6,sVar5);
    break;
  case 0x19:
    iVar1 = sVar5 + 7;
    break;
  case 0x1a:
    iVar1 = CONCAT22(sVar6,sVar5);
  }
  FUN_0032edc0(param_1,(int)(short)((uint)iVar1 >> 0x10),(int)(short)iVar1);
  *(int *)(param_1 + 0xcc) = ((int)*(short *)(param_1 + 200) - (int)*(short *)(param_1 + 0xc6)) + 1;
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),uVar3);
  uVar3 = FUN_0030e764((int)*(short *)(param_1 + 0xb0));
  uVar2 = FUN_0030e808(uVar3,0x30);
  *(undefined2 *)(param_1 + 0xd0) = uVar2;
  uVar3 = FUN_0030e764((int)*(short *)(param_1 + 0xb0));
  uVar2 = FUN_0030e870(uVar3,0x30);
  *(undefined2 *)(param_1 + 0xd2) = uVar2;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00335a04 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00335a0c INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00335b20 INSTRUCTION STORE W [FP + 0x8] = R2
SCALAR 0x8 AT 00335bb8 INSTRUCTION ADD R2 += 0x8
SCALAR 0x8 AT 00335bcc INSTRUCTION LOAD R2 = W [FP + 0x8] (X)
SCALAR 0x8 AT 00335c10 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00335c1a INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00335c1e INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 00335c24 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00335c2e INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00335c38 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00335c42 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00335c66 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00335c70 INSTRUCTION LOAD R2 = W [FP + 0x8] (X)
SCALAR 0x8 AT 00335d06 INSTRUCTION LOAD R0 = W [FP + 0x8] (X)
SCALAR 0x8 AT 00335d0a INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00335d88 INSTRUCTION LOAD R0 = W [P5 + 0x8] (X)
FUNCTION 00335d70 FUN_00335d70 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00335d70(int param_1,int param_2)

{
  short sVar1;
  
  FUN_00330000();
  *(undefined2 *)(param_1 + 0xc2) = *(undefined2 *)(param_2 + 6);
  sVar1 = *(short *)(param_2 + 8);
  *(short *)(param_1 + 0xbc) = sVar1;
  if (sVar1 == 0x1c) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  FUN_00335988(param_1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00335d96 INSTRUCTION ASH R0.L = R0.L >>> 0x8
SCALAR 0x8 AT 00335dca INSTRUCTION STORE [FP + 0x8] = R1
FUNCTION 00335dbc FUN_00335dbc success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00335dbc(int param_1)

{
  undefined4 local_138;
  undefined4 local_134;
  
  local_134 = *(undefined4 *)(param_1 + 0x44);
  local_138 = *(undefined4 *)(param_1 + 0x40);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_138);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00335f38 INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 00335fda INSTRUCTION _LOAD R2 = [FP + 0x8]
SCALAR 0x8 AT 00335fec INSTRUCTION _LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0033603a INSTRUCTION _STORE [FP + 0x8] = R1
FUNCTION 00336028 FUN_00336028 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00336028(int param_1)

{
  undefined4 local_138;
  undefined4 local_134;
  
  local_134 = *(undefined4 *)(param_1 + 0x44);
  local_138 = *(undefined4 *)(param_1 + 0x40);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_138);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0033615c INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 003361fa INSTRUCTION _LOAD R2 = [FP + 0x8]
SCALAR 0x8 AT 0033620c INSTRUCTION _LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 00336256 INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 0033624c FUN_0033624c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0033624c(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  
  local_1c = *(undefined4 *)(param_1 + 0x44);
  local_20 = *(undefined4 *)(param_1 + 0x40);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_20);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 003363b8 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 003363ce INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00336612 INSTRUCTION LOAD R0 = 0x8
FUNCTION 00336488 FUN_00336488 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00336488(int param_1)

{
  undefined4 local_138;
  undefined4 local_134;
  undefined4 *local_c;
  
  local_c = &local_138;
  local_134 = *(undefined4 *)(param_1 + 0x44);
  local_138 = *(undefined4 *)(param_1 + 0x40);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),local_c);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 003366aa INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 003366b6 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 003366c0 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 0033674c INSTRUCTION _STORE [FP + 0x8] = R0
FUNCTION 00336738 FUN_00336738 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00336738(int param_1)

{
  undefined2 local_138;
  undefined2 uStack_136;
  undefined4 local_134;
  
  local_134 = *(undefined4 *)(param_1 + 0x44);
  uStack_136 = *(undefined2 *)(param_1 + 0x42);
  local_138 = *(undefined2 *)(param_1 + 0x40);
  FUN_0034dee2(*(undefined4 *)(param_1 + 0x34),0x1000003,0x1000001);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_138);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 003368c6 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 003368e8 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 003368f2 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0033697a INSTRUCTION _STORE [FP + 0x8] = R1
FUNCTION 00336968 FUN_00336968 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00336968(int param_1)

{
  undefined4 local_138;
  undefined4 local_134;
  
  local_134 = *(undefined4 *)(param_1 + 0x44);
  local_138 = *(undefined4 *)(param_1 + 0x40);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_138);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00336a9c INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 00336b3a INSTRUCTION _LOAD R2 = [FP + 0x8]
SCALAR 0x8 AT 00336b4c INSTRUCTION _LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 00336bd8 INSTRUCTION LOAD R2 = 0x8
FUNCTION 00336b8c FUN_00336b8c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00336b8c(int param_1)

{
  undefined4 local_138;
  undefined4 local_134;
  undefined4 *local_c;
  
  local_c = &local_138;
  local_134 = *(undefined4 *)(param_1 + 0x44);
  local_138 = *(undefined4 *)(param_1 + 0x40);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),local_c);
  if (*(short *)(param_1 + 0xbc) == 8) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00336d46 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00336d68 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00336df2 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00336dfc INSTRUCTION ADD R6 += 0x8
SCALAR 0x8 AT 00336e44 INSTRUCTION ADD R6 += 0x8
SCALAR 0x8 AT 003370ae INSTRUCTION ADD R4 += 0x8
FUNCTION 00336e6c FUN_00336e6c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00336e6c(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  char *pcVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 local_30;
  undefined2 local_2c;
  short local_2a;
  char acStack_28 [16];
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  local_2a = *(short *)(param_1 + 0x46);
  local_2c = *(undefined2 *)(param_1 + 0x44);
  local_30 = *(undefined4 *)(param_1 + 0x40);
  iVar3 = FUN_0032ec4a();
  if ((iVar3 == 0) || (iVar3 = FUN_0032ec5a(param_1), iVar3 == 0)) {
    FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),0x1000003);
    FUN_0034e5fe(*(undefined4 *)(param_1 + 0x34),&local_30);
    FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),0x1000000);
  }
  else {
    FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),0x1000000);
    FUN_0034e5fe(*(undefined4 *)(param_1 + 0x34),&local_30);
  }
  uVar2 = local_30;
  iVar3 = FUN_ffa038f0((*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x98)) *
                       *(int *)(param_1 + 0xcc),*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98))
  ;
  uVar4 = iVar3 + *(short *)(param_1 + 0xc6);
  sVar6 = (short)uVar2 + 1;
  sVar5 = (short)((uint)uVar2 >> 0x10) + 1;
  if ((int)uVar4 < (int)*(short *)(param_1 + 0xc6)) {
    uVar4 = (uint)*(ushort *)(param_1 + 0xc6);
  }
  else if ((int)*(short *)(param_1 + 200) <= (int)uVar4) {
    uVar4 = (uint)*(ushort *)(param_1 + 200);
  }
  iVar3 = FUN_0032ec4a(param_1);
  if (iVar3 == 0) {
    FUN_0034e958(*(undefined4 *)(param_1 + 0x34),(int)sVar6,(int)sVar5,(int)(short)uVar4);
  }
  else {
    iVar3 = FUN_0032ec5a(param_1);
    if (iVar3 == 0) {
      FUN_0034e958(*(undefined4 *)(param_1 + 0x34),(int)sVar6,(int)sVar5,(int)(short)uVar4);
    }
    else {
      FUN_0034ea14();
    }
  }
  if (param_2 == 0) {
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00336f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    FUN_0034dee2(*(undefined4 *)(param_1 + 0x34),0x1000000,0x1000003);
    FUN_0032fe9e(param_1,acStack_28);
    FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xae));
    FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),(int)(short)local_30,(int)(short)(local_2a + 2),
                 acStack_28);
                    /* WARNING: Could not recover jumptable at 0x00336fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0032ff16(param_1,acStack_28,*(undefined4 *)(param_1 + 0xa0));
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xb0));
  local_12 = *(undefined2 *)(param_1 + 0x46);
  local_14 = *(undefined2 *)(param_1 + 0x44);
  local_16 = *(undefined2 *)(param_1 + 0x42);
  local_18 = *(undefined2 *)(param_1 + 0x44);
  pcVar7 = acStack_28;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 003370c4 INSTRUCTION ADD R4 += 0x8
SCALAR 0x8 AT 003372c2 INSTRUCTION ADD R4 += 0x8
FUNCTION 00337110 FUN_00337110 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00337110(int param_1)

{
  int iVar1;
  undefined2 local_30;
  undefined2 uStack_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  
  local_2a = *(undefined2 *)(param_1 + 0x46);
  local_2c = *(undefined2 *)(param_1 + 0x44);
  uStack_2e = *(undefined2 *)(param_1 + 0x42);
  local_30 = *(undefined2 *)(param_1 + 0x40);
  iVar1 = FUN_0032ec4a();
  if ((iVar1 == 0) || (iVar1 = FUN_0032ec5a(param_1), iVar1 == 0)) {
    FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),0x1000003);
    FUN_0034e550(*(undefined4 *)(param_1 + 0x34),&local_30);
    FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),0x1000000);
  }
  else {
    FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),0x1000000);
    FUN_0034e550(*(undefined4 *)(param_1 + 0x34),&local_30);
  }
  FUN_ffa038f0(*(int *)(param_1 + 0xcc) * (*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x98)),
               *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98));
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 003372d8 INSTRUCTION ADD R4 += 0x8
SCALAR 0x8 AT 00337324 INSTRUCTION LINK 0x8
FUNCTION 00337324 FUN_00337324 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00337324(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = *(undefined4 *)(param_1 + 0x44);
  local_10 = *(undefined4 *)(param_1 + 0x40);
  iVar1 = FUN_0032ec5a();
  if (iVar1 != 0) {
    FUN_0034e550(*(undefined4 *)(param_1 + 0x34),&local_10);
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    uVar2 = FUN_ffa03270(*(int *)(param_1 + 0xa0),0);
    FUN_ffa02e14(uVar2,0x4a000000);
    uVar2 = FUN_ffa03cb0();
    FUN_ffa03068(uVar2,0x41a00000);
    FUN_ffa02b74();
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0033761e INSTRUCTION ADD R2 += 0x8
FUNCTION 003375d0 FUN_003375d0 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_003375d0(int param_1)

{
  int iVar1;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 local_10;
  undefined2 uStack_e;
  
  uStack_e = *(undefined2 *)(param_1 + 0x46);
  local_10 = *(undefined2 *)(param_1 + 0x44);
  uStack_12 = *(undefined2 *)(param_1 + 0x42);
  local_14 = *(undefined2 *)(param_1 + 0x40);
  iVar1 = FUN_0032ec5a();
  if (iVar1 != 0) {
    FUN_0034e550(*(undefined4 *)(param_1 + 0x34),&local_14);
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00337914 INSTRUCTION STORE [FP + 0x8] = R1
FUNCTION 00337828 FUN_00337828 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00337828(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  short local_30;
  undefined2 uStack_2e;
  undefined2 local_2c;
  short local_2a;
  char local_28 [4];
  undefined1 local_24;
  char *pcVar5;
  
  local_2a = *(short *)(param_1 + 0x46);
  local_2c = *(undefined2 *)(param_1 + 0x44);
  uStack_2e = *(undefined2 *)(param_1 + 0x42);
  local_30 = *(short *)(param_1 + 0x40);
  iVar3 = FUN_0032ec5a();
  if (iVar3 != 0) {
    FUN_0034e550(*(undefined4 *)(param_1 + 0x34),&local_30);
  }
  FUN_0032fe9e(param_1,local_28);
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xae));
  pcVar5 = local_28;
  do {
    pcVar4 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + (-1 - (int)local_28);
  if (pcVar4 < (char *)0x2) {
    if (pcVar4 == (char *)0x1) {
      sVar2 = local_30 + 8;
      goto LAB_003378a8;
    }
  }
  else {
    if (pcVar4 == (char *)0x2) {
      sVar2 = local_30 + 6;
      goto LAB_003378a8;
    }
    if (pcVar4 == (char *)0x3) {
      sVar2 = local_30 + 4;
      goto LAB_003378a8;
    }
  }
  local_24 = 0;
  sVar2 = local_30;
LAB_003378a8:
  FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),(int)sVar2,(int)(short)(local_2a + 2),local_28);
  iVar3 = FUN_0032ec5a(param_1);
  if ((iVar3 != 0) && (iVar3 = FUN_0032fbd2(param_1), iVar3 == 1)) {
    FUN_0034dec2(*(undefined4 *)(param_1 + 0x34));
  }
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xb0));
  FUN_0034f038(*(undefined4 *)(param_1 + 0x34),&DAT_00438008);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00337932 INSTRUCTION LOAD R2 = [FP + 0x8]
SCALAR 0x8 AT 00337a52 INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT 00337a72 INSTRUCTION _STORE [FP + 0x8] = R1
FUNCTION 00337a64 FUN_00337a64 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00337a64(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  short sVar5;
  uint uVar6;
  short sVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [32];
  
  bVar1 = false;
  local_2c = *(undefined4 *)(param_1 + 0x44);
  local_30 = *(undefined4 *)(param_1 + 0x40);
  iVar3 = FUN_0032ec4a();
  if ((iVar3 == 0) && (bVar1 = true, param_2 == 0)) {
    bVar1 = false;
  }
  iVar3 = FUN_0032ec5a(param_1);
  if (iVar3 != 0) {
    FUN_0034e550(*(undefined4 *)(param_1 + 0x34),&local_30);
  }
  sVar5 = (short)local_30 + 1;
  sVar7 = (short)((uint)local_30 >> 0x10) + 1;
  if (bVar1) {
    FUN_0034e958(*(undefined4 *)(param_1 + 0x34),(int)sVar5,(int)sVar7,0x57);
  }
  else {
    iVar3 = FUN_ffa038f0(*(int *)(param_1 + 0xa0) * *(int *)(param_1 + 0xcc),
                         *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98));
    uVar6 = iVar3 + *(short *)(param_1 + 0xc6);
    if ((int)uVar6 < (int)*(short *)(param_1 + 0xc6)) {
      uVar6 = (uint)*(ushort *)(param_1 + 0xc6);
    }
    else if ((int)*(short *)(param_1 + 200) <= (int)uVar6) {
      uVar6 = (uint)*(ushort *)(param_1 + 200);
    }
    iVar3 = FUN_0032ec5a(param_1);
    if ((iVar3 == 0) || (iVar3 = FUN_0032fbd2(param_1), iVar3 != 1)) {
      FUN_0034e958(*(undefined4 *)(param_1 + 0x34),(int)sVar5,(int)sVar7,(int)(short)uVar6);
    }
    else {
      FUN_0034ea14(*(undefined4 *)(param_1 + 0x34),(int)sVar5,(int)sVar7,(int)(short)uVar6);
      FUN_0034dec2(*(undefined4 *)(param_1 + 0x34));
    }
    if (*(int *)(param_1 + 0xa0) == 0x200000) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
  }
  FUN_0032fe9e(param_1,auStack_28);
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xae));
  if (param_2 == 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),(int)(short)((short)local_30 + 5),(int)local_2c._2_2_
               ,auStack_28);
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xb0));
  uVar2 = local_30;
  iVar3 = FUN_0032ec5a(param_1);
  sVar5 = (short)uVar2;
  if ((iVar3 != 0) && (iVar3 = FUN_0032fbd2(param_1), iVar3 == 1)) {
    FUN_0034dec2(*(undefined4 *)(param_1 + 0x34));
  }
  FUN_00324010(auStack_28,&DAT_0043800c,*(undefined4 *)(param_1 + 0xa0));
  puVar4 = &DAT_00438018;
  if ((*(uint *)(param_1 + 0xa0) & 1) == 1) {
    puVar4 = &DAT_00438010;
  }
  FUN_00324010(auStack_28,puVar4,(int)*(uint *)(param_1 + 0xa0) / 2);
  if (param_2 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  sVar7 = sVar5 + 0x10;
  if (*(int *)(param_1 + 0xa0) < 0x14) {
    sVar7 = sVar5 + 0x16;
  }
  FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),(int)sVar7,
               (int)(short)((short)((uint)uVar2 >> 0x10) + 0xf),auStack_28);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00337aa6 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00337af6 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00337b72 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 00337e92 INSTRUCTION ADD R2 += 0x8
SCALAR 0x8 AT 00338192 INSTRUCTION _LOAD R3 = W [P5 + 0x8] (X)
FUNCTION 0033817c FUN_0033817c success=true

void FUN_0033817c(int param_1,int param_2)

{
  undefined2 uVar1;
  
  FUN_00330000();
  uVar1 = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 0xb0) = 0;
  *(undefined2 *)(param_1 + 0xbc) = uVar1;
  *(undefined2 *)(param_1 + 0xae) = 0xffff;
  FUN_0032ed38(param_1,(int)*(short *)(param_1 + 0xbe));
  FUN_0032ed7c(param_1,7);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_2 + 6);
  FUN_0032ed38(param_1);
  FUN_0032ed7c(param_1,7);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003384b0 INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 00338410 FUN_00338410 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00338410(undefined4 param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_0034df50();
  local_14 = param_2[1];
  local_18 = *param_2;
  FUN_0034e0b6(param_1,&DAT_00333333);
  FUN_0034e5fe(param_1,&local_18);
  FUN_0034e0b6(param_1,0xffff);
  if (param_5 != 0) {
    FUN_0034e550(param_1,&local_18);
  }
  FUN_0035b726(&local_18,0xffffffff,0xffffffff);
  sVar1 = (short)local_18;
  sVar4 = local_18._2_2_;
  FUN_0034dfdc(param_1,5);
  local_c = local_14;
  local_10 = local_18;
  FUN_0034e098(param_1,0xffffffff);
  sVar4 = sVar4 + 2;
  if (0 < (short)param_3[1]) {
    iVar2 = 0;
    iVar5 = 0;
    iVar3 = (int)sVar4;
    do {
      if (param_4 == iVar2) {
        local_10 = CONCAT22(sVar4 + 1,(undefined2)local_10);
        local_c = CONCAT22(sVar4 + 5,(undefined2)local_c);
        FUN_0034e0b6(param_1,*(undefined4 *)(*param_3 + iVar5 + 4));
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      FUN_0034e0b6(param_1,0x666666);
      iVar2 = iVar2 + 1;
      sVar4 = sVar4 + 7;
      FUN_0034edd8(param_1,(int)(short)(sVar1 + 1),iVar3,param_1);
      iVar5 = iVar5 + 8;
      iVar3 = iVar3 + 7;
    } while (iVar2 < (short)param_3[1]);
  }
  FUN_0034df02(param_1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033853c INSTRUCTION LSHIFT R1 >>= 0x8
SCALAR 0x8 AT 0033854c INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 00338568 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 00338694 INSTRUCTION ADD R2 += 0x8
FUNCTION 00338610 FUN_00338610 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00338610(int param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  switch(*(undefined2 *)(param_1 + 0xbc)) {
  case 0:
    sVar3 = *(short *)(param_1 + 0xc4);
    sVar2 = 0;
    break;
  default:
    sVar3 = *(short *)(param_1 + 0xc4);
    sVar2 = 0;
    break;
  case 3:
    FUN_0030e764((int)*(short *)(param_1 + 0xb0));
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  case 4:
    sVar3 = *(short *)(param_1 + 0xc4);
    sVar2 = 0;
    break;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    FUN_0030e764((int)*(short *)(param_1 + 0xb0));
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  case 0xb:
  case 0xc:
    FUN_0030e764((int)*(short *)(param_1 + 0xb0));
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  case 0x13:
  case 0x1a:
  case 0x1b:
    sVar3 = *(short *)(param_1 + 0xc4);
    sVar2 = -2;
    break;
  case 0x14:
    FUN_0032edc0(param_1,0x12,0x59);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x15:
    FUN_0032edc0(param_1,0x12,0x2f);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x17:
  case 0x18:
  case 0x19:
    sVar3 = *(short *)(param_1 + 0xc4);
    sVar2 = -3;
  }
  if (*(short *)(param_1 + 0xbc) == 0x11) {
    FUN_0030e764((int)*(short *)(param_1 + 0xb0));
    FUN_0032fcb8(param_1,&stack0x00000004);
  }
  iVar1 = FUN_0030e764((int)*(short *)(param_1 + 0xb0));
  FUN_0032edc0(param_1,(int)sVar3,
               (int)(short)(sVar2 + (short)*(char *)(iVar1 + 0xd) + *(short *)(param_1 + 0xc0) * 2 +
                                    3 + *(short *)(param_1 + 0xc2)));
                    /* WARNING: Could not recover jumptable at 0x00338686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00338b04 INSTRUCTION _LOAD R1 = W [P4 + 0x8] (X)
FUNCTION 00338ac8 FUN_00338ac8 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00338ac8(int param_1,short *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar5;
  undefined4 local_88 [32];
  undefined4 *puVar4;
  
  puVar2 = &DAT_00438418;
  iVar5 = 0x1f;
  puVar3 = local_88;
  do {
    puVar2 = puVar2 + 1;
    uVar1 = *puVar2;
    puVar4 = puVar3 + 1;
    *puVar3 = uVar1;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    puVar3 = puVar4;
  } while (iVar5 != 0);
  *puVar4 = uVar1;
  FUN_00330000(param_1,param_2 + 1);
  FUN_00338774(param_1,(int)param_2[4]);
  if (0 < *param_2) {
    *(int *)(param_1 + 0xc4) = (int)*param_2;
    FUN_00338610(param_1);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0030e764((int)*(short *)(param_1 + 0xb0));
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00338d20 INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 00338ba8 FUN_00338ba8 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00338ba8(int param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  undefined4 in_stack_00000004;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 auStack_138 [8];
  char local_130 [4];
  undefined4 auStack_12c [31];
  char local_b0 [4];
  undefined4 auStack_ac [31];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  puVar6 = &DAT_00438498;
  iVar10 = 0x1f;
  pcVar9 = local_130;
  do {
    puVar6 = puVar6 + 1;
    uVar4 = *puVar6;
    pcVar8 = pcVar9 + 4;
    *(undefined4 *)pcVar9 = uVar4;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar9 = pcVar8;
  } while (iVar10 != 0);
  *(undefined4 *)pcVar8 = uVar4;
  puVar6 = &DAT_00438518;
  iVar10 = 0x1f;
  pcVar9 = local_b0;
  do {
    puVar6 = puVar6 + 1;
    uVar4 = *puVar6;
    pcVar8 = pcVar9 + 4;
    *(undefined4 *)pcVar9 = uVar4;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar9 = pcVar8;
  } while (iVar10 != 0);
  *(undefined4 *)pcVar8 = uVar4;
  FUN_0032ff16(param_1,local_b0,*(undefined4 *)(param_1 + 0xa0));
  local_140 = *(undefined4 *)(param_1 + 0x40);
  local_13c = CONCAT22(*(short *)(param_1 + 0x46) - *(short *)(param_1 + 0xc2),
                       *(undefined2 *)(param_1 + 0x44));
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_140);
  if (local_b0[0] == '\0') {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  sVar2 = (short)local_140;
  if (*(short *)(param_1 + 0xbc) != 3) {
    if (*(short *)(param_1 + 0xbc) == 1) {
      FUN_0032feda(param_1,local_130);
    }
    else {
      FUN_0032fe9e(param_1,local_130);
    }
    if ((local_130[0] != '\0') && (-1 < *(short *)(param_1 + 0xae))) {
      FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34));
      sVar2 = FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),(int)(short)((short)local_140 + 1),
                           (int)(short)((short)((uint)local_140 >> 0x10) +
                                       *(short *)(param_1 + 0xc0)),local_130);
      if ((*(short *)(param_1 + 0xbc) != 0xf) &&
         ((iVar10 = FUN_0032ec5a(param_1), iVar10 != 0 &&
          (iVar10 = FUN_0032ec4a(param_1), iVar10 != 0)))) {
        local_c = (int)(short)(sVar2 + -1);
        FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),0x1000002);
        sVar3 = FUN_0034f038(*(undefined4 *)(param_1 + 0x34),&DAT_004382a4);
        FUN_0034de7a(*(undefined4 *)(param_1 + 0x34),(int)(short)local_140,
                     (int)(short)(sVar3 + local_140._2_2_ + 1),local_c);
      }
    }
  }
  uVar1 = *(ushort *)(param_1 + 0xbc);
  if (uVar1 < 0xe) {
    if (uVar1 != 3) goto LAB_00338cae;
  }
  else {
    if ((uVar1 != 0xe) && (uVar1 != 0xf)) {
      if (uVar1 == 0x11) {
        FUN_003536d8(local_b0);
        FUN_0030e764((int)*(short *)(param_1 + 0xb0));
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
LAB_00338cae:
      FUN_003536d8(local_b0);
      FUN_0030e764((int)*(short *)(param_1 + 0xb0));
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    local_140 = CONCAT22(local_140._2_2_,sVar2 + 2);
  }
  iVar10 = FUN_0032ec4a(param_1);
  if (iVar10 == 0) {
    in_stack_00000004 = 0x1000003;
  }
  else {
    iVar10 = FUN_0032ec5a(param_1);
    if (iVar10 == 0) {
      FUN_00340654(&DAT_00445218,&stack0x00000000);
    }
    else {
      FUN_003405f0(&DAT_00445218,&stack0x00000000);
    }
  }
  if (local_b0[0] == '\0') {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  local_c = 0x1000000;
  uVar4 = 0x1000000;
  if (*(short *)(param_1 + 0xbc) != 0x11) {
    uVar4 = in_stack_00000004;
  }
  FUN_0034f106(*(undefined4 *)(param_1 + 0x34),&local_140,1,0,uVar4);
  FUN_0035b726(&local_140,0xffffffff,0xffffffff);
  FUN_0034e03a(*(undefined4 *)(param_1 + 0x34),&stack0x00000000);
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xb0));
  uVar1 = *(ushort *)(param_1 + 0xbc);
  if (uVar1 < 0xf) {
    if (uVar1 == 0xe) goto LAB_00338ea4;
  }
  else {
    if (uVar1 == 0xf) {
LAB_00338ea4:
      FUN_0034e146(*(undefined4 *)(param_1 + 0x34),auStack_138);
      FUN_0034e162(*(undefined4 *)(param_1 + 0x34),&local_140);
      FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),(int)(short)((short)local_140 + 1),
                   (int)(short)((short)((uint)local_140 >> 0x10) + *(short *)(param_1 + 0xc0)),
                   local_b0);
      FUN_0034e162(*(undefined4 *)(param_1 + 0x34),auStack_138);
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    if (uVar1 == 0x11) {
      local_2c = local_13c;
      local_30 = &local_30;
      FUN_0035b726(&local_30,0xffffffff,0xffffffff);
      local_2c = CONCAT22(local_30._2_2_ + 9,(undefined2)local_2c);
      iVar10 = *(int *)(param_1 + 0x98);
      if (iVar10 <= *(int *)(param_1 + 0x9c)) {
        local_10 = (int)(short)(((short)local_13c - *(short *)(param_1 + 0xbe)) + -2);
        local_14 = 0x1000003;
        iVar5 = (int)(short)(local_140._2_2_ + *(short *)(param_1 + 0xc0) + 1);
        do {
          FUN_0032ff16(param_1,local_b0,iVar10);
          if (iVar10 == *(int *)(param_1 + 0xa0)) {
            FUN_0034dee2(*(undefined4 *)(param_1 + 0x34),local_c,local_14);
            puVar7 = &stack0xfffffff8;
            FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_30);
            FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),
                         (int)(short)(*(short *)(puVar7 + -0x28) + 2),iVar5,&DAT_004382a8);
          }
          else {
            FUN_0034dee2(*(undefined4 *)(param_1 + 0x34),local_14,local_c);
            FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_30);
          }
          FUN_0034dc2c(*(undefined4 *)(param_1 + 0x34),local_10,iVar5,local_b0);
          FUN_0035b844(&local_30,0,10);
          iVar10 = iVar10 + 1;
          iVar5 = iVar5 + 10;
        } while (iVar10 <= *(int *)(param_1 + 0x9c));
      }
                    /* WARNING: Treating indirect jump as return */
      return;
    }
  }
  FUN_0034dc2c(*(undefined4 *)(param_1 + 0x34),
               (int)(short)((short)local_13c - *(short *)(param_1 + 0xbe)),
               (int)(short)(local_140._2_2_ + *(short *)(param_1 + 0xc0)),local_b0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00338d64 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00338f1a INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00338f22 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 003390b0 INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 00338fdc FUN_00338fdc success=true

void FUN_00338fdc(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 *puVar9;
  char *pcVar10;
  int *piVar11;
  int iVar13;
  short local_130;
  short local_12e;
  undefined2 local_12c;
  short sStack_12a;
  char local_128;
  char acStack_127 [3];
  undefined4 auStack_124 [31];
  int local_a8 [39];
  int local_c;
  int *piVar12;
  
  pcVar7 = &local_128;
  puVar5 = &DAT_00438598;
  iVar13 = 0x1f;
  pcVar8 = pcVar7;
  do {
    puVar5 = puVar5 + 1;
    uVar4 = *puVar5;
    pcVar10 = pcVar8 + 4;
    *(undefined4 *)pcVar8 = uVar4;
    if (iVar13 == 0) break;
    iVar13 = iVar13 + -1;
    pcVar8 = pcVar10;
  } while (iVar13 != 0);
  *(undefined4 *)pcVar10 = uVar4;
  piVar6 = &DAT_00438618;
  iVar13 = 0x1f;
  piVar11 = local_a8;
  do {
    piVar6 = piVar6 + 1;
    piVar12 = piVar11 + 1;
    *piVar11 = *piVar6;
    if (iVar13 == 0) break;
    iVar13 = iVar13 + -1;
    piVar11 = piVar12;
  } while (iVar13 != 0);
  *piVar12 = (int)acStack_127;
  FUN_0032fe9e();
  FUN_0032ff16(param_1,local_a8,*(undefined4 *)(param_1 + 0xa0));
  sStack_12a = *(short *)(param_1 + 0x46);
  local_12c = *(undefined2 *)(param_1 + 0x44);
  local_12e = *(short *)(param_1 + 0x42);
  local_130 = *(short *)(param_1 + 0x40);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_130);
  FUN_0034e550(*(undefined4 *)(param_1 + 0x34),&local_130);
  _local_12c = CONCAT22(sStack_12a - *(short *)(param_1 + 0xc2),local_12c);
  iVar13 = FUN_0032ec4a(param_1);
  if (iVar13 != 0) {
    iVar13 = FUN_0032ec5a(param_1);
    if (iVar13 == 0) {
      FUN_00340654(&DAT_00445218,&stack0x00000000);
    }
    else {
      FUN_003405f0(&DAT_00445218,&stack0x00000000);
    }
  }
  FUN_0034e03a(*(undefined4 *)(param_1 + 0x34),&stack0x00000000);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_130);
  local_12e = local_12e + 1;
  iVar13 = FUN_0032ec4a(param_1);
  if ((iVar13 != 0) && (iVar13 = FUN_0032ec5a(param_1), iVar13 != 0)) {
    local_128 = '\b';
  }
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xae));
  sVar1 = local_130 + 3;
  sVar3 = (short)_local_12c - sVar1;
  if (local_128 != '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x34);
    sVar2 = FUN_003536d8(&local_128);
    pcVar8 = pcVar7 + (short)(sVar2 + -1);
    local_c = (int)sVar3;
    for (; (iVar13 = FUN_0034ee38(uVar4,&local_128), sVar3 <= iVar13 && (0 < sVar2));
        sVar2 = sVar2 + -1) {
      *pcVar8 = '\0';
      pcVar8 = pcVar8 + -1;
    }
    FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),(int)sVar1,
                 (int)(short)(local_12e + *(short *)(param_1 + 0xc0)));
  }
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xb0));
  if ((char)local_a8[0] == '\0') {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  sVar1 = FUN_003536d8(local_a8);
  puVar9 = (undefined1 *)((int)local_a8 + (int)(short)(sVar1 + -1));
  for (; (iVar13 = FUN_0034ee38(uVar4,local_a8), sVar3 <= iVar13 && (0 < sVar1)); sVar1 = sVar1 + -1
      ) {
    *puVar9 = 0;
    puVar9 = puVar9 + -1;
  }
  FUN_0034dc2c(*(undefined4 *)(param_1 + 0x34),
               (int)(short)((short)_local_12c - *(short *)(param_1 + 0xbe)),
               (int)(short)(local_12e + *(short *)(param_1 + 0xc0)));
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003390ba INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00339206 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 00339222 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 0033922a INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 003392b0 INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 00339234 FUN_00339234 success=true

void FUN_00339234(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar5;
  undefined2 local_90;
  short local_8e;
  undefined2 local_8c;
  short sStack_8a;
  char local_88 [4];
  undefined4 auStack_84 [31];
  char *pcVar4;
  
  puVar2 = &DAT_00438698;
  iVar5 = 0x1f;
  pcVar3 = local_88;
  do {
    puVar2 = puVar2 + 1;
    uVar1 = *puVar2;
    pcVar4 = pcVar3 + 4;
    *(undefined4 *)pcVar3 = uVar1;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar3 = pcVar4;
  } while (iVar5 != 0);
  *(undefined4 *)pcVar4 = uVar1;
  FUN_0032ff16(param_1,local_88,*(undefined4 *)(param_1 + 0xa0));
  local_8e = *(short *)(param_1 + 0x42);
  local_90 = *(undefined2 *)(param_1 + 0x40);
  _local_8c = CONCAT22(*(short *)(param_1 + 0x46) - *(short *)(param_1 + 0xc2),
                       *(undefined2 *)(param_1 + 0x44));
  iVar5 = FUN_0032ec4a(param_1);
  if (iVar5 != 0) {
    iVar5 = FUN_0032ec5a(param_1);
    if (iVar5 == 0) {
      FUN_00340654(&DAT_00445218,&stack0x00000000);
    }
    else {
      FUN_003405f0(&DAT_00445218,&stack0x00000000);
    }
  }
  FUN_0034e03a(*(undefined4 *)(param_1 + 0x34),&stack0x00000000);
  uVar1 = FUN_0034e05a(*(undefined4 *)(param_1 + 0x34));
  FUN_0034f106(*(undefined4 *)(param_1 + 0x34),&local_90,1,0,uVar1);
  FUN_0035b726(&local_90,0xffffffff,0xffffffff);
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xb0));
  if (local_88[0] == '\0') {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0034dc2c(*(undefined4 *)(param_1 + 0x34),
               (int)(short)((short)_local_8c - *(short *)(param_1 + 0xbe)),
               (int)(short)(local_8e + *(short *)(param_1 + 0xc0)),local_88);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003392ba INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 0033935a INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00339362 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 0033949e INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 0033936c FUN_0033936c success=true

void FUN_0033936c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar5;
  undefined4 local_90;
  short local_8c;
  short local_8a;
  char local_88 [4];
  undefined4 auStack_84 [31];
  char *pcVar4;
  
  puVar2 = &DAT_00438718;
  iVar5 = 0x1f;
  pcVar3 = local_88;
  do {
    puVar2 = puVar2 + 1;
    uVar1 = *puVar2;
    pcVar4 = pcVar3 + 4;
    *(undefined4 *)pcVar3 = uVar1;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar3 = pcVar4;
  } while (iVar5 != 0);
  *(undefined4 *)pcVar4 = uVar1;
  FUN_0032ff16(param_1,local_88,*(undefined4 *)(param_1 + 0xa0));
  local_8c = *(short *)(param_1 + 0x44);
  local_90 = *(undefined4 *)(param_1 + 0x40);
  local_8a = *(short *)(param_1 + 0x46) - *(short *)(param_1 + 0xc2);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_90);
  iVar5 = FUN_0032fbd2(param_1);
  if (iVar5 == 1) {
    iVar5 = FUN_0032ec4a(param_1);
    if (iVar5 != 0) {
      iVar5 = FUN_0032ec5a(param_1);
      if (iVar5 == 0) {
        FUN_00340654(&DAT_00445218,&stack0x00000000);
      }
      else {
        FUN_003405f0(&DAT_00445218,&stack0x00000000);
      }
    }
    FUN_0034e03a(*(undefined4 *)(param_1 + 0x34),&stack0x00000000);
  }
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xb0));
  if (local_88[0] != '\0') {
    FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),
                 (int)(short)(*(short *)(param_1 + 0xbe) + (short)local_90),
                 (int)(short)((short)((uint)local_90 >> 0x10) + *(short *)(param_1 + 0xc0)),local_88
                );
  }
  iVar5 = FUN_0032fbd2(param_1);
  if (iVar5 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar5 = FUN_0032ec5a(param_1);
  if (iVar5 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0034ee38(*(undefined4 *)(param_1 + 0x34),local_88);
  FUN_0034dd82(*(undefined4 *)(param_1 + 0x34),(int)(short)local_90,(int)local_8a,(int)local_8c,
               (int)local_8a);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003394aa INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 003394c6 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 003394ce INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00339656 INSTRUCTION ADD R6 += 0x8
FUNCTION 003394d8 FUN_003394d8 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_003394d8(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar7;
  int iVar8;
  short local_154;
  short sStack_152;
  short local_150;
  short sStack_14e;
  char local_144 [4];
  undefined4 auStack_140 [31];
  undefined4 local_c4 [42];
  int local_1c;
  int local_18;
  short local_14;
  short sStack_12;
  char *pcVar6;
  
  puVar3 = &DAT_00438798;
  iVar8 = 0x1f;
  pcVar5 = local_144;
  do {
    puVar3 = puVar3 + 1;
    uVar1 = *puVar3;
    pcVar6 = pcVar5 + 4;
    *(undefined4 *)pcVar5 = uVar1;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar5 = pcVar6;
  } while (iVar8 != 0);
  *(undefined4 *)pcVar6 = uVar1;
  puVar4 = &DAT_00438818;
  iVar8 = 0x1f;
  puVar3 = local_c4;
  do {
    puVar4 = puVar4 + 1;
    uVar1 = *puVar4;
    puVar7 = puVar3 + 1;
    *puVar3 = uVar1;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    puVar3 = puVar7;
  } while (iVar8 != 0);
  *puVar7 = uVar1;
  FUN_0034df50(*(undefined4 *)(param_1 + 0x34));
  local_150 = *(short *)(param_1 + 0x44);
  sStack_152 = *(short *)(param_1 + 0x42);
  local_154 = *(short *)(param_1 + 0x40);
  sStack_14e = *(short *)(param_1 + 0x46) - *(short *)(param_1 + 0xc2);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_154);
  local_14 = local_150;
  _local_150 = CONCAT22(sStack_14e,local_150 - (*(short *)(param_1 + 200) + 1));
  sStack_12 = sStack_14e;
  local_18 = param_1;
  FUN_0032fe9e(param_1,local_144);
  FUN_0032ff16(param_1,local_c4,*(undefined4 *)(param_1 + 0xa0));
  if (-1 < *(short *)(param_1 + 0xae)) {
    FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34));
    local_1c = 0;
    if (local_144[0] != '\0') {
      local_1c = FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),(int)(short)(local_154 + 1),
                              (int)(short)(sStack_152 + *(short *)(param_1 + 0xc0)),local_144);
    }
    iVar8 = FUN_0032ec5a(param_1);
    if (iVar8 != 0) {
      local_1c = (int)(short)((short)local_1c + -1);
      FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),0x1000002);
      sVar2 = FUN_0034f038(*(undefined4 *)(param_1 + 0x34),&DAT_004382a4);
      FUN_0034de7a(*(undefined4 *)(param_1 + 0x34),(int)local_154,
                   (int)(short)(sVar2 + sStack_152 + 1),local_1c);
    }
  }
  FUN_003536d8(local_c4);
  FUN_0030e764((int)*(short *)(param_1 + 0xb0));
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 003398f6 INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 003397b0 FUN_003397b0 success=true

void FUN_003397b0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  short local_130;
  short local_12e;
  short local_12c;
  short local_12a;
  char local_128 [4];
  undefined4 auStack_124 [31];
  char local_a8 [4];
  undefined4 auStack_a4 [39];
  
  puVar2 = &DAT_00438898;
  iVar5 = 0x1f;
  pcVar4 = local_128;
  do {
    puVar2 = puVar2 + 1;
    uVar1 = *puVar2;
    pcVar3 = pcVar4 + 4;
    *(undefined4 *)pcVar4 = uVar1;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar4 = pcVar3;
  } while (iVar5 != 0);
  *(undefined4 *)pcVar3 = uVar1;
  puVar2 = &DAT_00438918;
  iVar5 = 0x1f;
  pcVar4 = local_a8;
  do {
    puVar2 = puVar2 + 1;
    uVar1 = *puVar2;
    pcVar3 = pcVar4 + 4;
    *(undefined4 *)pcVar4 = uVar1;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar4 = pcVar3;
  } while (iVar5 != 0);
  *(undefined4 *)pcVar3 = uVar1;
  FUN_0032ff16(param_1,local_a8,*(undefined4 *)(param_1 + 0xa0));
  local_12a = *(short *)(param_1 + 0x46);
  local_12c = *(short *)(param_1 + 0x44);
  local_12e = *(short *)(param_1 + 0x42);
  local_130 = *(short *)(param_1 + 0x40);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_130);
  FUN_0032fe9e(param_1,local_128);
  if ((local_128[0] != '\0') && (-1 < *(short *)(param_1 + 0xae))) {
    FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34));
    FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),(int)local_130,(int)local_12e,local_128);
    iVar5 = FUN_0032ec5a(param_1);
    if (iVar5 != 0) {
      FUN_0032ec4a(param_1);
    }
  }
  iVar5 = FUN_0032fbd2(param_1);
  if (iVar5 == 1) {
    iVar5 = FUN_0032ec4a(param_1);
    if (iVar5 != 0) {
      iVar5 = FUN_0032ec5a(param_1);
      if (iVar5 == 0) {
        FUN_00340654(&DAT_00445218,&stack0x00000000);
      }
      else {
        FUN_003405f0(&DAT_00445218,&stack0x00000000);
      }
    }
    FUN_0034e03a(*(undefined4 *)(param_1 + 0x34),&stack0x00000000);
  }
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xb0));
  if (local_a8[0] != '\0') {
    FUN_0034dc2c(*(undefined4 *)(param_1 + 0x34),(int)local_12c,(int)local_12e,local_a8);
  }
  iVar5 = FUN_0032fbd2(param_1);
  if (iVar5 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar5 = FUN_0032ec5a(param_1);
  if (iVar5 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0034ee38(*(undefined4 *)(param_1 + 0x34),local_a8);
  FUN_0034dd82(*(undefined4 *)(param_1 + 0x34),(int)local_130,(int)local_12a,(int)local_12c,
               (int)local_12a);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00339902 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 0033991e INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00339926 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00339a3e INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 00339960 FUN_00339960 success=true

void FUN_00339960(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined4 in_stack_00000004;
  short local_130;
  short sStack_12e;
  short local_12c;
  short local_12a;
  char local_128 [4];
  undefined4 auStack_124 [31];
  char local_a8 [4];
  undefined4 auStack_a4 [39];
  
  puVar4 = &DAT_00438998;
  iVar7 = 0x1f;
  pcVar6 = local_128;
  do {
    puVar4 = puVar4 + 1;
    uVar3 = *puVar4;
    pcVar5 = pcVar6 + 4;
    *(undefined4 *)pcVar6 = uVar3;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar6 = pcVar5;
  } while (iVar7 != 0);
  *(undefined4 *)pcVar5 = uVar3;
  puVar4 = &DAT_00438a18;
  iVar7 = 0x1f;
  pcVar6 = local_a8;
  do {
    puVar4 = puVar4 + 1;
    uVar3 = *puVar4;
    pcVar5 = pcVar6 + 4;
    *(undefined4 *)pcVar6 = uVar3;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar6 = pcVar5;
  } while (iVar7 != 0);
  *(undefined4 *)pcVar5 = uVar3;
  FUN_0032ff16(param_1,local_a8,*(undefined4 *)(param_1 + 0xa0));
  local_12c = *(short *)(param_1 + 0x44);
  sStack_12e = *(short *)(param_1 + 0x42);
  local_130 = *(short *)(param_1 + 0x40);
  local_12a = *(short *)(param_1 + 0x46) - *(short *)(param_1 + 0xc2);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_130);
  if (local_a8[0] == '\0') {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0032fe9e(param_1,local_128);
  if ((local_128[0] != '\0') && (-1 < *(short *)(param_1 + 0xae))) {
    FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34));
    sVar1 = FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),(int)(short)(local_130 + 1),
                         (int)(short)(sStack_12e + *(short *)(param_1 + 0xc0)),local_128);
    iVar7 = FUN_0032ec5a(param_1);
    if ((iVar7 != 0) && (iVar7 = FUN_0032ec4a(param_1), iVar7 != 0)) {
      FUN_0034e0b6(*(undefined4 *)(param_1 + 0x34),0x1000002);
      sVar2 = FUN_0034f038(*(undefined4 *)(param_1 + 0x34),&DAT_004382a4);
      FUN_0034de7a(*(undefined4 *)(param_1 + 0x34),(int)local_130,
                   (int)(short)(sVar2 + sStack_12e + 1),(int)(short)(sVar1 + -1));
    }
  }
  iVar7 = FUN_0032ec4a(param_1);
  if (iVar7 == 0) {
    in_stack_00000004 = 0x1000003;
  }
  else {
    iVar7 = FUN_0032ec5a(param_1);
    if (iVar7 == 0) {
      FUN_00340654(&DAT_00445218,&stack0x00000000);
    }
    else {
      FUN_003405f0(&DAT_00445218,&stack0x00000000);
    }
  }
  local_130 = local_12c + -10;
  FUN_0034f106(*(undefined4 *)(param_1 + 0x34),&local_130,1,0,in_stack_00000004);
  FUN_0035b726(&local_130,0xffffffff,0xffffffff);
  if (*(int *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  uVar3 = FUN_003405c4(&DAT_00445218,0x17);
  FUN_0034dee2(*(undefined4 *)(param_1 + 0x34),uVar3,0xffffffff);
  FUN_0034dc6a(*(undefined4 *)(param_1 + 0x34),(int)(short)(local_130 + 1),(int)sStack_12e,0x10);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00339ac8 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00339ad2 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00339ba4 INSTRUCTION LOAD R1 = [P2 + 0x8]
FUNCTION 00339b5c FUN_00339b5c success=true

void FUN_00339b5c(int param_1,int param_2,int param_3)

{
  int iVar1;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_38 = DAT_00438a98;
  uStack_34 = DAT_00438a9c;
  uStack_30 = DAT_00438aa0;
  uStack_2c = DAT_00438aa4;
  uStack_28 = DAT_00438aa8;
  local_c = DAT_00438ac4;
  uStack_24 = DAT_00438aac;
  local_10 = DAT_00438ac0;
  uStack_20 = DAT_00438ab0;
  local_14 = DAT_00438abc;
  uStack_1c = DAT_00438ab4;
  local_18 = DAT_00438ab8;
  FUN_0032ff16(param_1,&local_18,*(undefined4 *)(param_1 + 0xa0));
  local_3a = *(short *)(param_1 + 0x46);
  local_3c = *(short *)(param_1 + 0x44);
  local_3e = *(short *)(param_1 + 0x42);
  local_40 = *(short *)(param_1 + 0x40);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_40);
  if ((char)local_18 == '\0') {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (param_2 != 0) {
    FUN_0032fe9e(param_1,&local_38);
    if (((char)local_38 != '\0') && (-1 < *(short *)(param_1 + 0xae))) {
      FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34));
      if (param_3 != 0) {
        FUN_003405f0(&DAT_00445218,&stack0x00000000);
        FUN_0034e03a(*(undefined4 *)(param_1 + 0x34),&stack0x00000000);
      }
      FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),(int)local_40,(int)local_3e,&local_38);
      iVar1 = FUN_0032ec5a(param_1);
      if (iVar1 != 0) {
        FUN_0032ec4a(param_1);
      }
    }
  }
  iVar1 = FUN_0032fbd2(param_1);
  if (iVar1 == 1) {
    iVar1 = FUN_0032ec4a(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_0032ec5a(param_1);
      if (iVar1 == 0) {
        FUN_00340654(&DAT_00445218,&stack0x00000000);
      }
      else {
        FUN_003405f0(&DAT_00445218,&stack0x00000000);
      }
    }
    FUN_0034e03a(*(undefined4 *)(param_1 + 0x34),&stack0x00000000);
  }
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xb0));
  if ((char)local_18 != '\0') {
    FUN_0034dc2c(*(undefined4 *)(param_1 + 0x34),(int)local_3c,(int)local_3e,&local_18);
  }
  iVar1 = FUN_0032fbd2(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_0032ec5a(param_1);
    if (iVar1 != 0) {
      FUN_0034ee38(*(undefined4 *)(param_1 + 0x34),&local_18);
      FUN_0034dd82(*(undefined4 *)(param_1 + 0x34),(int)local_40,(int)local_3a,(int)local_3c,
                   (int)local_3a);
                    /* WARNING: Treating indirect jump as return */
      return;
    }
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00339ca6 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 00339cb2 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00339cc6 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00339cd6 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00339d30 INSTRUCTION ADD R4 += 0x8
SCALAR 0x8 AT 00339f5c INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 00339d50 FUN_00339d50 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00339d50(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar6;
  int iVar8;
  short local_140;
  short local_13e;
  undefined2 local_13c;
  undefined2 local_13a;
  char local_138 [4];
  undefined4 auStack_134 [31];
  int local_b8 [44];
  char *pcVar5;
  int *piVar7;
  
  puVar2 = &DAT_00438ac8;
  iVar8 = 0x1f;
  pcVar4 = local_138;
  do {
    puVar2 = puVar2 + 1;
    uVar1 = *puVar2;
    pcVar5 = pcVar4 + 4;
    *(undefined4 *)pcVar4 = uVar1;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar4 = pcVar5;
  } while (iVar8 != 0);
  *(undefined4 *)pcVar5 = uVar1;
  piVar3 = &DAT_00438b48;
  iVar8 = 0x1f;
  piVar6 = local_b8;
  do {
    piVar3 = piVar3 + 1;
    piVar7 = piVar6 + 1;
    *piVar6 = *piVar3;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    piVar6 = piVar7;
  } while (iVar8 != 0);
  *piVar7 = (int)local_b8;
  FUN_0032ff16(param_1,local_b8,*(undefined4 *)(param_1 + 0xa0));
  local_13a = *(undefined2 *)(param_1 + 0x46);
  local_13c = *(undefined2 *)(param_1 + 0x44);
  local_13e = *(short *)(param_1 + 0x42);
  local_140 = *(short *)(param_1 + 0x40);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_140);
  FUN_0032fe9e(param_1,local_138);
  if ((local_138[0] != '\0') && (-1 < *(short *)(param_1 + 0xae))) {
    FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34));
    FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),(int)local_140,(int)local_13e,local_138);
    iVar8 = FUN_0032ec5a(param_1);
    if (iVar8 != 0) {
      FUN_0032ec4a(param_1);
    }
  }
  FUN_0034ee38(*(undefined4 *)(param_1 + 0x34),&DAT_004382ac);
  FUN_0034f038(*(undefined4 *)(param_1 + 0x34),&DAT_004382ac);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00339f68 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00339f84 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00339f8c INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 0033a0fc INSTRUCTION ADD R2 += 0x8
SCALAR 0x8 AT 0033a486 INSTRUCTION ADD R2 += 0x8
FUNCTION 0033a458 FUN_0033a458 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0033a458(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  short in_stack_00000000;
  short in_stack_00000002;
  char acStack_28 [32];
  
  switch(*(undefined2 *)(param_1 + 0xbc)) {
  case 2:
    FUN_0032edc0(param_1,0x11,9);
    break;
  case 3:
    FUN_0032edc0(param_1,0x27,9);
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    FUN_0032edc0(param_1,0x1c,9);
    break;
  case 8:
    *(undefined1 **)(param_1 + 200) = &LAB_0033a334;
    break;
  case 9:
    *(undefined1 **)(param_1 + 200) = &LAB_0033a384;
    break;
  case 10:
  case 0xb:
    *(undefined4 *)(param_1 + 200) = 0;
    FUN_0032edc0(param_1,0x1b,10);
    break;
  case 0xc:
    *(undefined4 *)(param_1 + 200) = 0;
    FUN_0032edc0(param_1,0x2a);
    break;
  default:
    FUN_0030e910((int)*(short *)(param_1 + 0xbe),&stack0x00000002);
    FUN_0032edc0(param_1,(int)in_stack_00000002,(int)in_stack_00000000);
  }
  uVar4 = FUN_0030e764((int)*(short *)(param_1 + 0xae));
  uVar3 = FUN_0030e808(uVar4,0x30);
  *(undefined2 *)(param_1 + 0xc2) = uVar3;
  uVar4 = FUN_0030e764((int)*(short *)(param_1 + 0xae));
  uVar3 = FUN_0030e870(uVar4,0x30);
  *(undefined2 *)(param_1 + 0xc4) = uVar3;
  uVar2 = *(ushort *)(param_1 + 0xbc);
  if ((7 < uVar2) && ((uVar2 == 8 || (uVar2 == 9)))) {
    FUN_0032fe9e(param_1,acStack_28);
    pcVar5 = acStack_28;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033a494 INSTRUCTION _LOAD R2 = W [FP + 0x8] (X)
SCALAR 0x8 AT 0033a4c6 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 0033a5dc INSTRUCTION _LOAD R1 = W [P5 + 0x8] (X)
FUNCTION 0033a5c4 FUN_0033a5c4 success=true

void FUN_0033a5c4(int param_1,int param_2)

{
  undefined2 uVar1;
  
  FUN_00330000(param_1,param_2 + 2);
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_2 + 8);
  FUN_0033a458(param_1);
  *(undefined2 *)(param_1 + 0xae) = 0xd;
  uVar1 = *(undefined2 *)(&DAT_00438cdc + *(short *)(param_1 + 0xbc) * 2);
  *(undefined2 *)(param_1 + 0xbe) = 0x98;
  *(undefined2 *)(param_1 + 0xc0) = uVar1;
  FUN_0033a458(param_1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033a8a4 INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 0033a854 FUN_0033a854 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0033a854(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short local_38;
  short local_36;
  undefined2 local_34;
  short sStack_32;
  undefined1 local_28 [32];
  
  sStack_32 = *(short *)(param_1 + 0x46);
  local_34 = *(undefined2 *)(param_1 + 0x44);
  local_36 = *(short *)(param_1 + 0x42);
  local_38 = *(short *)(param_1 + 0x40);
  FUN_0034e6aa(*(undefined4 *)(param_1 + 0x34),&local_38);
  iVar3 = FUN_0032ec5a(param_1);
  sVar2 = local_38;
  if (iVar3 != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  sVar1 = *(short *)(param_1 + 0x80);
  sVar5 = local_38 + 2;
  iVar3 = (int)local_36;
  if (*(short *)(param_1 + 0xc0) != 0) {
    if ((*(code **)(param_1 + 200) != (code *)0x0) &&
       (iVar4 = (**(code **)(param_1 + 200))((int)sVar1), iVar4 != 0)) {
      FUN_0034ea14(*(undefined4 *)(param_1 + 0x34),(int)sVar5,iVar3,(int)*(short *)(param_1 + 0xc0))
      ;
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    FUN_0034e958(*(undefined4 *)(param_1 + 0x34),(int)sVar5,iVar3,(int)*(short *)(param_1 + 0xc0));
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0032fe9e(param_1,local_28);
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x34),(int)*(short *)(param_1 + 0xae));
  if ((*(code **)(param_1 + 200) != (code *)0x0) &&
     (iVar4 = (**(code **)(param_1 + 200))((int)sVar1), iVar4 != 0)) {
    FUN_0034dd82(*(undefined4 *)(param_1 + 0x34),(int)(short)(sVar2 + 1),iVar3,
                 (int)(short)(sVar2 + 1),(int)sStack_32);
    FUN_0034dec2(*(undefined4 *)(param_1 + 0x34));
    FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),(int)sVar5,iVar3,local_28);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0034edd8(*(undefined4 *)(param_1 + 0x34),(int)sVar5,iVar3,local_28);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033a954 INSTRUCTION _LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0033ac50 INSTRUCTION LOAD R0 = 0x8
FUNCTION 0033ac08 FUN_0033ac08 success=true

int FUN_0033ac08(int param_1,undefined4 param_2)

{
  FUN_0032fe04();
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined **)(param_1 + 0x6c) = &DAT_00404a60;
  FUN_0032ece8(param_1,0,0);
  FUN_0032edc0(param_1,0x80,0xc);
  *(undefined2 *)(param_1 + 0xac) = 2;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xae) = 8;
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}


END_FUNCTION
SCALAR 0x8 AT 0033aeba INSTRUCTION LOAD R0 = 0x8
FUNCTION 0033ae74 FUN_0033ae74 success=true

int FUN_0033ae74(int param_1,undefined4 param_2)

{
  FUN_0032fe04();
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined **)(param_1 + 0x6c) = &DAT_00404b88;
  FUN_0032ece8(param_1,0,0);
  FUN_0032edc0(param_1,0x80,0xc);
  *(undefined4 *)(param_1 + 0xb4) = 1;
  *(undefined2 *)(param_1 + 0xac) = 2;
  *(undefined2 *)(param_1 + 0xae) = 8;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}


END_FUNCTION
SCALAR 0x8 AT 0033b14e INSTRUCTION LOAD R0 = 0x8
FUNCTION 0033b108 FUN_0033b108 success=true

int FUN_0033b108(int param_1,undefined4 param_2)

{
  FUN_0032fe04();
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined **)(param_1 + 0x6c) = &DAT_00404cb8;
  FUN_0032ece8(param_1,0,0);
  FUN_0032edc0(param_1,0x80,0xc);
  *(undefined4 *)(param_1 + 0xb4) = 1;
  *(undefined2 *)(param_1 + 0xac) = 2;
  *(undefined2 *)(param_1 + 0xae) = 8;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}


END_FUNCTION
SCALAR 0x8 AT 0033b3e4 INSTRUCTION LOAD R0 = 0x8
FUNCTION 0033b39c FUN_0033b39c success=true

int FUN_0033b39c(int param_1,undefined4 param_2)

{
  FUN_0032fe04();
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined **)(param_1 + 0x6c) = &DAT_00404de8;
  FUN_0032ece8(param_1,0,0);
  FUN_0032edc0(param_1,0x80,0xc);
  *(undefined2 *)(param_1 + 0xac) = 2;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xae) = 8;
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}


END_FUNCTION
SCALAR 0x8 AT 0033c1d6 INSTRUCTION ADD R1 += 0x8
FUNCTION 0033c17a FUN_0033c17a success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0033c17a(undefined4 param_1,undefined2 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined2 local_14;
  undefined2 local_12;
  
  local_12 = param_2[3];
  local_14 = param_2[2];
  uStack_16 = param_2[1];
  local_18 = *param_2;
  uVar1 = 0xd;
  if (param_3 != 0) {
    uVar1 = 0x28;
    switch(param_3) {
    case 0x16:
      uVar1 = 0x27;
      break;
    case 0x17:
    case 0x18:
      uVar1 = 0x29;
    }
  }
  FUN_003405c4(&DAT_00445218,uVar1);
  FUN_0034e01a();
  FUN_0035b828(&local_18);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0033c1ea INSTRUCTION LSHIFT R1 >>= 0x8
SCALAR 0x8 AT 0033c202 INSTRUCTION LOAD P5 = 0x8
SCALAR 0x8 AT 0033c3ca INSTRUCTION _STORE [FP + 0x8] = R1
FUNCTION 0033c3bc FUN_0033c3bc success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0033c3bc(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_0034df50();
  sVar2 = *(short *)(param_1 + 0x96);
  if (sVar2 != 0) {
    if (sVar2 == 1) {
      local_18 = *param_2;
      local_14 = param_2[1];
      FUN_0034dee2(param_1,0x1000000,0x1000003);
      FUN_0034e6aa(param_1,&local_18);
      FUN_0034e550(param_1,&local_18);
      if ((0 < param_3) || (param_4 < param_5)) {
        FUN_0034e550(param_1,&local_18);
        FUN_0035b726(&local_18,0xffffffff,0xffffffff);
        FUN_0034e854(param_1,&local_18);
        FUN_0035b726(&local_18,1,1);
        iVar6 = FUN_0035b91e(param_2);
        if (iVar6 == 1) {
          iVar6 = FUN_0035b828(&local_18);
          FUN_ffa038f0(param_3 * (iVar6 + -1),param_5);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
        iVar6 = FUN_0035b80c(&local_18);
        FUN_ffa038f0(param_3 * (iVar6 + -1),param_5);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      FUN_0034e8ae(param_1,&local_18);
      goto LAB_0033c476;
    }
    if (sVar2 == 2) {
      local_18 = *param_2;
      local_14 = param_2[1];
      FUN_0034dee2(param_1,0x1000003,0x1000001);
      FUN_0034f096(param_1,&local_18,1,0);
      FUN_0035b726(&local_18,0xffffffff,0xffffffff);
      local_c = local_14;
      local_10 = local_18;
      if ((0 < param_3) || (param_4 < param_5)) {
        FUN_0034dee2(param_1,0x1000003,0x1000001);
        FUN_0034e854(param_1,&local_18);
        iVar6 = 0;
        if (-1 < param_3) {
          iVar6 = param_5 * (uint)(param_5 < param_3) + param_3 * (uint)(param_5 >= param_3);
        }
        iVar7 = 0;
        if (-1 < param_4) {
          iVar7 = param_5 * (uint)(param_5 < param_4) + param_4 * (uint)(param_5 >= param_4);
        }
        if (0 < param_5) {
          iVar4 = FUN_0035b91e(param_2);
          if (iVar4 == 1) {
            iVar4 = FUN_0035b828(&local_18);
            uVar1 = local_18;
            iVar5 = FUN_ffa038f0(iVar4 * (iVar7 - iVar6),param_5);
            iVar5 = iVar5 * (uint)(4 < iVar5) + (uint)(4 >= iVar5) * 4;
            sVar2 = FUN_ffa038f0((iVar4 - iVar5) * iVar6,param_5 - (iVar7 - iVar6));
            sVar2 = sVar2 + (short)uVar1;
            local_10 = CONCAT22(local_10._2_2_,sVar2);
            local_c = CONCAT22(local_c._2_2_,(short)iVar5 + sVar2 + -1);
          }
          else {
            iVar4 = FUN_0035b80c(&local_18);
            sVar2 = local_18._2_2_;
            iVar5 = FUN_ffa038f0(iVar4 * (iVar7 - iVar6),param_5);
            iVar5 = iVar5 * (uint)(4 < iVar5) + (uint)(4 >= iVar5) * 4;
            sVar3 = FUN_ffa038f0((iVar4 - iVar5) * iVar6,param_5 - (iVar7 - iVar6));
            local_10 = CONCAT22(sVar3 + sVar2,(undefined2)local_10);
            local_c = CONCAT22((short)iVar5 + sVar3 + sVar2 + -1,(undefined2)local_c);
          }
          FUN_0034f106(param_1,&local_10,1,1,0x1000001);
        }
      }
      goto LAB_0033c476;
    }
  }
  local_18 = *param_2;
  local_14 = param_2[1];
  FUN_0034dee2(param_1,0x1000003,0x1000001);
  FUN_0034f106(param_1,&local_18,1,0,0x696969);
  FUN_0035b726(&local_18,0xffffffff,0xffffffff);
  local_c = local_14;
  local_10 = local_18;
  if ((0 < param_3) || (param_4 < param_5)) {
    iVar6 = 0;
    if (-1 < param_3) {
      iVar6 = param_5 * (uint)(param_5 < param_3) + param_3 * (uint)(param_5 >= param_3);
    }
    iVar7 = 0;
    if (-1 < param_4) {
      iVar7 = param_5 * (uint)(param_5 < param_4) + param_4 * (uint)(param_5 >= param_4);
    }
    if (0 < param_5) {
      iVar4 = FUN_0035b91e(param_2);
      if (iVar4 == 1) {
        iVar4 = FUN_0035b828(&local_18);
        uVar1 = local_18;
        iVar5 = FUN_ffa038f0(iVar4 * (iVar7 - iVar6),param_5);
        iVar5 = iVar5 * (uint)(4 < iVar5) + (uint)(4 >= iVar5) * 4;
        sVar2 = FUN_ffa038f0((iVar4 - iVar5) * iVar6,param_5 - (iVar7 - iVar6));
        sVar2 = sVar2 + (short)uVar1;
        local_10 = CONCAT22(local_10._2_2_,sVar2);
        local_c = CONCAT22(local_c._2_2_,(short)iVar5 + sVar2 + -1);
      }
      else {
        iVar4 = FUN_0035b80c(&local_18);
        sVar2 = local_18._2_2_;
        iVar5 = FUN_ffa038f0(iVar4 * (iVar7 - iVar6),param_5);
        iVar5 = iVar5 * (uint)(4 < iVar5) + (uint)(4 >= iVar5) * 4;
        sVar3 = FUN_ffa038f0((iVar4 - iVar5) * iVar6,param_5 - (iVar7 - iVar6));
        local_10 = CONCAT22(sVar3 + sVar2,(undefined2)local_10);
        local_c = CONCAT22((short)iVar5 + sVar3 + sVar2 + -1,(undefined2)local_c);
      }
      FUN_0034f106(param_1,&local_10,1,1,&DAT_004169e1);
    }
  }
LAB_0033c476:
  FUN_0034df02(param_1);
                    /* WARNING: Could not recover jumptable at 0x0033c486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033c3da INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0033c488 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0033c4a2 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0033c4d4 INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0033c4fa INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0033c52c INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0033c5f6 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0033c60a INSTRUCTION _STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0033c614 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0033c628 INSTRUCTION _LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0033c660 INSTRUCTION _STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0033c66c INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0033c680 INSTRUCTION _LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0033c73a INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0033c94a INSTRUCTION ADD R5 += 0x8
FUNCTION 0033c940 FUN_0033c940 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0033c940(int param_1,int *param_2)

{
  int *piVar1;
  ushort uVar2;
  bool bVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_0034e01a(param_1,&stack0x00000000);
  iVar6 = uStack_c;
  uStack_c._2_2_ = (short)((uint)param_1 >> 0x10);
  sVar5 = uStack_c._2_2_;
  uStack_c._0_2_ = (undefined2)param_1;
  uVar4 = (undefined2)uStack_c;
  uStack_c = iVar6;
  switch(param_2[2]) {
  case 2:
    iVar6 = *param_2;
    FUN_0034e0b6(param_1,0x1000003);
    FUN_0034e5fe(param_1,iVar6);
    break;
  default:
    iVar6 = param_2[2];
    local_1c = ((int *)*param_2)[1];
    local_20 = *(undefined4 **)*param_2;
    FUN_0033c17a(param_1,&local_20,iVar6 == 1);
    if (param_1 != 0) {
      FUN_0034dfdc(param_1,0x11);
      uVar7 = 0x1000003;
      if (iVar6 == 1) {
        uVar7 = 0x1000000;
      }
      FUN_0034dee2(param_1,uVar7,0xffffffff);
      FUN_0035b828(&local_20);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 0x1b:
  case 0x1c:
    iVar6 = param_2[1];
    uVar10 = (uint)(short)param_2[2];
    local_1c = ((int *)*param_2)[1];
    local_20 = *(undefined4 **)*param_2;
    if (uVar10 < 0x1b) {
      bVar3 = true;
      switch(uVar10) {
      case 4:
      case 6:
        bVar3 = false;
      }
    }
    else {
      bVar3 = false;
      if (uVar10 != 0x1b) {
        bVar3 = true;
      }
    }
    uVar7 = 0xffffff;
    if (bVar3) {
      uVar7 = 0xffdddd;
    }
    uVar12 = 0xcccccc;
    if (bVar3) {
      uVar12 = 0xff9999;
    }
    uVar8 = 0x555555;
    if (bVar3) {
      uVar8 = 0xcc2222;
    }
    uStack_18 = local_20;
    uStack_14 = local_1c;
    FUN_0035b828(&uStack_18);
    FUN_0035b80c(&uStack_18);
    FUN_0034e0b6(param_1,0);
    FUN_0034e550(param_1,&uStack_18);
    FUN_0035b726(&uStack_18,0xffffffff,0xffffffff);
    uStack_c = CONCAT22(uStack_18._2_2_ + 5,(undefined2)uStack_c);
    uStack_10 = uStack_18;
    FUN_0034d18c(param_1,&uStack_10,uVar7,uVar12,8);
    uStack_10._0_2_ = SUB42(uStack_18,0);
    uStack_10 = (undefined4 *)CONCAT22(uStack_18._2_2_ + 6,(undefined2)uStack_10);
    uStack_c = CONCAT22(sVar5 + -6,uVar4);
    FUN_0034e0b6(param_1,uVar12);
    FUN_0034e5fe(param_1,&uStack_10);
    uStack_10._0_2_ = (undefined2)uVar12;
    uStack_10 = (undefined4 *)CONCAT22(uStack_14._2_2_ + -5,(undefined2)uStack_10);
    uStack_c = uStack_14;
    FUN_0034d18c(param_1,&uStack_10,uVar12,uVar8,8);
    if (iVar6 != 0) {
      FUN_0035b828(&local_20);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x19:
  case 0x1a:
    uVar2 = *(ushort *)(param_2 + 2);
    piVar1 = (int *)*param_2;
    iVar6 = param_2[1];
    local_1c = piVar1[1];
    local_20 = (undefined4 *)*piVar1;
    if (uVar2 < 0xd) {
      bVar3 = true;
      if ((10 < uVar2) && (bVar3 = false, uVar2 != 0xb)) {
        bVar3 = true;
      }
    }
    else {
      bVar3 = false;
      if (((uVar2 != 0xd) && (bVar3 = true, 0x18 < uVar2)) && (bVar3 = false, uVar2 != 0x19)) {
        bVar3 = true;
      }
    }
    if ((uVar2 == 0xc) || (uVar2 == 0x1a)) {
      local_20 = (undefined4 *)CONCAT22(*(short *)((int)piVar1 + 2) + -2,(short)*piVar1);
    }
    uVar7 = 0x222222;
    if (bVar3) {
      uVar7 = 0xccccff;
    }
    uVar12 = 0x555555;
    if (bVar3) {
      uVar12 = 0x9999ff;
    }
    puVar9 = (undefined *)0x999999;
    if (bVar3) {
      puVar9 = &DAT_004444ff;
    }
    uStack_18 = local_20;
    uStack_14 = local_1c;
    FUN_0035b828(&uStack_18);
    FUN_0035b80c(&uStack_18);
    FUN_0034e0b6(param_1,0);
    FUN_0034e550(param_1,&uStack_18);
    FUN_0035b726(&uStack_18,0xffffffff,0xffffffff);
    uStack_c = CONCAT22(uStack_18._2_2_ + 5,(undefined2)uStack_c);
    uStack_10 = uStack_18;
    FUN_0034d18c(param_1,&uStack_10,uVar7,uVar12,8);
    uStack_10._0_2_ = SUB42(uStack_18,0);
    uStack_10 = (undefined4 *)CONCAT22(uStack_18._2_2_ + 6,(undefined2)uStack_10);
    uStack_c = CONCAT22(sVar5 + -6,uVar4);
    FUN_0034e0b6(param_1,uVar12);
    FUN_0034e5fe(param_1,&uStack_10);
    uStack_10._0_2_ = (undefined2)uVar12;
    uStack_10 = (undefined4 *)CONCAT22(uStack_14._2_2_ + -5,(undefined2)uStack_10);
    uStack_c = uStack_14;
    FUN_0034d18c(param_1,&uStack_10,uVar12,puVar9,8);
    if (iVar6 != 0) {
      FUN_0035b828(&local_20);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    FUN_0034e0b6(param_1,0);
    iVar13 = 5;
    iVar6 = (int)(short)local_1c;
    iVar11 = (int)(short)(local_1c._2_2_ + -4);
    do {
      FUN_0034de7a(param_1,iVar6,iVar11,iVar6);
      iVar13 = iVar13 + -1;
      iVar6 = iVar6 + -1;
      iVar11 = param_1;
    } while (iVar13 != 0);
    iVar11 = (int)(short)(local_1c._2_2_ + -4);
    iVar13 = 5;
    iVar6 = (int)(short)local_20;
    do {
      FUN_0034de7a(param_1,iVar6,iVar11,iVar6);
      iVar13 = iVar13 + -1;
      iVar11 = iVar11 + 1;
      iVar6 = param_1;
    } while (iVar13 != 0);
    break;
  case 0xe:
    iVar6 = param_2[3];
    local_1c = ((int *)*param_2)[1];
    local_20 = *(undefined4 **)*param_2;
    FUN_0033c17a(param_1,&local_20,1);
    iVar6 = FUN_0030e8d8((int)(short)iVar6);
    if (iVar6 != 0) {
      uStack_14 = CONCAT22(*(short *)(iVar6 + 6) + -1,*(short *)(iVar6 + 4) + -1);
      uStack_18 = &local_20;
      FUN_0035b43c(&uStack_18,&local_20,0x21);
      FUN_0034dd28(param_1,(int)(short)uStack_18,(int)uStack_18._2_2_,iVar6);
    }
    break;
  case 0x13:
  case 0x14:
  case 0x15:
    iVar6 = param_2[1];
    local_1c = ((int *)*param_2)[1];
    local_20 = *(undefined4 **)*param_2;
    FUN_0033c17a(param_1,&local_20,param_2[2]);
    if (iVar6 != 0) {
      FUN_0034dfdc(param_1,0x11);
      FUN_0034dee2(param_1,0x1000000,0xffffffff);
      FUN_0035b828(&local_20);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    break;
  case 0x16:
  case 0x17:
  case 0x18:
    iVar6 = param_2[1];
    local_1c = ((int *)*param_2)[1];
    local_20 = *(undefined4 **)*param_2;
    FUN_0033c17a(param_1,&local_20,param_2[2]);
    if (iVar6 != 0) {
      FUN_0034dfdc(param_1,0x11);
      FUN_0034dee2(param_1,0x1000000,0xffffffff);
      FUN_0035b828(&local_20);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    break;
  case 0x1d:
    iVar6 = *param_2;
    uVar7 = FUN_0034e276(param_1);
    FUN_0032d548(uVar7,DAT_00445304,iVar6,0);
  }
  FUN_0034e03a(param_1,&stack0x00000000);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033c956 INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 0033c972 INSTRUCTION LOAD R1 = [P5 + 0x8]
SCALAR 0x8 AT 0033ca38 INSTRUCTION LOAD R2 = W [P5 + 0x8] (X)
SCALAR 0x8 AT 0033ca80 INSTRUCTION LSHIFT R0 >>= 0x8
SCALAR 0x8 AT 0033cb04 INSTRUCTION LOAD P5 = 0x8
SCALAR 0x8 AT 0033cc04 INSTRUCTION LOAD R0 = W [P5 + 0x8] (X)
SCALAR 0x8 AT 0033cc68 INSTRUCTION LSHIFT R1 >>= 0x8
SCALAR 0x8 AT 0033cd2c INSTRUCTION LOAD P5 = 0x8
SCALAR 0x8 AT 0033cf9c INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT 0033cfdc INSTRUCTION LOAD R2 = [P5 + 0x8]
SCALAR 0x8 AT 0033d05c INSTRUCTION LOAD R2 = [P5 + 0x8]
SCALAR 0x8 AT 0033d258 INSTRUCTION _STORE [FP + 0x8] = R2
FUNCTION 0033d24a FUN_0033d24a success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0033d24a(undefined4 param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  
  sVar2 = param_2[1];
  sVar1 = *param_2;
  FUN_0034df50();
  FUN_0034dee2(param_1,0x1000003,0x1000000);
  FUN_0034de7a(param_1,(int)sVar1,(int)sVar2,param_1);
  FUN_0034de2e(param_1,(int)sVar1,(int)(short)(sVar2 + 1),param_1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0033d3f0 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0033d400 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0033d41a INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0033d53c INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 0033db10 INSTRUCTION LOAD R6 = 0x8
FUNCTION 0033db04 FUN_0033db04 success=true

void FUN_0033db04(int *param_1,short *param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  short local_10;
  short sStack_e;
  short local_c;
  short local_a;
  
  local_a = param_2[3];
  local_c = param_2[2];
  sStack_e = param_2[1];
  local_10 = *param_2;
  FUN_0034df50(*param_1);
  sVar2 = sStack_e;
  if (*(short *)(*param_1 + 0x96) < 8) {
    FUN_0034dee2(*param_1,0x1000003,0x1000000);
    FUN_0034e6aa(*param_1,&local_10);
    FUN_0034de7a(*param_1,(int)local_10,(int)sStack_e,(int)(short)(local_c + -1));
    FUN_0034de2e(*param_1,(int)local_10,(int)(short)(sStack_e + 1),(int)local_a);
    FUN_0035b726(&local_10,0xffffffff,0xffffffff);
    FUN_0034dee2(*param_1,0x1000002,0x1000000);
    iVar3 = FUN_0035b828(&local_10);
    iVar7 = *(int *)(param_2 + 8);
    iVar4 = *(int *)(param_2 + 4);
    if (((iVar4 <= iVar7) && (iVar7 <= *(int *)(param_2 + 6))) &&
       (iVar3 = FUN_ffa038f0((iVar3 + -1) * (iVar7 - iVar4),*(int *)(param_2 + 6) - iVar4),
       0 < iVar3)) {
      local_c = local_10 + (short)iVar3;
      FUN_0034e5fe(*param_1,&local_10);
    }
  }
  else {
    sVar5 = local_c + -1;
    iVar3 = (int)local_c;
    sVar6 = local_a + -1;
    iVar4 = (int)local_a;
    iVar7 = (int)local_10;
    iVar1 = (int)sStack_e;
    FUN_0034e0b6(*param_1,0x1000003);
    FUN_0034de7a(*param_1,iVar7,iVar1,(int)sVar5);
    FUN_0034de2e(*param_1,iVar7,(int)(short)(sVar2 + 1),(int)sVar6);
    FUN_0034e0b6(*param_1,0x1000000);
    FUN_0034de7a(*param_1,iVar7,iVar4,iVar3);
    FUN_0034de2e(*param_1,iVar3,iVar1,iVar4);
    FUN_0035b726(&local_10,0xffffffff,0xffffffff);
    FUN_0034e0b6(*param_1,&DAT_00333333);
    FUN_0034e5fe(*param_1,&local_10);
    FUN_0034e0b6(*param_1,0x99ff00);
    iVar3 = FUN_0035b828(&local_10);
    iVar7 = *(int *)(param_2 + 8);
    iVar4 = *(int *)(param_2 + 4);
    if (((iVar4 <= iVar7) && (iVar7 <= *(int *)(param_2 + 6))) &&
       (iVar3 = FUN_ffa038f0((iVar3 + -1) * (iVar7 - iVar4),*(int *)(param_2 + 6) - iVar4),
       0 < iVar3)) {
      local_c = local_10 + (short)iVar3;
      FUN_0034e5fe(*param_1,&local_10);
    }
  }
  FUN_0034df02(*param_1);
                    /* WARNING: Could not recover jumptable at 0x0033dbde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033dbac INSTRUCTION LOAD R1 = [P5 + 0x8]
SCALAR 0x8 AT 0033dcc0 INSTRUCTION LOAD R1 = [P5 + 0x8]
SCALAR 0x8 AT 0033dd0a INSTRUCTION STORE [FP + 0x8] = R2
FUNCTION 0033dcfc FUN_0033dcfc success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0033dcfc(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0033dd26 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 0033ddb0 INSTRUCTION _LOAD R2 = [P5 + 0x8]
SCALAR 0x8 AT 0033de24 INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0033de4c INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 0033dfc0 INSTRUCTION STORE [P0 + 0x8] = P1
FUNCTION 0033dfb4 FUN_0033dfb4 success=true

int FUN_0033dfb4(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 4);
  *(int **)(param_1 + 8) = piVar2;
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Treating indirect jump as return */
    return -1;
  }
  if (param_2 != *piVar2) {
    sVar3 = 1;
    do {
      iVar4 = -1;
      sVar1 = sVar3;
      do {
        piVar2 = (int *)piVar2[1];
        sVar3 = sVar1 + 1;
        if ((piVar2 != (int *)0x0) && (param_2 == *piVar2)) {
                    /* WARNING: Treating indirect jump as return */
          return (int)sVar1;
        }
        if (piVar2 == (int *)0x0) {
                    /* WARNING: Treating indirect jump as return */
          return -1;
        }
      } while ((iVar4 != 0) && (iVar4 = iVar4 + -1, sVar1 = sVar3, iVar4 != 0));
    } while( true );
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 0033e0ae INSTRUCTION LOAD R0 = [P0 + 0x8]
FUNCTION 0033e08e FUN_0033e08e success=true

undefined4 FUN_0033e08e(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((*(short *)(param_1 + 0xc) < 1) &&
     ((*(int *)(param_1 + 4) != 0 || (*(int *)(param_1 + 8) != 0)))) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
    *(undefined4 *)(param_1 + 8) = puVar2[1];
                    /* WARNING: Treating indirect jump as return */
    return uVar1;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 0033e0b4 INSTRUCTION LOAD R0 = [P0 + 0x8]
SCALAR 0x8 AT 0033e0c6 INSTRUCTION STORE [P0 + 0x8] = R1
SCALAR 0x8 AT 0033e0e6 INSTRUCTION STORE [P1 + 0x8] = R0
FUNCTION 0033e0de FUN_0033e0de success=true

void FUN_0033e0de(int param_1)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033e106 INSTRUCTION STORE [P1 + 0x8] = R2
FUNCTION 0033e0f0 FUN_0033e0f0 success=true

void FUN_0033e0f0(undefined4 *param_1,uint param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = s_<Undefined>_00438e80;
  param_1[3] = param_2 & 0xffff0000;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033e11e INSTRUCTION LOAD R0 = 0x8
FUNCTION 0033e114 FUN_0033e114 success=true

/* WARNING: Removing unreachable block (ram,0x0033e168) */

int FUN_0033e114(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)FUN_00357f68(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Treating indirect jump as return */
    return -1;
  }
  *puVar1 = param_2;
  puVar1[1] = 0;
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    iVar3 = 1;
    do {
      iVar6 = -1;
      iVar4 = iVar3;
      iVar5 = iVar2;
      do {
        iVar2 = *(int *)(iVar5 + 4);
        iVar3 = iVar4 + 1;
        if (iVar2 == 0) {
          *(int *)(iVar5 + 4) = iVar4;
          *(int *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
                    /* WARNING: Treating indirect jump as return */
          return iVar4;
        }
      } while ((iVar6 != 0) && (iVar6 = iVar6 + -1, iVar4 = iVar3, iVar5 = iVar2, iVar6 != 0));
    } while( true );
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(int *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 0033e1ce INSTRUCTION LOAD R0 = 0x8
FUNCTION 0033e1c4 FUN_0033e1c4 success=true

undefined4 FUN_0033e1c4(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00357f68(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 4) = 0;
    *(int *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0xffffffff;
}


END_FUNCTION
SCALAR 0x8 AT 0033e220 INSTRUCTION STORE [P5 + 0x8] = P1
FUNCTION 0033e210 FUN_0033e210 success=true

undefined4 FUN_0033e210(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  *(int **)(param_1 + 8) = piVar1;
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  if (param_2 != *piVar1) {
    do {
      iVar3 = -1;
      piVar2 = piVar1;
      do {
        piVar1 = (int *)piVar2[1];
        if ((piVar1 != (int *)0x0) && (param_2 == *piVar1)) {
          piVar2[1] = piVar1[1];
          FUN_00357fb4(piVar1);
          *(int *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
                    /* WARNING: Treating indirect jump as return */
          return 1;
        }
        if (piVar1 == (int *)0x0) {
                    /* WARNING: Treating indirect jump as return */
          return 0;
        }
      } while ((iVar3 != 0) && (iVar3 = iVar3 + -1, piVar2 = piVar1, iVar3 != 0));
    } while( true );
  }
  iVar3 = piVar1[1];
  FUN_00357fb4(piVar1);
  *(int *)(param_1 + 4) = iVar3;
  *(int *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
SCALAR 0x8 AT 0033e2c8 INSTRUCTION STORE [P5 + 0x8] = R6
FUNCTION 0033e2b8 FUN_0033e2b8 success=true

void FUN_0033e2b8(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = uVar2;
  while (uVar1 != 0) {
    uVar3 = *(uint *)(uVar1 + 4);
    uVar2 = FUN_00357fb4(uVar1);
    uVar1 = uVar3;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 0xc) = uVar2 & 0xffff0000;
                    /* WARNING: Could not recover jumptable at 0x0033e2fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033e31e INSTRUCTION STORE [P5 + 0x8] = R5
FUNCTION 0033e2fc FUN_0033e2fc success=true

void FUN_0033e2fc(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (param_1 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  uVar2 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = uVar2;
  while (uVar1 != 0) {
    uVar3 = *(uint *)(uVar1 + 4);
    uVar2 = FUN_00357fb4(uVar1);
    uVar1 = uVar3;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 0xc) = uVar2 & 0xffff0000;
  if ((param_2 & 1) == 1) {
    FUN_003259f8(param_1);
                    /* WARNING: Could not recover jumptable at 0x0033e366. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0033e354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033e52c INSTRUCTION ADD R7 += 0x8
FUNCTION 0033e4c4 FUN_0033e4c4 success=true

void FUN_0033e4c4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_0034e17e(*(int *)(param_1 + 0x18),3);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    uVar3 = 0;
    if (param_2 != 0) {
      uVar3 = FUN_0034e276(param_2);
    }
    iVar1 = FUN_00325a76(0xa0);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_0034f31c(iVar1,uVar3);
    }
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    FUN_0034e146(uVar2,param_1 + 0x828);
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined2 *)(param_1 + 0x836) = *(undefined2 *)(iVar1 + 0x12);
    *(undefined2 *)(param_1 + 0x834) = *(undefined2 *)(iVar1 + 0x10);
    *(undefined2 *)(param_1 + 0x832) = *(undefined2 *)(iVar1 + 0xe);
    *(undefined2 *)(param_1 + 0x830) = *(undefined2 *)(iVar1 + 0xc);
    FUN_0034e01a(param_2,&stack0x00000000);
    FUN_0034e03a(*(undefined4 *)(param_1 + 0x18),&stack0x00000000);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033e652 INSTRUCTION LOAD R2 = W [P0 + 0x8] (X)
FUNCTION 0033e604 FUN_0033e604 success=true

void FUN_0033e604(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = (short *)(param_1 + 0x1c + param_2 * 8);
  if (-1 < *psVar1) {
    iVar2 = *(int *)(psVar1 + 2);
    switch(*psVar1) {
    case 0:
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x6c) + 0xc))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x6c) + 8),3);
      }
      break;
    case 1:
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x6c) + 0xc))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x6c) + 8),3);
      }
      break;
    case 2:
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x6c) + 0xc))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x6c) + 8),3);
      }
      break;
    case 3:
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x6c) + 0xc))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x6c) + 8),3);
      }
      break;
    case 4:
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x6c) + 0xc))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x6c) + 8),3);
      }
      break;
    case 5:
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x6c) + 0xc))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x6c) + 8),3);
      }
      break;
    case 6:
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x6c) + 0xc))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x6c) + 8),3);
      }
    }
    psVar1[2] = 0;
    psVar1[3] = 0;
    *(int *)(param_1 + 0x838) = *(int *)(param_1 + 0x838) + -1;
    *psVar1 = -1;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033e68a INSTRUCTION LOAD R2 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 0033e6a6 INSTRUCTION LOAD R2 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 0033e6c2 INSTRUCTION LOAD R2 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 0033e6de INSTRUCTION LOAD R2 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 0033e6fa INSTRUCTION LOAD R2 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 0033e716 INSTRUCTION LOAD R2 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 0033e8b0 INSTRUCTION LOAD R2 = 0x8
FUNCTION 0033e7c4 FUN_0033e7c4 success=true

void FUN_0033e7c4(undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  *param_1 = &DAT_00404f70;
  param_1[5] = &DAT_00404fa0;
  param_1[4] = &DAT_00404fb0;
  FUN_0033e210(&DAT_00445978,param_1);
  iVar5 = param_1[0x20e];
  if (0 < iVar5) {
    iVar4 = 0;
    do {
      iVar5 = iVar5 + -1;
      FUN_0033e604(param_1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar5 != 0);
  }
  if (0 < (int)param_1[0x20e]) {
    DAT_004194f8 = DAT_004194f8 + 1;
  }
  *(undefined2 *)(param_1 + 0x207) = 0;
  FUN_0034e162(param_1[6],param_1 + 0x20a);
  uVar1 = *(ushort *)(param_1 + 0x20c);
  iVar5 = param_1[6];
  uVar2 = *(ushort *)((int)param_1 + 0x836);
  uVar3 = *(ushort *)(param_1 + 0x20d);
  *(uint *)(iVar5 + 0xe) = (uint)*(ushort *)((int)param_1 + 0x832);
  *(uint *)(iVar5 + 0x10) = (uint)uVar3;
  *(uint *)(iVar5 + 0xc) = (uint)uVar1;
  *(uint *)(iVar5 + 0x12) = (uint)uVar2;
  *(undefined2 *)(param_1 + 0x211) = 0;
  *(undefined2 *)(param_1 + 0x212) = 0;
  *(undefined2 *)((int)param_1 + 0x842) = 0;
  *(undefined2 *)((int)param_1 + 0x846) = 0;
  *(undefined2 *)(param_1 + 0x208) = 0;
  *(undefined2 *)((int)param_1 + 0x81e) = 0;
  *(undefined2 *)(param_1 + 0x210) = 0;
  *(undefined2 *)(param_1 + 0x20f) = 0;
  *(undefined2 *)((int)param_1 + 0x83e) = 0;
  if (param_1[6] != 0) {
    FUN_0034e17e(param_1[6],3);
  }
  FUN_00325cd0(param_1 + 7,0x100,8,&LAB_0033e49a,0,0);
  if (param_1 != (undefined4 *)0xfffffffc) {
    param_1[4] = &DAT_00404f40;
    param_1[5] = &DAT_00404f60;
    FUN_0033e210(&DAT_004452e8,param_1 + 5);
    param_1[4] = &DAT_00404f28;
  }
  if ((param_2 & 1) != 1) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_003259f8(param_1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033e970 INSTRUCTION LOAD P3 = 0x8
FUNCTION 0033e954 FUN_0033e954 success=true

void FUN_0033e954(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if (0 < *(int *)(param_1 + 0x838)) {
    sVar1 = 0;
    iVar2 = 8;
    piVar3 = (int *)(param_1 + 0x20);
    do {
      piVar4 = (int *)((int)piVar3 + iVar2);
      sVar1 = sVar1 + 1;
      (**(code **)(*(int *)(*piVar3 + 0x6c) + 0xec))
                (*piVar3 + (int)*(short *)(*(int *)(*piVar3 + 0x6c) + 0xe8),param_2,param_3);
      piVar3 = piVar4;
    } while ((int)sVar1 < *(int *)(param_1 + 0x838));
  }
                    /* WARNING: Could not recover jumptable at 0x0033e9aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033e9f0 INSTRUCTION LINK 0x8
FUNCTION 0033e9f0 FUN_0033e9f0 success=true

void FUN_0033e9f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  short local_10;
  undefined2 local_e;
  short local_c;
  undefined2 local_a;
  
  if (*(short *)(param_1 + 0x840) < 1) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  local_c = *(short *)(param_1 + 0x82c);
  local_e = *(undefined2 *)(param_1 + 0x82a);
  local_a = *(undefined2 *)(param_1 + 0x82e);
  local_10 = local_c - *(short *)(param_1 + 0x840);
  iVar1 = FUN_00325a76(0xa0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0034e276(*(undefined4 *)(param_1 + 0x18));
    uVar2 = FUN_0034f31c(iVar1,uVar2);
  }
  FUN_0033d54e(&stack0x00000000,uVar2);
  iVar1 = FUN_0035b80c(param_1 + 0x828);
  FUN_0035b80c(param_1 + 0x842);
  FUN_0033d562(&stack0x00000000,&local_10,(int)*(short *)(param_1 + 0x83e),&stack0x00000000,
               iVar1 + *(short *)(param_1 + 0x83e));
  FUN_0034e17e(uVar2,3);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033ea5c INSTRUCTION ADD R7 += 0x8
SCALAR 0x8 AT 0033eb2e INSTRUCTION LOAD R2 = 0x8
FUNCTION 0033eaac FUN_0033eaac success=true

int * FUN_0033eaac(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  *param_1 = (int)(param_1 + 1);
  FUN_0034077e();
  param_1[4] = (int)&DAT_00404f40;
  param_1[5] = (int)&DAT_00404f60;
  FUN_0033e114(&DAT_004452e8,param_1 + 5);
  param_1[5] = (int)&DAT_00404fa0;
  piVar3 = param_1 + 7;
  *param_1 = (int)piVar3;
  param_1[4] = (int)&DAT_00404fb0;
  FUN_00325c3c(piVar3,0x100,8,&LAB_0033e484);
  param_1[6] = 0;
  FUN_0034dee2(DAT_00440944,0x1000003,0x1000001);
  iVar4 = DAT_00440944;
  if (DAT_00440944 != 0) {
    if (param_1[6] != 0) {
      FUN_0034e17e(param_1[6],3);
      param_1[6] = 0;
    }
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar5 = FUN_0034e276(iVar4);
    }
    iVar1 = FUN_00325a76(0xa0);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = FUN_0034f31c(iVar1,uVar5);
    }
    param_1[6] = iVar2;
    FUN_0034e146(iVar2,param_1 + 0x20a);
    iVar1 = param_1[6];
    *(undefined2 *)((int)param_1 + 0x836) = *(undefined2 *)(iVar1 + 0x12);
    *(undefined2 *)(param_1 + 0x20d) = *(undefined2 *)(iVar1 + 0x10);
    *(undefined2 *)((int)param_1 + 0x832) = *(undefined2 *)(iVar1 + 0xe);
    *(undefined2 *)(param_1 + 0x20c) = *(undefined2 *)(iVar1 + 0xc);
    FUN_0034e01a(iVar4,&stack0x00000000);
    FUN_0034e03a(param_1[6],&stack0x00000000);
  }
  param_1[0x20e] = 0;
  *(undefined2 *)((int)param_1 + 0x822) = 0;
  *(undefined2 *)(param_1 + 0x209) = 0;
  *(undefined2 *)((int)param_1 + 0x826) = 0;
  *(undefined2 *)((int)param_1 + 0x81e) = 0;
  *(undefined2 *)(param_1 + 0x208) = 0;
  *(undefined2 *)(param_1 + 0x207) = 0;
  FUN_0034e146(param_1[6],param_1 + 0x20a);
  iVar4 = param_1[6];
  *(undefined2 *)((int)param_1 + 0x836) = *(undefined2 *)(iVar4 + 0x12);
  *(undefined2 *)(param_1 + 0x20d) = *(undefined2 *)(iVar4 + 0x10);
  *(undefined2 *)((int)param_1 + 0x832) = *(undefined2 *)(iVar4 + 0xe);
  *(undefined2 *)(param_1 + 0x20c) = *(undefined2 *)(iVar4 + 0xc);
  param_1[0x213] = 1;
  *(undefined2 *)((int)param_1 + 0x83e) = 0;
  *(undefined2 *)(param_1 + 0x20f) = 0;
  *(undefined2 *)(param_1 + 0x210) = 0;
  *(undefined2 *)(param_1 + 0x214) = 0;
  FUN_003407ee(param_1 + 1,0xfa);
  FUN_0035b786((int)param_1 + 0x842,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  if (param_1[0x213] == 0) {
    param_1[0x213] = 1;
    iVar4 = 0;
    if (-1 < (short)param_1[0x207]) {
      iVar4 = (int)(short)param_1[0x207];
    }
    iVar1 = 0;
    if (((0 < param_1[0x20e]) && (iVar4 < param_1[0x20e])) && (-1 < (short)piVar3[iVar4 * 2])) {
      iVar1 = (piVar3 + iVar4 * 2)[1];
    }
    if (((iVar1 != 0) && (iVar4 = FUN_0032ec4a(iVar1), iVar4 != 0)) &&
       (iVar4 = FUN_0032dfe0(DAT_004451fc), iVar1 != iVar4)) {
      FUN_0032e28c(DAT_004451fc,iVar1);
    }
  }
  FUN_0033e114(&DAT_00445978,param_1);
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}


END_FUNCTION
SCALAR 0x8 AT 0033ebae INSTRUCTION ADD R5 += 0x8
SCALAR 0x8 AT 0033ed94 INSTRUCTION LOAD P3 = 0x8
FUNCTION 0033ed48 FUN_0033ed48 success=true

undefined4 FUN_0033ed48(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  puVar6 = (ushort *)(param_1 + 0x1c + *(short *)(param_1 + 0x81c) * 8);
  if (5 < *puVar6) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  if (*(int *)(*(int *)(puVar6 + 2) + 0x94) == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  sVar4 = *(short *)(param_1 + 0x850) + 1;
  uVar1 = *(undefined2 *)(param_1 + 0x850);
  *(short *)(param_1 + 0x850) = sVar4;
  if (1 < sVar4) {
    *(undefined2 *)(param_1 + 0x850) = uVar1;
                    /* WARNING: Treating indirect jump as return */
    return 1;
  }
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x838)) {
    iVar7 = 8;
    uVar2 = 0;
    iVar5 = 0;
    piVar9 = (int *)(param_1 + 0x20);
    do {
      piVar8 = (int *)((int)piVar9 + iVar7);
      if ((*piVar9 != 0) && (*(ushort *)(piVar8 + -3) < 6)) {
        if (iVar5 == *(short *)(param_1 + 0x81c)) {
          iVar3 = FUN_0032fbe6();
          if (iVar3 != 0) {
            uVar2 = 1;
          }
        }
        else {
          iVar3 = FUN_0032fc3a(*piVar9,(int)*(short *)(param_1 + 0x850));
          if (iVar3 != 0) {
            uVar2 = 1;
          }
        }
      }
      iVar5 = iVar5 + 1;
      piVar9 = piVar8;
    } while ((int)(short)iVar5 < *(int *)(param_1 + 0x838));
  }
                    /* WARNING: Treating indirect jump as return */
  return uVar2;
}


END_FUNCTION
SCALAR 0x8 AT 0033ee70 INSTRUCTION LOAD P3 = 0x8
FUNCTION 0033ee24 FUN_0033ee24 success=true

undefined4 FUN_0033ee24(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  puVar6 = (ushort *)(param_1 + 0x1c + *(short *)(param_1 + 0x81c) * 8);
  if (5 < *puVar6) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  if (*(int *)(*(int *)(puVar6 + 2) + 0x94) == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  sVar4 = *(short *)(param_1 + 0x850) + -1;
  uVar1 = *(undefined2 *)(param_1 + 0x850);
  *(short *)(param_1 + 0x850) = sVar4;
  if (sVar4 < 0) {
    *(undefined2 *)(param_1 + 0x850) = uVar1;
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x838)) {
    iVar7 = 8;
    uVar2 = 0;
    iVar5 = 0;
    piVar9 = (int *)(param_1 + 0x20);
    do {
      piVar8 = (int *)((int)piVar9 + iVar7);
      if ((*piVar9 != 0) && (*(ushort *)(piVar8 + -3) < 6)) {
        if (iVar5 == *(short *)(param_1 + 0x81c)) {
          iVar3 = FUN_0032fbe6();
          if (iVar3 != 0) {
            uVar2 = 1;
          }
        }
        else {
          iVar3 = FUN_0032fc3a(*piVar9,(int)*(short *)(param_1 + 0x850));
          if (iVar3 != 0) {
            uVar2 = 1;
          }
        }
      }
      iVar5 = iVar5 + 1;
      piVar9 = piVar8;
    } while ((int)(short)iVar5 < *(int *)(param_1 + 0x838));
  }
                    /* WARNING: Treating indirect jump as return */
  return uVar2;
}


END_FUNCTION
SCALAR 0x8 AT 0033f0e2 INSTRUCTION LOAD P3 = 0x8
FUNCTION 0033f0b4 FUN_0033f0b4 success=true

void FUN_0033f0b4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined2 local_18 [8];
  
  if (param_2 < 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0032dfe0(DAT_004451fc);
  iVar4 = 8;
  piVar5 = (int *)(param_1 + 0x20 + param_2 * 8);
  do {
    iVar1 = param_2 + 1;
    sVar3 = (short)param_2;
    if (*(int *)(param_1 + 0x838) <= (int)sVar3) {
      *(undefined2 *)(param_1 + 0x81c) = 0xffff;
                    /* WARNING: Could not recover jumptable at 0x0033f18e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    piVar6 = (int *)((int)piVar5 + iVar4);
    iVar2 = *piVar5;
    param_2 = iVar1;
    piVar5 = piVar6;
  } while ((iVar2 == 0) || (iVar1 = FUN_0032ec4a(iVar2), iVar1 == 0));
  if ((iVar2 != 0) && (iVar4 = FUN_0032ec4a(iVar2), iVar4 != 0)) {
    FUN_0032e318(DAT_004451fc,iVar2);
    iVar4 = FUN_0032dfe0(DAT_004451fc);
    if (iVar2 == iVar4) {
      if (*(short *)(param_1 + 0x81c) != sVar3) {
        local_18[0] = 0x18;
        FUN_0035aa24(local_18);
      }
      *(short *)(param_1 + 0x81c) = sVar3;
    }
    FUN_0033ef3c(param_1,iVar2,1);
  }
  *(undefined4 *)(param_1 + 0x84c) = 1;
                    /* WARNING: Could not recover jumptable at 0x0033f12a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033f3de INSTRUCTION STORE [FP + 0x8] = R1
FUNCTION 0033f3d0 FUN_0033f3d0 success=true

void FUN_0033f3d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  short *psVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  int local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  if (*(int *)(param_1 + 0x838) == 0) {
    FUN_0035b786(param_1 + 0x842,(int)*(short *)(param_1 + 0x81e),(int)*(short *)(param_1 + 0x820),
                 (int)*(short *)(param_1 + 0x81e),(int)*(short *)(param_1 + 0x820));
  }
  iVar6 = *(int *)(param_1 + 0x18);
  sVar1 = -1;
  sVar5 = -1;
  if (iVar6 != 0) {
    iVar4 = *(int *)(param_1 + 0x838);
    iVar3 = 0x100 - iVar4;
    psVar7 = (short *)(param_1 + 0x1c + iVar4 * 8);
    sVar5 = sVar1;
    if (iVar4 < 0x100) {
      do {
        sVar5 = (short)iVar4;
        iVar4 = iVar4 + 1;
        if ((*psVar7 < 0) || (sVar5 = sVar1, iVar3 == 0)) break;
        iVar3 = iVar3 + -1;
        psVar7 = psVar7 + 4;
      } while (iVar3 != 0);
    }
    if (-1 < sVar5) {
      switch(param_2) {
      case 0:
        iVar4 = FUN_00325a76(0xcc);
        local_14 = 0;
        if (iVar4 != 0) {
          local_14 = FUN_00338a8c(iVar4,iVar6);
        }
        iVar6 = 0;
        if (local_14 != 0) {
          FUN_00338ac8(local_14,param_3);
          iVar6 = local_14;
        }
        break;
      case 1:
        iVar4 = FUN_00325a76(0xcc);
        local_14 = 0;
        if (iVar4 != 0) {
          local_14 = FUN_0033a580(iVar4,iVar6);
        }
        iVar6 = 0;
        if (local_14 != 0) {
          FUN_0033a5c4(local_14,param_3);
          iVar6 = local_14;
        }
        break;
      case 2:
        iVar4 = FUN_00325a76(0xd0);
        local_14 = 0;
        if (iVar4 != 0) {
          local_14 = FUN_003347f8(iVar4,iVar6);
        }
        iVar6 = 0;
        if (local_14 != 0) {
          FUN_0033484c(local_14,param_3);
          iVar6 = local_14;
        }
        break;
      case 3:
        iVar4 = FUN_00325a76(0xd4);
        local_14 = 0;
        if (iVar4 != 0) {
          local_14 = FUN_00335d14(iVar4,iVar6);
        }
        iVar6 = 0;
        if (local_14 != 0) {
          FUN_00335d70(local_14,param_3);
          iVar6 = local_14;
        }
        break;
      case 4:
        iVar4 = FUN_00325a76(0xc4);
        local_14 = 0;
        if (iVar4 != 0) {
          local_14 = FUN_00333d6c(iVar4,iVar6);
        }
        iVar6 = 0;
        if (local_14 != 0) {
          FUN_00333db4(local_14,param_3);
          iVar6 = local_14;
        }
        break;
      case 5:
        iVar4 = FUN_00325a76(0xc0);
        local_14 = 0;
        if (iVar4 != 0) {
          local_14 = FUN_00338124(iVar4,iVar6);
        }
        iVar6 = 0;
        if (local_14 != 0) {
          FUN_0033817c(local_14,param_3);
          iVar6 = local_14;
        }
        break;
      case 6:
        iVar4 = FUN_00325a76(0xbc);
        local_14 = 0;
        if (iVar4 != 0) {
          local_14 = FUN_0034f7b0(iVar4,iVar6);
        }
        iVar6 = 0;
        if (local_14 != 0) {
          FUN_0034f824(local_14,param_3);
          iVar6 = local_14;
        }
        break;
      default:
                    /* WARNING: Could not recover jumptable at 0x0033f454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(0xffffffff);
        return;
      }
      *(int *)(param_1 + 0x838) = *(int *)(param_1 + 0x838) + 1;
      if (iVar6 != 0) {
        puVar2 = (undefined2 *)(param_1 + 0x1c + sVar5 * 8);
        *(int *)(puVar2 + 2) = iVar6;
        *puVar2 = (short)param_2;
        FUN_0032ece8(iVar6,(int)*(short *)(param_1 + 0x81e),(int)*(short *)(param_1 + 0x820));
        local_a = *(undefined2 *)(iVar6 + 0x46);
        local_c = *(undefined2 *)(iVar6 + 0x44);
        local_e = *(undefined2 *)(iVar6 + 0x42);
        local_10 = *(undefined2 *)(iVar6 + 0x40);
        FUN_0035b562(param_1 + 0x842,&local_10);
        if (*(short *)(param_1 + 0x822) == 3) {
          sVar1 = FUN_0035b828(&local_10);
          *(short *)(param_1 + 0x81e) =
               sVar1 + *(short *)(param_1 + 0x824) + *(short *)(param_1 + 0x81e);
        }
        else {
          sVar1 = FUN_0035b80c(&local_10);
          *(short *)(param_1 + 0x820) =
               sVar1 + *(short *)(param_1 + 0x826) + *(short *)(param_1 + 0x820);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0033f53e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)((int)sVar5);
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0033f412 INSTRUCTION LOAD P2 = 0x8
SCALAR 0x8 AT 0033f434 INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0033f43a INSTRUCTION LOAD P0 = [FP + 0x8]
SCALAR 0x8 AT 0033f4ba INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0033f77a INSTRUCTION LOAD R3 = W [P0 + 0x8] (X)
FUNCTION 0033f64c FUN_0033f64c success=true

/* WARNING: Control flow encountered unimplemented instructions */

int FUN_0033f64c(int param_1,short *param_2)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sStack_1c;
  short sStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (param_2[2] != -99) {
    sVar3 = *param_2;
    sVar2 = param_2[1];
    if ((sVar3 < 0) || (sVar2 < 0)) {
      if (0 < sVar3) {
        *(short *)(param_1 + 0x81e) = sVar3 + *(short *)(param_1 + 0x81e);
      }
      if (0 < sVar2) {
        *(short *)(param_1 + 0x820) = sVar2 + *(short *)(param_1 + 0x820);
      }
    }
    else {
      *(short *)(param_1 + 0x81e) = sVar3;
      *(short *)(param_1 + 0x820) = sVar2;
      if (*(short *)(param_1 + 0x842) < 0) {
        *(short *)(param_1 + 0x846) = sVar3;
        *(short *)(param_1 + 0x842) = sVar3;
        *(short *)(param_1 + 0x848) = sVar2;
        *(short *)(param_1 + 0x844) = sVar2;
      }
    }
    sVar3 = -1;
    switch(param_2[2]) {
    case 0:
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    case 1:
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    case 2:
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    case 3:
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    case 4:
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    case 5:
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    case 6:
      sStack_1c = param_2[3];
      sStack_1a = sStack_1c >> 0xf;
      uStack_18 = (undefined2)*(undefined4 *)(param_2 + 4);
      uStack_16 = (undefined2)((uint)*(undefined4 *)(param_2 + 4) >> 0x10);
      uStack_14 = *(undefined4 *)(param_2 + 6);
      iStack_10 = (*(int *)(param_2 + 8) - (int)*(short *)(param_1 + 0x840)) + -4;
      uStack_c = *(undefined4 *)(param_2 + 10);
      sVar3 = FUN_0033f3d0(param_1,6,&sStack_1c);
    }
                    /* WARNING: Treating indirect jump as return */
    return (int)sVar3;
  }
  uVar1 = param_2[3];
  if (uVar1 < 2) {
    if (uVar1 != 0) {
                    /* WARNING: Treating indirect jump as return */
      return -1;
    }
  }
  else {
    if (uVar1 == 2) {
      *(short *)(param_1 + 0x81e) = *(short *)(param_1 + 0x846) - *param_2;
      *(ushort *)(param_1 + 0x820) =
           (ushort)(*(short *)(param_1 + 0x844) != *(short *)(param_1 + 0x848)) +
           *(short *)(param_1 + 0x848) + param_2[1];
      goto LAB_0033f6b0;
    }
    if (uVar1 != 3) {
      return -1;
    }
  }
  *(short *)(param_1 + 0x81e) = *(short *)(param_1 + 0x842) + *param_2;
  *(ushort *)(param_1 + 0x820) =
       (ushort)(*(short *)(param_1 + 0x844) != *(short *)(param_1 + 0x848)) +
       *(short *)(param_1 + 0x848) + param_2[1];
LAB_0033f6b0:
  *(short *)(param_1 + 0x822) = param_2[3];
                    /* WARNING: Treating indirect jump as return */
  return -1;
}


END_FUNCTION
SCALAR 0x8 AT 0033f7b2 INSTRUCTION LOAD R1 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 0033f7d4 INSTRUCTION LOAD R3 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 0033f7f6 INSTRUCTION LOAD R3 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 0033f81c INSTRUCTION LOAD R3 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 0033f842 INSTRUCTION LOAD R3 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 0033f86a INSTRUCTION LOAD R1 = [P0 + 0x8]
SCALAR 0x8 AT 0033fc60 INSTRUCTION STORE [P1 + 0x8] = R2
FUNCTION 0033fc20 FUN_0033fc20 success=true

void FUN_0033fc20(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  switch(param_2) {
  case 0:
    *param_1 = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 1:
    param_1[1] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 2:
    param_1[2] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 3:
    param_1[3] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 4:
    param_1[4] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 5:
    param_1[5] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 6:
    param_1[6] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 7:
    param_1[7] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 8:
    param_1[8] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 9:
    param_1[9] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 10:
    param_1[10] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xb:
    param_1[0xb] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xc:
    param_1[0xc] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xd:
    param_1[0xd] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xe:
    param_1[0xe] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xf:
    param_1[0xf] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x10:
    param_1[0x10] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x11:
    param_1[0x11] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x12:
    param_1[0x12] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x13:
    param_1[0x13] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x14:
    param_1[0x14] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x15:
    param_1[0x15] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x16:
    param_1[0x16] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x17:
    param_1[0x17] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x18:
    param_1[0x18] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x19:
    param_1[0x19] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1a:
    param_1[0x1a] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1b:
    param_1[0x1b] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1c:
    param_1[0x1c] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1d:
    param_1[0x1d] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1e:
    param_1[0x1e] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1f:
    param_1[0x1f] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x20:
    param_1[0x20] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x21:
    param_1[0x21] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x22:
    param_1[0x22] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x23:
    param_1[0x23] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x24:
    param_1[0x24] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x25:
    param_1[0x25] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x26:
    param_1[0x26] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x27:
    param_1[0x27] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x28:
    param_1[0x28] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x29:
    param_1[0x29] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2a:
    param_1[0x2a] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2b:
    param_1[0x2b] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2c:
    param_1[0x2c] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2d:
    param_1[0x2d] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2e:
    param_1[0x2e] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2f:
    param_1[0x2f] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x30:
    param_1[0x30] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x31:
    param_1[0x31] = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  default:
    *param_1 = param_3;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
}


END_FUNCTION
SCALAR 0x8 AT 0033ff24 INSTRUCTION STORE [SP + 0x8] = R0
FUNCTION 0033ff04 FUN_0033ff04 success=true

void FUN_0033ff04(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  switch(param_2) {
  case 0:
    uVar1 = *param_1;
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 1:
    uVar1 = param_1[1];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 2:
    uVar1 = param_1[2];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 3:
    uVar1 = param_1[3];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 4:
    uVar1 = param_1[4];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 5:
    uVar1 = param_1[5];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 6:
    uVar1 = param_1[6];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 7:
    uVar1 = param_1[7];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 8:
    uVar1 = param_1[8];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 9:
    uVar1 = param_1[9];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 10:
    uVar1 = param_1[10];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xb:
    uVar1 = param_1[0xb];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xc:
    uVar1 = param_1[0xc];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xd:
    uVar1 = param_1[0xd];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xe:
    uVar1 = param_1[0xe];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xf:
    uVar1 = param_1[0xf];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x10:
    uVar1 = param_1[0x10];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x11:
    uVar1 = param_1[0x11];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x12:
    uVar1 = param_1[0x12];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x13:
    uVar1 = param_1[0x13];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x14:
    uVar1 = param_1[0x14];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x15:
    uVar1 = param_1[0x15];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x16:
    uVar1 = param_1[0x16];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x17:
    uVar1 = param_1[0x17];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x18:
    uVar1 = param_1[0x18];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x19:
    uVar1 = param_1[0x19];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1a:
    uVar1 = param_1[0x1a];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1b:
    uVar1 = param_1[0x1b];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1c:
    uVar1 = param_1[0x1c];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1d:
    uVar1 = param_1[0x1d];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1e:
    uVar1 = param_1[0x1e];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1f:
    uVar1 = param_1[0x1f];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x20:
    uVar1 = param_1[0x20];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x21:
    uVar1 = param_1[0x21];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x22:
    uVar1 = param_1[0x22];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x23:
    uVar1 = param_1[0x23];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x24:
    uVar1 = param_1[0x24];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x25:
    uVar1 = param_1[0x25];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x26:
    uVar1 = param_1[0x26];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x27:
    uVar1 = param_1[0x27];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x28:
    uVar1 = param_1[0x28];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x29:
    uVar1 = param_1[0x29];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2a:
    uVar1 = param_1[0x2a];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2b:
    uVar1 = param_1[0x2b];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2c:
    uVar1 = param_1[0x2c];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2d:
    uVar1 = param_1[0x2d];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2e:
    uVar1 = param_1[0x2e];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2f:
    uVar1 = param_1[0x2f];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x30:
    uVar1 = param_1[0x30];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x31:
    uVar1 = param_1[0x31];
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  default:
    uVar1 = *param_1;
    uVar2 = (undefined1)((uint)uVar1 >> 8);
    *param_3 = uVar2;
    param_3[1] = uVar2;
    param_3[2] = (char)uVar1;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
}


END_FUNCTION
SCALAR 0x8 AT 0033ff2a INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0033ff2c INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 0033ff44 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0033ff4a INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0033ff4c INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 0033ff64 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0033ff6a INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0033ff6c INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 0033ff82 INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 0033ff84 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0033ff8a INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0033ff8c INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 0033ffa4 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0033ffaa INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0033ffac INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 0033ffc4 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0033ffca INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0033ffcc INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 0033ffe4 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0033ffea INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0033ffec INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340004 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034000a INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034000c INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340024 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034002a INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034002c INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340044 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034004a INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034004c INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340064 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034006a INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034006c INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340084 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034008a INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034008c INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003400a4 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 003400aa INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003400ac INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003400c4 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 003400ca INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003400cc INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003400e4 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 003400ea INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003400ec INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340104 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034010a INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034010c INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340124 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034012a INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034012c INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340146 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034014c INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034014e INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340168 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034016e INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 00340170 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 0034018a INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 00340190 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 00340192 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003401ac INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 003401b2 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003401b4 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003401ce INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 003401d4 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003401d6 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003401f0 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 003401f6 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003401f8 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340212 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 00340218 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034021a INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340234 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034023a INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034023c INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340256 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034025c INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034025e INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340278 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034027e INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 00340280 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 0034029a INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 003402a0 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003402a2 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003402bc INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 003402c2 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003402c4 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003402de INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 003402e4 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003402e6 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340300 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 00340306 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 00340308 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340322 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 00340328 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034032a INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340344 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034034a INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034034c INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340366 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034036c INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034036e INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340388 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034038e INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 00340390 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003403aa INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 003403b0 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003403b2 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003403cc INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 003403d2 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003403d4 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003403ee INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 003403f4 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003403f6 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340410 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 00340416 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 00340418 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340432 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 00340438 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034043a INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340454 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034045a INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034045c INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340476 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034047c INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034047e INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340498 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034049e INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003404a0 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003404ba INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 003404c0 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003404c2 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003404dc INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 003404e2 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003404e4 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003404fe INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 00340504 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 00340506 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340520 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 00340526 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 00340528 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340542 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 00340548 INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034054a INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340564 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034056a INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034056c INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340586 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 0034058c INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 0034058e INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003405a8 INSTRUCTION STORE [SP + 0x8] = R0
SCALAR 0x8 AT 003405ae INSTRUCTION LOAD R0 = W [SP + 0x8] (X)
SCALAR 0x8 AT 003405b0 INSTRUCTION ASH|| R1 = R0 >>> 0x8
SCALAR 0x8 AT 003405d2 INSTRUCTION ASH R1 = R0 >>> 0x8
FUNCTION 003405c4 FUN_003405c4 success=true

uint FUN_003405c4(undefined4 param_1,undefined4 param_2)

{
  ushort local_c;
  byte local_a;
  
  FUN_0033ff04(param_1,param_2,&local_c);
                    /* WARNING: Treating indirect jump as return */
  return (uint)local_a | ((int)(uint)local_c >> 8) << 8;
}


END_FUNCTION
SCALAR 0x8 AT 003405d6 INSTRUCTION LSH R2 = R1 << 0x8
SCALAR 0x8 AT 00340606 INSTRUCTION ASH R1 = R0 >>> 0x8
FUNCTION 003405f0 FUN_003405f0 success=true

void FUN_003405f0(undefined4 param_1,uint *param_2)

{
  ushort local_c;
  byte local_a;
  
  FUN_0033ff04(param_1,2,&local_c);
  *param_2 = CONCAT22(local_c,(short)param_1) & 0xffffff;
  FUN_0033ff04(param_1,3,&local_c);
  param_2[1] = (uint)local_a | ((int)(uint)local_c >> 8) << 8;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034060a INSTRUCTION LSH R2 = R1 << 0x8
SCALAR 0x8 AT 00340630 INSTRUCTION ASH R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340634 INSTRUCTION LSH R2 = R1 << 0x8
SCALAR 0x8 AT 0034066a INSTRUCTION ASH R1 = R0 >>> 0x8
FUNCTION 00340654 FUN_00340654 success=true

void FUN_00340654(undefined4 param_1,uint *param_2)

{
  ushort local_c;
  byte local_a;
  
  FUN_0033ff04(param_1,4,&local_c);
  *param_2 = CONCAT22(local_c,(short)param_1) & 0xffffff;
  FUN_0033ff04(param_1,5,&local_c);
  param_2[1] = (uint)local_a | ((int)(uint)local_c >> 8) << 8;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034066e INSTRUCTION LSH R2 = R1 << 0x8
SCALAR 0x8 AT 00340694 INSTRUCTION ASH R1 = R0 >>> 0x8
SCALAR 0x8 AT 00340698 INSTRUCTION LSH R2 = R1 << 0x8
SCALAR 0x8 AT 00340752 INSTRUCTION LOAD R0 = [P1 + 0x8]
FUNCTION 0034074c FUN_0034074c success=true

void FUN_0034074c(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00340774 INSTRUCTION STORE [P1 + 0x8] = R0
FUNCTION 0034076c FUN_0034076c success=true

void FUN_0034076c(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00340796 INSTRUCTION STORE [P1 + 0x8] = R3
FUNCTION 0034077e FUN_0034077e success=true

void FUN_0034077e(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[3] = &DAT_00405000;
  param_1[2] = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003407e2 INSTRUCTION STORE [P1 + 0x8] = R0
FUNCTION 003407d8 FUN_003407d8 success=true

void FUN_003407d8(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003407fa INSTRUCTION STORE [P1 + 0x8] = R0
FUNCTION 003407ee FUN_003407ee success=true

void FUN_003407ee(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = 1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00340a82 INSTRUCTION LOAD R5 = 0x8
FUNCTION 00340a48 FUN_00340a48 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00340a48(int param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined **)(param_1 + 0x74) = &DAT_00405068;
  *(undefined **)(param_1 + 0x24) = &DAT_00408c08;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00340aac INSTRUCTION STORE W [P5 + 0x8] = R0
SCALAR 0x8 AT 0034264c INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00342748 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00344162 INSTRUCTION LOAD R5 = W [P5 + 0x8] (X)
FUNCTION 00344154 FUN_00344154 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00344154(int *param_1,uint param_2,int param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  int *piVar21;
  int iVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  bool in_AZflag;
  byte *pbVar30;
  byte *local_70;
  byte *local_68;
  byte *local_4c;
  uint local_30;
  byte *local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((int)(short)param_1[2] < (int)param_2) || (*(short *)((int)param_1 + 10) < param_3)) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if ('\x01' < *(char *)((int)param_4 + 10)) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar22 = *param_4;
  iVar15 = (int)*(short *)((int)param_4 + 6);
  iVar12 = (int)(short)param_4[1];
  if (iVar22 == 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  uVar5 = (uint)(short)param_1[1];
  iVar19 = 0;
  local_20 = (byte *)0x0;
  if ((int)param_2 < (int)uVar5) {
    param_2 = uVar5 - param_2;
    if (iVar12 <= (int)param_2) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    iVar19 = (int)param_2 >> 2;
    local_20 = (byte *)(param_2 & 3);
    iVar12 = iVar12 - param_2;
    param_2 = uVar5;
  }
  iVar6 = ((int)(short)param_1[2] - param_2) + 1;
  iVar6 = iVar6 * (uint)(iVar6 < iVar12) + iVar12 * (uint)(iVar6 >= iVar12);
  iVar12 = (*(short *)((int)param_1 + 10) - param_3) + 1;
  iVar15 = iVar12 * (uint)(iVar12 < iVar15) + iVar15 * (uint)(iVar12 >= iVar15);
  local_18 = CONCAT22((short)param_3,(short)param_2);
  local_14 = CONCAT22((short)param_3 + (short)iVar15 + -1,(short)param_2 + (short)iVar6 + -1);
  iVar17 = (int)(short)param_4[2];
  iVar18 = (int)*(short *)((int)param_1 + 6);
  uVar5 = param_2 & 3;
  iVar12 = iVar17 * 2;
  if (param_3 < iVar18) {
    iVar15 = iVar15 - (iVar18 - param_3);
    if (iVar15 < 0) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    iVar22 = iVar22 + (iVar18 - param_3) * iVar17;
    param_3 = iVar18;
  }
  uVar13 = iVar6 + uVar5;
  uVar11 = uVar13 - 4;
  param_3 = param_3 * (short)((int *)*param_1)[2];
  iVar6 = *(int *)*param_1 + param_3;
  pbVar23 = (byte *)(((int)param_2 >> 2) + iVar6);
  pbVar7 = (byte *)((int)uVar11 >> 2);
  local_30 = uVar5;
  if (param_1[0x23] < 0) {
    if (param_1[0x24] < 0) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    pbVar27 = (byte *)((int)param_1 + 0x26);
    puVar1 = (&PTR_DAT_00419528)[param_1[0x24] + -0x1000000];
    local_4c = pbVar27;
    if (local_20 != (byte *)0x0) {
      uVar13 = (uVar5 + 4) - (int)local_20;
      if ((int)uVar13 < 4) {
        local_4c = (byte *)((int)param_1 + 0x27);
      }
      local_30 = uVar13 & 3;
      if ((int)uVar13 < 0 && !in_AZflag) {
        local_30 = uVar13 & 3 | 0xfffffffc;
      }
    }
    if (0 < iVar15) {
      local_70 = (byte *)(iVar22 + iVar19);
      uVar13 = uVar11 & 3;
      do {
        if (local_30 == 0) {
          pbVar20 = (byte *)((int)param_1 + 0x47);
          pbVar26 = local_70;
          iVar22 = iVar17 + 2;
          if (-1 < iVar17 + 1) {
            do {
              *pbVar20 = *pbVar26;
              if (iVar22 == 0) break;
              iVar22 = iVar22 + -1;
              pbVar20 = pbVar20 + 1;
              pbVar26 = pbVar26 + 1;
            } while (iVar22 != 0);
          }
        }
        else if (-1 < iVar17 + 1) {
          uVar8 = 0;
          pbVar20 = (byte *)((int)param_1 + 0x47);
          pbVar26 = local_70;
          iVar22 = iVar17 + 2;
          do {
            iVar19 = uVar8 << 8 - local_30;
            uVar8 = (uint)*pbVar26;
            *pbVar20 = *pbVar26 >> local_30 & (&DAT_004396a4)[local_30] |
                       (byte)iVar19 & (&DAT_00439698)[local_30];
            if (iVar22 == 0) break;
            iVar22 = iVar22 + -1;
            pbVar20 = pbVar20 + 1;
            pbVar26 = pbVar26 + 1;
          } while (iVar22 != 0);
        }
        if (-1 < iVar12) {
          bVar4 = true;
          uVar8 = (uint)*(byte *)((int)param_1 + 0x47);
          pbVar20 = pbVar27;
          pbVar26 = (byte *)(param_1 + 0x1a);
          pbVar25 = (byte *)(param_1 + 0x12);
          iVar22 = iVar12 + 1;
          do {
            bVar4 = !bVar4;
            if (bVar4) {
              pbVar30 = pbVar25 + 1;
              uVar16 = (uint)*pbVar25;
            }
            else {
              uVar16 = uVar8;
              uVar8 = uVar8 >> 4;
              pbVar30 = pbVar25;
            }
            *pbVar20 = puVar1[uVar8 & 0xf];
            *pbVar26 = (&DAT_00439740)[uVar8 & 0xf] ^ 0xff;
          } while ((iVar22 != 0) &&
                  (iVar22 = iVar22 + -1, uVar8 = uVar16, pbVar20 = pbVar20 + 1,
                  pbVar26 = pbVar26 + 1, pbVar25 = pbVar30, iVar22 != 0));
        }
        bVar3 = *(byte *)(param_1 + 0x1a);
        bVar14 = *pbVar23 & (bVar3 | (&DAT_004396a4)[uVar5]);
        if ((int)uVar11 < 0) {
          *pbVar23 = bVar14 | *local_4c & (bVar3 ^ 0xff) & (&DAT_004396a4)[uVar5];
        }
        else {
          pbVar28 = pbVar23 + 1;
          *pbVar23 = bVar14 | *local_4c & (bVar3 ^ 0xff) & (&DAT_004396a4)[uVar5];
          pbVar29 = (byte *)((int)param_1 + 0x69);
          pbVar24 = local_4c + 1;
          pbVar20 = pbVar28;
          pbVar26 = pbVar24;
          pbVar25 = pbVar29;
          pbVar30 = pbVar7;
          if (0 < (int)pbVar7) {
            do {
              pbVar29 = pbVar25 + 1;
              pbVar24 = pbVar26 + 1;
              pbVar28 = pbVar20 + 1;
              *pbVar20 = *pbVar20 & *pbVar25 | *pbVar26 & (*pbVar25 ^ 0xff);
              if (pbVar30 == (byte *)0x0) break;
              pbVar30 = pbVar30 + -1;
              pbVar20 = pbVar28;
              pbVar26 = pbVar24;
              pbVar25 = pbVar29;
            } while (pbVar30 != (byte *)0x0);
          }
          if (uVar13 != 0) {
            *pbVar28 = *pbVar28 & (*pbVar29 | (&DAT_004396a4)[uVar13]) |
                       *pbVar24 & (*pbVar29 ^ 0xff) & (&DAT_004396a4)[uVar13];
          }
        }
        local_70 = local_70 + iVar17;
      } while ((iVar15 != 0) && (iVar15 = iVar15 + -1, iVar15 != 0));
    }
  }
  else {
    puVar1 = (&PTR_DAT_00419518)[param_1[0x23] + -0x1000000];
    pbVar27 = (byte *)((int)param_1 + 0x26);
    local_4c = pbVar27;
    if (param_1[0x24] < 0) {
      if (local_20 != (byte *)0x0) {
        uVar13 = (uVar5 + 4) - (int)local_20;
        if ((int)uVar13 < 4) {
          local_4c = (byte *)((int)param_1 + 0x27);
        }
        local_30 = uVar13 & 3;
        if ((int)uVar13 < 0 && !in_AZflag) {
          local_30 = uVar13 & 3 | 0xfffffffc;
        }
      }
      if (0 < iVar15) {
        local_68 = (byte *)(iVar22 + iVar19);
        uVar13 = uVar11 & 3;
        do {
          if (local_30 == 0) {
            if (-1 < iVar17 + 1) {
              iVar22 = iVar17 + 2;
              pbVar20 = local_68;
              pbVar26 = (byte *)((int)param_1 + 0x47);
              do {
                *pbVar26 = *pbVar20;
                if (iVar22 == 0) break;
                iVar22 = iVar22 + -1;
                pbVar20 = pbVar20 + 1;
                pbVar26 = pbVar26 + 1;
              } while (iVar22 != 0);
            }
          }
          else if (-1 < iVar17 + 1) {
            iVar22 = iVar17 + 2;
            uVar8 = 0;
            pbVar20 = local_68;
            pbVar26 = (byte *)((int)param_1 + 0x47);
            do {
              bVar3 = *pbVar20;
              *pbVar26 = bVar3 >> local_30 & (&DAT_004396a4)[local_30] |
                         (byte)(uVar8 << 8 - local_30) & (&DAT_00439698)[local_30];
              if (iVar22 == 0) break;
              iVar22 = iVar22 + -1;
              uVar8 = (uint)bVar3;
              pbVar20 = pbVar20 + 1;
              pbVar26 = pbVar26 + 1;
            } while (iVar22 != 0);
          }
          if (-1 < iVar12) {
            bVar4 = true;
            uVar8 = (uint)*(byte *)((int)param_1 + 0x47);
            piVar21 = param_1 + 0x1a;
            pbVar20 = pbVar27;
            pbVar26 = (byte *)(param_1 + 0x12);
            iVar22 = iVar12 + 1;
            do {
              bVar4 = !bVar4;
              if (bVar4) {
                pbVar25 = pbVar26 + 1;
                uVar16 = (uint)*pbVar26;
              }
              else {
                uVar16 = uVar8;
                uVar8 = uVar8 >> 4;
                pbVar25 = pbVar26;
              }
              *pbVar20 = puVar1[uVar8 & 0xf];
              *(undefined *)piVar21 = (&DAT_00439740)[uVar8 & 0xf];
            } while ((iVar22 != 0) &&
                    (iVar22 = iVar22 + -1, uVar8 = uVar16, piVar21 = (int *)((int)piVar21 + 1),
                    pbVar20 = pbVar20 + 1, pbVar26 = pbVar25, iVar22 != 0));
          }
          bVar3 = *(byte *)(param_1 + 0x1a);
          bVar14 = *pbVar23 & (bVar3 | (&DAT_004396a4)[uVar5]);
          if ((int)uVar11 < 0) {
            *pbVar23 = bVar14 | *local_4c & (bVar3 ^ 0xff) & (&DAT_004396a4)[uVar5];
          }
          else {
            pbVar28 = pbVar23 + 1;
            *pbVar23 = bVar14 | *local_4c & (bVar3 ^ 0xff) & (&DAT_004396a4)[uVar5];
            pbVar29 = (byte *)((int)param_1 + 0x69);
            pbVar24 = local_4c + 1;
            pbVar20 = pbVar28;
            pbVar26 = pbVar24;
            pbVar25 = pbVar29;
            pbVar30 = pbVar7;
            if (0 < (int)pbVar7) {
              do {
                pbVar29 = pbVar25 + 1;
                pbVar24 = pbVar26 + 1;
                pbVar28 = pbVar20 + 1;
                *pbVar20 = *pbVar20 & *pbVar25 | *pbVar26 & (*pbVar25 ^ 0xff);
                if (pbVar30 == (byte *)0x0) break;
                pbVar30 = pbVar30 + -1;
                pbVar20 = pbVar28;
                pbVar26 = pbVar24;
                pbVar25 = pbVar29;
              } while (pbVar30 != (byte *)0x0);
            }
            if (uVar13 != 0) {
              *pbVar28 = *pbVar28 & (*pbVar29 | (&DAT_004396a4)[uVar13]) |
                         *pbVar24 & (*pbVar29 ^ 0xff) & (&DAT_004396a4)[uVar13];
            }
          }
          local_68 = local_68 + iVar17;
        } while ((iVar15 != 0) && (iVar15 = iVar15 + -1, iVar15 != 0));
      }
    }
    else {
      puVar2 = (&PTR_DAT_00419528)[param_1[0x24] + -0x1000000];
      uVar8 = uVar5;
      if (local_20 != (byte *)0x0) {
        uVar16 = (uVar5 + 4) - (int)local_20;
        if ((int)uVar16 < 4) {
          local_4c = (byte *)((int)param_1 + 0x27);
        }
        uVar8 = uVar16 & 3;
        if ((int)uVar16 < 0 && !in_AZflag) {
          uVar8 = uVar16 & 3 | 0xfffffffc;
        }
      }
      if (0 < iVar15) {
        uVar16 = uVar11 & 3;
        local_20 = (byte *)(iVar22 + iVar19);
        iVar22 = ((int)param_2 >> 2) + param_3 + iVar6 + 2;
        do {
          if (uVar8 == 0) {
            if (-1 < iVar17 + 1) {
              iVar19 = iVar17 + 2;
              pbVar20 = (byte *)((int)param_1 + 0x47);
              pbVar26 = local_20;
              do {
                *pbVar20 = *pbVar26;
                if (iVar19 == 0) break;
                iVar19 = iVar19 + -1;
                pbVar20 = pbVar20 + 1;
                pbVar26 = pbVar26 + 1;
              } while (iVar19 != 0);
            }
          }
          else if (-1 < iVar17 + 1) {
            iVar19 = iVar17 + 2;
            uVar10 = 0;
            pbVar20 = (byte *)((int)param_1 + 0x47);
            pbVar26 = local_20;
            do {
              iVar6 = uVar10 << 8 - uVar8;
              uVar10 = (uint)*pbVar26;
              *pbVar20 = *pbVar26 >> uVar8 & (&DAT_004396a4)[uVar8] | (byte)iVar6 & *pbVar7;
              if (iVar19 == 0) break;
              iVar19 = iVar19 + -1;
              pbVar20 = pbVar20 + 1;
              pbVar26 = pbVar26 + 1;
            } while (iVar19 != 0);
          }
          if (-1 < iVar12) {
            bVar4 = true;
            uVar10 = (uint)*(byte *)((int)param_1 + 0x47);
            pbVar20 = pbVar27;
            pbVar26 = (byte *)(param_1 + 0x12);
            iVar19 = iVar12 + 1;
            do {
              bVar4 = !bVar4;
              if (bVar4) {
                pbVar25 = pbVar26 + 1;
                uVar9 = (uint)*pbVar26;
              }
              else {
                uVar9 = uVar10;
                uVar10 = uVar10 >> 4;
                pbVar25 = pbVar26;
              }
              *pbVar20 = puVar1[uVar10 & 0xf] | puVar2[uVar10 & 0xf];
            } while ((iVar19 != 0) &&
                    (iVar19 = iVar19 + -1, uVar10 = uVar9, pbVar20 = pbVar20 + 1, pbVar26 = pbVar25,
                    iVar19 != 0));
          }
          if ((int)uVar11 < 0) {
            *(byte *)(iVar22 + -2) =
                 *(byte *)(iVar22 + -2) & ((&DAT_004396a4)[uVar5] | (&DAT_004396a4)[uVar13 & 3]) |
                 *local_4c & (&DAT_004396a4)[uVar5];
          }
          else {
            *(byte *)(iVar22 + -2) =
                 *(byte *)(iVar22 + -2) & (&DAT_004396a4)[uVar5] |
                 *local_4c & (&DAT_004396a4)[uVar5];
            pbVar26 = pbVar23 + 1;
            pbVar20 = local_4c + 1;
            if (0 < (int)pbVar7) {
              pbVar20 = local_4c + 2 + (int)(pbVar7 + -1);
              pbVar26 = (byte *)(iVar22 + -1);
              pbVar25 = local_4c + 1;
              pbVar30 = pbVar7;
              do {
                *pbVar26 = *pbVar25;
                if (pbVar30 == (byte *)0x0) break;
                pbVar30 = pbVar30 + -1;
                pbVar26 = pbVar26 + 1;
                pbVar25 = pbVar25 + 1;
              } while (pbVar30 != (byte *)0x0);
              pbVar26 = pbVar7 + -1 + iVar22;
            }
            if (uVar16 != 0) {
              *pbVar26 = *pbVar26 & (&DAT_004396a4)[uVar16] | *pbVar20 & (&DAT_004396a4)[uVar16];
            }
          }
          local_20 = local_20 + iVar17;
        } while ((iVar15 != 0) && (iVar15 = iVar15 + -1, iVar15 != 0));
      }
    }
  }
  FUN_00340982(*param_1,&local_18);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00344196 INSTRUCTION LOAD R4 = W [P4 + 0x8] (X)
SCALAR 0x8 AT 00344200 INSTRUCTION LOAD R6 = W [P2 + 0x8] (X)
SCALAR 0x8 AT 0034424a INSTRUCTION LOAD R1 = W [P2 + 0x8] (X)
SCALAR 0x8 AT 003442f0 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00344542 INSTRUCTION LOAD R7 = 0x8
SCALAR 0x8 AT 00344742 INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00344932 INSTRUCTION ADD R6 += 0x8
SCALAR 0x8 AT 003449e6 INSTRUCTION LOAD R5 = W [P4 + 0x8] (X)
FUNCTION 003449d8 FUN_003449d8 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_003449d8(int *param_1,uint param_2,int param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  bool in_AZflag;
  int iVar16;
  byte *pbVar17;
  byte *local_40;
  int local_38;
  int local_34;
  byte *local_28;
  uint local_24;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((int)(short)param_1[2] < (int)param_2) || (*(short *)((int)param_1 + 10) < param_3)) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (*(char *)((int)param_4 + 10) != '\x02') {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  local_34 = *param_4;
  iVar7 = (int)*(short *)((int)param_4 + 6);
  iVar2 = (int)(short)param_4[1];
  if (local_34 == 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  uVar8 = (uint)(short)param_1[1];
  local_28 = (byte *)0x0;
  local_24 = 0;
  if ((int)param_2 < (int)uVar8) {
    uVar3 = uVar8 - param_2;
    if (iVar2 <= (int)uVar3) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    iVar2 = iVar2 - uVar3;
    local_28 = (byte *)((int)(uVar3 + ((uint)((int)uVar3 >> 0x1f) >> 0x1e)) >> 2);
    param_2 = uVar8;
    local_24 = uVar3 & 3;
    if ((int)uVar3 < 0 && !in_AZflag) {
      local_24 = uVar3 & 3 | 0xfffffffc;
    }
  }
  iVar11 = ((int)(short)param_1[2] - param_2) + 1;
  iVar2 = iVar11 * (uint)(iVar11 < iVar2) + iVar2 * (uint)(iVar11 >= iVar2);
  iVar11 = (*(short *)((int)param_1 + 10) - param_3) + 1;
  local_38 = iVar11 * (uint)(iVar11 < iVar7) + iVar7 * (uint)(iVar11 >= iVar7);
  local_18 = CONCAT22((short)param_3,(short)param_2);
  local_14 = CONCAT22((short)param_3 + (short)local_38 + -1,(short)param_2 + (short)iVar2 + -1);
  iVar7 = (int)(param_2 + ((uint)((int)param_2 >> 0x1f) >> 0x1e)) >> 2;
  iVar11 = (int)(short)param_4[2];
  uVar8 = param_2 & 3;
  if ((int)param_2 < 0 && !in_AZflag) {
    uVar8 = param_2 & 3 | 0xfffffffc;
  }
  iVar4 = (int)*(short *)((int)param_1 + 6);
  if (param_3 < iVar4) {
    local_38 = local_38 - (iVar4 - param_3);
    if (local_38 < 0) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    local_34 = local_34 + (iVar4 - param_3) * iVar11;
    param_3 = iVar4;
  }
  uVar5 = iVar2 + uVar8;
  iVar2 = *(int *)*param_1;
  param_3 = (short)((int *)*param_1)[2] * param_3;
  pbVar12 = (byte *)((int)param_1 + 0x26);
  uVar3 = uVar8;
  local_40 = pbVar12;
  if (local_24 != 0) {
    local_24 = (uVar8 + 4) - local_24;
    if ((int)local_24 < 4) {
      local_40 = (byte *)((int)param_1 + 0x27);
    }
    uVar3 = local_24 & 3;
    if ((int)local_24 < 0 && !in_AZflag) {
      uVar3 = local_24 & 3 | 0xfffffffc;
    }
  }
  uVar9 = uVar5 & 3;
  if ((int)uVar5 < 0 && !in_AZflag) {
    uVar9 = uVar5 & 3 | 0xfffffffc;
  }
  if (0 < local_38) {
    local_28 = (byte *)(local_34 + (int)local_28);
    iVar4 = iVar7 + param_3 + iVar2 + 2;
    iVar6 = (int)(uVar5 - 4) >> 2;
    do {
      if (uVar3 == 0) {
        pbVar14 = local_28;
        pbVar13 = pbVar12;
        iVar16 = iVar11;
        if (0 < iVar11) {
          do {
            *pbVar13 = *pbVar14;
            if (iVar16 == 0) break;
            iVar16 = iVar16 + -1;
            pbVar14 = pbVar14 + 1;
            pbVar13 = pbVar13 + 1;
          } while (iVar16 != 0);
        }
      }
      else if (-1 < iVar11) {
        uVar10 = 0;
        pbVar14 = local_28;
        pbVar13 = pbVar12;
        iVar16 = iVar11 + 1;
        do {
          bVar1 = *pbVar14;
          *pbVar13 = bVar1 >> uVar3 * 2 & (&DAT_0043968c)[uVar3] |
                     (byte)(uVar10 << uVar3 * -2 + 8) & (&DAT_00439684)[uVar3];
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          uVar10 = (uint)bVar1;
          pbVar14 = pbVar14 + 1;
          pbVar13 = pbVar13 + 1;
        } while (iVar16 != 0);
      }
      if ((int)(uVar5 - 4) < 0) {
        *(byte *)(iVar4 + -2) =
             *(byte *)(iVar4 + -2) & ((&DAT_00439684)[uVar8] | (&DAT_0043968c)[uVar9]) |
             *local_40 & (&DAT_0043968c)[uVar8];
      }
      else {
        *(byte *)(iVar4 + -2) =
             *(byte *)(iVar4 + -2) & (&DAT_00439684)[uVar8] | *local_40 & (&DAT_0043968c)[uVar8];
        pbVar13 = (byte *)(iVar7 + iVar2 + param_3 + 1);
        pbVar14 = local_40 + 1;
        if (0 < iVar6) {
          pbVar14 = local_40 + uVar3 + 0x43968d;
          pbVar13 = (byte *)(iVar4 + -1);
          pbVar15 = local_40 + 1;
          pbVar17 = &DAT_0043968c + uVar3;
          do {
            *pbVar13 = *pbVar15;
            if (pbVar17 == (byte *)0x0) break;
            pbVar17 = pbVar17 + -1;
            pbVar13 = pbVar13 + 1;
            pbVar15 = pbVar15 + 1;
          } while (pbVar17 != (byte *)0x0);
          pbVar13 = (byte *)(iVar4 + uVar3 + 0x43968b);
        }
        if (0 < iVar6) {
          *pbVar13 = *pbVar13 & (&DAT_00439684)[iVar6] | *pbVar14 & (&DAT_00439684)[iVar6];
        }
      }
      local_28 = local_28 + iVar11;
    } while ((local_38 != 0) && (local_38 = local_38 + -1, local_38 != 0));
  }
  FUN_00340982(*param_1,&local_18);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00344a16 INSTRUCTION LOAD R4 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 00344ad2 INSTRUCTION LOAD R0 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 00344b36 INSTRUCTION LOAD R1 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 00344b84 INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00344d4a INSTRUCTION ADD R6 += 0x8
SCALAR 0x8 AT 00344dfe INSTRUCTION LOAD R5 = W [P5 + 0x8] (X)
FUNCTION 00344df0 FUN_00344df0 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00344df0(int *param_1,uint param_2,int param_3,int *param_4)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  undefined1 uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  char *pcVar16;
  byte *pbVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  bool in_AZflag;
  byte *local_64;
  int local_60;
  byte *local_38;
  char *local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((int)(short)param_1[2] < (int)param_2) || (*(short *)((int)param_1 + 10) < param_3)) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (*(char *)((int)param_4 + 10) != '\b') {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  local_24 = (char *)*param_4;
  iVar3 = (int)*(short *)((int)param_4 + 6);
  iVar13 = (int)(short)param_4[1];
  if (local_24 == (char *)0x0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  uVar4 = (uint)(short)param_1[1];
  iVar20 = 0;
  sVar1 = *(short *)(*param_1 + 8);
  local_20 = 0;
  if ((int)param_2 < (int)uVar4) {
    uVar14 = uVar4 - param_2;
    if (iVar13 <= (int)uVar14) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    iVar20 = (int)(uVar14 + ((uint)((int)uVar14 >> 0x1f) >> 0x1e)) >> 2;
    iVar13 = iVar13 - uVar14;
    param_2 = uVar4;
    local_20 = uVar14 & 3;
    if ((int)uVar14 < 0 && !in_AZflag) {
      local_20 = uVar14 & 3 | 0xfffffffc;
    }
  }
  iVar5 = ((int)(short)param_1[2] - param_2) + 1;
  iVar13 = iVar5 * (uint)(iVar5 < iVar13) + iVar13 * (uint)(iVar5 >= iVar13);
  iVar5 = (*(short *)((int)param_1 + 10) - param_3) + 1;
  local_60 = iVar5 * (uint)(iVar5 < iVar3) + iVar3 * (uint)(iVar5 >= iVar3);
  local_18 = CONCAT22((short)param_3,(short)param_2);
  local_14 = CONCAT22((short)param_3 + (short)local_60 + -1,(short)param_2 + (short)iVar13 + -1);
  uVar4 = param_2 & 3;
  if ((int)param_2 < 0 && !in_AZflag) {
    uVar4 = param_2 & 3 | 0xfffffffc;
  }
  iVar3 = (int)*(short *)((int)param_1 + 6);
  pbVar15 = (byte *)(int)(short)param_4[2];
  if (param_3 < iVar3) {
    local_60 = local_60 - (iVar3 - param_3);
    if (local_60 < 0) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    local_24 = local_24 + (iVar3 - param_3) * (int)pbVar15;
    param_3 = iVar3;
  }
  uVar6 = (iVar13 + uVar4) - 4;
  local_64 = (byte *)(((int)(param_2 + ((uint)((int)param_2 >> 0x1f) >> 0x1e)) >> 2) +
                     *(int *)*param_1 + (short)((int *)*param_1)[2] * param_3);
  pbVar17 = (byte *)((int)param_1 + 0x26);
  uVar14 = uVar4;
  local_38 = pbVar17;
  if (local_20 != 0) {
    local_20 = (uVar4 + 4) - local_20;
    if ((int)local_20 < 4) {
      local_38 = (byte *)((int)param_1 + 0x27);
    }
    uVar14 = local_20 & 3;
    if ((int)local_20 < 0 && !in_AZflag) {
      uVar14 = local_20 & 3 | 0xfffffffc;
    }
  }
  iVar3 = uVar14 * -2 + 8;
  if (0 < local_60) {
    piVar11 = param_1 + 0x1a;
    iVar13 = (int)(pbVar15 + 3 + ((uint)((int)(pbVar15 + 3) >> 0x1f) >> 0x1e)) >> 2;
    do {
      uVar10 = 0;
      iVar5 = 0;
      pbVar25 = pbVar15;
      if (-1 < (int)pbVar15) {
        pbVar24 = pbVar15 + 1;
        pcVar16 = local_24;
        pbVar21 = pbVar15;
        do {
          FUN_0034da16(pcVar16);
          uVar7 = FUN_0034d9c8();
          iVar5 = iVar5 + 1;
          uVar10 = uVar7 | uVar10 << 2;
          pbVar25 = pbVar21;
          if (3 < iVar5) {
            uVar10 = 0;
            pbVar25 = pbVar21 + 1;
            *pbVar21 = 0;
            iVar5 = 0;
          }
          pbVar24 = pbVar24 + -1;
          pcVar16 = pcVar16 + 1;
          pbVar21 = pbVar25;
        } while (pbVar24 != (byte *)0x0);
      }
      bVar8 = (byte)uVar10;
      if (iVar5 != 0) {
        if (iVar5 < 4) {
          iVar5 = 4 - iVar5;
          do {
            uVar10 = uVar10 << 2;
            bVar8 = (byte)uVar10;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        *pbVar25 = bVar8;
      }
      uVar10 = 0;
      iVar5 = 0;
      piVar19 = piVar11;
      if (-1 < (int)pbVar15) {
        pbVar25 = pbVar15 + 1;
        piVar18 = piVar11;
        pcVar16 = local_24;
        do {
          uVar7 = 0;
          iVar5 = iVar5 + 1;
          if (*pcVar16 == '|') {
            uVar7 = 3;
          }
          uVar10 = uVar7 | uVar10 << 2;
          piVar19 = piVar18;
          if (3 < iVar5) {
            uVar10 = 0;
            piVar19 = (int *)((int)piVar18 + 1);
            *(undefined1 *)piVar18 = 0;
            iVar5 = 0;
          }
        } while ((pbVar25 != (byte *)0x0) &&
                (pbVar25 = pbVar25 + -1, piVar18 = piVar19, pcVar16 = pcVar16 + 1,
                pbVar25 != (byte *)0x0));
      }
      uVar9 = (undefined1)uVar10;
      if (iVar5 != 0) {
        if (iVar5 < 4) {
          iVar5 = 4 - iVar5;
          do {
            uVar10 = uVar10 << 2;
            uVar9 = (undefined1)uVar10;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        *(undefined1 *)piVar19 = uVar9;
      }
      if (uVar14 == 0) {
        pbVar25 = pbVar17;
        pbVar21 = pbVar15 + iVar20;
        iVar5 = iVar13;
        if (0 < iVar13) {
          do {
            *pbVar25 = *pbVar21;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pbVar25 = pbVar25 + 1;
            pbVar21 = pbVar21 + 1;
          } while (iVar5 != 0);
        }
      }
      else if (-1 < iVar13) {
        uVar10 = 0;
        iVar5 = iVar13 + 1;
        pbVar25 = pbVar15 + iVar20;
        pbVar21 = pbVar17;
        do {
          iVar12 = uVar10 << iVar3;
          uVar10 = (uint)*pbVar25;
          *pbVar21 = *pbVar25 >> uVar14 * 2 & (&DAT_0043968c)[uVar14] |
                     (byte)iVar12 & (&DAT_00439684)[uVar14];
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pbVar25 = pbVar25 + 1;
          pbVar21 = pbVar21 + 1;
        } while (iVar5 != 0);
      }
      if (uVar14 == 0) {
        pbVar25 = pbVar15;
        pbVar21 = (byte *)((int)piVar11 + iVar20);
        iVar5 = iVar13;
        if (0 < iVar13) {
          do {
            *pbVar25 = *pbVar21;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pbVar25 = pbVar25 + 1;
            pbVar21 = pbVar21 + 1;
          } while (iVar5 != 0);
        }
      }
      else if (-1 < iVar13) {
        uVar10 = 0;
        iVar5 = iVar13 + 1;
        pbVar25 = (byte *)((int)piVar11 + iVar20);
        pbVar21 = pbVar15;
        do {
          iVar12 = uVar10 << iVar3;
          uVar10 = (uint)*pbVar25;
          *pbVar21 = *pbVar25 >> uVar14 * 2 & (&DAT_0043968c)[uVar14] |
                     (byte)iVar12 & (&DAT_00439684)[uVar14];
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pbVar25 = pbVar25 + 1;
          pbVar21 = pbVar21 + 1;
        } while (iVar5 != 0);
      }
      bVar8 = *(byte *)((int)param_1 + 0x47);
      bVar2 = *local_64 & (bVar8 | (&DAT_00439684)[uVar4]);
      if ((int)uVar6 < 0) {
        *local_64 = bVar2 | *local_38 & (bVar8 ^ 0xff) & (&DAT_0043968c)[uVar4];
      }
      else {
        iVar5 = (int)uVar6 >> 2;
        pbVar22 = local_64 + 1;
        *local_64 = bVar2 | *local_38 & (bVar8 ^ 0xff) & (&DAT_0043968c)[uVar4];
        pbVar23 = (byte *)(param_1 + 0x12);
        uVar10 = uVar6 & 3;
        pbVar26 = local_38 + 1;
        pbVar25 = pbVar23;
        pbVar21 = pbVar26;
        pbVar24 = pbVar22;
        if (0 < iVar5) {
          do {
            pbVar23 = pbVar25 + 1;
            pbVar26 = pbVar21 + 1;
            pbVar22 = pbVar24 + 1;
            *pbVar24 = *pbVar24 & *pbVar25 | *pbVar21 & (*pbVar25 ^ 0xff);
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pbVar25 = pbVar23;
            pbVar21 = pbVar26;
            pbVar24 = pbVar22;
          } while (iVar5 != 0);
        }
        if (uVar10 != 0) {
          *pbVar22 = *pbVar22 & (*pbVar23 | (&DAT_0043968c)[uVar10]) |
                     *pbVar26 & (*pbVar23 ^ 0xff) & (&DAT_00439684)[uVar10];
        }
      }
      local_60 = local_60 + -1;
      local_24 = local_24 + (int)pbVar15;
      local_64 = local_64 + sVar1;
    } while (local_60 != 0);
  }
  FUN_00340982(*param_1,&local_18);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00344e14 INSTRUCTION LOAD R3 = 0x8
SCALAR 0x8 AT 00344e34 INSTRUCTION LOAD R4 = W [P2 + 0x8] (X)
SCALAR 0x8 AT 00344eca INSTRUCTION LOAD R5 = W [P0 + 0x8] (X)
SCALAR 0x8 AT 00344f04 INSTRUCTION LOAD R0 = W [P4 + 0x8] (X)
SCALAR 0x8 AT 00344f5c INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 0034523a INSTRUCTION ADD R6 += 0x8
SCALAR 0x8 AT 00345342 INSTRUCTION LOAD R0 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0034535c INSTRUCTION ADD R5 += 0x8
SCALAR 0x8 AT 003455fe INSTRUCTION ADD R0 += 0x8
FUNCTION 00345578 FUN_00345578 success=true

int FUN_00345578(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  
  FUN_0034a684();
  *(undefined **)(param_1 + 0x18) = &DAT_004059c0;
  FUN_00325c3c(param_1 + 0x2c,4,4,&LAB_00345538);
  puVar5 = &DAT_00439774;
  iVar7 = 4;
  puVar6 = (undefined1 *)(param_1 + 0x2c);
  do {
    uVar1 = *puVar5;
    puVar4 = puVar5 + 2;
    uVar2 = puVar5[1];
    puVar5 = puVar5 + 3;
    uVar3 = *puVar4;
    puVar6[3] = 0;
    puVar6[2] = uVar1;
    puVar6[1] = uVar2;
    *puVar6 = uVar3;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    puVar6 = puVar6 + 4;
  } while (iVar7 != 0);
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x18) + 100))
            (param_1 + *(short *)(*(int *)(param_1 + 0x18) + 0x60),0x1000003,0x1000000);
  FUN_0034dbc0(&stack0x00000000);
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}


END_FUNCTION
SCALAR 0x8 AT 003456a4 INSTRUCTION ASH R1 = R0 >>> 0x8
SCALAR 0x8 AT 003456c4 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 0034575c INSTRUCTION ASH R1 = R0 >>> 0x8
SCALAR 0x8 AT 0034577c INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00346ac0 INSTRUCTION LOAD R1 = 0x8
FUNCTION 00346a10 FUN_00346a10 success=true

int FUN_00346a10(int param_1)

{
  int iVar1;
  undefined1 local_c;
  undefined1 local_b;
  
  FUN_0034a684();
  iVar1 = param_1 + 0x26;
  *(int *)(param_1 + 0x18) = iVar1;
  FUN_00325c3c(iVar1,4,1,&LAB_003469d0);
  FUN_0033ff04(&DAT_00445218,9,&local_c);
  FUN_0034da34(iVar1,local_c,local_b,iVar1);
  FUN_0033ff04(&DAT_00445218,6,&local_c);
  FUN_0034da34(param_1 + 0x27,local_c,local_b,param_1 + 0x27);
  FUN_0033ff04(&DAT_00445218,7,&local_c);
  FUN_0034da34(param_1 + 0x28,local_c,local_b,param_1 + 0x28);
  FUN_0033ff04(&DAT_00445218,8,&local_c);
  FUN_0034da34(param_1 + 0x29,local_c,local_b,param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x18) + 100))
            (param_1 + *(short *)(*(int *)(param_1 + 0x18) + 0x60),0x1000003,0x1000000);
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}


END_FUNCTION
SCALAR 0x8 AT 00346be4 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00346cc8 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 003481f0 INSTRUCTION LINK 0x8
FUNCTION 003481f0 FUN_003481f0 success=true

void FUN_003481f0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_FP;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  short sStack_a;
  short sStack_8;
  undefined2 uStack_6;
  
  piVar1 = DAT_004452f8;
  sStack_8 = (short)unaff_FP;
  uStack_6 = (undefined2)((uint)unaff_FP >> 0x10);
  if (DAT_004452f8 != (int *)0x0) {
    iVar2 = (**(code **)(DAT_004452f8[1] + 0x1c))
                      ((int)DAT_004452f8 + (int)*(short *)(DAT_004452f8[1] + 0x18));
    if ((iVar2 == 0) && (iVar2 = *piVar1, *(int *)(iVar2 + 0x20) != 0)) {
      local_10 = *(undefined2 *)(iVar2 + 0x10);
      uStack_e = *(undefined2 *)(iVar2 + 0x12);
      local_c = *(undefined2 *)(iVar2 + 0x14);
      sStack_a = *(short *)(iVar2 + 0x16);
      sStack_8 = sStack_a >> 0xf;
      iVar2 = (**(code **)(piVar1[1] + 0xc))((int)piVar1 + (int)*(short *)(piVar1[1] + 8),&local_10)
      ;
      if (iVar2 != 0) {
        iVar2 = *piVar1;
        FUN_00340b3e(*piVar1);
        *(undefined4 *)(iVar2 + 0x20) = 0;
      }
    }
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034824e INSTRUCTION LOAD R0 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0034d09a INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 0034cfe8 FUN_0034cfe8 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0034cfe8(undefined4 param_1,short *param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  
  iVar1 = (int)param_2[2] - (int)*param_2;
  FUN_0034e01a();
  iVar1 = iVar1 * (uint)(iVar1 < param_5) + param_5 * (uint)(iVar1 >= param_5);
  if (0 < iVar1) {
    FUN_ffa038f0(100,iVar1);
    FUN_ffa04340(100,iVar1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  FUN_0034e03a(param_1,&stack0x00000004);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034d10c INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT 0034d110 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 0034d12c INSTRUCTION _LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0034d23c INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 0034d18c FUN_0034d18c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0034d18c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  iVar1 = (int)*(short *)(param_2 + 6) - (int)*(short *)(param_2 + 2);
  FUN_0034e01a();
  iVar1 = iVar1 * (uint)(iVar1 < param_5) + param_5 * (uint)(iVar1 >= param_5);
  if (0 < iVar1) {
    FUN_ffa038f0(100,iVar1);
    FUN_ffa04340(100,iVar1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  FUN_0034e03a(param_1,&stack0x00000004);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034d2ae INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT 0034d2b2 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 0034d2ce INSTRUCTION _LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0034d3ba INSTRUCTION ASH|| R7.L = R2.L >>> 0x8
FUNCTION 0034d364 FUN_0034d364 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_0034d364(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_0033df24(param_1,param_1 + 4,0x10);
  if (iVar1 != 0x10) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  bVar2 = false;
  if (((*(char *)(param_1 + 4) == 'X') && (bVar2 = false, *(char *)(param_1 + 5) == 'M')) &&
     (bVar2 = false, *(char *)(param_1 + 6) == 'V')) {
    bVar2 = *(char *)(param_1 + 7) == 'h';
  }
  if (!bVar2) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0034d3c2 INSTRUCTION LSH|| R4 = R2 << 0x8
SCALAR 0x8 AT 0034d3ce INSTRUCTION ASH|| R2 = R3 >>> 0x8
SCALAR 0x8 AT 0034d3d2 INSTRUCTION _STORE W [FP + 0x8] = R7
SCALAR 0x8 AT 0034d3de INSTRUCTION ASH|| R2 = R6 >>> 0x8
SCALAR 0x8 AT 0034d3e2 INSTRUCTION _LOAD R7 = W [P5 + 0x8] (X)
SCALAR 0x8 AT 0034d3e6 INSTRUCTION ASH R4 = R5 >>> 0x8
SCALAR 0x8 AT 0034d3ec INSTRUCTION LSH|| R6 = R6 << 0x8
SCALAR 0x8 AT 0034d3f4 INSTRUCTION LSH|| R5 = R5 << 0x8
SCALAR 0x8 AT 0034d3fe INSTRUCTION ASH R2 = R7 >>> 0x8
SCALAR 0x8 AT 0034d406 INSTRUCTION LSH|| R7 = R7 << 0x8
SCALAR 0x8 AT 0034d424 INSTRUCTION STORE W [P5 + 0x8] = R2
SCALAR 0x8 AT 0034d4f6 INSTRUCTION ASH|| R5.L = R3.H >>> 0x8
FUNCTION 0034d494 FUN_0034d494 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_0034d494(int param_1)

{
  int iVar1;
  bool bVar2;
  
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iVar1 = FUN_0033df24(param_1,param_1 + 0x14,0x10);
  if (iVar1 != 0x10) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  bVar2 = false;
  if (((*(char *)(param_1 + 0x14) == 'X') && (bVar2 = false, *(char *)(param_1 + 0x15) == 'M')) &&
     (bVar2 = false, *(char *)(param_1 + 0x16) == 'V')) {
    bVar2 = *(char *)(param_1 + 0x17) == 'f';
  }
  if (!bVar2) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0034d4fe INSTRUCTION LSH|| R4 = R4 << 0x8
SCALAR 0x8 AT 0034d508 INSTRUCTION ASH|| R0.L = R2.H >>> 0x8
SCALAR 0x8 AT 0034d51c INSTRUCTION LSH|| R5 = R5 << 0x8
SCALAR 0x8 AT 0034d524 INSTRUCTION ASH|| R0.L = R1.H >>> 0x8
SCALAR 0x8 AT 0034d546 INSTRUCTION LSH|| R0 = R0 << 0x8
SCALAR 0x8 AT 0034d54e INSTRUCTION ASH|| R4 = R2 >>> 0x8
SCALAR 0x8 AT 0034d556 INSTRUCTION STORE [FP + 0x8] = R1
SCALAR 0x8 AT 0034d562 INSTRUCTION ASH|| R5 = R1 >>> 0x8
SCALAR 0x8 AT 0034d566 INSTRUCTION _STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 0034d56a INSTRUCTION ASH R0 = R3 >>> 0x8
SCALAR 0x8 AT 0034d588 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0034dafc INSTRUCTION LSHIFT R2 <<= 0x8
FUNCTION 0034daac FUN_0034daac success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0034daac(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0034dc0e INSTRUCTION LSH R2 = R3 << 0x8
FUNCTION 0034dbc0 FUN_0034dbc0 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0034dbc0(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0034df7c INSTRUCTION ADD R1 += 0x8
FUNCTION 0034df50 FUN_0034df50 success=true

void FUN_0034df50(int *param_1)

{
  int iVar1;
  int in_stack_00000000;
  int in_stack_00000004;
  
  if (0xf < (short)param_1[0x25]) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x6c))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x68),&stack0x00000000);
  iVar1 = param_1[0x25];
  param_1[(short)iVar1 * 2 + 5] = in_stack_00000000;
  (param_1 + (short)iVar1 * 2 + 5)[1] = in_stack_00000004;
  *(short *)(param_1 + 0x25) = (short)iVar1 + 1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034e0e2 INSTRUCTION ADD R6 += 0x8
FUNCTION 0034e0d4 FUN_0034e0d4 success=true

void FUN_0034e0d4(int *param_1)

{
  undefined4 in_stack_00000004;
  
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x6c))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x68),&stack0x00000000);
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x1c))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x18),in_stack_00000004);
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x19c))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x198),param_1 + 3);
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x5c))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x58),&stack0x00000000);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034e170 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
FUNCTION 0034e162 FUN_0034e162 success=true

void FUN_0034e162(int *param_1)

{
  (**(code **)(*(int *)(*param_1 + 0x18) + 0xc))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 8));
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034e1aa INSTRUCTION LOAD R2 = 0x8
FUNCTION 0034e17e FUN_0034e17e success=true

void FUN_0034e17e(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = *param_1;
  iVar2 = *param_1;
  if (iVar1 == 0) goto LAB_0034e1d4;
  uVar3 = *(ushort *)((int)param_1 + 0x96);
  if (uVar3 < 2) {
    if (uVar3 == 1) {
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x18) + 0x314))
                  (iVar1 + *(short *)(*(int *)(iVar2 + 0x18) + 0x310),3);
      }
      goto LAB_0034e1d4;
    }
  }
  else {
    if (uVar3 == 2) {
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x18) + 0x314))
                  (iVar1 + *(short *)(*(int *)(iVar2 + 0x18) + 0x310),3);
      }
      goto LAB_0034e1d4;
    }
    if (7 < uVar3) {
      if (uVar3 == 8) {
        if (iVar1 != 0) {
          (**(code **)(*(int *)(iVar2 + 0x18) + 0x314))
                    (iVar1 + *(short *)(*(int *)(iVar2 + 0x18) + 0x310),3);
        }
        goto LAB_0034e1d4;
      }
      if (uVar3 == 0x10) {
        if (iVar1 != 0) {
          (**(code **)(*(int *)(iVar2 + 0x18) + 0x314))
                    (iVar1 + *(short *)(*(int *)(iVar2 + 0x18) + 0x310),3);
        }
        goto LAB_0034e1d4;
      }
    }
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x314))
              (iVar1 + *(short *)(*(int *)(iVar2 + 0x18) + 0x310),3);
  }
LAB_0034e1d4:
  if ((param_2 & 1) != 1) {
                    /* WARNING: Could not recover jumptable at 0x0034e1e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_003259f8(param_1);
                    /* WARNING: Could not recover jumptable at 0x0034e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034e552 INSTRUCTION LINK 0x8
FUNCTION 0034e550 FUN_0034e550 success=true

void FUN_0034e550(int *param_1,short *param_2)

{
  undefined4 unaff_FP;
  short sStack_10;
  short local_e;
  short sStack_c;
  short local_a;
  short sStack_8;
  undefined2 uStack_6;
  
  uStack_6 = (undefined2)((uint)unaff_FP >> 0x10);
  sStack_8 = param_2[3] >> 0xf;
  sStack_c = param_2[2];
  sStack_10 = *param_2;
  local_a = sStack_c >> 0xf;
  local_e = sStack_10 >> 0xf;
  FUN_0035b844(&sStack_10,(int)(short)param_1[3],(int)*(short *)((int)param_1 + 0xe));
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x194))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 400),&sStack_10);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034e600 INSTRUCTION LINK 0x8
FUNCTION 0034e5fe FUN_0034e5fe success=true

void FUN_0034e5fe(int *param_1,short *param_2)

{
  undefined4 unaff_FP;
  short sStack_10;
  short local_e;
  short sStack_c;
  short local_a;
  short sStack_8;
  undefined2 uStack_6;
  
  uStack_6 = (undefined2)((uint)unaff_FP >> 0x10);
  sStack_8 = param_2[3] >> 0xf;
  sStack_c = param_2[2];
  sStack_10 = *param_2;
  local_a = sStack_c >> 0xf;
  local_e = sStack_10 >> 0xf;
  FUN_0035b844(&sStack_10,(int)(short)param_1[3],(int)*(short *)((int)param_1 + 0xe));
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x19c))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x198),&sStack_10);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034e6ac INSTRUCTION LINK 0x8
FUNCTION 0034e6aa FUN_0034e6aa success=true

void FUN_0034e6aa(int *param_1,short *param_2)

{
  undefined4 unaff_FP;
  short sStack_10;
  short local_e;
  short sStack_c;
  short local_a;
  short sStack_8;
  undefined2 uStack_6;
  
  uStack_6 = (undefined2)((uint)unaff_FP >> 0x10);
  sStack_8 = param_2[3] >> 0xf;
  sStack_c = param_2[2];
  sStack_10 = *param_2;
  local_a = sStack_c >> 0xf;
  local_e = sStack_10 >> 0xf;
  FUN_0035b844(&sStack_10,(int)(short)param_1[3],(int)*(short *)((int)param_1 + 0xe));
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x1a4))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x1a0),&sStack_10);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034e804 INSTRUCTION LINK 0x8
FUNCTION 0034e802 FUN_0034e802 success=true

void FUN_0034e802(int *param_1,short *param_2)

{
  undefined4 unaff_FP;
  short sStack_10;
  short local_e;
  short sStack_c;
  short local_a;
  short sStack_8;
  undefined2 uStack_6;
  
  uStack_6 = (undefined2)((uint)unaff_FP >> 0x10);
  sStack_8 = param_2[3] >> 0xf;
  sStack_c = param_2[2];
  sStack_10 = *param_2;
  local_a = sStack_c >> 0xf;
  local_e = sStack_10 >> 0xf;
  FUN_0035b844(&sStack_10,(int)(short)param_1[3],(int)*(short *)((int)param_1 + 0xe));
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x1b4))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x1b0),&sStack_10);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034e856 INSTRUCTION LINK 0x8
FUNCTION 0034e854 FUN_0034e854 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0034e854(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0034e8b0 INSTRUCTION LINK 0x8
FUNCTION 0034e8ae FUN_0034e8ae success=true

void FUN_0034e8ae(int *param_1,short *param_2)

{
  undefined4 unaff_FP;
  short sStack_10;
  short local_e;
  short sStack_c;
  short local_a;
  short sStack_8;
  undefined2 uStack_6;
  
  uStack_6 = (undefined2)((uint)unaff_FP >> 0x10);
  sStack_8 = param_2[3] >> 0xf;
  sStack_c = param_2[2];
  sStack_10 = *param_2;
  local_a = sStack_c >> 0xf;
  local_e = sStack_10 >> 0xf;
  FUN_0035b844(&sStack_10,(int)(short)param_1[3],(int)*(short *)((int)param_1 + 0xe));
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x24c))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x248),&sStack_10);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034eb10 INSTRUCTION LOAD R1 = W [P1 + 0x8] (X)
FUNCTION 0034eb04 FUN_0034eb04 success=true

void FUN_0034eb04(int *param_1,short *param_2)

{
  undefined4 unaff_FP;
  short local_14;
  short sStack_12;
  short local_10;
  short sStack_e;
  short local_c;
  short sStack_a;
  short sStack_8;
  undefined2 uStack_6;
  
  uStack_6 = (undefined2)((uint)unaff_FP >> 0x10);
  local_c = param_2[3] >> 0xf;
  sStack_e = param_2[2] >> 0xf;
  local_10 = param_2[1] >> 0xf;
  sStack_a = param_2[5];
  local_14 = *param_2;
  sStack_8 = sStack_a >> 0xf;
  sStack_12 = local_14 >> 0xf;
  FUN_0035b8a8(&local_14,(int)(short)param_1[3],(int)*(short *)((int)param_1 + 0xe));
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x21c))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x218),&local_14);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034ec7c INSTRUCTION LINK 0x8
FUNCTION 0034ec7c FUN_0034ec7c success=true

void FUN_0034ec7c(int *param_1,short param_2,short param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_10 [8];
  
  uVar1 = FUN_003536d8(param_4);
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x2a4))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x2a0),auStack_10,param_4,uVar1)
  ;
  iVar2 = FUN_0035b828(auStack_10);
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x29c))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x298),
             (int)(short)((param_2 - ((short)((iVar2 + 1) / 2) + -1)) + (short)param_1[3]),
             (int)(short)(param_3 + *(short *)((int)param_1 + 0xe)),param_4,uVar1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034ee38 INSTRUCTION LINK 0x8
FUNCTION 0034ee38 FUN_0034ee38 success=true

undefined4 FUN_0034ee38(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_10 [2];
  
  if (param_2 != 0) {
    uVar1 = FUN_003536d8(param_2);
    local_10[0] = 0;
    (**(code **)(*(int *)(*param_1 + 0x18) + 0x294))
              (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x290),local_10,0xffffffff,
               param_2,uVar1);
    uVar1 = FUN_0035b828(local_10);
                    /* WARNING: Treating indirect jump as return */
    return uVar1;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 0034ee98 INSTRUCTION LINK 0x8
FUNCTION 0034ee98 FUN_0034ee98 success=true

void FUN_0034ee98(int *param_1,short param_2,short param_3,undefined4 param_4,undefined4 param_5)

{
  short sVar1;
  int iVar2;
  undefined1 auStack_10 [8];
  
  sVar1 = (**(code **)(*(int *)(*param_1 + 0x18) + 0xc4))
                    (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0xc0));
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x294))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x290),auStack_10,(int)sVar1,
             param_4,param_5);
  iVar2 = FUN_0035b828(auStack_10);
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x274))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x270),
             (int)(short)((param_2 - ((short)((iVar2 + 1) / 2) + -1)) + (short)param_1[3]),
             (int)(short)(param_3 + *(short *)((int)param_1 + 0xe)),param_4,param_5);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034f038 INSTRUCTION LINK 0x8
FUNCTION 0034f038 FUN_0034f038 success=true

void FUN_0034f038(int *param_1,undefined *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *local_10 [2];
  
  puVar2 = &DAT_00439aec;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_2;
  }
  local_10[0] = puVar2;
  uVar1 = FUN_003536d8();
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x294))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x290),local_10,0xffffffff,
             puVar2,uVar1);
  FUN_0035b80c(local_10);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034f098 INSTRUCTION LINK 0x8
FUNCTION 0034f096 FUN_0034f096 success=true

void FUN_0034f096(int *param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  local_a = param_2[3];
  local_e = param_2[1];
  local_c = param_2[2];
  local_10 = *param_2;
  FUN_0035b844(&local_10,(int)(short)param_1[3],(int)*(short *)((int)param_1 + 0xe));
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x254))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 0x250),&local_10,param_3,param_4
            );
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034f108 INSTRUCTION LINK 0x8
FUNCTION 0034f106 FUN_0034f106 success=true

void FUN_0034f106(int *param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  local_a = param_2[3];
  local_e = param_2[1];
  local_c = param_2[2];
  local_10 = *param_2;
  FUN_0035b844(&local_10,(int)(short)param_1[3],(int)*(short *)((int)param_1 + 0xe));
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x25c))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 600),&local_10,param_3,param_4,
             param_5);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034f19e INSTRUCTION LOAD R1 = 0x8
FUNCTION 0034f17c FUN_0034f17c success=true

void FUN_0034f17c(int *param_1,int param_2,short *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_R4;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    param_2 = DAT_00445300;
  }
  iVar5 = 0;
  *param_1 = 0;
  bVar1 = *(byte *)(param_2 + 10);
  *(short *)((int)param_1 + 0x96) = (short)(char)bVar1;
  if (bVar1 < 8) {
    if (bVar1 != 0) {
      if (bVar1 == 1) {
        iVar2 = FUN_00325a76(100);
        if (iVar2 != 0) {
          iVar5 = FUN_00340dec(iVar2,param_2);
        }
        *param_1 = iVar5;
        goto LAB_0034f1de;
      }
      if (bVar1 == 2) {
        iVar2 = FUN_00325a76(0x94);
        if (iVar2 != 0) {
          iVar5 = FUN_00343bfc(iVar2,param_2);
        }
        *param_1 = iVar5;
        goto LAB_0034f1de;
      }
    }
  }
  else {
    if (bVar1 == 8) {
      iVar2 = FUN_00325a76(0x2c);
      if (iVar2 != 0) {
        iVar5 = FUN_00346a10(iVar2,param_2);
      }
      *param_1 = iVar5;
      goto LAB_0034f1de;
    }
    if (0xf < bVar1) {
      if (bVar1 == 0x10) {
        iVar2 = FUN_00325a76(0x30);
        if (iVar2 != 0) {
          iVar5 = FUN_00342498(iVar2,param_2);
        }
        *param_1 = iVar5;
        goto LAB_0034f1de;
      }
      if (bVar1 == 0x20) {
        iVar2 = FUN_00325a76(0x3c);
        if (iVar2 != 0) {
          iVar5 = FUN_00345578(iVar2,param_2);
        }
        *param_1 = iVar5;
        goto LAB_0034f1de;
      }
    }
  }
  iVar2 = FUN_00325a76(0x3c);
  if (iVar2 != 0) {
    iVar5 = FUN_00345578(iVar2,param_2);
  }
  *param_1 = iVar5;
LAB_0034f1de:
  iVar3 = (int)DAT_0041963a;
  iVar4 = CONCAT22((short)((uint)unaff_R4 >> 0x10),DAT_00419638);
  iVar5 = FUN_0035b828(param_3);
  iVar2 = FUN_0035b80c(param_3);
  *(int *)((int)param_1 + 10) = iVar2 + -1;
  param_1[2] = iVar5 + -1;
  *(int *)((int)param_1 + 6) = iVar3;
  param_1[1] = iVar4;
  (**(code **)(*(int *)(*param_1 + 0x18) + 0xc))
            (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x18) + 8),param_3);
  *(int *)((int)param_1 + 0x12) = (int)param_3[3];
  param_1[4] = (int)param_3[2];
  *(int *)((int)param_1 + 0xe) = (int)param_3[1];
  param_1[3] = (int)*param_3;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined2 *)((int)param_1 + 0x9a) = 0;
  *(undefined2 *)(param_1 + 0x27) = 1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034f214 INSTRUCTION STORE W [P5 + 0x8] = R7
SCALAR 0x8 AT 0034f222 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 0034f396 INSTRUCTION LSH|| R1 = R1 << 0x8
FUNCTION 0034f378 FUN_0034f378 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_0034f378(undefined4 param_1,undefined1 *param_2,int param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 in_AZflag;
  
  puVar1 = (undefined2 *)FUN_00325a38(0x1011);
  iVar2 = CONCAT31(CONCAT21(CONCAT11(*param_2,param_2[1]),param_2[2]),param_2[3]);
  if ((0 < iVar2) && (iVar2 <= param_3)) {
    if ((bool)in_AZflag) {
      if ((bool)in_AZflag) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      iVar2 = 0x7f7;
      do {
        *puVar1 = 0;
        if (iVar2 == 0) {
          halt_unimplemented();
        }
        iVar2 = iVar2 + -1;
        puVar1 = puVar1 + 1;
      } while (iVar2 != 0);
    }
    else {
      iVar2 = 0xfee;
      do {
        *(undefined1 *)puVar1 = 0;
        if (iVar2 == 0) {
          halt_unimplemented();
        }
        iVar2 = iVar2 + -1;
        puVar1 = (undefined2 *)((int)puVar1 + 1);
      } while (iVar2 != 0);
    }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  FUN_003259e8();
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 0034f3a0 INSTRUCTION LSH|| R1 = R1 << 0x8
SCALAR 0x8 AT 0034f3aa INSTRUCTION LSH|| R1 = R1 << 0x8
SCALAR 0x8 AT 0034f404 INSTRUCTION CC = !BITTST (R1,0x8)
SCALAR 0x8 AT 0034f6c8 INSTRUCTION LINK 0x8
FUNCTION 0034f6c8 FUN_0034f6c8 success=true

void FUN_0034f6c8(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined1 auStack_10 [8];
  
  FUN_0034e146(*(undefined4 *)(param_1 + 0x34),auStack_10);
  sVar1 = FUN_0035b828(auStack_10);
  sVar2 = *(short *)(param_1 + 0xa8);
  sVar1 = sVar1 + -0xc;
  if (sVar2 != 0) {
    if (sVar2 == 1) {
      sVar2 = 0;
      if (-1 < *(int *)(param_1 + 0xb0)) {
        sVar2 = FUN_0030e9a4(*(int *)(param_1 + 0xb0));
      }
      if (0 < *(int *)(param_1 + 0xb4)) {
        sVar1 = *(short *)(param_1 + 0xb4);
      }
      sVar3 = 0xe;
      if (0 < *(int *)(param_1 + 0xb8)) {
        sVar3 = *(short *)(param_1 + 0xb8);
      }
      if (sVar3 < sVar2) {
        sVar3 = sVar2;
      }
      goto LAB_0034f728;
    }
    if (sVar2 == 2) {
      sVar2 = 0;
      if (-1 < *(int *)(param_1 + 0xb0)) {
        sVar2 = FUN_0030eab8();
      }
      if (0 < *(int *)(param_1 + 0xb4)) {
        sVar1 = *(short *)(param_1 + 0xb4);
      }
      sVar3 = 0xe;
      if (0 < *(int *)(param_1 + 0xb8)) {
        sVar3 = *(short *)(param_1 + 0xb8);
      }
      if (sVar3 < sVar2) {
        sVar3 = sVar2;
      }
      goto LAB_0034f728;
    }
  }
  sVar3 = 0xe;
  if ((*(int *)(param_1 + 0xb0) != 0) && (sVar3 = 0xc, *(int *)(param_1 + 0xb0) != 3)) {
    sVar3 = 0xb;
  }
  if (0 < *(int *)(param_1 + 0xb4)) {
    sVar1 = *(short *)(param_1 + 0xb4);
  }
  if (0 < *(int *)(param_1 + 0xb8)) {
    sVar3 = *(short *)(param_1 + 0xb8);
  }
LAB_0034f728:
  FUN_0032edc0(param_1,(int)sVar1,(int)sVar3);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034f838 INSTRUCTION LOAD R1 = [P1 + 0x8]
FUNCTION 0034f824 FUN_0034f824 success=true

void FUN_0034f824(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xb8) = param_2[4];
  *(undefined4 *)(param_1 + 0xb4) = param_2[3];
  *(undefined4 *)(param_1 + 0xb0) = param_2[2];
  *(undefined4 *)(param_1 + 0xac) = param_2[1];
  *(undefined4 *)(param_1 + 0xa8) = *param_2;
  FUN_0034f6c8();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0034fdf2 INSTRUCTION STORE [P1 + 0x8] = R1
SCALAR 0x8 AT 00350190 INSTRUCTION STORE [P1 + 0x8] = R1
SCALAR 0x8 AT 003503d0 INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 003507b8 INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 003509e0 INSTRUCTION STORE [P1 + 0x8] = R1
SCALAR 0x8 AT 00350b26 INSTRUCTION STORE [P1 + 0x8] = R2
SCALAR 0x8 AT 00350b28 INSTRUCTION LSHIFT R2 >>= 0x8
SCALAR 0x8 AT 00350cd8 INSTRUCTION STORE [P1 + 0x8] = R1
SCALAR 0x8 AT 00350e2c INSTRUCTION STORE [P1 + 0x8] = R1
SCALAR 0x8 AT 003510b8 INSTRUCTION STORE W [P5 + 0x8] = R0
SCALAR 0x8 AT 003515f0 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
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
SCALAR 0x8 AT 003516c6 INSTRUCTION STORE [P5 + 0x8] = R2
SCALAR 0x8 AT 0035191a INSTRUCTION _STORE [FP + 0x8] = P1
SCALAR 0x8 AT 00351926 INSTRUCTION LOAD P0 = [FP + 0x8]
SCALAR 0x8 AT 003519ca INSTRUCTION _STORE [FP + 0x8] = P1
SCALAR 0x8 AT 003519e6 INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 00351a9e INSTRUCTION _STORE [FP + 0x8] = P1
SCALAR 0x8 AT 00351aaa INSTRUCTION LOAD P0 = [FP + 0x8]
SCALAR 0x8 AT 00351b4e INSTRUCTION _STORE [FP + 0x8] = P1
SCALAR 0x8 AT 00351b6a INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 00351c98 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 00351d54 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 00351f6c INSTRUCTION STORE W [P5 + 0x8] = R0
SCALAR 0x8 AT 003523f4 INSTRUCTION STORE [P1 + 0x8] = R3
SCALAR 0x8 AT 00352646 INSTRUCTION STORE [P5 + 0x8] = R1
SCALAR 0x8 AT 00352684 INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 0035270c INSTRUCTION STORE [P5 + 0x8] = R1
SCALAR 0x8 AT 00352a6e INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 00352c06 INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 003530cc INSTRUCTION STORE [P1 + 0x8] = R1
SCALAR 0x8 AT 00353122 INSTRUCTION STORE [P1 + 0x8] = R0
SCALAR 0x8 AT 003531fc INSTRUCTION STORE [P1 + 0x8] = R1
SCALAR 0x8 AT 0035327a INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 003532e2 INSTRUCTION STORE W [FP + 0x8] = R3
FUNCTION 003532d4 FUN_003532d4 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_003532d4(int param_1,int param_2,undefined2 param_3,undefined2 param_4,int param_5,
                 short param_6,short param_7)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 local_c;
  
  iVar5 = (int)*(short *)(param_1 + 0x1a);
  FUN_0034e0b6(param_2,*(undefined4 *)(param_1 + 0x1c));
  *(undefined2 *)(param_2 + 0xa2) = param_4;
  *(undefined2 *)(param_2 + 0xa4) = 0;
  *(undefined2 *)(param_2 + 0xa0) = param_3;
  sVar3 = (short)param_5;
  iVar6 = -1;
  do {
    iVar5 = iVar5 + -1;
    if (sVar3 < 0xb) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    iVar1 = FUN_003583b0((int)*(short *)(param_2 + 0xa4));
    iVar2 = FUN_00358420((int)*(short *)(param_2 + 0xa4));
    local_c = CONCAT22((short)((int)(param_5 * iVar2 + ((uint)(param_5 * iVar2 >> 0x1f) >> 0x13)) >>
                              0xd) + *(short *)(param_2 + 0xa2),
                       (short)((int)(iVar1 * param_5 + ((uint)(iVar1 * param_5 >> 0x1f) >> 0x13)) >>
                              0xd) + *(short *)(param_2 + 0xa0));
    FUN_0034e3ba(param_2,(short *)(param_2 + 0xa0),&local_c);
    sVar4 = param_6 + *(short *)(param_2 + 0xa4);
    *(short *)(param_2 + 0xa0) = (short)local_c;
    *(undefined2 *)(param_2 + 0xa2) = local_c._2_2_;
    *(short *)(param_2 + 0xa4) = sVar4;
    if (sVar4 < 0) {
      sVar3 = *(short *)(param_2 + 0xa4);
      iVar5 = iVar6;
      while (iVar1 = iVar5, sVar3 = sVar3 + 0x168, sVar3 < 0) {
        iVar5 = iVar6;
        if ((iVar1 != 0) && (iVar1 = iVar1 + -1, iVar1 != 0)) {
          iVar5 = iVar1;
        }
      }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    if (0x167 < *(short *)(param_2 + 0xa4)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    sVar3 = sVar3 + param_7;
    param_5 = -param_7 + param_5;
  } while (0 < iVar5);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003533ac INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0035361c INSTRUCTION STORE [P1 + 0x8] = R3
FUNCTION 003535fc FUN_003535fc success=true

void FUN_003535fc(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = &DAT_00406888;
  param_1[2] = s_<Undefined>_00439d68;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00353748 INSTRUCTION LSH R7 = R1 << 0x8
FUNCTION 00353720 FUN_00353720 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined2 * FUN_00353720(undefined2 *param_1,int param_2,undefined1 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  bool in_AZflag;
  
  if (0 < param_2) {
    iVar2 = (int)(short)((short)param_2 + -1);
    uVar3 = iVar2 + 1;
    if (iVar2 < 1) {
      uVar3 = 1;
    }
    puVar4 = param_1;
    if (in_AZflag) {
      if (uVar3 != 1) {
        iVar2 = (int)uVar3 >> 1;
        puVar1 = (undefined2 *)((int)param_1 << 0x1e);
        if (in_AZflag) {
          if (iVar2 != 1) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
            halt_unimplemented();
          }
          puVar4 = param_1 + 1;
          *param_1 = CONCAT11(param_3,param_3);
        }
        else {
          do {
            puVar4 = param_1 + 1;
            *param_1 = CONCAT11(param_3,param_3);
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            param_1 = puVar4;
          } while (iVar2 != 0);
        }
        param_1 = puVar1;
        if ((uVar3 & 1) != 1) {
          return puVar1;
        }
      }
      *(undefined1 *)puVar4 = param_3;
    }
    else {
      do {
        *(undefined1 *)puVar4 = param_3;
        if (uVar3 == 0) {
          return param_1;
        }
        uVar3 = uVar3 - 1;
        puVar4 = (undefined2 *)((int)puVar4 + 1);
      } while (uVar3 != 0);
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}


END_FUNCTION
SCALAR 0x8 AT 00353d0e INSTRUCTION LOAD R0 = 0x8
FUNCTION 00353ca4 FUN_00353ca4 success=true

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Removing unreachable block (ram,0x00353cf0) */

undefined4 FUN_00353ca4(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  if (-1 < param_2) {
    iVar2 = 0;
    iVar4 = 3;
    pcVar3 = param_1 + 2;
    do {
      if (param_2 != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      cVar1 = ' ';
      if (iVar2 < 1) {
        cVar1 = '0';
      }
      *pcVar3 = cVar1;
      iVar2 = iVar2 + 1;
    } while ((iVar4 != 0) && (iVar4 = iVar4 + -1, pcVar3 = pcVar3 + -1, iVar4 != 0));
    param_1[3] = '(';
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  iVar2 = 0x1ff;
  pcVar3 = &DAT_00439db0;
  while( true ) {
    if (*pcVar3 == '\0') {
                    /* WARNING: Treating indirect jump as return */
      return 8;
    }
    *param_1 = *pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar3 + 1;
    param_1 = param_1 + 1;
    if (iVar2 == 0) {
      return 8;
    }
  }
  return 8;
}


END_FUNCTION
SCALAR 0x8 AT 00353dbe INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 00353f0a INSTRUCTION LINK 0x8
FUNCTION 00353ed0 FUN_00353ed0 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00353ed0(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00354084 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 00355096 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 003550e8 INSTRUCTION LOAD R0 = [P4 + 0x8]
SCALAR 0x8 AT 00355102 INSTRUCTION LOAD R0 = W [P3 + 0x8] (X)
SCALAR 0x8 AT 00355156 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 00355198 INSTRUCTION _STORE [FP + 0x8] = R0
SCALAR 0x8 AT 003551da INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT 0035521c INSTRUCTION LOAD R1 = [P1 + 0x8]
SCALAR 0x8 AT 00355e42 INSTRUCTION STORE [FP + 0x8] = P1
FUNCTION 00355e1c FUN_00355e1c success=true

void FUN_00355e1c(int *param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar9;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  
  if ((param_2 < 0) || (3 < param_2)) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  piVar5 = param_1 + 0x10;
  iVar9 = 0x10;
  piVar4 = param_1;
  piVar6 = piVar5;
  do {
    if (((*piVar4 != 0) && (*(int *)(*piVar4 + 0x70) == 0)) && (param_2 == (short)*piVar6)) {
      bVar1 = true;
      goto LAB_00355e62;
    }
    piVar6 = (int *)((int)piVar6 + 2);
  } while ((iVar9 != 0) && (iVar9 = iVar9 + -1, piVar4 = piVar4 + 1, iVar9 != 0));
  bVar1 = false;
LAB_00355e62:
  if (bVar1) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if ((param_2 == 3) && (param_1[0x29] == 0)) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  sVar2 = 1;
  if (param_2 != 3) {
    sVar2 = *(short *)(&DAT_00439ef4 + param_2 * 8);
  }
  iVar9 = 0x10;
  iVar3 = 0x10;
  piVar4 = piVar5;
  piVar6 = param_1;
  do {
    piVar8 = (int *)((int)piVar4 + 2);
    if ((-1 < (short)*piVar4) && (*(short *)(&DAT_00439ef4 + (short)*piVar4 * 8) <= sVar2)) {
      iVar7 = *piVar6;
      *(undefined4 *)(*piVar6 + 0x70) = 1;
      FUN_0032f468();
      local_18 = 0x12;
      local_16 = FUN_0032ebbe(iVar7);
      local_14 = iVar7;
      FUN_0032e274(DAT_004451fc,&local_18);
      FUN_00358604();
    }
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
    piVar4 = piVar8;
  } while (iVar3 != 0);
  piVar6 = param_1 + 0x18;
  piVar4 = param_1;
  do {
    piVar8 = piVar4 + 1;
    if ((*piVar4 != 0) && (*piVar6 != 0)) {
      (**(code **)(*(int *)(*piVar4 + 0x6c) + 0x104))
                (*piVar4 + (int)*(short *)(*(int *)(*piVar4 + 0x6c) + 0x100));
      *piVar6 = 0;
    }
    iVar9 = iVar9 + -1;
    piVar6 = piVar6 + 1;
    piVar4 = piVar8;
  } while (iVar9 != 0);
  if (param_2 == 3) {
    iVar9 = 0;
    if ((code *)param_1[0x29] != (code *)0x0) {
      iVar9 = (*(code *)param_1[0x29])(0);
    }
  }
  else {
    iVar9 = (*(code *)(&PTR_LAB_00439ef0)[param_2 * 2])(0);
  }
  if (iVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00356030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar3 = 0x10;
  piVar4 = param_1;
  sVar2 = 0;
  do {
    if (*piVar4 == 0) {
      iVar3 = (int)sVar2;
      goto LAB_00355f28;
    }
  } while ((iVar3 != 0) && (iVar3 = iVar3 + -1, piVar4 = piVar4 + 1, sVar2 = sVar2 + 1, iVar3 != 0))
  ;
  iVar3 = -1;
LAB_00355f28:
  iVar7 = -1;
  if ((-1 < iVar3) && (piVar4 = param_1 + iVar3, *piVar4 == 0)) {
    *piVar4 = iVar9;
    *(short *)((int)piVar5 + iVar3 * 2) = (short)param_2;
    *(short *)(param_1 + 0x28) = (short)param_1[0x28] + 1;
    piVar4[0x18] = 0;
    *(short *)(iVar9 + 0x74) = (short)param_2;
    FUN_0032e318(DAT_004451fc,iVar9);
    iVar7 = iVar3;
    if (piVar4[0x18] == 0) {
      (**(code **)(*(int *)(iVar9 + 0x6c) + 0xfc))
                (iVar9 + *(short *)(*(int *)(iVar9 + 0x6c) + 0xf8));
      piVar4[0x18] = 1;
      iVar7 = iVar3;
    }
    FUN_0032e528(DAT_004451fc);
  }
  if (iVar7 < 0) {
    if (iVar9 != 0) {
      (**(code **)(*(int *)(iVar9 + 0x6c) + 0xc))(iVar9 + *(short *)(*(int *)(iVar9 + 0x6c) + 8),3);
    }
    iVar3 = 0x10;
    iVar9 = 0xf;
    piVar4 = param_1 + 0xf;
    while( true ) {
      if (*piVar4 != 0) break;
      if ((iVar3 == 0) || (iVar3 = iVar3 + -1, iVar9 = iVar9 + -1, piVar4 = piVar4 + -1, iVar3 == 0)
         ) goto LAB_00355f32;
    }
    param_1 = param_1 + iVar9;
    FUN_0032e318(DAT_004451fc,*param_1);
    (**(code **)(*(int *)(*param_1 + 0x6c) + 0xfc))
              (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x6c) + 0xf8));
    param_1[0x18] = 1;
  }
LAB_00355f32:
  FUN_00358650();
                    /* WARNING: Could not recover jumptable at 0x00355f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00355e94 INSTRUCTION LOAD P3 = [FP + 0x8]
SCALAR 0x8 AT 00355f52 INSTRUCTION LOAD R0 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 00355fbc INSTRUCTION _LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0035624a INSTRUCTION _STORE [FP + 0x8] = P1
FUNCTION 00356230 FUN_00356230 success=true

void FUN_00356230(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar7;
  undefined2 local_18 [8];
  
  bVar1 = false;
  iVar4 = 0x10;
  piVar5 = param_1;
  do {
    piVar6 = piVar5 + 1;
    iVar3 = *piVar5;
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x70) != 0)) {
      FUN_00356134(param_1,iVar3);
      FUN_00358650();
      iVar7 = 0x10;
      iVar3 = 0xf;
      piVar5 = param_1 + 0xf;
      do {
        if (*piVar5 != 0) {
          bVar1 = true;
          piVar5 = param_1 + iVar3;
          FUN_0032e318(DAT_004451fc,*piVar5);
          (**(code **)(*(int *)(*piVar5 + 0x6c) + 0xfc))
                    (*piVar5 + (int)*(short *)(*(int *)(*piVar5 + 0x6c) + 0xf8));
          param_1[iVar3 + 0x18] = 1;
          goto LAB_0035626a;
        }
      } while ((iVar7 != 0) &&
              (iVar7 = iVar7 + -1, iVar3 = iVar3 + -1, piVar5 = piVar5 + -1, iVar7 != 0));
      bVar1 = true;
    }
LAB_0035626a:
    iVar4 = iVar4 + -1;
    piVar5 = piVar6;
  } while (iVar4 != 0);
  if (-1 < *(short *)((int)param_1 + 0xa2)) {
    *(undefined2 *)((int)param_1 + 0xa2) = 0xffff;
    FUN_00355e1c(param_1);
  }
  iVar4 = 0x10;
  do {
    if ((*param_1 != 0) && (*(int *)(*param_1 + 0x70) == 0)) {
      bVar2 = true;
      goto LAB_00356298;
    }
  } while ((iVar4 != 0) && (iVar4 = iVar4 + -1, param_1 = param_1 + 1, iVar4 != 0));
  bVar2 = false;
LAB_00356298:
  if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x003562a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar4 = FUN_00356558(&DAT_004453b8);
  if (iVar4 == 0) {
    if (!bVar1) {
                    /* WARNING: Could not recover jumptable at 0x003562c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    local_18[0] = 0x17;
    FUN_0032e274(DAT_004451fc,local_18);
                    /* WARNING: Could not recover jumptable at 0x003562ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003562f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0035635a INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 0035646e INSTRUCTION ADD R0 += 0x8
FUNCTION 00356468 FUN_00356468 success=true

undefined4 FUN_00356468(void)

{
  undefined4 in_stack_00000000;
  
  FUN_0032ba84(&stack0x00000000);
                    /* WARNING: Treating indirect jump as return */
  return in_stack_00000000;
}


END_FUNCTION
SCALAR 0x8 AT 0035656e INSTRUCTION LOAD R0 = W [P1 + 0x8] (X)
FUNCTION 00356558 FUN_00356558 success=true

undefined4 FUN_00356558(int *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return 1;
  }
  if (((short)param_1[2] < 0) && (*(short *)((int)param_1 + 10) < 0)) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
SCALAR 0x8 AT 003565b6 INSTRUCTION LOAD R0 = W [P5 + 0x8] (X)
FUNCTION 00356598 FUN_00356598 success=true

void FUN_00356598(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_00356728(param_2,param_3);
  if (iVar1 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  *(int *)(param_1 + 0xc) = (int)*(short *)(param_1 + 8);
  local_18 = 0xffff0013;
  local_14 = 0xffffffff;
  FUN_0032e274(DAT_004451fc,&local_18);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00356600 INSTRUCTION LOAD R1 = W [P5 + 0x8] (X)
FUNCTION 003565e4 FUN_003565e4 success=true

void FUN_003565e4(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 local_28 [8];
  undefined2 local_18 [8];
  
  iVar2 = DAT_004451fc;
  iVar4 = 0;
  bVar1 = false;
  if ((-1 < (short)param_1[3]) && ((short)param_1[3] == (short)param_1[2])) {
    *(undefined4 *)(DAT_004451fc + 0x1080) = 0;
    FUN_0032e440(iVar2);
    if (*param_1 != 0) {
      (**(code **)(*(int *)(*param_1 + 0x6c) + 0xc))
                (*param_1 + (int)*(short *)(*(int *)(*param_1 + 0x6c) + 8),3);
    }
    *param_1 = 0;
    iVar2 = DAT_004451fc;
    param_1[2] = -1;
    param_1[3] = -1;
    local_18[0] = 0x15;
    FUN_0032e274(iVar2,local_18);
    bVar1 = true;
  }
  if (-1 < *(short *)((int)param_1 + 10)) {
    uVar3 = FUN_00356736();
    iVar2 = FUN_00325a76(0x194);
    if (iVar2 != 0) {
      iVar4 = FUN_00330a04(iVar2,DAT_00440944);
    }
    *param_1 = iVar4;
    if (iVar4 != 0) {
      FUN_00330b08(iVar4,uVar3);
      FUN_0032e318(DAT_004451fc,*param_1);
      *(undefined4 *)(DAT_004451fc + 0x1080) = 1;
    }
    param_1[2] = (int)*(short *)((int)param_1 + 10);
    *(undefined4 *)((int)param_1 + 10) = 0xffffffff;
    iVar4 = 1;
  }
  if (iVar4 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar2 = FUN_003554d2(&DAT_00445310);
  if (-1 < iVar2) {
    FUN_00355d36(&DAT_00445310,iVar2);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (!bVar1) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  local_28[0] = 0x17;
  FUN_0032e274(DAT_004451fc,local_28);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003566b8 INSTRUCTION STORE W [P5 + 0x8] = R0
SCALAR 0x8 AT 003566e2 INSTRUCTION LOAD R2 = W [P1 + 0x8] (X)
SCALAR 0x8 AT 003566ee INSTRUCTION STORE W [P5 + 0x8] = R1
SCALAR 0x8 AT 00356712 INSTRUCTION STORE [P1 + 0x8] = R0
SCALAR 0x8 AT 003567ae INSTRUCTION ADD P1 += 0x8
FUNCTION 00356768 FUN_00356768 success=true

void FUN_00356768(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_28 [32];
  
  if (*param_1 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  switch(param_2) {
  case 0:
    FUN_00359ec4(&DAT_004458f0);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 1:
    break;
  case 2:
    if (DAT_0041901c == 0) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    FUN_00359eec(&DAT_004458f0,4,s_Run_Time_Error__0043a34c,2000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 3:
    FUN_00324010(auStack_28,&DAT_0043a0a0);
    FUN_00359eec(&DAT_004458f0,0xe,auStack_28,1000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 4:
    FUN_00359eec(&DAT_004458f0,0xd5,s_Now_Processing_0043a0a4,10000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 5:
    FUN_00359eec(&DAT_004458f0,0xe,s_COMPLETE_0043a0b4,1000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 6:
    FUN_00359eec(&DAT_004458f0,0xe,&DAT_0043a09c,1,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 7:
    FUN_00359eec(&DAT_004458f0,0xe,s_PANEL_Locked_0043a0c0,1000,s_Now_SCENE_mode_0043a0d0);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 8:
    FUN_00359eec(&DAT_004458f0,0xe,s_Freq_is_Locked_0043a0e0,2000,s_Now_D_In_Mode_0043a0f0);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 9:
    FUN_00359eec(&DAT_004458f0,0xe,s_Freq_is_Locked_0043a0e0,2000,s_Now_USB_Mode_0043a100);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 10:
    FUN_00359eec(&DAT_004458f0,0xe,s_BTT_LOW__0043a110,4000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xb:
    FUN_00359eec(&DAT_004458f0,0xe,s_Power_OFF_0043a11c,4000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xc:
    if (param_3 != 0) {
      FUN_00324010(auStack_28,s_SCENE_No___d_0043a128);
      FUN_00359eec(&DAT_004458f0,0xe,s_Now_Loading_0043a138,2000,auStack_28);
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    FUN_00359eec(&DAT_004458f0,0xe,s_Exit_SCENE_Mode_0043a35c,2000,s_Now_Processing_0043a0a4);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xd:
    FUN_00324010(auStack_28,s_SCENE_No___d_0043a128);
    FUN_00359eec(&DAT_004458f0,0xe,s_Save_Complete_0043a148,2000,auStack_28);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xe:
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xf:
    FUN_00324010(auStack_28,s__dHz_0043a158);
    FUN_00359eec(&DAT_004458f0,0xa5,s_COAXIAL_CLOCK_0043a160,3000,auStack_28);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x10:
    FUN_00359eec(&DAT_004458f0,0xac,s_Coaxial_In_Unlocked_0043a370,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x11:
    FUN_00359eec(&DAT_004458f0,9,s_UNSUPPORTED_0043a170,0xffffffff,s_CLOCK_0043a17c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x12:
    FUN_00359eec(&DAT_004458f0,9,s_MISMATCH_CLOCK_0043a184,0xffffffff,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x13:
    if (param_3 == 0) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    FUN_00359eec(&DAT_004458f0,0xe,s_SCMS_ON_0043a194,5000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x14:
    if (param_3 == 0) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    FUN_00359eec(&DAT_004458f0,0xe,s_NO_PCM_0043a19c,5000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x15:
    FUN_00359eec(&DAT_004458f0,0xab,s_USB_ON_LINE_0043a1a4,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x16:
    FUN_00359eec(&DAT_004458f0,0xab,s_USB_DISK_ON_LINE_0043a384,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x17:
    FUN_00359eec(&DAT_004458f0,0xac,s_USB_OFF_LINE_0043a1b0,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x18:
    FUN_00359eec(&DAT_004458f0,9,s_Supports_Only_0043a1c0,4000,s_USB_High_Speed_0043a1d0);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x19:
    FUN_00359eec(&DAT_004458f0,0xe,s_USB_BUS_RESET_0043a1e0,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1a:
    FUN_00359eec(&DAT_004458f0,0xe,s_USB_SUSPEND_0043a1f0,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1b:
    FUN_00359eec(&DAT_004458f0,0xe,s_USB_RESUME_0043a1fc,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1c:
    FUN_00359eec(&DAT_004458f0,0xe,s_PANEL_Connected_0043a398,3000,s_Now_recovering____0043a3a8);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1d:
    FUN_00359eec(&DAT_004458f0,9,s_FX_can_not_work_0043a3bc,3000,s_AUX2_is_Inserted_0043a3cc);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1e:
    FUN_00359eec(&DAT_004458f0,9,s_FNL_can_not_work_0043a3e0,3000,s_96kHz_USB_online_0043a3f4);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1f:
    FUN_00359eec(&DAT_004458f0,0xe,s_Factory_Reset_0043a208,3000,s_Now_Processing_0043a0a4);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x20:
    FUN_00359eec(&DAT_004458f0,9,s_File_Sys_Error__0043a408,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x21:
    FUN_00359eec(&DAT_004458f0,9,s_File_Locked_0043a218,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x22:
    FUN_00359eec(&DAT_004458f0,9,s_No_SD_Card_0043a224,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x23:
    FUN_00359eec(&DAT_004458f0,9,s_SD_Card_Locked_0043a230,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x24:
    FUN_00359eec(&DAT_004458f0,0xe,s_SD_Buffering_0043a240,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x25:
    FUN_00359eec(&DAT_004458f0,9,s_SD_Card_Slow_0043a250,0xffffffff,s_Push_Any_Key_0043a418);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x26:
    FUN_00359eec(&DAT_004458f0,9,s_SD_Card_Full__0043a260,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x27:
    FUN_00359eec(&DAT_004458f0,9,s_Improper_File_0043a270,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x28:
    FUN_00359eec(&DAT_004458f0,0xe,s_Recoder_Working_0043a42c,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x29:
    FUN_00359eec(&DAT_004458f0,9,s_Files_Frequency_0043a43c,3000,s_Mismatch_0043a280);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2a:
    FUN_00359eec(&DAT_004458f0,9,s_Coaxial_Frequency_0043a450,3000,s_Mismatch_0043a280);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2b:
    FUN_00359eec(&DAT_004458f0,9,s_Now_USB_Online_0043a28c,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2c:
    FUN_00359eec(&DAT_004458f0,0xe,s_No_Backup_Data_0043a29c,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  default:
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2f:
    FUN_00359eec(&DAT_004458f0,9,s_SD_Card_Error__0043a2ac,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x30:
    FUN_00359eec(&DAT_004458f0,9,s_SD_Unformatted_0043a2bc,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x31:
    FUN_00359eec(&DAT_004458f0,0xe,s_No_Channel_0043a2cc,2000,s_Selected_0043a2dc);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x32:
    FUN_00359eec(&DAT_004458f0,0xa0,s_FINISHED_0043a2ec,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x33:
    FUN_00359eec(&DAT_004458f0,9,s_AUTO_SENS_0043a2f8,3000,s_CANCELED_0043a304);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x34:
    FUN_00359eec(&DAT_004458f0,9,s_Can_not_work_0043a314,3000,s_in_192kHz_0043a324);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (DAT_0041901c == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_00359eec(&DAT_004458f0,4,s_Memory_No_Room__0043a33c,2000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0035709c INSTRUCTION LOAD P5 = 0x8
FUNCTION 0035707c FUN_0035707c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035707c(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 003570be INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 003572c8 INSTRUCTION ADD R2 += 0x8
FUNCTION 00357268 FUN_00357268 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00357268(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 003572d4 INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 0035734c INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 00357384 INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 003573bc INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 003573f4 INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 0035742c INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 00357464 INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 0035749c INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 003574d0 INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 00357504 INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 0035753c INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 00357574 INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 003575ac INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 003575e4 INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 0035761c INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 00357654 INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 0035768c INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 003576c4 INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 003576fc INSTRUCTION LOAD R4 = [P3 + 0x8]
SCALAR 0x8 AT 003577cc INSTRUCTION LOAD R4 = [P3 + 0x8]
SCALAR 0x8 AT 0035789c INSTRUCTION LOAD R4 = [P3 + 0x8]
SCALAR 0x8 AT 0035796c INSTRUCTION LOAD R4 = [P3 + 0x8]
SCALAR 0x8 AT 00357a3c INSTRUCTION LOAD R7 = [P3 + 0x8]
SCALAR 0x8 AT 00357ace INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00357b1c INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00357b6c INSTRUCTION LOAD R6 = [P3 + 0x8]
SCALAR 0x8 AT 00357bfc INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00357c3c INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00357c64 INSTRUCTION LOAD R7 = [P3 + 0x8]
SCALAR 0x8 AT 00357cf8 INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00357d46 INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00357d6c INSTRUCTION LOAD R6 = [P3 + 0x8]
SCALAR 0x8 AT 00357e28 INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00357e6c INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00357e90 INSTRUCTION LOAD R1 = [P3 + 0x8]
SCALAR 0x8 AT 00357ea0 INSTRUCTION LOAD R1 = [P3 + 0x8]
SCALAR 0x8 AT 00357eb4 INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT 00357f24 INSTRUCTION LOAD R7 = 0x8
FUNCTION 00357f10 FUN_00357f10 success=true

void FUN_00357f10(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = 1;
  iVar2 = 0;
  iVar3 = 8;
  do {
    if ((DAT_00419a3c & uVar1) != 0) {
      FUN_00357268(iVar2);
    }
    iVar3 = iVar3 + -1;
    uVar1 = uVar1 << 1;
    iVar2 = iVar2 + 1;
  } while (iVar3 != 0);
  DAT_00419a3c = 0;
                    /* WARNING: Could not recover jumptable at 0x00357f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00358156 INSTRUCTION ADD R2 += 0x8
FUNCTION 00358136 FUN_00358136 success=true

void FUN_00358136(int param_1,int param_2)

{
  if ((-1 < param_1) && (param_1 < 1)) {
    if (param_2 == (char)(&DAT_00445434)[param_1]) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    (&DAT_00445434)[param_1] = (char)param_2;
    DAT_00445430 = 1 << param_1 | DAT_00445430;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00359066 INSTRUCTION STORE [FP + 0x8] = P1
FUNCTION 00359050 FUN_00359050 success=true

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00359050(void)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  short *psVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined2 local_30 [10];
  undefined2 local_1c [10];
  
  if ((DAT_00419a6c & DAT_00419a74) != 0) {
    if ((DAT_00419a6c & 0x8000) == 1) {
      do {
        psVar11 = &DAT_0043ae40;
        uVar4 = (uint)DAT_00419a5c;
        DAT_00419a5c = -1;
        DAT_00419a6c = DAT_00419a6c & 0xffff7fff;
        if (uVar4 < 0xfffffffd) {
LAB_003594bc:
          if (uVar4 != 0xffffffff) {
            if (uVar4 != (int)DAT_00419a5e) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
              halt_unimplemented();
            }
            FUN_0030dbe8(uVar4);
          }
        }
        else if (uVar4 == 0xfffffffd) {
          local_1c[0] = 2;
          iVar7 = (int)DAT_00419a5e;
          if (DAT_00419a58 == iVar7) {
            puVar10 = (undefined *)0x0;
            if (-1 < iVar7) {
              puVar10 = (&PTR_DAT_0043a980)[iVar7 * 4];
            }
            if (*(code **)(puVar10 + 4) != (code *)0x0) {
              (**(code **)(puVar10 + 4))(local_1c);
            }
          }
          puVar10 = (undefined *)0x0;
          DAT_00419a58 = -1;
          FUN_0032e440(DAT_004451fc);
          DAT_00445448 = 0xffff;
          DAT_00445446 = 0xffff;
          FUN_0030e00c(0xffffffff);
          DAT_00445444 = 0;
          DAT_00445442 = 0xffff;
          iVar7 = (int)DAT_00419a5e;
          if (-1 < iVar7) {
            puVar10 = (&PTR_DAT_0043a980)[iVar7 * 4];
          }
          if (puVar10 != (undefined *)0x0) {
            DAT_004458dc = 0xffffffff;
            DAT_004458e0 = 0xffffffff;
            DAT_004458e4 = 0xffffffff;
            DAT_004458e8 = 0xffffffff;
            DAT_004458ec = 0xffff;
            DAT_004458ee = 0xff;
            DAT_00419a74 = *(uint *)(&DAT_0043a98c + iVar7 * 0x10) | 0xd000;
            DAT_00419a70 = *(undefined4 *)(&DAT_0043a988 + iVar7 * 0x10);
            DAT_00445448 = 0xffff;
            DAT_00445446 = 0xffff;
            uVar4 = FUN_0035a510();
            if (0 < (int)uVar4) {
              if ((uVar4 & 1) != 0) {
                psVar11 = &DAT_0043ae44;
                *(char *)((int)&DAT_004458dc + (int)DAT_0043ae40) = (char)DAT_0043ae42;
              }
              uVar4 = uVar4 >> 1;
              if (uVar4 != 0) {
                uVar9 = (undefined1)psVar11[1];
                uVar8 = (undefined1)psVar11[3];
                puVar2 = (undefined1 *)((int)&DAT_004458dc + (int)*psVar11);
                puVar3 = (undefined1 *)((int)&DAT_004458dc + (int)psVar11[2]);
                do {
                  uVar4 = uVar4 - 1;
                  puVar5 = puVar2;
                  puVar6 = puVar3;
                  if (uVar4 == 0) break;
                  uVar9 = (undefined1)psVar11[5];
                  puVar5 = (undefined1 *)((int)&DAT_004458dc + (int)psVar11[4]);
                  *puVar2 = (char)puVar5;
                  uVar8 = (undefined1)psVar11[7];
                  puVar6 = (undefined1 *)((int)&DAT_004458dc + (int)psVar11[6]);
                  *puVar3 = (char)puVar6;
                  puVar2 = puVar5;
                  puVar3 = puVar6;
                  psVar11 = psVar11 + 4;
                } while (uVar4 != 0);
                *puVar5 = uVar9;
                *puVar6 = uVar8;
              }
            }
          }
          FUN_00358938((int)DAT_00419a5e);
        }
        else {
          if (uVar4 != 0xfffffffe) goto LAB_003594bc;
          bVar1 = false;
          if (1 < *(short *)(&DAT_0044585c + DAT_00445440 * 4)) {
            local_1c[0] = 2;
            iVar7 = (int)DAT_00419a5e;
            if (DAT_00419a58 == iVar7) {
              puVar10 = (undefined *)0x0;
              if (-1 < iVar7) {
                puVar10 = (&PTR_DAT_0043a980)[iVar7 * 4];
              }
              if (*(code **)(puVar10 + 4) != (code *)0x0) {
                (**(code **)(puVar10 + 4))(local_1c);
              }
            }
            puVar10 = (undefined *)0x0;
            DAT_00419a58 = -1;
            FUN_0032e440(DAT_004451fc);
            DAT_00445448 = 0xffff;
            DAT_00445446 = 0xffff;
            DAT_00445440 = DAT_00445440 + -1;
            DAT_00419a5a = DAT_00419a5e;
            _DAT_00419a5e = (int)*(short *)(&DAT_0044585e + DAT_00445440 * 4);
            FUN_0030e00c(0xffffffff);
            DAT_00445444 = 0;
            DAT_00445442 = 0xffff;
            iVar7 = (int)DAT_00419a5e;
            if (-1 < iVar7) {
              puVar10 = (&PTR_DAT_0043a980)[iVar7 * 4];
            }
            if (puVar10 != (undefined *)0x0) {
              DAT_004458dc = 0xffffffff;
              DAT_004458e0 = 0xffffffff;
              DAT_004458e4 = 0xffffffff;
              DAT_004458e8 = 0xffffffff;
              DAT_004458ec = 0xffff;
              DAT_004458ee = 0xff;
              DAT_00419a74 = *(uint *)(&DAT_0043a98c + iVar7 * 0x10) | 0xd000;
              DAT_00419a70 = *(undefined4 *)(&DAT_0043a988 + iVar7 * 0x10);
              DAT_00445448 = 0xffff;
              DAT_00445446 = 0xffff;
              uVar4 = FUN_0035a510();
              if (0 < (int)uVar4) {
                if ((uVar4 & 1) != 0) {
                  psVar11 = &DAT_0043ae44;
                  *(char *)((int)&DAT_004458dc + (int)DAT_0043ae40) = (char)DAT_0043ae42;
                }
                uVar4 = uVar4 >> 1;
                if (uVar4 != 0) {
                  uVar9 = (undefined1)psVar11[1];
                  uVar8 = (undefined1)psVar11[3];
                  puVar2 = (undefined1 *)((int)&DAT_004458dc + (int)*psVar11);
                  puVar3 = (undefined1 *)((int)&DAT_004458dc + (int)psVar11[2]);
                  do {
                    uVar4 = uVar4 - 1;
                    puVar5 = puVar2;
                    puVar6 = puVar3;
                    if (uVar4 == 0) break;
                    uVar9 = (undefined1)psVar11[5];
                    puVar5 = (undefined1 *)((int)&DAT_004458dc + (int)psVar11[4]);
                    *puVar2 = (char)puVar5;
                    uVar8 = (undefined1)psVar11[7];
                    puVar6 = (undefined1 *)((int)&DAT_004458dc + (int)psVar11[6]);
                    *puVar3 = (char)puVar6;
                    puVar2 = puVar5;
                    puVar3 = puVar6;
                    psVar11 = psVar11 + 4;
                  } while (uVar4 != 0);
                  *puVar5 = uVar9;
                  *puVar6 = uVar8;
                }
              }
            }
            FUN_00358938((int)DAT_00419a5e);
            bVar1 = true;
          }
          if (!bVar1) {
            DAT_00419a6c = DAT_00419a6c & 0xffff7fff;
          }
        }
      } while ((DAT_00419a5c != -1) && (DAT_00419a5c != DAT_00419a5e));
      local_30[0] = 3;
      iVar7 = (int)DAT_00419a5e;
      DAT_00419a6c = 0xffff7fff;
      if (DAT_00419a58 == iVar7) {
        puVar10 = (undefined *)0x0;
        if (-1 < iVar7) {
          puVar10 = (&PTR_DAT_0043a980)[iVar7 * 4];
        }
        if (*(code **)(puVar10 + 4) != (code *)0x0) {
          (**(code **)(puVar10 + 4))(local_30);
        }
      }
      FUN_00357060();
      FUN_0032e4f8(DAT_004451fc);
    }
    if ((DAT_00419a6c & DAT_00419a74) != 0) {
      local_30[0] = 4;
      iVar7 = (int)DAT_00419a5e;
      if (DAT_00419a58 == iVar7) {
        puVar10 = (undefined *)0x0;
        if (-1 < iVar7) {
          puVar10 = (&PTR_DAT_0043a980)[iVar7 * 4];
        }
        if (*(code **)(puVar10 + 4) != (code *)0x0) {
          (**(code **)(puVar10 + 4))(local_30);
        }
      }
      DAT_00419a6c = (DAT_00419a74 & 0xffff6fff ^ 0xffffffff) & DAT_00419a6c;
      FUN_0032e528(DAT_004451fc);
    }
    if ((DAT_00419a6c & 0x1000) == 1) {
      DAT_00419a6c = DAT_00419a6c & 0xffffefff;
      FUN_00357f10();
    }
    FUN_0032e558(DAT_004451fc);
    FUN_0035a220(&DAT_004458f0);
    FUN_0030ddc8();
  }
  FUN_00358180();
  FUN_0032e888(DAT_004451fc);
                    /* WARNING: Could not recover jumptable at 0x0035908c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003590b2 INSTRUCTION ADD P1 += 0x8
SCALAR 0x8 AT 003590e8 INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 003591e4 INSTRUCTION LOAD P0 = [FP + 0x8]
SCALAR 0x8 AT 003591ec INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 003591f0 INSTRUCTION STORE [P0 + 0x8] = R0
SCALAR 0x8 AT 00359284 INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 003592a8 INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 003592ea INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 003592fa INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 00359370 INSTRUCTION LOAD P1 = [FP + 0x8]
SCALAR 0x8 AT 00359424 INSTRUCTION LOAD P0 = [FP + 0x8]
SCALAR 0x8 AT 0035942c INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 00359430 INSTRUCTION STORE [P0 + 0x8] = R0
SCALAR 0x8 AT 00359602 INSTRUCTION LOAD P0 = [FP + 0x8]
SCALAR 0x8 AT 0035960a INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 0035960e INSTRUCTION STORE [P0 + 0x8] = R0
SCALAR 0x8 AT 0035991e INSTRUCTION LSHIFT R0 <<= 0x8
FUNCTION 00359854 FUN_00359854 success=true

void FUN_00359854(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar4 = *(ushort *)(param_1 + 2);
  uVar5 = (uint)(short)uVar4;
  uVar1 = (uint)(byte)(&DAT_0044544c)[(int)uVar5 >> 3 & 0xff];
  uVar2 = 1 << (uVar5 & 7) & 0xffU | uVar1;
  (&DAT_0044544c)[(int)uVar5 >> 3 & 0xff] = (byte)uVar2;
  if (uVar1 == uVar2) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if ((DAT_0041901c != 0) && (iVar3 = FUN_0030d964(uVar5), iVar3 != 0)) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar3 = FUN_0033f904(&DAT_00445200);
  if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x003598bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (uVar5 == (int)DAT_00445442._1_1_) {
    DAT_00445444 = 1;
    FUN_0030e00c((int)DAT_00419a44);
    uVar4 = (ushort)(char)DAT_00445442;
  }
  else if (-1 < *(char *)((int)&DAT_004458dc + uVar5)) {
    DAT_00445442 = uVar4 & 0xff | (ushort)((int)*(char *)((int)&DAT_004458dc + uVar5) << 8);
    FUN_0030e00c((int)DAT_00419a40);
  }
  iVar3 = FUN_0032e788(DAT_004451fc,(int)(short)uVar4);
  if (iVar3 == 0) {
    FUN_0035a400((int)(short)uVar4);
  }
  FUN_00359050();
                    /* WARNING: Could not recover jumptable at 0x00359912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00359eaa INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00359ed8 INSTRUCTION STORE [P1 + 0x8] = R0
FUNCTION 00359ec4 FUN_00359ec4 success=true

void FUN_00359ec4(void)

{
  if (DAT_00419a88 == 1) {
    DAT_00419a90 = 0;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00359f54 INSTRUCTION STORE [P5 + 0x8] = R0
FUNCTION 00359eec FUN_00359eec success=true

void FUN_00359eec(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  if (*(int *)(param_1 + 4) == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  DAT_00419a80 = (undefined2)param_2;
  if (param_2 < 0xa0) {
    if (param_2 == 0x9e) {
      DAT_00419a84 = 1;
      goto LAB_00359f34;
    }
  }
  else {
    if (param_2 == 0xa0) {
      DAT_00419a80 = 0xa1;
      DAT_00419a84 = 2;
      goto LAB_00359f34;
    }
    if (param_2 == 0xa5) {
      DAT_00419a84 = 3;
      goto LAB_00359f34;
    }
  }
  DAT_00419a84 = 0;
LAB_00359f34:
  FUN_003537c8(&DAT_004458f8,param_3);
  FUN_003537c8(&DAT_00445938,param_5);
  DAT_00419a90 = param_4;
  DAT_00419a88 = 1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0035a006 INSTRUCTION LOAD R3 = W [P1 + 0x8] (X)
FUNCTION 00359f80 FUN_00359f80 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00359f80(void)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 ****local_10;
  undefined4 local_c;
  
  puVar1 = &DAT_0043acd0;
  if (DAT_00445938 != '\0') {
    puVar1 = &DAT_0043acd8;
  }
  local_1c = *(undefined4 *)(puVar1 + 2);
  uStack_1e = puVar1[1];
  local_20 = *puVar1;
  uVar2 = FUN_003405c4(&DAT_00445218,0x30);
  FUN_0034df50(DAT_00440948);
  FUN_0034dee2(DAT_00440948,0x1000003,0x1000000);
  local_12 = *(undefined2 *)(DAT_00440948 + 10);
  local_14 = *(undefined2 *)(DAT_00440948 + 8);
  local_16 = *(undefined2 *)(DAT_00440948 + 6);
  local_18 = *(undefined2 *)(DAT_00440948 + 4);
  FUN_0035b43c(&local_20,&local_18,1);
  FUN_0034e6aa(DAT_00440948,&local_20);
  local_c = local_1c;
  local_10 = &local_10;
  FUN_0035b726(&local_10,0xfffffffe,0xfffffffe);
  FUN_0034dee2(DAT_00440948,uVar2,0x1000003);
  FUN_0034e6aa(DAT_00440948,&local_10);
  if (DAT_00419a80 != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  FUN_0034dfdc(DAT_00440948,0);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0035a578 INSTRUCTION STORE [P1 + 0x8] = R2
FUNCTION 0035a520 FUN_0035a520 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035a520(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0035a678 INSTRUCTION STORE [P1 + 0x8] = R2
FUNCTION 0035a620 FUN_0035a620 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035a620(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0035a6e0 INSTRUCTION STORE [P1 + 0x8] = R2
FUNCTION 0035a688 FUN_0035a688 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035a688(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0035a706 INSTRUCTION _STORE W [SP + 0x8] = R0
FUNCTION 0035a6f0 FUN_0035a6f0 success=true

void FUN_0035a6f0(ushort param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort uStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar2 = DAT_00419b40 + 1;
  if (0xff < iVar2) {
    iVar2 = 0;
  }
  uStack_1a = param_1 & 0xff | (ushort)(param_2 << 8);
  local_18 = (undefined2)((uint)param_2 >> 8);
  if (iVar2 == DAT_00419b3c) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = DAT_00419b40 * 0x14;
  DAT_00419b40 = iVar2;
  *(undefined4 *)(&DAT_004459c0 + iVar1) = local_14;
  *(uint *)(&DAT_004459bc + iVar1) = CONCAT22(uStack_16,local_18);
  *(undefined4 *)(&DAT_004459c4 + iVar1) = local_10;
  *(undefined4 *)(&DAT_004459c8 + iVar1) = local_c;
  *(uint *)(&DAT_004459b8 + iVar1) = CONCAT22(uStack_1a,0xd);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0035a70a INSTRUCTION LSH|| R1 = R1 << 0x8
SCALAR 0x8 AT 0035a748 INSTRUCTION LOAD R6 = [SP + 0x8]
SCALAR 0x8 AT 0035a74c INSTRUCTION STORE [P1 + 0x8] = R2
SCALAR 0x8 AT 0035a776 INSTRUCTION _STORE W [SP + 0x8] = R0
FUNCTION 0035a760 FUN_0035a760 success=true

void FUN_0035a760(ushort param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort uStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar2 = DAT_00419b40 + 1;
  if (0xff < iVar2) {
    iVar2 = 0;
  }
  uStack_1a = param_1 & 0xff | (ushort)(param_2 << 8);
  local_18 = (undefined2)((uint)param_2 >> 8);
  if (iVar2 == DAT_00419b3c) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = DAT_00419b40 * 0x14;
  DAT_00419b40 = iVar2;
  *(undefined4 *)(&DAT_004459c0 + iVar1) = local_14;
  *(uint *)(&DAT_004459bc + iVar1) = CONCAT22(uStack_16,local_18);
  *(undefined4 *)(&DAT_004459c4 + iVar1) = local_10;
  *(undefined4 *)(&DAT_004459c8 + iVar1) = local_c;
  *(uint *)(&DAT_004459b8 + iVar1) = CONCAT22(uStack_1a,0xe);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0035a77a INSTRUCTION LSH|| R1 = R1 << 0x8
SCALAR 0x8 AT 0035a7b8 INSTRUCTION LOAD R6 = [SP + 0x8]
SCALAR 0x8 AT 0035a7bc INSTRUCTION STORE [P1 + 0x8] = R2
SCALAR 0x8 AT 0035a7e6 INSTRUCTION _STORE W [SP + 0x8] = R0
FUNCTION 0035a7d0 FUN_0035a7d0 success=true

void FUN_0035a7d0(ushort param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort uStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar2 = DAT_00419b40 + 1;
  if (0xff < iVar2) {
    iVar2 = 0;
  }
  uStack_1a = param_1 & 0xff | (ushort)(param_2 << 8);
  local_18 = (undefined2)((uint)param_2 >> 8);
  if (iVar2 == DAT_00419b3c) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = DAT_00419b40 * 0x14;
  DAT_00419b40 = iVar2;
  *(undefined4 *)(&DAT_004459c0 + iVar1) = local_14;
  *(uint *)(&DAT_004459bc + iVar1) = CONCAT22(uStack_16,local_18);
  *(undefined4 *)(&DAT_004459c4 + iVar1) = local_10;
  *(undefined4 *)(&DAT_004459c8 + iVar1) = local_c;
  *(uint *)(&DAT_004459b8 + iVar1) = CONCAT22(uStack_1a,0xf);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0035a7ea INSTRUCTION LSH|| R1 = R1 << 0x8
SCALAR 0x8 AT 0035a828 INSTRUCTION LOAD R6 = [SP + 0x8]
SCALAR 0x8 AT 0035a82c INSTRUCTION STORE [P1 + 0x8] = R2
SCALAR 0x8 AT 0035a856 INSTRUCTION _STORE W [SP + 0x8] = R0
FUNCTION 0035a840 FUN_0035a840 success=true

void FUN_0035a840(ushort param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort uStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar2 = DAT_00419b40 + 1;
  if (0xff < iVar2) {
    iVar2 = 0;
  }
  uStack_1a = param_1 & 0xff | (ushort)(param_2 << 8);
  local_18 = (undefined2)((uint)param_2 >> 8);
  if (iVar2 == DAT_00419b3c) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = DAT_00419b40 * 0x14;
  DAT_00419b40 = iVar2;
  *(undefined4 *)(&DAT_004459c0 + iVar1) = local_14;
  *(uint *)(&DAT_004459bc + iVar1) = CONCAT22(uStack_16,local_18);
  *(undefined4 *)(&DAT_004459c4 + iVar1) = local_10;
  *(undefined4 *)(&DAT_004459c8 + iVar1) = local_c;
  *(uint *)(&DAT_004459b8 + iVar1) = CONCAT22(uStack_1a,0x10);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0035a85a INSTRUCTION LSH|| R1 = R1 << 0x8
SCALAR 0x8 AT 0035a898 INSTRUCTION LOAD R6 = [SP + 0x8]
SCALAR 0x8 AT 0035a89c INSTRUCTION STORE [P1 + 0x8] = R2
SCALAR 0x8 AT 0035a90a INSTRUCTION STORE [P1 + 0x8] = R2
FUNCTION 0035a8b0 FUN_0035a8b0 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035a8b0(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0035a9e2 INSTRUCTION STORE [P1 + 0x8] = R2
FUNCTION 0035a988 FUN_0035a988 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035a988(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0035aa42 INSTRUCTION _STORE W [SP + 0x8] = R1
FUNCTION 0035aa24 FUN_0035aa24 success=true

void FUN_0035aa24(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_00419b40 + 1;
  if (0xff < iVar2) {
    iVar2 = 0;
  }
  uVar5 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = param_1[3];
  if (iVar2 == DAT_00419b3c) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = DAT_00419b40 * 0x14;
  DAT_00419b40 = iVar2;
  *(undefined4 *)(&DAT_004459bc + iVar1) = *param_1;
  *(undefined4 *)(&DAT_004459c0 + iVar1) = uVar5;
  *(undefined4 *)(&DAT_004459c4 + iVar1) = uVar4;
  *(undefined4 *)(&DAT_004459c8 + iVar1) = uVar3;
  *(undefined4 *)(&DAT_004459b8 + iVar1) = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0035aa52 INSTRUCTION LOAD R2 = [P1 + 0x8]
SCALAR 0x8 AT 0035aa6c INSTRUCTION LOAD R6 = [SP + 0x8]
SCALAR 0x8 AT 0035aa78 INSTRUCTION STORE [P1 + 0x8] = R3
SCALAR 0x8 AT 0035aaa0 INSTRUCTION _STORE W [SP + 0x8] = R0
FUNCTION 0035aa8c FUN_0035aa8c success=true

void FUN_0035aa8c(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar2 = DAT_00419b40 + 1;
  if (0xff < iVar2) {
    iVar2 = 0;
  }
  if (iVar2 == DAT_00419b3c) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = DAT_00419b40 * 0x14;
  DAT_00419b40 = iVar2;
  *(undefined4 *)(&DAT_004459c0 + iVar1) = local_14;
  *(undefined4 *)(&DAT_004459bc + iVar1) = local_18;
  *(undefined4 *)(&DAT_004459c4 + iVar1) = local_10;
  *(undefined4 *)(&DAT_004459c8 + iVar1) = local_c;
  *(undefined4 *)(&DAT_004459b8 + iVar1) = 0x22;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0035aad8 INSTRUCTION LOAD R6 = [SP + 0x8]
SCALAR 0x8 AT 0035aadc INSTRUCTION STORE [P1 + 0x8] = R2
SCALAR 0x8 AT 0035ab48 INSTRUCTION STORE [P1 + 0x8] = R2
FUNCTION 0035aaf0 FUN_0035aaf0 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035aaf0(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0035ac28 INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 0035b300 INSTRUCTION ADD R0 += 0x8
FUNCTION 0035b288 FUN_0035b288 success=true

void FUN_0035b288(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  DAT_00419b48 = param_2;
  FUN_0035bccc();
  uVar1 = FUN_00366aa4(s_power_0043af70,2);
  FUN_003666d8(uVar1,0,&LAB_0035afc0);
  FUN_003667ec(uVar1);
  FUN_00356768(&DAT_004453c8,0,0);
  DAT_004453c8 = 0;
  FUN_0032b44c(10);
  FUN_0032b44c(6);
  FUN_ffa00684(&DAT_00419440);
  uVar1 = FUN_00366aa4(&DAT_0043af78,3);
  FUN_003666d8(uVar1,2,0xffffffff);
  FUN_003667ec(uVar1);
  FUN_00358124();
  FUN_003407d8(&DAT_00445200);
  uVar1 = FUN_00366aa4(s_power_0043af70,3);
  FUN_003666d8(uVar1,4,0);
  FUN_003667ec(uVar1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0035b4b2 INSTRUCTION CC = BITTST (R2,0x8)
FUNCTION 0035b43c FUN_0035b43c success=true

void FUN_0035b43c(short *param_1,short *param_2,uint param_3)

{
  short sVar1;
  short sVar3;
  int iVar2;
  
  if ((param_3 & 1) == 1) {
    sVar1 = (short)(((int)param_2[2] + (int)*param_2 + 1) / 2) -
            (short)(((int)param_1[2] + (int)*param_1 + 1) / 2);
  }
  else if ((param_3 & 2) == 1) {
    sVar1 = (*param_2 - param_1[2]) + -1;
  }
  else if ((param_3 & 4) == 1) {
    sVar1 = *param_2 - *param_1;
  }
  else if ((param_3 & 8) == 1) {
    sVar1 = param_2[2] - param_1[2];
  }
  else {
    sVar1 = 0;
    if ((param_3 & 0x10) == 1) {
      sVar1 = (param_2[2] - *param_1) + 1;
    }
  }
  sVar3 = *param_1;
  *param_1 = sVar1 + sVar3;
  *(uint *)(param_1 + 2) = CONCAT22(sVar1 + sVar3,sVar1 + param_1[2]);
  if ((param_3 & 0x20) == 1) {
    param_3 = -((int)param_1[3] + (int)param_1[1] >> 0x1f);
    iVar2 = ((int)param_2[3] + (int)param_2[1]) / 2 - ((int)param_1[3] + (int)param_1[1]) / 2;
  }
  else if ((param_3 & 0x40) == 1) {
    iVar2 = ((uint)(ushort)param_2[1] - (uint)(ushort)param_1[3]) + -1;
  }
  else if ((param_3 & 0x80) == 1) {
    iVar2 = (uint)(ushort)param_2[1] - (uint)(ushort)param_1[1];
  }
  else if ((param_3 & 0x100) == 1) {
    iVar2 = (uint)(ushort)param_2[3] - (uint)(ushort)param_1[3];
  }
  else {
    iVar2 = 0;
    if ((param_3 & 0x200) == 1) {
      iVar2 = ((uint)(ushort)param_2[3] - (uint)(ushort)param_1[1]) + 1;
    }
  }
  *(uint *)(param_1 + 1) = CONCAT22((short)(param_3 >> 0x10),(short)iVar2 + param_1[1]);
  *(uint *)(param_1 + 3) = CONCAT22((short)((uint)iVar2 >> 0x10),(short)iVar2 + param_1[3]);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0035b8bc INSTRUCTION _LOAD R0 = W [P1 + 0x8] (X)
FUNCTION 0035b8a8 FUN_0035b8a8 success=true

void FUN_0035b8a8(short *param_1,short param_2,short param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  short sVar3;
  undefined4 in_R3;
  
  sVar3 = *param_1;
  uVar1 = (undefined2)((uint)in_R3 >> 0x10);
  *(uint *)(param_1 + 5) = CONCAT22(uVar1,param_2 + param_1[4]);
  uVar2 = CONCAT22(uVar1,param_3 + param_1[3]);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *param_1 = param_2 + sVar3;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(uint *)(param_1 + 2) = CONCAT22(param_2 + sVar3,param_2 + param_1[2]);
  *(uint *)(param_1 + 1) = CONCAT22(param_1[1] >> 0xf,param_3 + param_1[1]);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0035b8ce INSTRUCTION _STORE W [P1 + 0x8] = R3
SCALAR 0x8 AT 0035b9b6 INSTRUCTION STORE [P1 + 0x8] = R0
SCALAR 0x8 AT 0035ba14 INSTRUCTION STORE [P1 + 0x8] = R0
SCALAR 0x8 AT 0035c7e8 INSTRUCTION _STORE [FP + 0x8] = R2
FUNCTION 0035c7d8 FUN_0035c7d8 success=true

void FUN_0035c7d8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [64];
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  iVar2 = 0;
  uVar1 = FUN_0035a4aa(&DAT_004459b4,
                       (int)*(short *)(&DAT_0043b3b8 + *(short *)(param_1 + 0x898) * 8));
  FUN_00324010(auStack_50,s_Check__s_0043b3c0,uVar1);
  FUN_00324010(auStack_90,s___20s_0043b3cc,auStack_50);
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x28),0);
  FUN_0034edd8(*(undefined4 *)(param_1 + 0x28),2,10,auStack_90);
  FUN_00324010(auStack_90,s__2d__2d_0043b3d4,(int)(short)(1 - *(short *)(param_1 + 0x898)),1);
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x28),0);
  FUN_0034edd8(*(undefined4 *)(param_1 + 0x28),0x54,0x19,auStack_90);
  if (*(short *)(param_1 + 0x89a) < 0) {
    FUN_003537c8(auStack_90,&DAT_0043b3e0);
  }
  else {
    FUN_00353c10(auStack_90,(int)*(short *)(param_1 + 0x89a),3);
  }
  FUN_0034dfdc(*(undefined4 *)(param_1 + 0x28),0);
  FUN_0034edd8(*(undefined4 *)(param_1 + 0x28),10,0x15,auStack_90);
  local_10 = DAT_00419c78;
  local_a = DAT_00419c7e;
  local_c = DAT_00419c7c;
  local_e = DAT_00419c7a;
  iVar3 = 0;
  switch(*(undefined2 *)(param_1 + 0x89c)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    iVar3 = 1;
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    iVar3 = 2;
    break;
  case 0xc:
    iVar3 = 3;
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    iVar3 = 4;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    iVar3 = 5;
    break;
  case 0x17:
    iVar3 = 6;
  }
  piVar4 = (int *)(param_1 + 0x8a0);
  do {
    FUN_0035b7a0(&local_10,(int)(short)((short)iVar2 * 8 + 0x1e),0x16);
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    if (iVar3 == iVar2) {
      FUN_0034e854(uVar1,&local_10);
      FUN_0034e550(*(undefined4 *)(param_1 + 0x28),&local_10);
    }
    else if (*piVar4 == 0) {
      FUN_0034e6aa(uVar1,&local_10);
      FUN_0034e550(*(undefined4 *)(param_1 + 0x28),&local_10);
    }
    else {
      FUN_0034e5fe(uVar1,&local_10);
    }
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar2 < 7);
  FUN_0030e650();
                    /* WARNING: Could not recover jumptable at 0x0035c956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0035c820 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 0035ee04 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0035ee6a INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0035ee9c INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT 0035ef04 INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 0035efdc INSTRUCTION LSHIFT R1 >>= 0x8
SCALAR 0x8 AT 003617ce INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 0036184c INSTRUCTION ADD R1 += 0x8
FUNCTION 00361830 FUN_00361830 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00361830(int param_1,int param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  ushort in_stack_00000000;
  int in_stack_00000004;
  undefined1 *puVar4;
  
  if (param_2 == 0) {
    uVar1 = FUN_00366aa4(&DAT_0043c294,3);
    FUN_003666d8(uVar1,1,1);
    FUN_003666d8(uVar1,0,param_1,0);
    FUN_003666d8(uVar1,1,0);
    FUN_003666d8(uVar1,2,0);
    FUN_003666d8(uVar1,3,0);
    FUN_003667ec(uVar1);
    uVar1 = FUN_00366aa4(s_codec_0043c29c,3);
    FUN_003666d8(uVar1,1,param_1);
    FUN_003667ec(uVar1);
    uVar1 = FUN_00366aa4(&DAT_0043c280,3);
    FUN_003666d8(uVar1,0,param_1,0);
    FUN_003667ec(uVar1);
    *param_3 = param_1;
    *param_4 = 0;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  uVar1 = FUN_00366aa4(&DAT_0043c294,3);
  FUN_003666d8(uVar1,1,1);
  FUN_003666d8(uVar1,0,param_1,1);
  FUN_003666d8(uVar1,1,0);
  FUN_003666d8(uVar1,3,0);
  FUN_003667ec(uVar1);
  uVar1 = FUN_00366aa4(&DAT_0043c280,3);
  FUN_003666d8(uVar1,0,param_1,1);
  FUN_003667ec(uVar1);
  while( true ) {
    FUN_0032b6d8(300);
    uVar1 = FUN_00366aa4(&DAT_0043c280,3);
    FUN_003666d8(uVar1,3);
    puVar4 = &stack0x00000004;
    FUN_003666d8(uVar1,4,&stack0x00000000,puVar4);
    FUN_003667ec(uVar1);
    if (((in_stack_00000000 & 2) == 1) || ((in_stack_00000000 & 8) == 1)) {
      iVar2 = 0;
      *param_3 = param_1;
      bVar3 = true;
    }
    else {
      if (0 < in_stack_00000004) {
        FUN_00366aa4(&DAT_0043c280,3);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      bVar3 = 0 < in_stack_00000004;
      *param_3 = in_stack_00000004;
      iVar2 = 1;
    }
    *param_4 = iVar2;
    if (bVar3) break;
    DAT_00419d6c = 1;
  }
  DAT_00419d6c = 0;
  if (*param_4 == 0) {
    FUN_00361830(*param_3,0,param_3,param_4);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  uVar1 = FUN_00366aa4(&DAT_0043c294,3);
  FUN_003666d8(uVar1,2,0,puVar4);
  FUN_003667ec(uVar1);
  uVar1 = FUN_00366aa4(s_codec_0043c29c,3);
  FUN_003666d8(uVar1,1,param_1);
  FUN_003667ec(uVar1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003618dc INSTRUCTION ADD P4 += 0x8
SCALAR 0x8 AT 00361ac6 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 00361b72 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 00361c66 INSTRUCTION STORE [P3 + 0x8] = R2
FUNCTION 00361c38 FUN_00361c38 success=true

void FUN_00361c38(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0x419d00;
  DAT_00419d04 = *param_1;
  DAT_00419d08 = param_1[1];
  uVar1 = *param_1;
  iVar5 = param_1[1];
  uVar4 = param_1[1];
  if (iVar5 != 0) {
    uVar4 = 1;
  }
  uVar2 = FUN_00366aa4(&DAT_0043c294,3);
  FUN_003666d8(uVar2,4,1);
  FUN_003667ec(uVar2);
  uVar2 = FUN_00366aa4(&DAT_0043c280,3);
  FUN_003666d8(uVar2,2);
  FUN_003667ec(uVar2);
  uVar2 = FUN_00366aa4(s_audio_serial_0043c284,3);
  FUN_003666d8(uVar2,1);
  FUN_003667ec(uVar2);
  uVar2 = FUN_00366aa4(&DAT_0043c294,3);
  FUN_003666d8(uVar2,2,1);
  FUN_003666d8(uVar2,3,1);
  FUN_003667ec(uVar2);
  FUN_00361830(uVar1,iVar5,&stack0x00000004,&stack0x00000000);
  uVar2 = FUN_00366aa4(s_audio_serial_0043c284,3);
  FUN_003666d8(uVar2,0,uVar1,&LAB_ffa01760,0);
  FUN_003667ec(uVar2);
  uVar2 = param_1[0x16];
  uVar3 = FUN_00366aa4(&DAT_0043c294,3);
  FUN_003666d8(uVar3,4,uVar2);
  *(undefined4 *)(iVar6 + 0x5c) = uVar2;
  FUN_003667ec(uVar3);
  if (iVar5 != 0) {
    uVar2 = FUN_00366aa4(&DAT_0043c280,3);
    FUN_003666d8(uVar2,1,&LAB_00361d84);
    FUN_003667ec(uVar2);
  }
  *(undefined4 *)(iVar6 + 0x60) = uVar1;
  *(int *)(iVar6 + 0x68) = iVar5;
  *(undefined4 *)(iVar6 + 100) = uVar4;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00361cea INSTRUCTION ADD R2 += 0x8
SCALAR 0x8 AT 003621b2 INSTRUCTION _STORE [FP + 0x8] = R0
FUNCTION 003621a0 FUN_003621a0 success=true

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Removing unreachable block (ram,0x0036239c) */

void FUN_003621a0(undefined2 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)(param_1 + 0x1a);
  iVar5 = param_2 * (uint)(param_4 < param_2) + param_4 * (uint)(param_4 >= param_2);
  iVar3 = param_4 * (uint)(param_4 < param_2) + param_2 * (uint)(param_4 >= param_2);
  iVar2 = *(int *)(param_1 + 0x26);
  iVar6 = param_3 * (uint)(param_5 < param_3) + param_5 * (uint)(param_5 >= param_3);
  iVar4 = param_5 * (uint)(param_5 < param_3) + param_3 * (uint)(param_5 >= param_3);
  FUN_0035b786(param_1 + iVar2 * 0x10,(int)(short)iVar3,(int)(short)iVar4,(int)(short)iVar5,
               (int)(short)iVar6);
  puVar1[iVar2] = (iVar6 - iVar4) * (iVar5 - iVar3);
  if (iVar2 * 4 != 5) {
    *(int *)(param_1 + 0x26) = *(int *)(param_1 + 0x26) + 1;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar2 = 0;
  iVar3 = 5;
  do {
    iVar2 = iVar2 + 1;
    if (iVar2 < 6) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
  } while ((iVar3 != 0) && (iVar3 = iVar3 + -1, iVar3 != 0));
  *puVar1 = 0;
  FUN_0035b786(param_1,0,0,0,0);
  *puVar1 = *(undefined4 *)(param_1 + 0x24);
  *(uint *)(param_1 + 2) = (uint)(ushort)param_1[0x18];
  *(uint *)(param_1 + 1) = (uint)(ushort)param_1[0x17];
  *(uint *)(param_1 + 3) = (uint)(ushort)param_1[0x19];
  *param_1 = param_1[0x16];
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003621da INSTRUCTION _LOAD R4 = [FP + 0x8]
SCALAR 0x8 AT 00362326 INSTRUCTION ADD P1 += 0x8
SCALAR 0x8 AT 00362348 INSTRUCTION LOAD R5 = [FP + 0x8]
SCALAR 0x8 AT 00362b44 INSTRUCTION LOAD P1 = [P1 + 0x8]
FUNCTION 00362b34 FUN_00362b34 success=true

void FUN_00362b34(void)

{
  (**(code **)(DAT_00419da0 + 8))(1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00362b70 INSTRUCTION LOAD P1 = [P1 + 0x8]
FUNCTION 00362b50 FUN_00362b50 success=true

void FUN_00362b50(uint param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  
  if ((param_1 & 1) == 1) {
    (**(code **)(DAT_00419da0 + 8))();
  }
  else {
    (**(code **)(DAT_00419da0 + 0xc))(DAT_00419da4);
  }
  if ((param_1 & 2) == 1) {
    (**(code **)(DAT_00419da0 + 8))();
  }
  else {
    (**(code **)(DAT_00419da0 + 0xc))(DAT_00419da8);
  }
  if ((param_1 & 4) == 1) {
    (**(code **)(DAT_00419da0 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00362bae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (**(code **)(DAT_00419da0 + 0xc))(DAT_00419dac);
                    /* WARNING: Could not recover jumptable at 0x00362bbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00362b88 INSTRUCTION LOAD P1 = [P1 + 0x8]
SCALAR 0x8 AT 00362ba0 INSTRUCTION LOAD P1 = [P1 + 0x8]
SCALAR 0x8 AT 00362c4e INSTRUCTION BITSET (R0,0x8)
FUNCTION 00362bc0 FUN_00362bc0 success=true

void FUN_00362bc0(undefined4 *param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar3 = PORTF_MUX;
  uVar2 = PORTG_MUX;
  uVar4 = PORTH_MUX;
  switch(*param_1) {
  case 1:
    uVar1 = PORTG_FER;
    PORTG_FER = uVar1 | 2;
    break;
  case 2:
    uVar1 = PORTF_FER;
    PORTF_FER = uVar1 | 0x1000;
    uVar3 = uVar3 & 0xfcff | 0x200;
    break;
  case 3:
    uVar1 = PORTF_FER;
    PORTF_FER = uVar1 | 0x2000;
    uVar3 = uVar3 & 0xfcff | 0x200;
    break;
  case 4:
    uVar1 = PORTH_FER;
    PORTH_FER = uVar1 | 0x100;
    uVar4 = uVar4 & 0xfff3;
    break;
  case 5:
    uVar1 = PORTH_FER;
    PORTH_FER = uVar1 | 0x200;
    uVar4 = uVar4 & 0xffcf;
    break;
  case 6:
    uVar1 = PORTF_FER;
    PORTF_FER = uVar1 | 0x200;
    uVar3 = uVar3 & 0xfff3 | 8;
    break;
  case 7:
    uVar1 = PORTF_FER;
    PORTF_FER = uVar1 | 0x400;
    uVar3 = uVar3 & 0xffcf | 0x20;
  }
  PORTF_MUX = uVar3;
  PORTG_MUX = uVar2;
  PORTH_MUX = uVar4;
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00362ece INSTRUCTION STORE [P4 + 0x8] = R1
FUNCTION 00362e94 FUN_00362e94 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00362e94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined2 uVar1;
  
  DAT_00419d74 = 0;
  DAT_00419d9c = 0;
  DAT_00419d7c = param_3;
  DAT_00419d84 = param_1;
  uVar1 = FUN_ffa03974(0x2383cc0,*(undefined4 *)(param_1 + 0xc));
  DAT_00419d78 = param_4;
  DAT_00419d80 = param_5;
  SPI_BAUD = uVar1;
  if (*(int *)(param_1 + 0x10) == 0) {
    SPI_CTL = 0x5008;
  }
  else {
    SPI_CTL = 0x5108;
  }
  FUN_ffa01a24();
  if (-1 < *(int *)(param_1 + 8)) {
    FUN_00362b50();
  }
  if (-1 < *(int *)(param_1 + 4)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  ssync();
  uVar1 = SPI_RDBR;
  ssync();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00362f00 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00362f88 INSTRUCTION STORE [P4 + 0x8] = R1
FUNCTION 00362f48 FUN_00362f48 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00362f48(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined2 uVar1;
  int iVar2;
  int local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  DAT_00419d84 = param_1;
  uVar1 = FUN_ffa03974(0x2383cc0,*(undefined4 *)(param_1 + 0xc));
  DAT_00419d80 = param_5;
  DAT_00419d78 = param_4;
  DAT_00419d9c = 1;
  SPI_BAUD = uVar1;
  DAT_00419d74 = param_2;
  DAT_00419d7c = param_3;
  if (param_2 == 0) {
    FUN_00362d50(param_4,param_5);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  iVar2 = *(int *)(param_1 + 0x10);
  FUN_00362d50(param_2,param_3);
  uVar1 = 0xa4;
  if (iVar2 == 0) {
    uVar1 = 0xa0;
  }
  local_c = 2;
  if (iVar2 == 0) {
    local_c = 1;
  }
  local_10 = CONCAT22((short)param_3,uVar1);
  local_14 = param_2;
  (**(code **)(DAT_00419d94 + 4))(DAT_00419d98,&local_14);
  if (-1 < *(int *)(DAT_00419d84 + 8)) {
    FUN_00362b50();
  }
  if (*(int *)(param_1 + 4) < 0) {
    ssync();
    if (iVar2 != 0) {
      SPI_CTL = 0x510b;
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    SPI_CTL = 0x500b;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00362fdc INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 00363090 INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 0036324e INSTRUCTION LOAD P1 = [P1 + 0x8]
FUNCTION 00363158 FUN_00363158 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00363158(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00363312 INSTRUCTION LOAD P1 = [P1 + 0x8]
FUNCTION 00363254 FUN_00363254 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00363254(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 0036338c INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00363394 INSTRUCTION LOAD R5 = [P1 + 0x8]
SCALAR 0x8 AT 003633ae INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT 003633ce INSTRUCTION STORE [P1 + 0x8] = R6
SCALAR 0x8 AT 003633da INSTRUCTION ADD R7 += 0x8
SCALAR 0x8 AT 003638cc INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 0036395e INSTRUCTION LSHIFT R0 <<= 0x8
FUNCTION 003638f8 FUN_003638f8 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_003638f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ffa038f0(DAT_00419dbc,param_1,param_3,param_1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00363ad4 INSTRUCTION STORE [P5 + 0x8] = R1
SCALAR 0x8 AT 00363d04 INSTRUCTION ASH R1 = R0 >>> 0x8
SCALAR 0x8 AT 00363d64 INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00363d7e INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 00363dc4 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00363dfc INSTRUCTION _LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00363f5a INSTRUCTION LSHIFT R0 <<= 0x8
FUNCTION 00363e38 FUN_00363e38 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4
FUN_00363e38(undefined4 param_1,byte *param_2,uint param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 extraout_R1_L;
  int iVar8;
  ushort *puVar9;
  byte *pbVar10;
  code *UNRECOVERED_JUMPTABLE_01;
  code *UNRECOVERED_JUMPTABLE_02;
  
  iVar8 = (int)param_3 >> 1;
  if (param_3 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  FUN_00363b24(param_1,param_1);
  TWI_MASTER_ADDR = extraout_R1_L;
  uVar4 = TWI_MASTER_STAT;
  TWI_MASTER_STAT = uVar4;
  iVar5 = FUN_003638f8(param_4);
  if (DAT_00444d3c == 0) {
    uVar2 = (ushort)(iVar5 << 3);
    uVar3 = (ushort)((param_3 & 0xff) << 6);
    if (param_5 == 0) {
      TWI_MASTER_CTL = uVar2 | uVar3 | 1;
    }
    else {
      TWI_MASTER_CTL = uVar2 | uVar3 | 0x21;
    }
    ssync();
    iVar5 = 0;
    if (0 < iVar8) {
      UNRECOVERED_JUMPTABLE_02 = (code *)0x363f54;
      iVar5 = 2;
      pbVar10 = param_2 + 1;
      bVar1 = *param_2;
      param_2 = param_2 + 2;
      TWI_XMT_DATA16 = (short)(char)bVar1 | (ushort)*pbVar10 << 8;
      ssync();
      iVar6 = FUN_003639e4();
                    /* WARNING: Could not recover jumptable at 0x00363f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (iVar6 == 0) {
                    /* WARNING: Treating indirect jump as return */
        return 0;
      }
      if ((iVar8 != 0) && (iVar8 != 1)) {
        uVar7 = (*UNRECOVERED_JUMPTABLE_02)();
        return uVar7;
      }
    }
    if ((param_3 & 1) == 1) {
      bVar1 = *param_2;
      iVar8 = FUN_003639e4();
      if (iVar8 == 0) {
                    /* WARNING: Treating indirect jump as return */
        return 0;
      }
      TWI_XMT_DATA8 = (short)(char)bVar1;
      ssync();
      iVar8 = FUN_003639e4();
      if (iVar8 == 0) {
                    /* WARNING: Treating indirect jump as return */
        return 0;
      }
      iVar5 = iVar5 + 1;
    }
    puVar9 = &TWI_INT_STAT;
    while( true ) {
      UNRECOVERED_JUMPTABLE_02 = (code *)0x363ec0;
      iVar8 = -1;
      if ((*puVar9 & 0x10) != 0) {
        ssync();
        *puVar9 = *puVar9;
                    /* WARNING: Could not recover jumptable at 0x00363efe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*UNRECOVERED_JUMPTABLE_01)(iVar5);
        return uVar7;
      }
      iVar6 = FUN_00363988();
      if (iVar6 != 0) break;
                    /* WARNING: Could not recover jumptable at 0x00363ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if ((iVar8 != 0) && (iVar8 != 1)) {
        uVar7 = (*UNRECOVERED_JUMPTABLE_02)();
        return uVar7;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00363ee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*UNRECOVERED_JUMPTABLE_01)(0);
    return uVar7;
  }
  DAT_00419dd8 = 0;
  uVar4 = TWI_INT_STAT;
  TWI_INT_STAT = uVar4;
  DAT_00419dd4 = 1;
  DAT_00419dcc = param_3;
  if (param_3 != 0) {
    if (param_3 == 1) {
      TWI_INT_MASK = 0x30;
      TWI_FIFO_CTL = 0;
      DAT_00419dd0 = 1;
      goto LAB_00363ff2;
    }
    if (param_3 == 2) {
      TWI_INT_MASK = 0x30;
      TWI_FIFO_CTL = 4;
      DAT_00419dd0 = 2;
      goto LAB_00363ff2;
    }
  }
  TWI_INT_MASK = 0x60;
  TWI_FIFO_CTL = 4;
  DAT_00419dd0 = 2;
LAB_00363ff2:
  ssync();
  uVar2 = (ushort)(iVar5 << 3);
  uVar3 = (ushort)((param_3 & 0xff) << 6);
  if (param_5 == 0) {
    TWI_MASTER_CTL = uVar2 | uVar3 | 1;
  }
  else {
    TWI_MASTER_CTL = uVar2 | uVar3 | 0x21;
  }
  ssync();
  DAT_00419dc8 = param_2 + 1;
  if (DAT_00419dd0 == 1) {
    TWI_XMT_DATA16 = (ushort)*param_2;
  }
  else {
    bVar1 = *DAT_00419dc8;
    DAT_00419dc8 = param_2 + 2;
    TWI_XMT_DATA16 = (short)(char)*param_2 | (ushort)bVar1 << 8;
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 00364036 INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT 0036404a INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 0036407c INSTRUCTION _LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 003641b4 INSTRUCTION LOAD M0 = 0x8
SCALAR 0x8 AT 003641f8 INSTRUCTION LSH R1 = R0 >> 0x8
FUNCTION 003641d0 FUN_003641d0 success=true

void FUN_003641d0(undefined4 *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)*param_1;
  uVar1 = FUN_ffa038f0(0x470798,param_1[5]);
  puVar2[0x12] = 1;
  ssync();
  puVar2[6] = 0x83;
  puVar2[7] = 0;
  ssync();
  *puVar2 = uVar1 & 0xff;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  ssync();
  *(uint *)(puVar2 + 6) = (int)(short)puVar2[6] & 0x7f;
  ssync();
  puVar2[2] = 7;
  puVar2[3] = 0;
  if (param_1 == &DAT_00446eb8) {
    FUN_ffa01654(0x17);
    FUN_ffa01654(0x16);
    FUN_ffa01654(0xc);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_ffa01654(0x19);
  FUN_ffa01654(0x18);
  FUN_ffa01654(0xd);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0036422a INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00364238 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 003642cc INSTRUCTION STORE [P1 + 0x8] = R2
SCALAR 0x8 AT 00364482 INSTRUCTION LOAD R2 = 0x8
FUNCTION 00364482 FUN_00364482 success=true

undefined2 FUN_00364482(int param_1,int param_2)

{
  undefined2 *puVar1;
  
  if (param_1 < 9) {
    puVar1 = &DAT_00446f1c;
    if (param_1 != 0) {
      if (param_2 == 0) {
        puVar1 = (undefined2 *)&DAT_00446f2c;
      }
      puVar1 = puVar1 + param_1;
    }
    return *puVar1;
  }
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 003644f0 INSTRUCTION LOAD R1 = 0x8
FUNCTION 003644ec FUN_003644ec success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_003644ec(int param_1)

{
  if ((-1 < param_1) && (param_1 < 8)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 00364514 INSTRUCTION LOAD R1 = 0x8
FUNCTION 00364510 FUN_00364510 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_00364510(int param_1)

{
  if ((-1 < param_1) && (param_1 < 8)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 00364884 INSTRUCTION LOAD R0 = [P2 + 0x8]
FUNCTION 0036483c FUN_0036483c success=true

void FUN_0036483c(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00364510(*param_1);
  if (*(int *)(param_1 + 4) == 0) {
    FUN_0036459c(*(undefined4 *)(iVar1 + 8),9,8);
    FUN_0036459c(*(undefined4 *)(iVar1 + 8),9);
    FUN_0036459c(*(undefined4 *)(iVar1 + 8),0x41,0x40);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (*(int *)(param_1 + 4) != 1) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0036459c(*(undefined4 *)(iVar1 + 0x10),0x10,0x10);
  FUN_0036459c(*(undefined4 *)(iVar1 + 0x10),0x10);
  FUN_0036459c(*(undefined4 *)(iVar1 + 0x10),0x81,0x80);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00364886 INSTRUCTION LOAD R2 = 0x8
SCALAR 0x8 AT 0036488e INSTRUCTION LOAD R0 = [P2 + 0x8]
SCALAR 0x8 AT 00364896 INSTRUCTION LOAD R0 = [P2 + 0x8]
SCALAR 0x8 AT 0036496e INSTRUCTION LOAD R0 = [P4 + 0x8]
FUNCTION 003648ac FUN_003648ac success=true

undefined4 FUN_003648ac(byte *param_1)

{
  undefined2 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  code *UNRECOVERED_JUMPTABLE;
  
  pbVar6 = param_1;
  uVar3 = FUN_003644cc();
  bVar2 = *param_1;
  iVar4 = FUN_00364510(bVar2);
  if (uVar3 < 2) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  if (uVar3 == 2) {
    pbVar7 = param_1 + 0xc;
  }
  else {
    if (uVar3 != 3) {
      return 0;
    }
    pbVar7 = param_1 + 0xe;
  }
  uVar1 = *(undefined2 *)pbVar7;
  if (iVar4 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  if (bVar2 == 0) {
    FUN_00364540(*(undefined4 *)(iVar4 + 0xc),uVar1);
    FUN_00364540(*(undefined4 *)(iVar4 + 4),uVar1);
    uVar5 = FUN_00364540(&USB_CSR0,0x100);
    FUN_00364540(uVar5,0x100);
  }
  else {
    FUN_0036483c(pbVar6);
    if (*(int *)(param_1 + 4) == 0) {
      *(undefined2 *)(&DAT_00446f2c + (uint)*param_1 * 2) = uVar1;
      uVar5 = *(undefined4 *)(iVar4 + 4);
      if (*(int *)(param_1 + 8) == 3) {
        FUN_00364540(uVar5,uVar1);
      }
      else if (*param_1 < 5) {
        FUN_00364540(uVar5,0x80);
      }
      else {
        FUN_00364540(uVar5,0x400);
      }
      uVar3 = *(uint *)(param_1 + 8);
      if (uVar3 < 2) {
        if (uVar3 != 1) {
LAB_00364a1e:
                    /* WARNING: Could not recover jumptable at 0x00364a2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*UNRECOVERED_JUMPTABLE)(0);
          return uVar5;
        }
        FUN_00364540(*(undefined4 *)(iVar4 + 8),0);
      }
      else if (uVar3 == 2) {
        FUN_00364540(*(undefined4 *)(iVar4 + 8),0);
      }
      else {
        if (uVar3 != 3) goto LAB_00364a1e;
        FUN_00364540(*(undefined4 *)(iVar4 + 8),0x4000);
      }
    }
    else {
      if (*(int *)(param_1 + 4) != 1) {
                    /* WARNING: Treating indirect jump as return */
        return 0;
      }
      (&DAT_00446f1c)[*param_1] = uVar1;
      uVar5 = *(undefined4 *)(iVar4 + 0xc);
      if (*(int *)(param_1 + 8) == 3) {
        FUN_00364540(uVar5,uVar1);
      }
      else if (*param_1 < 5) {
        FUN_00364540(uVar5,0x80);
      }
      else {
        FUN_00364540(uVar5,0x400);
      }
      uVar3 = *(uint *)(param_1 + 8);
      if (uVar3 < 2) {
        if (uVar3 != 1) {
LAB_0036499e:
                    /* WARNING: Could not recover jumptable at 0x003649ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*UNRECOVERED_JUMPTABLE)(0);
          return uVar5;
        }
        FUN_00364540(*(undefined4 *)(iVar4 + 0x10),0);
      }
      else if (uVar3 == 2) {
        FUN_00364540(*(undefined4 *)(iVar4 + 0x10),0x1000);
      }
      else {
        if (uVar3 != 3) goto LAB_0036499e;
        FUN_00364540(*(undefined4 *)(iVar4 + 0x10),0x4000);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00364938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*UNRECOVERED_JUMPTABLE)(1);
  return uVar5;
}


END_FUNCTION
SCALAR 0x8 AT 00364990 INSTRUCTION LOAD R0 = [P4 + 0x8]
SCALAR 0x8 AT 003649ec INSTRUCTION LOAD R0 = [P4 + 0x8]
SCALAR 0x8 AT 00364a10 INSTRUCTION LOAD R0 = [P4 + 0x8]
SCALAR 0x8 AT 00364a30 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00364a44 INSTRUCTION _LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00364a56 INSTRUCTION _LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00364b22 INSTRUCTION LOAD P1 = [P1 + 0x8]
FUNCTION 00364af6 FUN_00364af6 success=true

void FUN_00364af6(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*(byte *)*param_1;
  iVar3 = *(int *)((byte *)*param_1 + 4);
  iVar1 = FUN_00364510(uVar2);
  if (iVar1 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (uVar2 != 0) {
    if (iVar3 == 0) {
      **(ushort **)(iVar1 + 8) = **(ushort **)(iVar1 + 8) | 0x10;
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    **(ushort **)(iVar1 + 0x10) = **(ushort **)(iVar1 + 0x10) | 0x20;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_003643a4();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00364baa INSTRUCTION LOAD P0 = [P1 + 0x8]
FUNCTION 00364b60 FUN_00364b60 success=true

void FUN_00364b60(int *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)*(byte *)*param_1;
  iVar4 = *(int *)((byte *)*param_1 + 4);
  iVar2 = FUN_00364510(uVar3);
  if (iVar2 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (uVar3 == 0) {
    uVar1 = USB_CSR0;
    USB_CSR0 = uVar1 & 0xffdb;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (iVar4 == 0) {
    **(ushort **)(iVar2 + 8) = **(ushort **)(iVar2 + 8) | 0x40;
    ssync();
    **(ushort **)(iVar2 + 8) = **(ushort **)(iVar2 + 8) & 0xffcf;
    ssync();
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  **(ushort **)(iVar2 + 0x10) = **(ushort **)(iVar2 + 0x10) | 0x80;
  ssync();
  **(ushort **)(iVar2 + 0x10) = **(ushort **)(iVar2 + 0x10) & 0xff9f;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00364bb6 INSTRUCTION LOAD P1 = [P1 + 0x8]
SCALAR 0x8 AT 00364c44 INSTRUCTION LOAD P1 = [P1 + 0x8]
FUNCTION 00364bf4 FUN_00364bf4 success=true

undefined4 FUN_00364bf4(int *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (uint)*(byte *)*param_1;
  iVar5 = *(int *)((byte *)*param_1 + 4);
  iVar2 = FUN_00364510(uVar4);
  if (iVar2 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  if (uVar4 == 0) {
    uVar1 = USB_CSR0;
    uVar3 = 2;
    if ((uVar1 & 0x20) == 1) {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 2;
    if (iVar5 == 0) {
      if ((**(ushort **)(iVar2 + 8) & 0x10) == 1) {
        uVar3 = 1;
      }
    }
    else if ((**(ushort **)(iVar2 + 0x10) & 0x20) == 1) {
      uVar3 = 1;
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return uVar3;
}


END_FUNCTION
SCALAR 0x8 AT 00364e64 INSTRUCTION LOAD P1 = [P1 + 0x8]
FUNCTION 00364e12 FUN_00364e12 success=true

uint FUN_00364e12(undefined4 *param_1,undefined2 *param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  
  uVar8 = param_1[8];
  bVar1 = *(byte *)*param_1;
  iVar4 = FUN_00364510(bVar1);
  puVar5 = (undefined4 *)FUN_003644ec(uVar8);
  uVar6 = FUN_00364482(bVar1,0);
  if (iVar4 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  iVar9 = 0;
  if (param_3 <= uVar6) {
    uVar6 = param_3;
  }
  while ((iVar9 < 1 && ((**(ushort **)(iVar4 + 8) & 2) == 1))) {
    FUN_0032b6d8(1);
    iVar9 = iVar9 + 1;
  }
  if (iVar9 == 1) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  FUN_ffa00f68(DAT_00446f14);
  puVar3 = &DAT_ff800eac;
  for (uVar10 = uVar6 + 1 >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar3 = *param_2;
    if (uVar10 == 0) break;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  *(undefined2 *)puVar5[1] = 0xeac;
  *(undefined2 *)puVar5[2] = 0xff80;
  *(short *)puVar5[3] = (short)uVar6;
  *(undefined2 *)puVar5[4] = 0;
  ssync();
  iVar9 = 3;
  do {
    *(ushort *)*puVar5 = (ushort)bVar1 << 4 | 0xb;
    iVar7 = FUN_00364c68(uVar8);
    if (iVar7 != 0) {
      if (bVar1 == 0) {
        uVar2 = USB_CSR0;
        USB_CSR0 = uVar2 | 2;
      }
      else {
        **(undefined2 **)(iVar4 + 8) = 1;
      }
      FUN_ffa00dd4(DAT_00446f14);
                    /* WARNING: Treating indirect jump as return */
      return uVar6;
    }
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  FUN_ffa00dd4(DAT_00446f14);
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 00364ec6 INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00364f32 INSTRUCTION LOAD P1 = [P1 + 0x8]
SCALAR 0x8 AT 0036517c INSTRUCTION LOAD R0 = 0x8
FUNCTION 003650fe FUN_003650fe success=true

void FUN_003650fe(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  
  IMASK = 0;
  USB_INDEX = 0;
  uVar2 = 2;
  switch(param_1 + -1) {
  case 1:
    uVar2 = 4;
    break;
  case 2:
    uVar2 = 1;
    break;
  case 3:
    USB_TX_MAX_PACKET = 0x35;
    USB_TXCOUNT = 0x35;
    iVar4 = 0x1b;
    puVar3 = &DAT_00419de4;
    do {
      USB_EP0_FIFO = *puVar3;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (iVar4 != 0);
    ssync();
    uVar1 = USB_CSR0;
    USB_CSR0 = uVar1 | 2;
    ssync();
    uVar2 = 8;
    break;
  case 4:
    uVar2 = 0x10;
  }
  USB_TESTMODE = uVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


END_FUNCTION
SCALAR 0x8 AT 003651be INSTRUCTION STORE W [FP + 0x8] = R6
FUNCTION 003651a0 FUN_003651a0 success=true

void FUN_003651a0(uint param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 & 0xffff) != (DAT_00446f94 & 0xffff)) {
    uVar1 = FUN_00366a4c(DAT_00446f84,3,0);
    FUN_003667b0(uVar1,0x14,0);
    FUN_00366770(uVar1,&stack0x00000000,2);
    FUN_003667ec(uVar1);
  }
  if (param_1 >> 0x10 != DAT_00446f94 >> 0x10) {
    uVar1 = FUN_00366a4c(DAT_00446f84,3,1);
    FUN_003667b0(uVar1,0x14,0);
    FUN_00366770(uVar1,&stack0x00000000,2);
    FUN_003667ec(uVar1);
  }
  DAT_00446f94 = param_1;
                    /* WARNING: Could not recover jumptable at 0x003651e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003651ce INSTRUCTION _STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 003651fe INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 0036522c INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 003653b0 INSTRUCTION LOAD P0 = 0x8
SCALAR 0x8 AT 00365420 INSTRUCTION _STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00365430 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 0036548a INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00365492 INSTRUCTION STORE [P4 + 0x8] = R0
SCALAR 0x8 AT 00365496 INSTRUCTION LOAD P1 = [P4 + 0x8]
SCALAR 0x8 AT 003654a0 INSTRUCTION LOAD P1 = [P4 + 0x8]
SCALAR 0x8 AT 0036550c INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00365528 INSTRUCTION LOAD P0 = [P0 + 0x8]
SCALAR 0x8 AT 00365536 INSTRUCTION LOAD P1 = [P0 + 0x8]
SCALAR 0x8 AT 00365602 INSTRUCTION LOAD P1 = [P0 + 0x8]
SCALAR 0x8 AT 00365772 INSTRUCTION LOAD R1 = 0x8
FUNCTION 0036573c FUN_0036573c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0036573c(undefined4 param_1,undefined4 param_2)

{
  FUN_003656f8(param_2);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT 003657c2 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 003657e0 INSTRUCTION ADD R5 += 0x8
SCALAR 0x8 AT 003657f6 INSTRUCTION _LOAD P4 = [P5 + 0x8]
SCALAR 0x8 AT 00365820 INSTRUCTION _LOAD R0 = W [FP + 0x8] (Z)
SCALAR 0x8 AT 00365892 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 0036589a INSTRUCTION STORE [P4 + 0x8] = R0
SCALAR 0x8 AT 00365928 INSTRUCTION LSH|| R1 = R1 << 0x8
FUNCTION 003658fc FUN_003658fc success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_003658fc(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = DAT_00446fb0;
  if (DAT_00446fbc != 0) {
    uVar1 = 0;
    for (; param_2 != 0; param_2 = param_2 + -1) {
      uVar1 = (**(code **)(DAT_00446fac + 0x14))(uVar2,&stack0x00000000,1);
      FUN_003655b8(1,1);
    }
                    /* WARNING: Could not recover jumptable at 0x0036595c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar1);
    return uVar2;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 00365936 INSTRUCTION STORE W [FP + 0x8] = R1
SCALAR 0x8 AT 0036593c INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00365990 INSTRUCTION ADD R6 += 0x8
FUNCTION 00365970 FUN_00365970 success=true

void FUN_00365970(void)

{
  FUN_003655b8(0xd,0);
  FUN_003658fc(&stack0x00000000,1);
  FUN_003655b8(0xe,0);
  FUN_003658fc(&stack0x00000000,1);
  FUN_003655b8(0xf,0);
  FUN_003658fc(&stack0x00000000,1);
  FUN_003655b8(0x10,0);
  FUN_003658fc(&stack0x00000000,1);
  FUN_003655b8(0x11,0);
  FUN_003658fc(&stack0x00000000,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003659ea INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 00365a58 INSTRUCTION ADD R6 += 0x8
FUNCTION 00365a34 FUN_00365a34 success=true

void FUN_00365a34(undefined4 param_1)

{
  FUN_003655b8(0,0);
  FUN_003658fc(&stack0x00000000,1);
  FUN_003655b8(1,0);
  FUN_003658fc(&stack0x00000000,1);
  FUN_003655b8(2);
  FUN_003658fc(&stack0x00000000,1);
  FUN_00365970(0,param_1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00365ae0 INSTRUCTION LSH R1.L = R1.L << 0x8
FUNCTION 00365ab0 FUN_00365ab0 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_00365ab0(undefined4 param_1,int param_2)

{
  if (DAT_00446fbc == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  if (param_2 != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 00365ae4 INSTRUCTION STORE W [FP + 0x8] = R1
SCALAR 0x8 AT 00365b3c INSTRUCTION LINK 0x8
SCALAR 0x8 AT 00365bb8 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 00365c08 INSTRUCTION LOAD P1 = [P0 + 0x8]
SCALAR 0x8 AT 00365c7a INSTRUCTION LOAD P1 = [P0 + 0x8]
SCALAR 0x8 AT 00365cca INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 00365ce8 INSTRUCTION LOAD P3 = [P5 + 0x8]
SCALAR 0x8 AT 00365cf2 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 00365d68 INSTRUCTION ADD P1 += 0x8
FUNCTION 00365d54 FUN_00365d54 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00365d54(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = (&DAT_00446fdc)[DAT_00446ffc];
  if (DAT_00447000 != 0) {
    uVar1 = 0;
    for (; param_2 != 0; param_2 = param_2 + -1) {
      uVar1 = (**(code **)(DAT_00446fd8 + 0x14))(uVar2,&stack0x00000000,1);
      FUN_00365c30(1,1);
    }
                    /* WARNING: Could not recover jumptable at 0x00365dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar1);
    return uVar2;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 00365d8c INSTRUCTION LSH|| R1 = R1 << 0x8
SCALAR 0x8 AT 00365d9a INSTRUCTION STORE W [FP + 0x8] = R1
SCALAR 0x8 AT 00365da0 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00365df0 INSTRUCTION ADD R0 += 0x8
FUNCTION 00365dd4 FUN_00365dd4 success=true

void FUN_00365dd4(void)

{
  FUN_00365c30(1,0);
  FUN_00365d54(&stack0x00000000,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00365e24 INSTRUCTION ADD R0 += 0x8
FUNCTION 00365e00 FUN_00365e00 success=true

void FUN_00365e00(void)

{
  FUN_00365c30(3,0);
  FUN_00365d54(&stack0x00000000,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00365f76 INSTRUCTION ADD R0 += 0x8
FUNCTION 00365ee4 FUN_00365ee4 success=true

void FUN_00365ee4(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  bVar3 = 0x7f800000 < (param_2 & 0x7fffffff);
  if (bVar3 || (int)param_2 < 0x41900000) {
    uVar1 = (uint)((int)param_2 < -0x3d820000);
    if (param_2 != 0xc27e0000) {
      uVar1 = param_2 >> 0x1f ^ (uint)((int)param_2 < -0x3d820000);
    }
    if (bVar3) {
      uVar1 = 0;
    }
    if (uVar1 == 0) {
      uVar2 = FUN_ffa02c10(0x3e800000);
      FUN_ffa03068(uVar2,0x40000000);
      FUN_ffa03c10();
    }
  }
  uVar2 = 5;
  if (param_1 != 0) {
    uVar2 = 4;
  }
  FUN_00365c30(uVar2,0);
  FUN_00365d54(&stack0x00000000,1);
                    /* WARNING: Could not recover jumptable at 0x00365f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00365fa0 INSTRUCTION ADD P1 += 0x8
SCALAR 0x8 AT 00365fc4 INSTRUCTION LSH R1.L = R1.L << 0x8
SCALAR 0x8 AT 00365fca INSTRUCTION STORE W [FP + 0x8] = R1
SCALAR 0x8 AT 0036631a INSTRUCTION STORE [P2 + 0x8] = R0
FUNCTION 0036616c FUN_0036616c success=true

/* WARNING: Removing unreachable block (ram,0x00366350) */

void FUN_0036616c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == 0) {
    FUN_003254bc(&DAT_ff802b3c,0,0x10);
    FUN_003254bc(&DAT_ff802b7c,0,0x10);
    FUN_003254bc(&DAT_ff802b7c,0,0x20);
    FUN_003254bc(&DAT_ff802b5c,0,0x20);
    FUN_003254bc(&DAT_ff802b5c,0,0x10);
    FUN_003254bc(&DAT_ff802b6c,0,0x10);
    FUN_003254bc(&DAT_ff802bbc,0,0x20);
    FUN_003254bc(&DAT_ff802bdc,0,0x20);
    FUN_003254bc(&DAT_ff802bfc,0,0x30);
    FUN_003254bc(&DAT_ff802c2c,0,0x30);
    FUN_003254bc(&DAT_ff802c5c,0,0x28);
    uVar1 = 0;
  }
  else {
    FUN_003254bc(&DAT_ff802b3c,0xaa,0x10);
    FUN_003254bc(&DAT_ff802b7c,0x55,0x10);
    FUN_003254bc(&DAT_ff802b7c,0xaa,0x20);
    FUN_003254bc(&DAT_ff802b5c,0x55,0x20);
    FUN_003254bc(&DAT_ff802b5c,0xf,0x10);
    FUN_003254bc(&DAT_ff802b6c,0xaa,0x10);
    FUN_003254bc(&DAT_ff802bbc,0xf,0x20);
    FUN_003254bc(&DAT_ff802bdc,0xf0,0x20);
    FUN_003254bc(&DAT_ff802bfc,0xaa,0x30);
    FUN_003254bc(&DAT_ff802c2c,0x55,0x30);
    FUN_003254bc(&DAT_ff802c5c,0xff,0x28);
    uVar1 = 0xff;
  }
  FUN_003254bc(&DAT_ff802c84,uVar1,0x30);
  DAT_ffb00658 = 0;
  DAT_ffb0065c = 0;
  DAT_ffb00660 = 0;
  DAT_ffb00664 = 0;
  DAT_ffb00668 = 0;
  DAT_ff8010c0 = &DAT_ff802b3c;
  DAT_ff8010c4 = &DAT_ff802b7c;
  DAT_ff8010c8 = &DAT_ff802b5c;
  DAT_ff8010d0 = &DAT_ff802b7c;
  DAT_ff8010dc = &DAT_ff802bbc;
  DAT_ff8010d4 = &DAT_ff802b5c;
  DAT_ff8010cc = &DAT_ff802bdc;
  DAT_ff8010d8 = &DAT_ff802b6c;
  DAT_ffb0066c = &DAT_ff8010c0;
  DAT_ffb00670 = &DAT_ff8010d0;
                    /* WARNING: Could not recover jumptable at 0x00366376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0036633a INSTRUCTION STORE [P1 + 0x8] = R6
SCALAR 0x8 AT 00366348 INSTRUCTION STORE [P0 + 0x8] = R0
SCALAR 0x8 AT 0036635c INSTRUCTION STORE [P0 + 0x8] = R0
SCALAR 0x8 AT 00366424 INSTRUCTION LOAD R1 = [P1 + 0x8]
SCALAR 0x8 AT 0036643e INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00366440 INSTRUCTION STORE [P5 + 0x8] = R6
SCALAR 0x8 AT 003664b2 INSTRUCTION ADD P0 += 0x8
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
SCALAR 0x8 AT 003664ca INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00366500 INSTRUCTION STORE [P1 + 0x8] = R0
SCALAR 0x8 AT 00366502 INSTRUCTION LOAD P1 = [P0 + 0x8]
SCALAR 0x8 AT 00366530 INSTRUCTION _STORE [P5 + 0x8] = R7
SCALAR 0x8 AT 0036657e INSTRUCTION STORE [P4 + 0x8] = R0
SCALAR 0x8 AT 003665bc INSTRUCTION LOAD R1 = [P0 + 0x8]
SCALAR 0x8 AT 003666c2 INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT 0036689c INSTRUCTION LOAD R1 = [P1 + 0x8]
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
SCALAR 0x8 AT 003668a8 INSTRUCTION ADD P5 += 0x8
SCALAR 0x8 AT 003668ca INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00366a44 INSTRUCTION STORE [P1 + 0x8] = R1
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
SCALAR 0x8 AT 00366a8c INSTRUCTION LOAD P1 = [P1 + 0x8]
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
SCALAR 0x8 AT 00366aec INSTRUCTION LOAD P1 = [P1 + 0x8]
SCALAR 0x8 AT 00366b5e INSTRUCTION _LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00366b66 INSTRUCTION STORE [P5 + 0x8] = P1
SCALAR 0x8 AT 00366bc4 INSTRUCTION LOAD R1 = [P1 + 0x8]
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
SCALAR 0x8 AT 00366bd6 INSTRUCTION STORE [P1 + 0x8] = R0
SCALAR 0x8 AT 00366bf4 INSTRUCTION STORE [P1 + 0x8] = R0
SCALAR 0x8 AT 00366bfe INSTRUCTION LOAD P1 = 0x8
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
SCALAR 0x8 AT 00366c36 INSTRUCTION LOAD P1 = [P1 + 0x8]
FUNCTION 00366c28 FUN_00366c28 success=true

void FUN_00366c28(void)

{
  (**(code **)(DAT_0044716c + 8))();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00366c86 INSTRUCTION LOAD P1 = [P0 + 0x8]
FUNCTION 00366c60 FUN_00366c60 success=true

void FUN_00366c60(int param_1)

{
  if (param_1 != 0) {
    (**(code **)(DAT_00447178 + 0xc))();
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  (**(code **)(DAT_00447178 + 8))(DAT_0044717c);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00366d5e INSTRUCTION LOAD P1 = [P1 + 0x8]
FUNCTION 00366d28 FUN_00366d28 success=true

void FUN_00366d28(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  (**(code **)(DAT_00447178 + 0xc))(DAT_00447180);
  iVar4 = 1;
  do {
    iVar2 = 0x5aeb0;
    iVar3 = iVar2;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  } while ((iVar4 != 0) && (iVar4 = iVar4 + -1, iVar4 != 0));
  (**(code **)(DAT_00447178 + 8))(DAT_00447180);
  iVar3 = 1;
  iVar4 = iVar2;
LAB_00366d6e:
  do {
    if (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      if (iVar4 != 0) goto LAB_00366d6e;
    }
    if ((iVar3 == 0) || (iVar3 = iVar3 + -1, iVar4 = iVar2, iVar3 == 0)) {
      FUN_00366c44();
      uVar1 = (**(code **)(DAT_0044716c + 0x20))(DAT_00447174,10000);
      FUN_00366c94(0xe3);
      FUN_00366c94(0xa2);
      FUN_00366c94(0xa0);
      FUN_00366c94(200);
      FUN_00366c94(0x24);
      FUN_00366c94(0x81);
      FUN_00366c94(0x2a);
      FUN_00366c94(0x2f);
      FUN_00366c94(0x40);
      FUN_00366c94(0xac);
      FUN_00366c94(0xa4);
      FUN_00366c94(0xaf);
      FUN_00366c94(0xa6);
      (**(code **)(DAT_0044716c + 0x20))(DAT_00447174,uVar1);
      FUN_00366c28();
                    /* WARNING: Treating indirect jump as return */
      return;
    }
  } while( true );
}


END_FUNCTION
SCALAR 0x8 AT 00366ec6 INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION 00366ebc FUN_00366ebc success=true

void FUN_00366ebc(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  
  iVar4 = 0;
  puVar3 = &DAT_00447184;
  do {
    FUN_00366c44();
    FUN_00366e7c(0,iVar4);
    FUN_00366c28();
    iVar1 = 0x10;
    iVar2 = 0;
    do {
      FUN_ffa023a8(puVar3,iVar2);
      iVar1 = iVar1 + -1;
      iVar2 = iVar2 + 8;
      puVar3 = puVar3 + 2;
    } while (iVar1 != 0);
    FUN_00366c44();
    FUN_00366cd0(0,0x80,1);
    iVar4 = iVar4 + 1;
    FUN_00366c28();
  } while (iVar4 < 8);
                    /* WARNING: Could not recover jumptable at 0x00366f36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00366ed0 INSTRUCTION LOAD R5 = 0x8
SCALAR 0x8 AT 00366ede INSTRUCTION _LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT 00366f1e INSTRUCTION LOAD R6 = [FP + 0x8]
SCALAR 0x8 AT 00366f28 INSTRUCTION STORE [FP + 0x8] = R6
SCALAR 0x8 AT 00366f5c INSTRUCTION LOAD R5 = 0x8
FUNCTION 00366f38 FUN_00366f38 success=true

void FUN_00366f38(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0x100;
  puVar2 = &DAT_00447184;
  do {
    *puVar2 = 0;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  FUN_00366c44();
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 1;
    FUN_00366e7c(0,iVar3);
    FUN_00366cd0(&DAT_00447184,0x80,1);
    iVar3 = iVar1;
  } while (iVar1 < 8);
  FUN_00366c28();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00366f8c INSTRUCTION LINK 0x8
FUNCTION 00366f8c FUN_00366f8c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00366f8c(int param_1,int param_2)

{
  if ((param_1 < 0x15) && (param_2 < 8)) {
    FUN_00366c44();
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00366fa0 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00367034 INSTRUCTION LINK 0x8
FUNCTION 00367034 FUN_00367034 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00367034(int param_1,int param_2)

{
  if ((param_1 < 0x15) && (param_2 < 8)) {
    FUN_00366c44();
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00367048 INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 00367108 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00367158 INSTRUCTION LOAD P1 = [P1 + 0x8]
SCALAR 0x8 AT 00367160 INSTRUCTION LOAD P1 = [P1 + 0x8]
SCALAR 0x8 AT 003671b8 INSTRUCTION LOAD P0 = [P1 + 0x8]
SCALAR 0x8 AT 003672f6 INSTRUCTION LOAD R2 = [P0 + 0x8]
SCALAR 0x8 AT 00367340 INSTRUCTION LOAD R2 = [P0 + 0x8]
SCALAR 0x8 AT 003673a2 INSTRUCTION LOAD R2 = [P2 + 0x8]
SCALAR 0x8 AT 003673b4 INSTRUCTION STORE [P1 + 0x8] = R1
SCALAR 0x8 AT 00367404 INSTRUCTION LOAD R0 = [P1 + 0x8]
FUNCTION 003673e2 FUN_003673e2 success=true

uint FUN_003673e2(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  bVar1 = false;
  iVar2 = *param_1;
  if (((iVar2 != 0) && (bVar1 = true, iVar2 != 1)) && (bVar1 = false, iVar2 == 2)) {
    iVar2 = param_1[5] + 5;
    param_1[5] = iVar2;
    if (param_1[2] == 0) {
      bVar1 = false;
      if (param_1[3] <= iVar2) {
        param_1[5] = 0;
        param_1[2] = 1;
      }
    }
    else {
      bVar1 = true;
      if (param_1[4] <= iVar2) {
        param_1[2] = 0;
        param_1[5] = 0;
      }
    }
  }
  if (bVar1) {
    uVar3 = 1 << param_1[1];
  }
  return uVar3 & 0xffff;
}


END_FUNCTION
SCALAR 0x8 AT 00367412 INSTRUCTION STORE [P1 + 0x8] = R2
SCALAR 0x8 AT 00367436 INSTRUCTION STORE [P1 + 0x8] = R3
SCALAR 0x8 AT 00367448 INSTRUCTION STORE [P1 + 0x8] = R0
FUNCTION 0036743a FUN_0036743a success=true

void FUN_0036743a(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[1] = param_2;
  param_1[3] = 700;
  param_1[4] = 300;
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00367480 INSTRUCTION ADD P2 += 0x8
SCALAR 0x8 AT 003674d4 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00367514 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00367532 INSTRUCTION _STORE W [FP + 0x8] = R5
SCALAR 0x8 AT 00367540 INSTRUCTION ADD R5 += 0x8
SCALAR 0x8 AT 00367574 INSTRUCTION LOAD R2 = W [FP + 0x8] (X)
SCALAR 0x8 AT 0036759a INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 0036768c INSTRUCTION _LOAD P0 = [P1 + 0x8]
SCALAR 0x8 AT 003676b4 INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 003676f6 INSTRUCTION STORE [P4 + 0x8] = R0
SCALAR 0x8 AT 00367708 INSTRUCTION ADD R7 += 0x8
SCALAR 0x8 AT 0036774e INSTRUCTION LOAD P1 = [P1 + 0x8]
SCALAR 0x8 AT 003677ac INSTRUCTION _LOAD P0 = [P1 + 0x8]
SCALAR 0x8 AT 0036781e INSTRUCTION _LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 0036785c INSTRUCTION _LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 0036786c INSTRUCTION _LOAD P1 = [P1 + 0x8]
SCALAR 0x8 AT 003678a8 INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT 003678de INSTRUCTION LOAD R2 = B [P5 + 0x8] (Z)
SCALAR 0x8 AT 003679ac INSTRUCTION ADD R4 += 0x8
SCALAR 0x8 AT 00367a20 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 00367a88 INSTRUCTION ADD R6 += 0x8
SCALAR 0x8 AT 00367b26 INSTRUCTION STORE [P1 + 0x8] = R0
SCALAR 0x8 AT 00367b9e INSTRUCTION LOAD R0 = [P5 + 0x8]
FUNCTION 00367b80 FUN_00367b80 success=true

void FUN_00367b80(void)

{
  int iVar1;
  
  if (DAT_004487ac == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = FUN_00367b40(DAT_004487a8,DAT_004487b0);
  if (iVar1 != 1) {
    FUN_0032aad8(s_Flash_Write_Error_0043d904);
  }
  DAT_004487ac = 0;
  DAT_004487a8 = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00367bae INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 00367bde INSTRUCTION STORE [P0 + 0x8] = R0
SCALAR 0x8 AT 00367cc2 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00367cca INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00367d58 INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 00367ebe INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00367f7c INSTRUCTION LSH|| R1 = R0 << 0x8
SCALAR 0x8 AT 00367ff4 INSTRUCTION ASHIFT R1 >>>= 0x8
FUNCTION 00367fd8 FUN_00367fd8 success=true

int FUN_00367fd8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  if (DAT_00448920 != 0) {
    iVar1 = param_1 * (param_2 + 0x80) >> 8;
    if (param_1 < 1) {
      iVar1 = -((param_2 + 0x80) * -param_1 >> 8);
    }
  }
  return iVar1;
}


END_FUNCTION
SCALAR 0x8 AT 00367ff6 INSTRUCTION ASHIFT R0 >>>= 0x8
SCALAR 0x8 AT 00368182 INSTRUCTION LSH R0 = R5 << 0x8
SCALAR 0x8 AT 003681f4 INSTRUCTION LOAD P4 = [P5 + 0x8]
SCALAR 0x8 AT 00368232 INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 003683d2 INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00368456 INSTRUCTION STORE [P4 + 0x8] = R0
SCALAR 0x8 AT 00368464 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00368466 INSTRUCTION STORE [P4 + 0x8] = R0
SCALAR 0x8 AT 0036848c INSTRUCTION LOAD P1 = [P1 + 0x8]
SCALAR 0x8 AT 0036849c INSTRUCTION LOAD P1 = [P1 + 0x8]
SCALAR 0x8 AT 0036853a INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00368544 INSTRUCTION LOAD P1 = [P1 + 0x8]
SCALAR 0x8 AT 00368550 INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00368646 INSTRUCTION STORE [P1 + 0x8] = R0
FUNCTION 00368632 FUN_00368632 success=true

void FUN_00368632(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  *(int *)(param_2 + 4) = param_3;
  if (param_1 == 0) {
    uVar1 = (uint)((param_4 & 1 << param_3) == 0);
    *(uint *)(param_2 + 8) = uVar1;
    *(uint *)(param_2 + 0xc) = uVar1;
    return;
  }
  *(uint *)(param_2 + 8) = (uint)(param_4 != 0);
  *(uint *)(param_2 + 0xc) = (uint)(param_4 != 0);
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00368650 INSTRUCTION STORE [P1 + 0x8] = R1
SCALAR 0x8 AT 003686ac INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT 003686c2 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 003686d2 INSTRUCTION ADD P1 += 0x8
SCALAR 0x8 AT 003686ec INSTRUCTION _LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00368706 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00368784 INSTRUCTION STORE [P4 + 0x8] = R0
SCALAR 0x8 AT 0036878c INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 003687b0 INSTRUCTION ADD R6 += 0x8
SCALAR 0x8 AT 003687c0 INSTRUCTION LOAD R0 = [P4 + 0x8]
SCALAR 0x8 AT 003687c8 INSTRUCTION LOAD P2 = [P4 + 0x8]
SCALAR 0x8 AT 003687ce INSTRUCTION LOAD R2 = W [FP + 0x8] (X)
SCALAR 0x8 AT 003687f0 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT 00368820 INSTRUCTION LOAD R0 = [P4 + 0x8]
SCALAR 0x8 AT 00368842 INSTRUCTION ADD P1 += 0x8
SCALAR 0x8 AT 0036885a INSTRUCTION LOAD R0 = [P4 + 0x8]
SCALAR 0x8 AT 003688a8 INSTRUCTION _LOAD R0 = [P4 + 0x8]
SCALAR 0x8 AT 003689fc INSTRUCTION LOAD R7 = [P1 + 0x8]
SCALAR 0x8 AT 00368a78 INSTRUCTION LOAD M0 = 0x8
FUNCTION 00368a64 FUN_00368a64 success=true

int FUN_00368a64(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (PTR_DAT_00419fe8 == (undefined *)0x0) {
    return 0;
  }
  iVar1 = 0;
  piVar2 = (int *)PTR_DAT_00419fe8;
  do {
    iVar4 = -1;
    piVar3 = piVar2;
    do {
      if (*piVar3 == 0) {
        return 0;
      }
      piVar2 = piVar3 + 2;
      iVar1 = iVar1 + *piVar3;
      if (param_1 < iVar1) {
        return piVar3[1];
      }
    } while ((iVar4 != 0) && (iVar4 = iVar4 + -1, piVar3 = piVar2, iVar4 != 0));
  } while( true );
}


END_FUNCTION
SCALAR 0x8 AT 00368ee4 INSTRUCTION LOAD R0 = [P1 + 0x8]
FUNCTION 00368ecc FUN_00368ecc success=true

void FUN_00368ecc(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1[2];
  puVar3 = (undefined4 *)param_1[1];
  DAT_00448a98 = param_1;
  if (*param_1 != 0) {
    iVar4 = 0xc;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(iVar1);
      }
      DAT_00448a94 = DAT_00448a94 + 1;
      piVar2 = (int *)((int)DAT_00448a98 + iVar4);
      iVar4 = iVar4 + 0xc;
      puVar3 = (undefined4 *)piVar2[1];
      iVar1 = piVar2[2];
    } while (*piVar2 != 0);
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 00368f12 INSTRUCTION LOAD R0 = [P0 + 0x8]
SCALAR 0x8 AT 00368fa8 INSTRUCTION LOAD R0 = [P1 + 0x8]
FUNCTION 00368f84 FUN_00368f84 success=true

undefined4 FUN_00368f84(void)

{
  int iVar1;
  
  iVar1 = FUN_00368f24();
  if (iVar1 != -1) {
                    /* WARNING: Treating indirect jump as return */
    return *(undefined4 *)(*(int *)(DAT_00448a98 + iVar1 * 0xc + 4) + 8);
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 003696d0 INSTRUCTION STORE [P1 + 0x8] = R0
FUNCTION 003696c4 FUN_003696c4 success=true

void FUN_003696c4(undefined4 *param_1)

{
  param_1[4] = (uint)param_1 & 0xffff0000;
  param_1[3] = *param_1;
  param_1[2] = *param_1;
  return;
}


END_FUNCTION
SCALAR 0x8 AT 003696e2 INSTRUCTION STORE [P1 + 0x8] = R2
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
SCALAR 0x8 AT 00369752 INSTRUCTION LOAD P2 = [P0 + 0x8]
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
SCALAR 0x8 AT 0036975e INSTRUCTION LOAD R0 = [P0 + 0x8]
SCALAR 0x8 AT 00369762 INSTRUCTION STORE [P0 + 0x8] = R0
SCALAR 0x8 AT 00369776 INSTRUCTION STORE [P0 + 0x8] = R0
SCALAR 0x8 AT 00369794 INSTRUCTION ASH|| R6 = R1 >>> 0x8
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
SCALAR 0x8 AT 00369892 INSTRUCTION STORE [P1 + 0x8] = R1
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
SCALAR 0x8 AT 003698aa INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00369970 INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 003699a4 INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 003699dc INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00369a10 INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00369a46 INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00369a86 INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00369ab4 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00369adc INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00369b04 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00369b3e INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT 00369b50 INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 00369b82 INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 00369bb0 INSTRUCTION LOAD P0 = [P1 + 0x8]
SCALAR 0x8 AT 00369c74 INSTRUCTION LOAD R0 = [P0 + 0x8]
SCALAR 0x8 AT 00369ca6 INSTRUCTION LOAD P0 = [P1 + 0x8]
SCALAR 0x8 AT 00369ce4 INSTRUCTION _LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00369d38 INSTRUCTION _LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00369d84 INSTRUCTION _LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00369dd8 INSTRUCTION _LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00369e28 INSTRUCTION _LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00369e7c INSTRUCTION _LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00369ecc INSTRUCTION _LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00369f16 INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 00369f5a INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 0036a192 INSTRUCTION STORE [P5 + 0x8] = R0
FUNCTION 0036a15c FUN_0036a15c success=true

void FUN_0036a15c(undefined4 *param_1)

{
  if (DAT_0041b13c != (code *)0x0) {
    (*DAT_0041b13c)();
    param_1[5] = DAT_0041b168;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0036a384 INSTRUCTION _STORE W [P4 + 0x8] = R0
FUNCTION 0036a350 FUN_0036a350 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0036a350(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  
  puVar5 = &DAT_0043de84;
  DAT_00448b9e._0_2_ = 0x1f1;
  uRam00448bab = 0;
  _DAT_00448ba8 = 0;
  DAT_00448ba4._0_2_ = 0;
  DAT_00448ba4._2_2_ = 0;
  DAT_00448baa = 1;
  DAT_00448b9e._2_2_ = 0;
  uRam00448ba2 = 0x2406;
  DAT_00448b9c = 0x2406;
  iVar8 = 5;
  puVar6 = puVar5;
  piVar7 = &DAT_0043de88;
  do {
    if (*piVar7 != 0) {
      uVar1 = *puVar6;
      uVar2 = *(undefined1 *)(puVar6 + 5);
      uVar3 = *(undefined1 *)(puVar6 + 6);
      iVar4 = (*piVar7 + -1) * 0xb;
      (&DAT_00448bc4)[iVar4] = 0xb;
      (&DAT_00448bc5)[iVar4] = 0x24;
      (&DAT_00448bc6)[iVar4] = 2;
      (&DAT_00448bc7)[iVar4] = 1;
      (&DAT_00448bc8)[iVar4] = uVar2;
      (&DAT_00448bc9)[iVar4] = uVar3;
      (&DAT_00448bca)[iVar4] = 0x18;
      (&DAT_00448bcb)[iVar4] = 1;
      (&DAT_00448bcc)[iVar4] = (char)uVar1;
      (&DAT_00448bcd)[iVar4] = (char)((uint)uVar1 >> 8);
      (&DAT_00448bce)[iVar4] = (char)((uint)uVar1 >> 0x10);
    }
    puVar6 = puVar6 + 8;
  } while ((iVar8 != 0) && (iVar8 = iVar8 + -1, piVar7 = piVar7 + 8, iVar8 != 0));
  DAT_00448bb4._0_2_ = 0x2407;
  DAT_00448bb4._2_2_ = 0x101;
  DAT_00448bb8._0_2_ = 0;
  DAT_00448bb8._3_1_ = 0;
  DAT_00448bb0._3_1_ = 0;
  DAT_00448bac._0_2_ = 0;
  DAT_00448bb8._2_1_ = 1;
  DAT_00448bb0._2_1_ = 0;
  DAT_00448bac._2_2_ = 1;
  DAT_00448bb0._0_2_ = 0;
  iVar8 = 5;
  piVar7 = &DAT_0043de88;
  do {
    if (*piVar7 != 0) {
      uVar2 = *(undefined1 *)(puVar5 + 4);
      uVar3 = *(undefined1 *)(puVar5 + 6);
      iVar4 = (*piVar7 + -1) * 0xb;
      (&DAT_00448bf0)[iVar4] = 0xb;
      (&DAT_00448bf1)[iVar4] = 0x24;
      (&DAT_00448bf2)[iVar4] = 2;
      (&DAT_00448bf3)[iVar4] = 1;
      (&DAT_00448bf4)[iVar4] = uVar2;
      (&DAT_00448bf5)[iVar4] = uVar3;
      (&DAT_00448bf6)[iVar4] = 0x18;
      uVar1 = *puVar5;
      (&DAT_00448bf7)[iVar4] = 1;
      (&DAT_00448bf8)[iVar4] = (char)uVar1;
      (&DAT_00448bf9)[iVar4] = (char)((uint)uVar1 >> 8);
      (&DAT_00448bfa)[iVar4] = (char)((uint)uVar1 >> 0x10);
    }
    puVar5 = puVar5 + 8;
  } while ((iVar8 != 0) && (iVar8 = iVar8 + -1, piVar7 = piVar7 + 8, iVar8 != 0));
  DAT_00448bc2 = 0;
  DAT_00448bbc = 0x2507;
  DAT_00448bbe = 1;
  DAT_00448bc0 = 0;
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0036a3b4 INSTRUCTION LSH R0 = R7 >> 0x8
SCALAR 0x8 AT 0036a47a INSTRUCTION LSH|| R6 = R7 >> 0x8
SCALAR 0x8 AT 0036b26a INSTRUCTION STORE [P3 + 0x8] = R0
SCALAR 0x8 AT 0036b2a2 INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT 0036b37e INSTRUCTION LOAD R1 = [P1 + 0x8]
SCALAR 0x8 AT 0036b394 INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT 0036b3aa INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT 0036b422 INSTRUCTION LOAD R0 = [P1 + 0x8]
SCALAR 0x8 AT 0036b4fe INSTRUCTION LSH R3 = R0 << 0x8
FUNCTION 0036b4b0 FUN_0036b4b0 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0036b4b0(void)

{
  uint uVar1;
  
  _DAT_0044906c = DAT_0043dfb0;
  DAT_00449070 = DAT_0044904c;
  uVar1 = 0;
  if (DAT_00449058 <= DAT_00449050) {
    uVar1 = DAT_00449050 - DAT_00449058;
  }
  DAT_00449074._0_2_ = (ushort)(byte)(uVar1 >> 0x18) | (ushort)(((uVar1 & 0xff0000) >> 0x10) << 8);
  DAT_00449074._2_2_ = (ushort)(uVar1 >> 8) & 0xff | (ushort)((uVar1 & 0xff) << 8);
  DAT_00449078 = 0;
  uRam00449079 = 0;
  FUN_0036e468(DAT_00449040,&DAT_0044906c,0xd);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0036b50e INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT 0036b51a INSTRUCTION LSHIFT R0 >>= 0x8
SCALAR 0x8 AT 0036ba8c INSTRUCTION LOAD P1 = [P1 + 0x8]
FUNCTION 0036ba68 FUN_0036ba68 success=true

void FUN_0036ba68(void)

{
  int iVar1;
  
  if (DAT_0044909c == 0) {
    DAT_0044909c = 1;
    (*(code *)*DAT_004490a8)();
    iVar1 = (*(code *)DAT_004490a8[2])();
    DAT_004490a4 = (uint)(iVar1 != 0);
    DAT_004490a0 = (*(code *)DAT_004490a8[3])();
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = (*(code *)DAT_004490a8[2])();
  DAT_004490a4 = (uint)(iVar1 != 0);
  DAT_004490a0 = (*(code *)DAT_004490a8[3])();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0036ba96 INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 0036baaa INSTRUCTION LOAD P1 = [P1 + 0x8]
SCALAR 0x8 AT 0036bab6 INSTRUCTION STORE [P5 + 0x8] = R0
SCALAR 0x8 AT 0036bb38 INSTRUCTION LOAD R1 = [P1 + 0x8]
FUNCTION 0036bb20 FUN_0036bb20 success=true

void FUN_0036bb20(undefined4 *param_1)

{
  DAT_0044c4d8 = *param_1;
  DAT_0044c4dc = param_1[1];
  DAT_0044c4e0 = param_1[2];
  DAT_004494ac = 0;
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0036c134 INSTRUCTION LOAD R7 = 0x8
FUNCTION 0036c11e FUN_0036c11e success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_0036c11e(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if ((uVar1 == 6) || (uVar1 == 7)) {
    iVar2 = 0;
    if ((ushort)param_1[1] < 8) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
  }
  else {
    iVar2 = 0;
    if (uVar1 < 0xf) {
      iVar2 = uVar1 * 0x20 + 0x44c868;
    }
  }
  if (iVar2 != 0) {
    iVar2 = FUN_ffa00a54();
    if (iVar2 == 0) {
                    /* WARNING: Treating indirect jump as return */
      return 1;
    }
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 0036c14c INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT 0036c32c INSTRUCTION LOAD R2 = W [P1 + 0x8] (Z)
FUNCTION 0036c310 FUN_0036c310 success=true

void FUN_0036c310(undefined1 *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)FUN_0036e058();
  uVar1 = puVar2[4];
  *param_1 = 0x12;
  param_1[1] = 1;
  param_1[2] = (char)*puVar2;
  param_1[3] = (char)((ushort)*puVar2 >> 8);
  param_1[4] = *(undefined1 *)(puVar2 + 1);
  param_1[5] = *(undefined1 *)((int)puVar2 + 3);
  param_1[6] = *(undefined1 *)(puVar2 + 2);
  param_1[7] = 0x40;
  param_1[8] = (char)puVar2[3];
  param_1[9] = (char)((ushort)puVar2[3] >> 8);
  param_1[10] = (char)uVar1;
  param_1[0xb] = (char)((ushort)uVar1 >> 8);
  param_1[0xc] = (char)puVar2[5];
  param_1[0xd] = (char)((ushort)puVar2[5] >> 8);
  param_1[0xe] = *(undefined1 *)(puVar2 + 6);
  param_1[0xf] = *(undefined1 *)((int)puVar2 + 0xd);
  param_1[0x10] = *(undefined1 *)(puVar2 + 7);
  param_1[0x11] = 1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0036c33c INSTRUCTION LSHIFT R1 >>= 0x8
SCALAR 0x8 AT 0036c358 INSTRUCTION LSHIFT R1 >>= 0x8
SCALAR 0x8 AT 0036c360 INSTRUCTION LSH|| R1 = R1 >> 0x8
SCALAR 0x8 AT 0036c374 INSTRUCTION LSHIFT R1 >>= 0x8
SCALAR 0x8 AT 0036c378 INSTRUCTION LOAD R1 = B [P1 + 0x8] (Z)
SCALAR 0x8 AT 0036c3c4 INSTRUCTION LSHIFT R1 >>= 0x8
FUNCTION 0036c398 FUN_0036c398 success=true

void FUN_0036c398(undefined1 *param_1)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_0036e058();
  *param_1 = 10;
  param_1[1] = 6;
  param_1[2] = (char)*puVar1;
  param_1[3] = (char)((ushort)*puVar1 >> 8);
  param_1[4] = *(undefined1 *)(puVar1 + 1);
  param_1[5] = *(undefined1 *)((int)puVar1 + 3);
  param_1[6] = *(undefined1 *)(puVar1 + 2);
  param_1[7] = 0x40;
  param_1[8] = 1;
  param_1[9] = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0036c500 INSTRUCTION LOAD R0 = 0x8
FUNCTION 0036c3ec FUN_0036c3ec success=true

undefined4 FUN_0036c3ec(undefined1 *param_1,int param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  char cVar11;
  ushort uVar12;
  int *piVar13;
  undefined *puVar14;
  bool bVar15;
  code *UNRECOVERED_JUMPTABLE;
  int iVar16;
  int local_c;
  
  if (param_3 < 2) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  if (param_3 == 2) {
    local_c = FUN_0036e3a4();
  }
  else {
    if (param_3 != 7) {
      return 0;
    }
    uVar7 = FUN_0036e3a4();
    if ((uVar7 < 2) || ((local_c = 3, uVar7 != 2 && (local_c = 2, uVar7 != 3)))) {
                    /* WARNING: Treating indirect jump as return */
      return 0;
    }
  }
  iVar8 = FUN_0036e058();
  if (iVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0036c77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*UNRECOVERED_JUMPTABLE)(0);
    return uVar10;
  }
  if (1 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x0036c76a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*UNRECOVERED_JUMPTABLE)(0);
    return uVar10;
  }
  iVar8 = FUN_00369fc4();
  if ((iVar8 == 0) || (iVar8 = FUN_00369fc4(), iVar8 == 2)) {
    FUN_0036a350(local_c);
  }
  puVar9 = (undefined1 *)FUN_0036e230(param_2);
  if (puVar9 == (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0036c750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*UNRECOVERED_JUMPTABLE)(0);
    return uVar10;
  }
  uVar4 = 1;
  uVar12 = 0;
  cVar11 = '\0';
  if (local_c == 3) {
    uVar4 = 0x14;
  }
  while ((bVar15 = uVar12 < uVar4, uVar12 = uVar12 + 1, bVar15 &&
         (iVar8 = FUN_0036e3b4(param_2), iVar8 != 0))) {
    if (*(char *)(iVar8 + 1) == '\0') {
      cVar11 = cVar11 + '\x01';
    }
  }
  *param_1 = 9;
  param_1[1] = (char)param_3;
  param_1[4] = cVar11;
  param_1[5] = *puVar9;
  param_1[6] = puVar9[1];
  param_1[7] = puVar9[2];
  param_1[8] = puVar9[3];
  iVar8 = FUN_00369fc4();
  uVar12 = 9;
  if (iVar8 == 2) {
    param_1[0x10] = 0;
    param_1[0xe] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0xff;
    param_1[0xf] = 0xff;
    param_1[9] = 8;
    param_1[10] = 0xb;
    param_1[0xc] = 3;
    uVar12 = 0x11;
  }
  uVar2 = 0;
  do {
    do {
      uVar5 = uVar2;
      if ((uVar4 <= uVar5) ||
         (puVar9 = (undefined1 *)FUN_0036e3b4(param_2,uVar5), puVar9 == (undefined1 *)0x0)) {
        param_1[2] = (char)uVar12;
        param_1[3] = (char)(uVar12 >> 8);
                    /* WARNING: Could not recover jumptable at 0x0036c73e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (*UNRECOVERED_JUMPTABLE)();
        return uVar10;
      }
      iVar8 = FUN_00369fc4();
      uVar2 = uVar5 + 1;
    } while (((((iVar8 == 2) || (iVar8 = FUN_00369fc4(), iVar8 == 0)) && (puVar9[2] == -1)) &&
             ((puVar9[3] == '\x01' && (puVar9[4] == '\x02')))) &&
            ((iVar8 = FUN_0036a1b4(), iVar8 != 0 && (iVar8 = FUN_0036ad6c(puVar9[1]), iVar8 == 0))))
    ;
    iVar8 = *(int *)(puVar9 + 8);
    iVar16 = *(int *)(puVar9 + 0xc);
    param_1[uVar12] = 9;
    param_1[uVar12 + 1] = 4;
    cVar11 = iVar8 != 0;
    if (iVar16 != 0) {
      cVar11 = (iVar8 != 0) + '\x01';
    }
    iVar8 = FUN_00369fc4();
    if ((iVar8 == 2) && (puVar9[2] == '\b')) {
      param_1[uVar12 + 2] = 3;
    }
    else {
      param_1[uVar12 + 2] = *puVar9;
    }
    param_1[uVar12 + 3] = puVar9[1];
    param_1[uVar12 + 4] = cVar11;
    param_1[uVar12 + 5] = (char)(param_1 + uVar12 + 8);
    param_1[uVar12 + 6] = puVar9[3];
    param_1[uVar12 + 7] = puVar9[4];
    param_1[uVar12 + 8] = puVar9[5];
    uVar12 = uVar12 + 9;
    iVar8 = 2;
    piVar13 = (int *)(puVar9 + 0x24);
    do {
      if ((byte *)*piVar13 != (byte *)0x0) {
        bVar1 = *(byte *)*piVar13;
        if (bVar1 != 0) {
          bVar3 = 0;
          do {
            iVar16 = -1;
            do {
              uVar7 = (uint)bVar3;
              bVar3 = bVar3 + 1;
              param_1[uVar12 + uVar7] = *(undefined1 *)(*piVar13 + uVar7);
              if (bVar1 <= bVar3) goto LAB_0036c680;
            } while ((iVar16 != 0) && (iVar16 = iVar16 + -1, iVar16 != 0));
          } while( true );
        }
LAB_0036c680:
        uVar12 = uVar12 + bVar1;
      }
    } while ((iVar8 != 0) && (iVar8 = iVar8 + -1, piVar13 = piVar13 + 1, iVar8 != 0));
    puVar14 = &DAT_0043e07c;
    uVar6 = 0;
    while (uVar6 < 2) {
      iVar8 = FUN_0036e410(param_2,uVar5);
      uVar6 = uVar6 + 1;
      if (iVar8 != 0) {
        if (*(uint *)(iVar8 + 8) < 4) {
                    /* WARNING: Could not recover jumptable at 0x0036c6e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar10 = (**(code **)(puVar14 + *(uint *)(iVar8 + 8) * 4))();
          return uVar10;
        }
                    /* WARNING: Could not recover jumptable at 0x0036c6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (*UNRECOVERED_JUMPTABLE)(0);
        return uVar10;
      }
    }
  } while( true );
}


END_FUNCTION
SCALAR 0x8 AT 0036c562 INSTRUCTION ADD R5 += 0x8
SCALAR 0x8 AT 0036c5ae INSTRUCTION LOAD R1 = 0x8
SCALAR 0x8 AT 0036c61a INSTRUCTION ADD R5 += 0x8
SCALAR 0x8 AT 0036c6b4 INSTRUCTION LOAD P1 = [P5 + 0x8]
SCALAR 0x8 AT 0036c72e INSTRUCTION LSHIFT R1 >>= 0x8
SCALAR 0x8 AT 0036c79e INSTRUCTION LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT 0036c802 INSTRUCTION LSH|| R0 = R1 >> 0x8
SCALAR 0x8 AT 0036c882 INSTRUCTION LOAD R0 = W [FP + 0x8] (X)
SCALAR 0x8 AT 0036c992 INSTRUCTION LSHIFT R0 >>= 0x8
SCALAR 0x8 AT 0036cb3a INSTRUCTION LSHIFT R1 >>= 0x8
SCALAR 0x8 AT 0036cbb2 INSTRUCTION LSH|| R2 = R1 >> 0x8
SCALAR 0x8 AT 0036dacc INSTRUCTION STORE [P1 + 0x8] = R0
FUNCTION 0036dac6 FUN_0036dac6 success=true

void FUN_0036dac6(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


END_FUNCTION
SCALAR 0x8 AT 0036e090 INSTRUCTION ADD P5 += 0x8
FUNCTION 0036e068 FUN_0036e068 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined8 FUN_0036e068(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar1 = FUN_0036e058();
  iVar2 = *(int *)(iVar1 + 0x24);
  uVar5 = (uint)*(ushort *)(iVar1 + 0x28);
  if (uVar5 != 0) {
    iVar1 = 0;
    piVar3 = (int *)(iVar2 + 8);
    do {
      if (((param_2 == *piVar3) && (param_3 == *(int *)(iVar2 + 4))) &&
         (param_1 == *(byte *)(piVar3 + -2))) {
        puVar4 = &DAT_0044dcf0 + iVar1 * 9;
        goto LAB_0036e0ae;
      }
      iVar2 = iVar2 + 0x1c;
    } while ((uVar5 != 0) && (uVar5 = uVar5 - 1, iVar1 = iVar1 + 1, piVar3 = piVar3 + 7, uVar5 != 0)
            );
  }
  puVar4 = (undefined4 *)0x0;
LAB_0036e0ae:
  if (puVar4 != (undefined4 *)0x0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 0036e0da INSTRUCTION STORE [P5 + 0x8] = R1
SCALAR 0x8 AT 0036e430 INSTRUCTION ADD R0 += 0x8
FUNCTION 0036e410 FUN_0036e410 success=true

undefined4 FUN_0036e410(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0036e3b4();
  if (iVar1 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  if (param_3 < 2) {
                    /* WARNING: Treating indirect jump as return */
    return *(undefined4 *)(iVar1 + 8 + param_3 * 4);
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT 0036e4d2 INSTRUCTION STORE [P1 + 0x8] = R2
FUNCTION 0036e4b0 FUN_0036e4b0 success=true

undefined4 FUN_0036e4b0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    param_1[1] = param_2;
    param_1[2] = param_3;
    param_1[3] = param_4;
    param_1[4] = 0;
    if (*(char *)*param_1 != '\0') {
      FUN_003650ce();
    }
                    /* WARNING: Could not recover jumptable at 0x0036e4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(1);
    return uVar1;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT ffa002e8 INSTRUCTION ADD R0 += 0x8
FUNCTION ffa002e0 FUN_ffa002e0 success=true

void FUN_ffa002e0(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 *extraout_R1;
  undefined1 *puVar1;
  bool bVar2;
  undefined4 in_stack_00000000;
  
  bVar2 = param_3 < 1;
  FUN_003279e0(&stack0x00000000);
  puVar1 = extraout_R1;
  if (!bVar2) {
    do {
      *param_1 = *puVar1;
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      param_1 = param_1 + 1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  FUN_003279dc(in_stack_00000000);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT ffa004c6 INSTRUCTION _STORE W [P4 + 0x8] = R5
FUNCTION ffa00458 FUN_ffa00458 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ffa00458(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_0032ac10();
  sVar1 = *(short *)((int)param_2 + 10);
  uVar4 = (ushort)param_3;
  if ((_DAT_ff800d74 & 2) == 1) {
    if (sVar1 == 0) {
      if (param_4 == 0) {
        uVar3 = 1;
        *(ushort *)param_2[1] = uVar4;
        FUN_ffa00402(param_1,param_2);
        *(undefined4 *)((int)param_2 + 10) = uVar3;
      }
      else {
        puVar5 = (ushort *)param_2[1];
        FUN_ffa00324(param_1,param_2,param_4);
        uVar2 = FUN_ffa02b74();
        param_2[3] = uVar2;
        param_2[2] = param_3;
        *(uint *)((int)param_2 + 10) = uVar2 & 0xffff0000;
        param_2[4] = (uint)*puVar5 << 0x10;
      }
    }
    else {
      puVar5 = (ushort *)param_2[1];
      *param_2 = 0;
      if (param_4 == 0) {
        *puVar5 = uVar4;
        *(undefined4 *)((int)param_2 + 10) = 1;
      }
      else {
        if (param_3 != (short)*puVar5) {
          FUN_ffa00324(param_1,param_2,param_4);
          uVar2 = FUN_ffa02b74();
          param_2[3] = uVar2 & 0xffff0000;
          *(uint *)((int)param_2 + 10) = uVar2 & 0xffff0000;
          param_2[2] = param_3;
          param_2[4] = (uint)*puVar5 << 0x10;
          FUN_ffa0031a(param_1,param_2);
          FUN_0032ac64();
          FUN_0032b2b0(*(undefined4 *)(param_1 + 0x14));
                    /* WARNING: Treating indirect jump as return */
          return;
        }
        *(undefined4 *)((int)param_2 + 10) = 1;
      }
    }
  }
  else {
    *(ushort *)param_2[1] = uVar4;
    if (sVar1 == 0) {
      FUN_ffa00402(param_1,param_2);
      *(undefined4 *)((int)param_2 + 10) = 1;
    }
    else {
      *(undefined4 *)((int)param_2 + 10) = 1;
    }
  }
  FUN_0032ac64();
                    /* WARNING: Could not recover jumptable at 0xffa004e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT ffa00536 INSTRUCTION _STORE W [P4 + 0x8] = R5
SCALAR 0x8 AT ffa009e6 INSTRUCTION LOAD R0 = [P0 + 0x8]
FUNCTION ffa009cc FUN_ffa009cc success=true

undefined4 FUN_ffa009cc(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  csync();
  uVar5 = IMASK;
  IMASK = 0;
  IMASK = uVar5 & 0xffffcf9f;
  csync();
  if (DAT_00442d38 == 0x100) {
    uVar6 = 0xffffffd5;
  }
  else {
    iVar7 = DAT_00442d34 * 0x20;
    uVar6 = param_1[1];
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    uVar3 = param_1[4];
    uVar4 = param_1[5];
    *(undefined4 *)(&DAT_00442d3c + iVar7) = *param_1;
    *(undefined4 *)(&DAT_00442d40 + iVar7) = uVar6;
    *(undefined4 *)(&DAT_00442d44 + iVar7) = uVar1;
    *(undefined4 *)(&DAT_00442d48 + iVar7) = uVar2;
    *(undefined4 *)(&DAT_00442d4c + iVar7) = uVar3;
    *(undefined4 *)(&DAT_00442d50 + iVar7) = uVar4;
    *(undefined4 *)(&DAT_00442d54 + iVar7) = param_1[6];
    *(undefined4 *)(&DAT_00442d58 + iVar7) = param_1[7];
    DAT_00442d34 = DAT_00442d34 + 1;
    if (0xff < DAT_00442d34) {
      DAT_00442d34 = 0;
    }
    uVar6 = 0;
    DAT_00442d38 = DAT_00442d38 + 1;
  }
  csync();
  uVar5 = IMASK;
  IMASK = 0;
  IMASK = uVar5 | 0x3060;
  csync();
  return uVar6;
}


END_FUNCTION
SCALAR 0x8 AT ffa00a4a INSTRUCTION _LOAD R1 = [P0 + 0x8]
SCALAR 0x8 AT ffa00a50 INSTRUCTION STORE [P0 + 0x8] = R1
SCALAR 0x8 AT ffa00aba INSTRUCTION LOAD R0 = [P0 + 0x8]
FUNCTION ffa00a54 FUN_ffa00a54 success=true

uint FUN_ffa00a54(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 0x10) == 3)) &&
     (*(int *)(*(int *)(param_1 + 4) + 0xc) != 0)) {
    FUN_ffa0095c(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  iVar1 = FUN_ffa009cc();
  if (iVar1 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0xffffffd5;
  }
  iVar1 = FUN_ffa00e9c(DAT_00442d2c);
  uVar2 = (uint)(iVar1 == -0x2b);
  if (iVar1 == -0x2b) {
    uVar2 = 0;
  }
                    /* WARNING: Treating indirect jump as return */
  return uVar2;
}


END_FUNCTION
SCALAR 0x8 AT ffa00b4c INSTRUCTION LOAD R0 = [P4 + 0x8]
FUNCTION ffa00b30 FUN_ffa00b30 success=true

undefined4 FUN_ffa00b30(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_0032ac10();
  iVar7 = 0;
  iVar8 = param_1[1];
  uVar1 = param_1[3];
  uVar2 = param_1[2];
  uVar4 = *param_1;
  uVar6 = param_1[5];
  iVar5 = param_1[6];
  iVar3 = param_1[4];
  if (*(int *)(iVar8 + 0xc) != 0) {
    if (iVar3 == 0) {
      do {
        FUN_0032ac64();
        FUN_0032b6d8(uVar6);
        FUN_0032ac10();
      } while (*(int *)(iVar8 + 0xc) != 0);
    }
    else if (iVar3 == 1) {
      do {
        iVar3 = iVar7;
        if (iVar5 <= iVar3) break;
        FUN_0032ac64();
        FUN_0032b6d8(uVar6);
        FUN_0032ac10();
        iVar7 = iVar3 + 1;
      } while (*(int *)(iVar8 + 0xc) != 0);
      iVar7 = 0;
      if (iVar5 == iVar3) {
        FUN_0032ac64();
                    /* WARNING: Could not recover jumptable at 0xffa00c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*UNRECOVERED_JUMPTABLE)(0xffffffce);
        return uVar4;
      }
    }
    else {
      iVar7 = 1;
      if (iVar3 != 3) {
        FUN_0032ac64();
                    /* WARNING: Treating indirect jump as return */
        return 0xffffffd5;
      }
    }
  }
  *(int *)(iVar8 + 0xc) = iVar8;
  FUN_ffa0095c(uVar2,iVar8,uVar1);
  FUN_0032ac64();
  if (iVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0xffa00bce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)(0);
    return uVar4;
  }
  FUN_0032a324(uVar4,iVar8);
                    /* WARNING: Could not recover jumptable at 0xffa00bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)();
  return uVar4;
}


END_FUNCTION
SCALAR 0x8 AT ffa00c60 INSTRUCTION ADD R5 += 0x8
FUNCTION ffa00c54 FUN_ffa00c54 success=true

undefined4 FUN_ffa00c54(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000000;
  
  iVar8 = 0;
  uVar4 = *param_1;
  iVar1 = param_1[6];
  uVar2 = *(undefined4 *)(param_1[7] + 4);
  FUN_0032ac10();
  iVar7 = param_1[1];
  uVar6 = param_1[7];
  iVar3 = FUN_ffa00930(uVar6,iVar7,&stack0x00000000);
  iVar5 = param_1[4];
  if (iVar3 == 0) {
    if (iVar5 == 0) {
      do {
        FUN_0032ac64();
        FUN_0032b6d8(uVar6);
        FUN_0032ac10();
        iVar1 = FUN_ffa00930(uVar6,iVar7,&stack0x00000000);
      } while (iVar1 == 0);
    }
    else if (iVar5 == 1) {
      do {
        iVar3 = iVar8;
        if (iVar1 <= iVar3) break;
        FUN_0032ac64();
        FUN_0032b6d8(uVar6);
        FUN_0032ac10();
        iVar5 = FUN_ffa00930(uVar6,iVar7,&stack0x00000000);
        iVar8 = iVar3 + 1;
      } while (iVar5 == 0);
      iVar8 = 0;
      if (iVar1 == iVar3) {
        FUN_0032ac64();
                    /* WARNING: Could not recover jumptable at 0xffa00d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*UNRECOVERED_JUMPTABLE)(0xffffffce);
        return uVar4;
      }
    }
    else {
      if (iVar5 != 3) {
        FUN_0032ac64();
                    /* WARNING: Treating indirect jump as return */
        return 0xffffffd5;
      }
      iVar8 = 1;
      in_stack_00000000 = iVar7;
    }
  }
  *(undefined4 *)(in_stack_00000000 + 0xc) = 1;
  FUN_ffa0095c(iVar7,in_stack_00000000,uVar2);
  FUN_0032ac64();
  if (iVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0xffa00d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)(0);
    return uVar4;
  }
  FUN_0032a324(uVar4,in_stack_00000000);
                    /* WARNING: Could not recover jumptable at 0xffa00d3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)();
  return uVar4;
}


END_FUNCTION
SCALAR 0x8 AT ffa00c80 INSTRUCTION _LOAD R1 = [P5 + 0x8]
SCALAR 0x8 AT ffa00e52 INSTRUCTION LOAD P1 = [P0 + 0x8]
FUNCTION ffa00dd4 FUN_ffa00dd4 success=true

undefined4 FUN_ffa00dd4(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  uVar2 = IPEND;
  if (((uVar2 & 0x706f) == 0) && (uVar2 = IMASK, (uVar2 & 0x3060) != 0)) {
    uVar4 = 0xffffffee;
    if ((0 < param_1) && (param_1 <= DAT_ff8003bc)) {
      param_1 = param_1 + -1;
      piVar5 = &DAT_ff8008b8 + param_1 * 4;
      csync();
      uVar2 = IMASK;
      IMASK = 0;
      IMASK = uVar2 & 0xffffcf9f;
      csync();
      piVar1 = (int *)*piVar5;
      if (piVar5 == piVar1) {
        if ((uint)(&DAT_ff8008c4)[param_1 * 4] < *(uint *)((&DAT_ff8008c0)[param_1 * 4] + 8)) {
          uVar4 = 0;
          (&DAT_ff8008c4)[param_1 * 4] = (&DAT_ff8008c4)[param_1 * 4] + 1;
        }
        else {
          uVar4 = 0xffffffd5;
        }
      }
      else {
        *piVar5 = *piVar1;
        *(int **)(*piVar1 + 4) = piVar5;
        iVar3 = FUN_0032bbf8(piVar1);
        if (iVar3 != 0) {
          FUN_ffa00798();
        }
        uVar4 = 0;
      }
      csync();
      uVar2 = IMASK;
      IMASK = 0;
      IMASK = uVar2 | 0x3060;
      csync();
    }
  }
  else {
    uVar4 = 0xffffffe7;
  }
                    /* WARNING: Treating indirect jump as return */
  return uVar4;
}


END_FUNCTION
SCALAR 0x8 AT ffa00e56 INSTRUCTION LOAD R1 = [P1 + 0x8]
SCALAR 0x8 AT ffa00f1a INSTRUCTION LOAD P1 = [P0 + 0x8]
FUNCTION ffa00e9c FUN_ffa00e9c success=true

undefined4 FUN_ffa00e9c(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  uVar2 = IPEND;
  if (((uVar2 & 0x706f) == 0) || (uVar2 = IMASK, (uVar2 & 0x3060) == 0)) {
    uVar4 = 0xffffffe7;
  }
  else {
    uVar4 = 0xffffffee;
    if ((0 < param_1) && (param_1 <= DAT_ff8003bc)) {
      param_1 = param_1 + -1;
      piVar5 = &DAT_ff8008b8 + param_1 * 4;
      csync();
      uVar2 = IMASK;
      IMASK = 0;
      IMASK = uVar2 & 0xffffcf9f;
      csync();
      piVar1 = (int *)*piVar5;
      if (piVar5 == piVar1) {
        if ((uint)(&DAT_ff8008c4)[param_1 * 4] < *(uint *)((&DAT_ff8008c0)[param_1 * 4] + 8)) {
          uVar4 = 0;
          (&DAT_ff8008c4)[param_1 * 4] = (&DAT_ff8008c4)[param_1 * 4] + 1;
        }
        else {
          uVar4 = 0xffffffd5;
        }
      }
      else {
        *piVar5 = *piVar1;
        *(int **)(*piVar1 + 4) = piVar5;
        iVar3 = FUN_0032bbf8(piVar1);
        if (iVar3 != 0) {
          DAT_00445160 = 1;
        }
        uVar4 = 0;
      }
      csync();
      uVar2 = IMASK;
      IMASK = 0;
      IMASK = uVar2 | 0x3060;
      csync();
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return uVar4;
}


END_FUNCTION
SCALAR 0x8 AT ffa00f1e INSTRUCTION LOAD R1 = [P1 + 0x8]
SCALAR 0x8 AT ffa01010 INSTRUCTION ADD R1 += 0x8
FUNCTION ffa00f68 FUN_ffa00f68 success=true

undefined4 FUN_ffa00f68(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000000;
  
  uVar1 = IPEND;
  if ((((uVar1 & 0x706f) == 0) && (uVar1 = IMASK, (uVar1 & 0x3060) != 0)) && (DAT_00445164 != 0)) {
    uVar2 = 0xffffffee;
    if ((0 < param_1) && (param_1 <= DAT_ff8003bc)) {
      param_1 = param_1 + -1;
      csync();
      uVar1 = IMASK;
      IMASK = 0;
      IMASK = uVar1 & 0xffffcf9f;
      csync();
      if ((&DAT_ff8008c4)[param_1 * 4] == 0) {
        FUN_0032bd1c(&DAT_ff8008b8 + param_1 * 4,&stack0x00000000);
        FUN_ffa00798();
      }
      else {
        in_stack_00000000 = 0;
        (&DAT_ff8008c4)[param_1 * 4] = (&DAT_ff8008c4)[param_1 * 4] + -1;
      }
      csync();
      uVar1 = IMASK;
      IMASK = 0;
      IMASK = uVar1 | 0x3060;
      csync();
      uVar2 = in_stack_00000000;
    }
  }
  else {
    uVar2 = 0xffffffe7;
  }
                    /* WARNING: Treating indirect jump as return */
  return uVar2;
}


END_FUNCTION
SCALAR 0x8 AT ffa010e8 INSTRUCTION ADD R1 += 0x8
FUNCTION ffa01024 FUN_ffa01024 success=true

undefined4 FUN_ffa01024(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000000;
  undefined1 auStack_14 [12];
  
  uVar1 = IPEND;
  if ((((uVar1 & 0x706f) == 0) && (uVar1 = IMASK, (uVar1 & 0x3060) != 0)) && (DAT_00445164 != 0)) {
    uVar2 = 0xffffffee;
    if (((0 < param_1) && (param_1 <= DAT_ff8003bc)) && (uVar2 = 0xffffffef, -2 < param_2)) {
      param_1 = param_1 + -1;
      csync();
      uVar1 = IMASK;
      IMASK = 0;
      IMASK = uVar1 & 0xffffcf9f;
      csync();
      if ((&DAT_ff8008c4)[param_1 * 4] == 0) {
        if (param_2 == 0) {
          in_stack_00000000 = 0xffffffce;
        }
        else {
          FUN_0032bdc4(&DAT_ff8008b8 + param_1 * 4,&stack0x00000000,auStack_14,param_2);
          FUN_ffa00798();
        }
      }
      else {
        in_stack_00000000 = 0;
        (&DAT_ff8008c4)[param_1 * 4] = (&DAT_ff8008c4)[param_1 * 4] + -1;
      }
      csync();
      uVar1 = IMASK;
      IMASK = 0;
      IMASK = uVar1 | 0x3060;
      csync();
      uVar2 = in_stack_00000000;
    }
  }
  else {
    uVar2 = 0xffffffe7;
  }
                    /* WARNING: Treating indirect jump as return */
  return uVar2;
}


END_FUNCTION
SCALAR 0x8 AT ffa013c8 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT ffa01486 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT ffa017cc INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT ffa017f8 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT ffa01824 INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT ffa0182a INSTRUCTION _LOAD R0 = [P5 + 0x8]
SCALAR 0x8 AT ffa01aa0 INSTRUCTION LOAD P0 = [P1 + 0x8]
FUNCTION ffa01a78 FUN_ffa01a78 success=true

undefined4 FUN_ffa01a78(void)

{
  undefined2 uVar1;
  
  if (*(int *)(DAT_00419d84 + 0x10) == 0) {
    if (0 < DAT_00419d80) {
      uVar1 = SPI_RDBR;
      ssync();
      *(char *)DAT_00419d78 = (char)uVar1;
      DAT_00419d80 = DAT_00419d80 + -1;
      DAT_00419d78 = (undefined2 *)((int)DAT_00419d78 + 1);
      return 1;
    }
  }
  else if (0 < DAT_00419d80) {
    uVar1 = SPI_RDBR;
    ssync();
    *DAT_00419d78 = uVar1;
    DAT_00419d80 = DAT_00419d80 + -1;
    DAT_00419d78 = DAT_00419d78 + 1;
    return 1;
  }
  return 0;
}


END_FUNCTION
SCALAR 0x8 AT ffa01aae INSTRUCTION LOAD R1 = [P1 + 0x8]
SCALAR 0x8 AT ffa01ab2 INSTRUCTION STORE [P1 + 0x8] = R1
SCALAR 0x8 AT ffa01ac6 INSTRUCTION LOAD P0 = [P1 + 0x8]
SCALAR 0x8 AT ffa01ad2 INSTRUCTION LOAD R1 = [P1 + 0x8]
SCALAR 0x8 AT ffa01ad6 INSTRUCTION STORE [P1 + 0x8] = R1
SCALAR 0x8 AT ffa01b1c INSTRUCTION LOAD R0 = [P1 + 0x8]
FUNCTION ffa01adc FUN_ffa01adc success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_ffa01adc(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((DAT_00419d7c < 1) && (DAT_00419d80 < 2)) {
    if (-1 < *(int *)(DAT_00419d84 + 4)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    if (-1 < *(int *)(DAT_00419d84 + 8)) {
      FUN_00362b34();
    }
    SPI_CTL = 0;
    ssync();
    FUN_ffa01a78();
    DAT_00419d84 = 0;
                    /* WARNING: Could not recover jumptable at 0xffa01b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  FUN_ffa01a24();
  iVar3 = FUN_ffa01a78();
  if (iVar3 == 0) {
    uVar1 = SPI_RDBR;
  }
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
SCALAR 0x8 AT ffa01ecc INSTRUCTION LOAD R1 = W [P4 + 0x8] (Z)
FUNCTION ffa01e90 FUN_ffa01e90 success=true

void FUN_ffa01e90(undefined4 *param_1)

{
  ushort *puVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  byte in_stack_00000004;
  
  iVar3 = 0;
  puVar1 = (ushort *)*param_1;
  if ((code *)param_1[3] != (code *)0x0) {
    iVar3 = (*(code *)param_1[3])(&stack0x00000004);
  }
  if (iVar3 != 0) {
    param_1[1] = 1;
    *puVar1 = (ushort)in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0xffa01ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  param_1[1] = 0;
  uVar2 = IMASK;
  IMASK = 0;
  IMASK = uVar2;
                    /* WARNING: Could not recover jumptable at 0xffa01edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT ffa01eec INSTRUCTION LOAD R0 = [P1 + 0x8]
FUNCTION ffa01ede FUN_ffa01ede success=true

void FUN_ffa01ede(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = IMASK;
  IMASK = 0;
  IMASK = uVar1;
  if ((code *)param_1[2] != (code *)0x0) {
    (*(code *)param_1[2])((char)*(undefined2 *)*param_1);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT ffa0214c INSTRUCTION LOAD R0 = [P1 + 0x8]
FUNCTION ffa02140 FUN_ffa02140 success=true

void FUN_ffa02140(void)

{
  if (DAT_00446f00 != 0) {
    DAT_00446f00 = 0;
    if (DAT_00446f0c != 0) {
      DAT_00446f0c = 0;
      USB_FADDR = (ushort)DAT_00446f10;
    }
    FUN_ffa02024(&stack0x00000000);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (DAT_00446f04 != 0) {
    DAT_00446f04 = 0;
    FUN_ffa02024(&stack0x00000000);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_ffa02024(&stack0x00000000);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT ffa0216c INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT ffa02186 INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT ffa021a2 INSTRUCTION STORE [P1 + 0x8] = R1
SCALAR 0x8 AT ffa021bc INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT ffa021c2 INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT ffa021da INSTRUCTION ADD R2 += 0x8
SCALAR 0x8 AT ffa02292 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT ffa022a8 INSTRUCTION LOAD R0 = 0x8
SCALAR 0x8 AT ffa022b0 INSTRUCTION LOAD R0 = W [FP + 0x8] (Z)
SCALAR 0x8 AT ffa022b6 INSTRUCTION LOAD R0 = W [FP + 0x8] (Z)
SCALAR 0x8 AT ffa022e0 INSTRUCTION LOAD R0 = W [FP + 0x8] (X)
SCALAR 0x8 AT ffa022e4 INSTRUCTION STORE W [FP + 0x8] = R0
SCALAR 0x8 AT ffa02382 INSTRUCTION _LOAD P0 = [P5 + 0x8]
FUNCTION ffa02324 FUN_ffa02324 success=true

void FUN_ffa02324(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_ff8010b8 == 0) {
    DMA3_IRQ_STATUS = 1;
  }
  else {
    DMA5_IRQ_STATUS = 1;
  }
  FUN_ffa02634(&DAT_ff802c84,&DAT_ff802c5c);
  if (DAT_ff8010b8 == 0) {
    FUN_ffa09e88();
  }
  else {
    FUN_ffa0a5f0();
  }
  (*DAT_ff8010b4)(&DAT_ff802bfc,&DAT_ff802c2c,&DAT_ff802c5c,&DAT_ff802c84);
                    /* WARNING: Could not recover jumptable at 0xffa023a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x8 AT ffa02510 INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT ffa02528 INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT ffa02678 INSTRUCTION STORE B [P2 + 0x8] = R1
FUNCTION ffa02634 FUN_ffa02634 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_ffa02634(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined2 *puVar8;
  int iVar9;
  uint *puVar7;
  
  iVar2 = DAT_ff801104;
  iVar4 = DAT_ff8010e0;
  if (DAT_ff801102 != '\0') {
    DAT_ff801102 = '\0';
    if (DAT_ff801109 != '\0') {
      DAT_ff801109 = '\0';
      *DAT_ff801130 = 0x4001;
    }
    ssync();
    DAT_ff801108 = (*DAT_ff801130 & 1) == 0;
  }
  if ((DAT_ff801114 != '\0') && (iVar4 == iVar2)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  iVar9 = (int)DAT_ff801116;
  do {
    *param_2 = 0;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    param_2 = param_2 + 1;
  } while (iVar9 != 0);
  if ((DAT_ff801108 == '\0') || (iVar4 != iVar2)) {
    return;
  }
  iVar4 = ((uint)(int)DAT_ff80110a >> 1) - 1;
  puVar6 = param_1 + 1;
  uVar5 = *param_1;
  puVar3 = DAT_ff80110c;
  do {
    puVar8 = puVar3;
    puVar7 = puVar6 + 1;
    uVar1 = *puVar6;
    *puVar8 = (short)((uVar5 & 0xfffffff) >> 4);
    puVar8[1] = (ushort)((uVar5 & 0xfffffff) >> 0x14) | (ushort)(uVar1 << 4) & 0xff00;
    puVar6 = puVar6 + 2;
    uVar5 = *puVar7;
    puVar8[2] = (short)((uVar1 << 4) >> 0x10);
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    puVar3 = puVar8 + 3;
  } while (iVar4 != 0);
  iVar4 = (*puVar6 & 0xfffffef) << 4;
  puVar8[3] = (short)((uVar5 & 0xfffffff) >> 4);
  puVar8[4] = (ushort)((uVar5 & 0xfffffff) >> 0x14) | (ushort)iVar4 & 0xff00;
  puVar8[5] = (short)((uint)iVar4 >> 0x10);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT ffa026dc INSTRUCTION LOAD R1 = B [P2 + 0x8] (X)
SCALAR 0x8 AT ffa0271e INSTRUCTION LSH R0 = R0 >> 0x8
SCALAR 0x8 AT ffa02742 INSTRUCTION BITCLR (R1,0x8)
SCALAR 0x8 AT ffa02744 INSTRUCTION LSH R0 = R0 >> 0x8
SCALAR 0x8 AT ffa02808 INSTRUCTION ASH|| R0 = R3 >>> 0x8
FUNCTION ffa027d8 FUN_ffa027d8 success=true

void FUN_ffa027d8(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  FUN_0036a15c(&local_20);
  FUN_0036a140(local_20,local_1c,local_10 != 0);
  uVar1 = (undefined1)((uint)local_20 >> 8);
  *param_1 = uVar1;
  uVar2 = (undefined1)((uint)local_20 >> 0x10);
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = local_18 != 0;
  param_1[5] = local_14 != 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x8 AT ffa0288a INSTRUCTION LOAD R0 = 0x8
FUNCTION ffa02840 FUN_ffa02840 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_ffa02840(void)

{
  DAT_ff8010f8 = (ushort)(byte)DAT_0041b138;
  FUN_ffa027d8(&DAT_ff8010fa);
  DAT_0041b138 = DAT_0041b138 ^ 1;
  *DAT_ff8011ac = 0;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT ffa02a0c INSTRUCTION STORE W [P1 + 0x8] = R0
FUNCTION ffa0297e FUN_ffa0297e success=true

void FUN_ffa0297e(void)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  
  puVar3 = DAT_ff80117c;
  uVar1 = USB_INTRTX;
  uVar6 = USB_INTRRX._0_2_;
  uVar4 = (uint)uVar6;
  USB_INTRTX = uVar1;
  USB_INTRRX = uVar4;
  uVar6 = uVar1 & 0xffdd | DAT_ff8010e8._2_2_;
  DAT_ff8010e8._2_2_ = uVar6;
  if ((uVar1 & 2) == 1) {
    DAT_ff8010e4 = DAT_ff8010e4 + 1;
    *(undefined4 *)(DAT_ff80117c + 8) = 0;
    *(undefined4 *)(puVar3 + 6) = 4;
    *(int **)(puVar3 + 2) = &DAT_ff8010e4;
    *(undefined4 *)(puVar3 + 4) = 0xff80;
    *puVar3 = 0x1b;
  }
  puVar3 = DAT_ff80115c;
  uVar2 = DAT_ff801128;
  uVar5 = (uint)(ushort)DAT_ff8010ec | uVar4 & 0xffffffdf;
  DAT_ff8010ec._0_2_ = (ushort)uVar5;
  if ((uVar4 & 0x20) == 1) {
    DAT_ff8010f0 = *DAT_ff80113c;
    uVar4 = (uint)DAT_ff8010f0;
    *(undefined4 *)(DAT_ff80115c + 8) = 0;
    *(uint *)(puVar3 + 6) = uVar4;
    *(uint *)(puVar3 + 2) = uVar2;
    *(uint *)(puVar3 + 4) = uVar2 >> 0x10;
    *puVar3 = 0x59;
  }
  if (uVar5 != 0 || uVar6 != 0) {
    TIMER_ENABLE = 0x40;
  }
  return;
}


END_FUNCTION
SCALAR 0x8 AT ffa02a3c INSTRUCTION STORE W [P1 + 0x8] = R2
SCALAR 0x8 AT ffa02ad0 INSTRUCTION LSH R0 = R0 << 0x8
FUNCTION ffa02a46 FUN_ffa02a46 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_ffa02a46(void)

{
  ushort uVar1;
  
  uVar1 = USB_DMA_INTERRUPT;
  USB_DMA_INTERRUPT = uVar1;
  if ((uVar1 & 2) == 1) {
    *DAT_ff801134 = *DAT_ff801134 & 0xfffe;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  if ((uVar1 & 8) == 1) {
    *DAT_ff801170 = 1;
  }
  if ((uVar1 & 0xfff5) != 0) {
    DAT_ff8010ec._2_2_ = uVar1 & 0xfff5 | DAT_ff8010ec._2_2_;
    TIMER_ENABLE = 0x40;
  }
  return;
}


END_FUNCTION
SCALAR 0x8 AT ffa02ada INSTRUCTION ASH|| R1 = R1 >>> 0x8
SCALAR 0x8 AT ffa02be6 INSTRUCTION LSH R0 = R1 << 0x8
FUNCTION ffa02b74 FUN_ffa02b74 success=true

uint FUN_ffa02b74(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 >> 0x17 & 0xff;
  uVar3 = uVar2 - 0x9e;
  uVar1 = param_1 & 0x7fffff;
  if ((int)uVar3 < 0) {
    if (uVar2 < 0x7f) {
      if (uVar1 != 0 || uVar2 != 0) {
        DAT_ff8013f4 = DAT_ff8013f4 | 1;
      }
      uVar1 = 0;
    }
    else {
      uVar2 = (uVar1 | 0x800000) << 8;
      uVar1 = uVar2 >> -uVar3;
      if (uVar2 << (uVar3 & 0x1f) != 0) {
        DAT_ff8013f4 = DAT_ff8013f4 | 1;
      }
      if ((int)param_1 < 0) {
        uVar1 = -uVar1;
      }
    }
  }
  else {
    if (param_1 != 0xcf000000) {
      DAT_ff8013f4 = DAT_ff8013f4 | 0x10;
      if (-1 < (int)param_1) {
        return 0x7fffffff;
      }
      if ((uVar2 == 0xff) && (uVar1 != 0)) {
        return 0x7fffffff;
      }
    }
    uVar1 = 0x80000000;
  }
  return uVar1;
}


END_FUNCTION
SCALAR 0x8 AT ffa02d46 INSTRUCTION ADD R2 += 0x8
FUNCTION ffa02d08 FUN_ffa02d08 success=true

uint FUN_ffa02d08(uint param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int in_stack_00000000;
  undefined4 in_stack_00000004;
  uint in_stack_00000008;
  int *piVar6;
  undefined1 *puVar7;
  int local_c;
  
  uVar1 = 0xffffffff;
  if (param_1 < param_3) {
    uVar5 = param_3 >> 0x10;
    uVar1 = 0xffff0000;
    if (param_1 < uVar5 << 0x10) {
      iVar2 = FUN_ffa03974(param_1,uVar5);
      uVar1 = iVar2 << 0x10;
    }
    FUN_ffa02ca8(param_3,uVar1,&stack0x00000004,&stack0x00000000);
    piVar6 = &local_c;
    puVar7 = &stack0x00000008;
    FUN_ffa02cdc(param_1,param_2,in_stack_00000004,in_stack_00000000,&local_c,&stack0x00000008);
    while (local_c < 0) {
      uVar1 = uVar1 - 0x10000;
      in_stack_00000000 = param_3 << 0x10;
      piVar6 = &local_c;
      puVar7 = &stack0x00000008;
      FUN_ffa02cf2(local_c,in_stack_00000008);
    }
    uVar4 = local_c << 0x10 | in_stack_00000008 >> 0x10;
    uVar3 = 0xffff;
    if (uVar4 < uVar5 << 0x10) {
      uVar3 = FUN_ffa03974(uVar4,uVar5,uVar4,in_stack_00000000,piVar6,puVar7);
    }
    uVar1 = uVar1 | uVar3;
  }
  return uVar1;
}


END_FUNCTION
SCALAR 0x8 AT ffa02d58 INSTRUCTION LOAD R2 = [FP + 0x8]
SCALAR 0x8 AT ffa02f10 INSTRUCTION LSH R2 = R1 << 0x8
FUNCTION ffa02e14 FUN_ffa02e14 success=true

int FUN_ffa02e14(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  local_1c = param_1 >> 0x17 & 0xff;
  local_18 = param_2 >> 0x17 & 0xff;
  local_10 = param_2 & 0x7fffff;
  iVar2 = (int)(param_1 ^ param_2) >> 0x1f;
  local_14 = param_1 & 0x7fffff;
  if (local_1c == 0xff) {
    if (local_14 == 0) {
      if (local_18 == 0xff) {
        if (local_10 == 0) {
          DAT_ff8013f4 = DAT_ff8013f4 | 0x10;
          iVar2 = -1;
        }
        else {
          iVar2 = FUN_ffa02dbc(param_1,param_2);
        }
      }
      else {
        iVar2 = iVar2 * -0x80000000 + 0x7f800000;
      }
    }
    else {
      iVar2 = FUN_ffa02dbc(param_1,param_2);
    }
  }
  else if (local_18 == 0xff) {
    if (local_10 == 0) {
      iVar2 = iVar2 * -0x80000000;
    }
    else {
      iVar2 = FUN_ffa02dbc(param_1,param_2);
    }
  }
  else {
    if (local_18 == 0) {
      if (local_10 == 0) {
        if (local_1c == 0 && local_14 == 0) {
          DAT_ff8013f4 = DAT_ff8013f4 | 0x10;
          return -1;
        }
        DAT_ff8013f4 = DAT_ff8013f4 | 8;
        return iVar2 * -0x80000000 + 0x7f800000;
      }
      FUN_ffa033d8(local_10,&local_18,&local_10);
    }
    if (local_1c == 0) {
      if (local_14 == 0) {
        return iVar2 * -0x80000000;
      }
      FUN_ffa033d8(local_14,&local_1c,&local_14);
    }
    local_10 = (local_10 | 0x800000) << 8;
    local_20 = (local_1c - local_18) + 0x7d;
    uVar1 = (local_14 | 0x800000) << 7;
    if (local_10 <= (local_14 | 0x800000) << 8) {
      local_20 = (local_1c - local_18) + 0x7e;
      uVar1 = (local_14 & 0x1ffffff | 0x800000) << 6;
    }
    local_14 = uVar1;
    uVar1 = FUN_ffa02d08(local_14,0);
    if ((uVar1 & 0x3f) < 3) {
      FUN_ffa02ca8(local_10,uVar1,&stack0x00000004,&stack0x00000000);
      FUN_ffa02cdc(local_14,0,in_stack_00000004,in_stack_00000000,&local_c,&stack0x00000008);
      while (local_c < 0) {
        uVar1 = uVar1 - 1;
        FUN_ffa02cf2(local_c,in_stack_00000008);
      }
      uVar1 = uVar1 | in_stack_00000008 != 0;
    }
    iVar2 = FUN_ffa033f8(-iVar2,local_20,uVar1);
  }
  return iVar2;
}


END_FUNCTION
SCALAR 0x8 AT ffa02f16 INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT ffa02f4e INSTRUCTION ADD R2 += 0x8
SCALAR 0x8 AT ffa02f68 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT ffa03068 INSTRUCTION LINK 0x8
FUNCTION ffa03068 FUN_ffa03068 success=true

/* WARNING: Control flow encountered unimplemented instructions */

int FUN_ffa03068(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_c;
  
  local_c = param_1 >> 0x17 & 0xff;
  uVar4 = param_2 >> 0x17 & 0xff;
  uVar3 = param_2 & 0x7fffff;
  uVar1 = param_1 & 0x7fffff;
  iVar2 = (int)(param_1 ^ param_2) >> 0x1f;
  if (local_c == 0xff) {
    if ((uVar1 == 0) && ((uVar4 != 0xff || (uVar3 == 0)))) {
      if (uVar4 == 0 && uVar3 == 0) {
        DAT_ff8013f4 = DAT_ff8013f4 | 0x10;
        iVar2 = -1;
      }
      else {
        iVar2 = iVar2 * -0x80000000 + 0x7f800000;
      }
    }
    else {
      iVar2 = FUN_ffa03010(param_1);
    }
  }
  else {
    if (uVar4 != 0xff) {
      if (local_c == 0) {
        if (uVar1 == 0) {
          return iVar2 * -0x80000000;
        }
        FUN_ffa033d8(uVar1,&local_c,&stack0x00000004);
      }
      if (uVar4 == 0) {
        if (uVar3 == 0) {
          return iVar2 * -0x80000000;
        }
        FUN_ffa033d8(uVar3,&stack0x00000008,&stack0x00000000);
      }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    if (uVar3 == 0) {
      if (local_c == 0 && uVar1 == 0) {
        DAT_ff8013f4 = DAT_ff8013f4 | 0x10;
        iVar2 = -1;
      }
      else {
        iVar2 = iVar2 * -0x80000000 + 0x7f800000;
      }
    }
    else {
      iVar2 = FUN_ffa03010(param_1);
    }
  }
  return iVar2;
}


END_FUNCTION
SCALAR 0x8 AT ffa030ba INSTRUCTION STORE [FP + 0x8] = R4
SCALAR 0x8 AT ffa0317c INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT ffa0318a INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT ffa0318e INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT ffa03198 INSTRUCTION LOAD R1 = [FP + 0x8]
SCALAR 0x8 AT ffa0319e INSTRUCTION LSHIFT R1 <<= 0x8
SCALAR 0x8 AT ffa031a0 INSTRUCTION STORE [FP + 0x8] = R1
SCALAR 0x8 AT ffa0333c INSTRUCTION ADD R1 += 0x8
FUNCTION ffa03326 FUN_ffa03326 success=true

int FUN_ffa03326(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < 0x10000) {
    param_1 = param_1 << 0x10;
    iVar1 = 0x10;
  }
  if (param_1 < 0x1000000) {
    iVar1 = iVar1 + 8;
    param_1 = param_1 << 8;
  }
  return iVar1 + (uint)(byte)(&DAT_ff8013fc)[param_1 >> 0x18];
}


END_FUNCTION
SCALAR 0x8 AT ffa0333e INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT ffa0348c INSTRUCTION LOAD R2 = [P0 + 0x8]
FUNCTION ffa033f8 FUN_ffa033f8 success=true

int FUN_ffa033f8(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  iVar1 = DAT_ff8013f0;
  puVar4 = &DAT_ff8013f0;
  iVar3 = 0x40;
  if ((DAT_ff8013f0 != 0) && (iVar3 = 0, DAT_ff8013f0 != 1)) {
    iVar3 = 0x7f;
    if (param_1 == 0) {
      if (DAT_ff8013f0 == 2) {
        iVar3 = 0;
      }
    }
    else if (DAT_ff8013f0 == 3) {
      iVar3 = 0;
    }
  }
  if (0xfc < (param_2 & 0xffff)) {
    if ((0xfd < (int)param_2) || ((param_2 == 0xfd && ((int)(iVar3 + param_3) < 0)))) {
      DAT_ff8013f4 = DAT_ff8013f4 | 5;
      return (param_1 * -0x80000000 + 0x7f800000) - (uint)(iVar3 == 0);
    }
    if ((int)param_2 < 0) {
      bVar5 = true;
      if ((DAT_ff8013f8 != 1) && (-2 < (int)param_2)) {
        bVar5 = iVar3 + param_3 < 0x80000000;
      }
      FUN_ffa03354(param_3,-param_2,&stack0x00000008);
      param_2 = 0;
      if ((bVar5) && ((param_3 & 0x7f) != 0)) {
        puVar4[1] = puVar4[1] | 2;
      }
    }
  }
  if ((param_3 & 0x7f) != 0) {
    puVar4[1] = puVar4[1] | 1;
  }
  uVar2 = (uint)(iVar1 == 0);
  if ((param_3 & 0x7f) != 0x40) {
    uVar2 = 0;
  }
  uVar2 = iVar3 + param_3 >> 7 & (uVar2 ^ 0xffffffff);
  if (uVar2 == 0) {
    param_2 = 0;
  }
  return uVar2 + param_1 * -0x80000000 + param_2 * 0x800000;
}


END_FUNCTION
SCALAR 0x8 AT ffa0356a INSTRUCTION ADD R2 += 0x8
FUNCTION ffa0350c FUN_ffa0350c success=true

uint FUN_ffa0350c(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = param_2 >> 0x17 & 0xff;
  uVar4 = param_1 >> 0x17 & 0xff;
  uVar6 = param_2 & 0x7fffff;
  uVar2 = param_1 & 0x7fffff;
  iVar5 = uVar4 - uVar8;
  uVar7 = uVar6 * 0x40;
  uVar3 = uVar2 * 0x40;
  if (iVar5 < 1) {
    if (-1 < iVar5) {
      if (uVar4 == 0xff) {
        if (uVar2 == 0 && uVar6 == 0) {
          return param_1;
        }
        uVar4 = FUN_ffa03380(param_1,param_2);
        return uVar4;
      }
      if (uVar4 == 0) {
        return (uVar3 + uVar7 >> 6) + param_3 * -0x80000000;
      }
      iVar5 = uVar7 + uVar3 + 0x40000000;
      goto LAB_ffa03588;
    }
    if (uVar8 == 0xff) {
      if (uVar6 != 0) {
        uVar4 = FUN_ffa03380(param_1,param_2);
        return uVar4;
      }
      return param_3 * -0x80000000 + 0x7f800000;
    }
    if (uVar4 == 0) {
      iVar5 = iVar5 + 1;
    }
    else {
      uVar3 = uVar3 | 0x20000000;
    }
    FUN_ffa03354(uVar3,-iVar5,&stack0x00000004);
  }
  else {
    if (uVar4 == 0xff) {
      if (uVar2 == 0) {
        return param_1;
      }
      uVar4 = FUN_ffa03380(param_1,param_2);
      return uVar4;
    }
    if (uVar8 == 0) {
      iVar5 = iVar5 + -1;
    }
    else {
      uVar7 = uVar7 | 0x20000000;
    }
    FUN_ffa03354(uVar7,iVar5,&stack0x00000000);
    uVar8 = uVar4;
  }
  iVar1 = (uVar3 | 0x20000000) + uVar7;
  iVar5 = iVar1 * 2;
  uVar4 = uVar8 - 1;
  if (iVar5 < 0) {
    uVar4 = uVar8;
    iVar5 = iVar1;
  }
LAB_ffa03588:
  uVar4 = FUN_ffa033f8(param_3,uVar4,iVar5);
  return uVar4;
}


END_FUNCTION
SCALAR 0x8 AT ffa0365a INSTRUCTION ADD R2 += 0x8
FUNCTION ffa035fc FUN_ffa035fc success=true

uint FUN_ffa035fc(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1 >> 0x17 & 0xff;
  uVar4 = param_2 >> 0x17 & 0xff;
  iVar1 = uVar5 - uVar4;
  uVar3 = (param_2 & 0x7fffff) << 7;
  uVar2 = (param_1 & 0x7fffff) << 7;
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      if (uVar4 == 0xff) {
        if ((param_2 & 0x7fffff) != 0) {
          uVar4 = FUN_ffa03380(param_1);
          return uVar4;
        }
        return (param_3 ^ 1) * -0x80000000 + 0x7f800000;
      }
      if (uVar5 == 0) {
        iVar1 = iVar1 + 1;
      }
      else {
        uVar2 = uVar2 | 0x40000000;
      }
      FUN_ffa03354(uVar2,-iVar1,&stack0x00000004);
      uVar3 = uVar3 | 0x40000000;
    }
    else {
      if (uVar5 == 0xff) {
        if (((param_1 | param_2) & 0x7fffff) != 0) {
          uVar4 = FUN_ffa03380(param_1);
          return uVar4;
        }
        DAT_ff8013f4 = DAT_ff8013f4 | 0x10;
        return 0xffffffff;
      }
      if (uVar5 == 0) {
        uVar4 = 1;
        uVar5 = 1;
      }
      if (uVar3 < uVar2) goto LAB_ffa03668;
      if (uVar3 <= uVar2) {
        return (uint)(DAT_ff8013f0 == 2) << 0x1f;
      }
    }
    iVar1 = uVar3 - uVar2;
    param_3 = param_3 ^ 1;
  }
  else {
    if (uVar5 == 0xff) {
      if ((param_1 & 0x7fffff) == 0) {
        return param_1;
      }
      uVar4 = FUN_ffa03380(param_1,param_2);
      return uVar4;
    }
    if (uVar4 == 0) {
      iVar1 = iVar1 + -1;
    }
    else {
      uVar3 = uVar3 | 0x40000000;
    }
    FUN_ffa03354(uVar3,iVar1,&stack0x00000000);
    uVar2 = uVar2 | 0x40000000;
LAB_ffa03668:
    uVar4 = uVar5;
    iVar1 = uVar2 - uVar3;
  }
  uVar4 = FUN_ffa034e0(param_3,uVar4 - 1,iVar1);
  return uVar4;
}


END_FUNCTION
SCALAR 0x8 AT ffa039e8 INSTRUCTION STORE [SP + 0x8] = R7
FUNCTION ffa039dc FUN_ffa039dc success=true

int FUN_ffa039dc(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  byte in_AZflag;
  
  if (param_4 < 0) {
    if ((int)param_2 < 0) {
      iVar1 = FUN_ffa03ae2(-param_1,~param_2 + (uint)in_AZflag,-param_3);
                    /* WARNING: Treating indirect jump as return */
      return iVar1;
    }
    iVar1 = FUN_ffa03ae2(param_1,param_2,-param_3);
                    /* WARNING: Treating indirect jump as return */
    return -iVar1;
  }
  if (-1 < (int)param_2) {
    iVar1 = FUN_ffa03ae2();
    return iVar1;
  }
  iVar1 = FUN_ffa03ae2(-param_1,~param_2 + (uint)in_AZflag);
                    /* WARNING: Treating indirect jump as return */
  return -iVar1;
}


END_FUNCTION
SCALAR 0x8 AT ffa03a10 INSTRUCTION _LOAD R7 = [SP + 0x8]
SCALAR 0x8 AT ffa03a16 INSTRUCTION STORE [SP + 0x8] = R7
SCALAR 0x8 AT ffa03a42 INSTRUCTION _LOAD R7 = [SP + 0x8]
SCALAR 0x8 AT ffa03a58 INSTRUCTION _LOAD R7 = [SP + 0x8]
SCALAR 0x8 AT ffa0412a INSTRUCTION STORE [FP + 0x8] = R0
FUNCTION ffa03e88 FUN_ffa03e88 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_ffa03e88(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  uint local_c;
  
  if ((param_1 & 0x7fffffff) == 0) {
    if ((param_2 & 0x7fffffff) == 0) {
                    /* WARNING: Treating indirect jump as return */
      return 0x3f800000;
    }
    if (param_2 != 0 && ((int)param_2 < 0x7f800001 && (param_2 & 0x80000000) == 0)) {
                    /* WARNING: Treating indirect jump as return */
      return 0;
    }
                    /* WARNING: Treating indirect jump as return */
    return 0x7f7fffff;
  }
  uVar7 = param_1 >> 0x1f;
  if (-0x800000 < (int)param_1) {
    uVar7 = 0;
  }
  if ((param_1 ^ 0x80000000) == 0) {
    uVar7 = 0;
  }
  local_c = 0;
  if (uVar7 != 0) {
    local_c = FUN_ffa02b74(param_2);
    uVar7 = FUN_ffa03270();
    if ((0x7f800000 < (uVar7 & 0x7fffffff) || 0x7f800000 < (param_2 & 0x7fffffff)) ||
        ((param_2 & 0x7fffffff) != 0 || (uVar7 & 0x7fffffff) != 0) && param_2 != uVar7) {
                    /* WARNING: Treating indirect jump as return */
      return 0;
    }
    local_c = local_c & 1;
    param_1 = param_1 ^ 0x80000000;
  }
  uVar11 = param_1 & 0x807fffff | 0x3f000000;
  uVar8 = param_1 & 0x7fffff | 0x3f000000;
  uVar7 = (uint)((int)uVar11 <= (int)DAT_ff801600);
  if (DAT_ff801600 != uVar11) {
    uVar7 = (DAT_ff801600 & uVar11) >> 0x1f ^ (uint)((int)uVar11 <= (int)DAT_ff801600);
  }
  if ((DAT_ff801600 & 0x7fffffff) == 0 && uVar8 == 0) {
    uVar7 = 1;
  }
  if (0x7f800000 < uVar8 || 0x7f800000 < (DAT_ff801600 & 0x7fffffff)) {
    uVar7 = 0;
  }
  iVar9 = 1;
  if (uVar7 != 0) {
    iVar9 = 9;
  }
  uVar7 = *(uint *)(s_____zyxwwvutssrqqpoonmmlkkjjiihg_ff80151e + (iVar9 + 4) * 4 + 0xbe);
  uVar1 = (uint)((int)uVar11 <= (int)uVar7);
  if (uVar7 != uVar11) {
    uVar1 = (uVar7 & uVar11) >> 0x1f ^ (uint)((int)uVar11 <= (int)uVar7);
  }
  if ((uVar7 & 0x7fffffff) == 0 && uVar8 == 0) {
    uVar1 = 1;
  }
  if (0x7f800000 < uVar8 || 0x7f800000 < (uVar7 & 0x7fffffff)) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    iVar9 = iVar9 + 4;
  }
  uVar7 = *(uint *)(s_____zyxwwvutssrqqpoonmmlkkjjiihg_ff80151e + (iVar9 + 2) * 4 + 0xbe);
  uVar1 = (uint)((int)uVar11 <= (int)uVar7);
  if (uVar7 != uVar11) {
    uVar1 = (uVar7 & uVar11) >> 0x1f ^ (uint)((int)uVar11 <= (int)uVar7);
  }
  if ((uVar7 & 0x7fffffff) == 0 && uVar8 == 0) {
    uVar1 = 1;
  }
  if (0x7f800000 < uVar8 || 0x7f800000 < (uVar7 & 0x7fffffff)) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    iVar9 = iVar9 + 2;
  }
  uVar3 = *(undefined4 *)(s_____zyxwwvutssrqqpoonmmlkkjjiihg_ff80151e + (iVar9 + 1U) * 4 + 0xbe);
  uVar2 = FUN_ffa031f8(uVar11,uVar3);
  uVar2 = FUN_ffa031f8(uVar2,*(undefined4 *)((iVar9 + 1U >> 1) * 4 + -0x7fe9dc));
  uVar3 = FUN_ffa02c10(uVar11,uVar3);
  uVar3 = FUN_ffa02e14(uVar2,uVar3);
  uVar3 = FUN_ffa02c10(uVar3,uVar3);
  uVar2 = FUN_ffa03068(uVar3,uVar3);
  uVar4 = FUN_ffa03068(uVar2,0x3c4ce800);
  uVar4 = FUN_ffa02c10(uVar4,0x3daaaaaa);
  uVar2 = FUN_ffa03068(uVar4,uVar2);
  uVar2 = FUN_ffa03068(uVar2,uVar3);
  uVar4 = FUN_ffa03068(uVar2,0x3ee2a8ed);
  uVar2 = FUN_ffa02c10(uVar4,uVar2);
  uVar4 = FUN_ffa03068(uVar3,0x3ee2a8ed);
  uVar2 = FUN_ffa02c10(uVar4,uVar2);
  uVar3 = FUN_ffa02c10(uVar2,uVar3);
  uVar2 = FUN_ffa03270((((int)param_1 >> 0x17) + -0x7e) * 0x10 - iVar9);
  uVar2 = FUN_ffa03068(uVar2,0x3d800000);
  uVar4 = FUN_ffa03068(param_2,0x41800000);
  FUN_ffa03de8(uVar4,&stack0x00000008);
  uVar4 = FUN_ffa03068(in_stack_00000008,0x3d800000);
  uVar5 = FUN_ffa031f8(param_2,uVar4);
  uVar5 = FUN_ffa03068(uVar5,uVar2);
  uVar3 = FUN_ffa03068(param_2,uVar3);
  uVar3 = FUN_ffa02c10(uVar3,uVar5);
  uVar5 = FUN_ffa03068(uVar3,0x41800000);
  FUN_ffa03de8(uVar5,&stack0x00000004);
  uVar5 = FUN_ffa03068(in_stack_00000004,0x3d800000);
  uVar3 = FUN_ffa031f8(uVar3,uVar5);
  uVar2 = FUN_ffa03068(uVar4,uVar2);
  uVar2 = FUN_ffa02c10(uVar2,uVar5);
  uVar4 = FUN_ffa03068(uVar2,0x41800000);
  FUN_ffa03de8(uVar4,&stack0x00000004);
  uVar4 = FUN_ffa03068(uVar5,0x3d800000);
  uVar5 = FUN_ffa031f8(uVar2,uVar4);
  uVar3 = FUN_ffa02c10(uVar5,uVar3);
  uVar5 = FUN_ffa03068(uVar3,0x41800000);
  FUN_ffa03de8(uVar5,&stack0x00000000);
  uVar2 = FUN_ffa03068(uVar2,0x3d800000);
  uVar4 = FUN_ffa02c10(uVar2,uVar4);
  FUN_ffa03068(uVar4,0x41800000);
  iVar9 = FUN_ffa02b74();
  uVar7 = FUN_ffa031f8(uVar3,uVar2);
  if (0x7fe < iVar9) {
    uVar3 = 0x7f7fffff;
    if (local_c == 1) {
      uVar3 = 0xff7fffff;
    }
                    /* WARNING: Could not recover jumptable at 0xffa041ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE_00)(uVar3);
    return uVar3;
  }
  if (uVar7 != 0 && ((int)uVar7 < 0x7f800001 && (uVar7 & 0x80000000) == 0)) {
    uVar7 = FUN_ffa031f8(uVar7,0x3d800000);
    iVar9 = iVar9 + 1;
  }
  if (iVar9 < -0x7df) {
                    /* WARNING: Could not recover jumptable at 0xffa04228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE_00)(0);
    return uVar3;
  }
  iVar6 = (int)(iVar9 + ((uint)(iVar9 >> 0x1f) >> 0x1c)) >> 4;
  iVar10 = iVar6 + 1;
  if (iVar9 < 0) {
    iVar10 = iVar6;
  }
  uVar3 = FUN_ffa03068(uVar7,0x3aab1518);
  uVar3 = FUN_ffa02c10(uVar3,0x3c1d8d4b);
  uVar3 = FUN_ffa03068(uVar3,uVar7);
  uVar3 = FUN_ffa02c10(uVar3,0x3d635837);
  uVar3 = FUN_ffa03068(uVar3,uVar7);
  uVar3 = FUN_ffa02c10(uVar3,0x3e75fdf0);
  uVar3 = FUN_ffa03068(uVar3,uVar7);
  uVar2 = FUN_ffa02c10(uVar3,0x3f317218);
  uVar3 = *(undefined4 *)
           (s_____zyxwwvutssrqqpoonmmlkkjjiihg_ff80151e + ((iVar10 * 0x10 - iVar9) + 1) * 4 + 0xbe);
  uVar2 = FUN_ffa03068(uVar2,uVar7);
  uVar2 = FUN_ffa03068(uVar2,uVar3);
  FUN_ffa02c10(uVar2,uVar3);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT ffa04142 INSTRUCTION _LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT ffa04168 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT ffa04184 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT ffa0419e INSTRUCTION ADD R1 += 0x8
SCALAR 0x8 AT ffa041a6 INSTRUCTION LOAD R0 = [FP + 0x8]
SCALAR 0x8 AT ffa043d2 INSTRUCTION STORE [SP + 0x8] = R7
FUNCTION ffa043bc FUN_ffa043bc success=true

undefined8 FUN_ffa043bc(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  byte in_AZflag;
  
  if ((int)param_4 < 0) {
    param_3 = -param_3;
    uVar1 = ~param_4 + (uint)in_AZflag;
    if ((int)param_2 < 0) {
      FUN_ffa03ae2(-param_1,~param_2 + (uint)in_AZflag,param_3);
                    /* WARNING: Treating indirect jump as return */
      return CONCAT44(-param_3,~uVar1 + (uint)in_AZflag);
    }
    FUN_ffa03ae2(param_1,param_2,param_3);
                    /* WARNING: Treating indirect jump as return */
    return CONCAT44(param_3,uVar1);
  }
  if (-1 < (int)param_2) {
    FUN_ffa03ae2();
                    /* WARNING: Treating indirect jump as return */
    return CONCAT44(param_3,param_4);
  }
  FUN_ffa03ae2(-param_1,~param_2 + (uint)in_AZflag);
                    /* WARNING: Treating indirect jump as return */
  return CONCAT44(-param_3,~param_4 + (uint)in_AZflag);
}


END_FUNCTION
SCALAR 0x8 AT ffa043ee INSTRUCTION _LOAD R7 = [SP + 0x8]
SCALAR 0x8 AT ffa043f4 INSTRUCTION STORE [SP + 0x8] = R7
SCALAR 0x8 AT ffa04402 INSTRUCTION _LOAD R7 = [SP + 0x8]
SCALAR 0x8 AT ffa04424 INSTRUCTION _LOAD R7 = [SP + 0x8]
SCALAR 0x8 AT ffa08086 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT ffa0809a INSTRUCTION LOAD P0 = 0x8
SCALAR 0x8 AT ffa0864e INSTRUCTION STORE [P3 + 0x8] = R0
SCALAR 0x8 AT ffa0889c INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT ffa089de INSTRUCTION LOAD P0 = 0x8
SCALAR 0x8 AT ffa08f8e INSTRUCTION STORE [P3 + 0x8] = R0
SCALAR 0x8 AT ffa091dc INSTRUCTION LOAD R0 = [P3 + 0x8]
SCALAR 0x8 AT ffa092e6 INSTRUCTION STORE [FP + 0x8] = R0
SCALAR 0x8 AT ffa094c4 INSTRUCTION ADD R0 += 0x8
SCALAR 0x8 AT ffa095de INSTRUCTION LOAD R0 = [P0 + 0x8]
SCALAR 0x8 AT ffa095ee INSTRUCTION STORE [P0 + 0x8] = R0
SCALAR 0x8 AT ffa09c7e INSTRUCTION LOAD R2 = [P1 + 0x8]
SCALAR 0x8 AT ffa09f1c INSTRUCTION STORE [P1 + 0x8] = R0
FUNCTION ffa09e88 FUN_ffa09e88 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_ffa09e88(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(&DAT_ffb0066c)[DAT_ffb00658];
  DAT_ffb0065c = *puVar1;
  DAT_ffb00660 = puVar1[1];
  DAT_ffb00664 = puVar1[2];
  DAT_ffb00668 = puVar1[3];
  DAT_ffb00658 = DAT_ffb00658 + 1;
  if (DAT_ffb00658 == 2) {
    DAT_ffb00658 = 0;
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT ffa09f4a INSTRUCTION LOAD R0 = [P0 + 0x8]
SCALAR 0x8 AT ffa09fea INSTRUCTION STORE [P2 + 0x8] = R3
SCALAR 0x8 AT ffa0a1b0 INSTRUCTION LOAD P1 = [P3 + 0x8]
SCALAR 0x8 AT ffa0a1f4 INSTRUCTION LOAD R1 = [P2 + 0x8]
SCALAR 0x8 AT ffa0a35c INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT ffa0a35e INSTRUCTION LSHIFT R1 <<= 0x8
SCALAR 0x8 AT ffa0a368 INSTRUCTION STORE [P0 + 0x8] = R0
SCALAR 0x8 AT ffa0a3e6 INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT ffa0a558 INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT ffa0a55a INSTRUCTION LSHIFT R1 <<= 0x8
SCALAR 0x8 AT ffa0a5e2 INSTRUCTION LSHIFT R0 <<= 0x8
SCALAR 0x8 AT ffa0a684 INSTRUCTION STORE [P1 + 0x8] = R0
FUNCTION ffa0a5f0 FUN_ffa0a5f0 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_ffa0a5f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(&DAT_ffb0066c)[DAT_ffb00658];
  DAT_ffb0065c = *puVar1;
  DAT_ffb00660 = puVar1[1];
  DAT_ffb00664 = puVar1[2];
  DAT_ffb00668 = puVar1[3];
  DAT_ffb00658 = DAT_ffb00658 + 1;
  if (DAT_ffb00658 == 2) {
    DAT_ffb00658 = 0;
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x8 AT ffa0a68c INSTRUCTION LOAD R0 = [P0 + 0x8]
SCALAR 0x8 AT ffa0a6dc INSTRUCTION STORE [P2 + 0x8] = R0
SCALAR 0x8 AT ffa0a6e0 INSTRUCTION LOAD P1 = [P3 + 0x8]
SCALAR 0x8 AT ffa0a70a INSTRUCTION LOAD R1 = [P2 + 0x8]
SCALAR 0x8 AT ffa0a71c INSTRUCTION STORE [P0 + 0x8] = R0
