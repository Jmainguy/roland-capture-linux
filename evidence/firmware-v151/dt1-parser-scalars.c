SCALAR 0x41 AT 00300de2 INSTRUCTION LOAD P3.H = 0x41
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
SCALAR 0x41 AT 00300fd8 INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 0030113c INSTRUCTION LOAD P5.H = 0x41
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
SCALAR 0x41 AT 00301204 INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 0030123e INSTRUCTION LOAD R1.H = 0x41
SCALAR 0x41 AT 00301268 INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 003012a2 INSTRUCTION LOAD R1.H = 0x41
SCALAR 0x41 AT 003012ce INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 0030130a INSTRUCTION LOAD R1.H = 0x41
SCALAR 0x41 AT 00301336 INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 00301390 INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 003013dc INSTRUCTION LOAD P4.H = 0x41
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
SCALAR 0x41 AT 00301e26 INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x41 AT 0030283e INSTRUCTION LOAD R0.H = 0x41
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
SCALAR 0x41 AT 0030295e INSTRUCTION LOAD R0.H = 0x41
FUNCTION 0030294c FUN_0030294c success=true

uint FUN_0030294c(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_00366aa4(s_power_0041c348,3);
  FUN_003666d8(uVar1,6);
  FUN_003667ec(uVar1);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x880) + 0x34))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x30),param_2);
  if (uVar2 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return uVar2;
  }
  uVar2 = 0;
  if (3 < param_2) {
    if (param_2 == 4) {
      uVar2 = 1;
      if (*(int *)(param_1 + 0x18) != 0) {
        *(undefined4 *)(param_1 + 0x18) = 0;
        iVar3 = FUN_003585b8(1);
        if (iVar3 == 1) {
          DAT_00408d64 = 0;
          FUN_0033e720(param_1 + 0x2c);
          (**(code **)(*(int *)(param_1 + 0x880) + 0x24))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x20));
          (**(code **)(*(int *)(param_1 + 0x880) + 0x1c))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x18));
          (**(code **)(*(int *)(param_1 + 0x880) + 0x44))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x880) + 0x40));
          uVar2 = 1;
        }
        else if ((DAT_004094f0 == 0) || (uVar2 = 1, DAT_004094f0 == 1)) {
          DAT_00408d64 = 0;
          FUN_00358678(1);
          uVar2 = 1;
        }
      }
    }
    else {
      uVar2 = (uint)(param_2 == 9);
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return uVar2;
}


END_FUNCTION
SCALAR 0x41 AT 00302a54 INSTRUCTION LOAD R1.H = 0x41
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
SCALAR 0x41 AT 00302a5e INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 00302b5c INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 00302ec0 INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 00302fc2 INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 003030be INSTRUCTION LOAD R0.H = 0x41
FUNCTION 003030b4 FUN_003030b4 success=true

void FUN_003030b4(void)

{
  undefined4 uVar1;
  
  FUN_00368ecc(&PTR_s_portmux_0041c4e4);
  FUN_00366870(&PTR_s_extio_0041c614);
  uVar1 = FUN_00366aa4(&DAT_0041c49c,3);
  FUN_003666d8(uVar1,5,0x3098);
  FUN_003666d8(uVar1,6,0x2e60);
  FUN_003667ec(uVar1);
  FUN_0031e948(&LAB_00302ea8);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 003030ca INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x41 AT 003030d8 INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x41 AT 00303556 INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT 0030392a INSTRUCTION LOAD R0 = 0x41
SCALAR 0x41 AT 00303a32 INSTRUCTION LOAD R0 = 0x41
SCALAR 0x41 AT 00303aee INSTRUCTION LOAD R0 = 0x41
SCALAR 0x41 AT 00303bb0 INSTRUCTION LOAD R0 = 0x41
SCALAR 0x41 AT 00303c76 INSTRUCTION LOAD R0 = 0x41
SCALAR 0x41 AT 00304f14 INSTRUCTION LOAD R2.H = 0x41
SCALAR 0x12 AT 0030504c INSTRUCTION STORE W [P1 + 0x12] = R6
SCALAR 0x41 AT 003051c2 INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT 0030569a INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT 00305a72 INSTRUCTION LOAD R0 = 0x41
SCALAR 0x41 AT 00305b7a INSTRUCTION LOAD R0 = 0x41
SCALAR 0x41 AT 00305c36 INSTRUCTION LOAD R0 = 0x41
SCALAR 0x41 AT 00305cf8 INSTRUCTION LOAD R0 = 0x41
SCALAR 0x41 AT 00305dbe INSTRUCTION LOAD R0 = 0x41
SCALAR 0x11 AT 00306c18 INSTRUCTION LSHIFT R0 <<= 0x11
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
SCALAR 0x11 AT 00306c78 INSTRUCTION LSHIFT R0 <<= 0x11
SCALAR 0x41 AT 00306ea6 INSTRUCTION LOAD R7.H = 0x41
SCALAR 0x41 AT 00307254 INSTRUCTION LOAD P2.H = 0x41
SCALAR 0x41 AT 0030725c INSTRUCTION LOAD R3.H = 0x41
SCALAR 0x41 AT 0030747e INSTRUCTION LOAD R1.H = 0x41
SCALAR 0x12 AT 00307eee INSTRUCTION LOAD R1 = 0x12
SCALAR 0x41 AT 0030807e INSTRUCTION LOAD R2.H = 0x41
SCALAR 0x12 AT 00308100 INSTRUCTION STORE W [P0 + 0x12] = R5
SCALAR 0x41 AT 00308ae0 INSTRUCTION LOAD R1.H = 0x41
SCALAR 0x41 AT 003091e0 INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 00309816 INSTRUCTION LOAD P2.H = 0x41
FUNCTION 003097e4 FUN_003097e4 success=true

undefined4 FUN_003097e4(undefined4 param_1,int param_2,int param_3)

{
  if (0xd < param_2) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  if (8 < param_3) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
                    /* WARNING: Treating indirect jump as return */
  return *(undefined4 *)(*(int *)(&PTR_DAT_0041d024)[param_3] + param_2 * 4);
}


END_FUNCTION
SCALAR 0x41 AT 00309aba INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT 00309b78 INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x41 AT 00309fc6 INSTRUCTION LOAD R1.H = 0x41
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
SCALAR 0x41 AT 0030a5f8 INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x41 AT 0030abfc INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x41 AT 0030aee8 INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x41 AT 0030b588 INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x41 AT 0030c2da INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT 0030c428 INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x11 AT 0030c434 INSTRUCTION BITSET (R0,0x11)
SCALAR 0x11 AT 0030c5c2 INSTRUCTION LOAD R1 = 0x11
SCALAR 0x41 AT 0030c638 INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 0030c854 INSTRUCTION LOAD R0.H = 0x41
FUNCTION 0030c820 firmware_entry_0030c820 success=true

void firmware_entry_0030c820(void)

{
  DAT_0043f86c = (undefined *)0x400000;
  DAT_0043f868 = 0;
  DAT_0043f85c = 0;
  FUN_0033e0f0(&DAT_0043f870);
  DAT_0043f870 = s_CMsgBroadcaster__mList_0041d2d4;
  DAT_0043f86c = &DAT_00400f08;
  FUN_00325a10(&DAT_004094c0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0030c904 INSTRUCTION LOAD P0.H = 0x41
FUNCTION 0030c8f8 firmware_entry_0030c8f8 success=true

undefined4 firmware_entry_0030c8f8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  bool in_CCflag;
  
  if (in_CCflag) {
                    /* WARNING: Could not recover jumptable at 0x0030c90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_LAB_0041d354)[param_2])();
    return uVar1;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x41 AT 0030cc82 INSTRUCTION LOAD R1.H = 0x41
FUNCTION 0030cc7a firmware_entry_0030cc7a success=true

void firmware_entry_0030cc7a(undefined4 param_1)

{
  FUN_00324010(param_1,0xd338);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0030cc9e INSTRUCTION LOAD R3.H = 0x41
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
SCALAR 0x41 AT 0030cd0a INSTRUCTION LOAD P0.H = 0x41
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
SCALAR 0x41 AT 0030cdfa INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x11 AT 0030ce9e INSTRUCTION LOAD R0 = 0x11
FUNCTION 0030ce94 firmware_entry_0030ce94 success=true

undefined4 firmware_entry_0030ce94(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0x11;
}


END_FUNCTION
SCALAR 0x41 AT 0030cec4 INSTRUCTION LOAD P0.H = 0x41
FUNCTION 0030ceb8 firmware_entry_0030ceb8 success=true

undefined4 firmware_entry_0030ceb8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  bool in_CCflag;
  
  if (in_CCflag) {
                    /* WARNING: Could not recover jumptable at 0x0030cecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&PTR_firmware_entry_0030ceee_0041d46c)[param_2])();
    return uVar1;
  }
  if (param_2 == 0xf) {
                    /* WARNING: Treating indirect jump as return */
    return 1;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x41 AT 0030cf32 INSTRUCTION LOAD P2.H = 0x41
FUNCTION 0030cf22 firmware_entry_0030cf22 success=true

void firmware_entry_0030cf22(uint param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x0030cf3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_firmware_entry_0030cf4c_0041d47c)[param_2])();
    return;
  }
  *param_3 = 0;
  *param_4 = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x11 AT 0030cf94 INSTRUCTION LOAD R2 = 0x11
FUNCTION 0030cf94 FUN_0030cf94 success=true

int FUN_0030cf94(int param_1,int param_2)

{
  if (param_2 < 0x11) {
                    /* WARNING: Treating indirect jump as return */
    return (int)*(short *)(param_1 + 0x24 + param_2 * 2);
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x11 AT 0030cfe2 INSTRUCTION LOAD R6 = 0x11
FUNCTION 0030cfd4 firmware_entry_0030cfd4 success=true

void firmware_entry_0030cfd4(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar3 = 0x11;
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar2 = 0;
  puVar4 = (undefined2 *)(param_1 + 0x24);
  do {
    iVar3 = iVar3 + -1;
    uVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x2c))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x28),iVar2,0);
    *puVar4 = uVar1;
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 != 0);
                    /* WARNING: Could not recover jumptable at 0x0030d016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0030d278 INSTRUCTION LOAD R1.H = 0x41
FUNCTION 0030d274 firmware_entry_0030d274 success=true

void firmware_entry_0030d274(undefined4 param_1)

{
  firmware_entry_0030d242(param_1,0xd4e8);
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0030d284 INSTRUCTION LOAD R1.H = 0x41
FUNCTION 0030d280 firmware_entry_0030d280 success=true

void firmware_entry_0030d280(undefined4 param_1)

{
  firmware_entry_0030d242(param_1,0xd4f8);
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0030d290 INSTRUCTION LOAD R1.H = 0x41
FUNCTION 0030d28c firmware_entry_0030d28c success=true

void firmware_entry_0030d28c(undefined4 param_1)

{
  firmware_entry_0030d242(param_1,0xd4d8);
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0030d7d0 INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x11 AT 0030d9d6 INSTRUCTION LOAD R0 = 0x11
FUNCTION 0030d9d0 FUN_0030d9d0 success=true

void FUN_0030d9d0(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 2) != 0x11) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = FUN_00358548(&DAT_0044543c);
  if (iVar1 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if ((DAT_0041901c != 0) && (iVar1 = FUN_0035861c(0x12), iVar1 != 0)) {
    FUN_00358678(0);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_003586b8();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0030da04 INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x12 AT 0030da0e INSTRUCTION LOAD R0 = 0x12
SCALAR 0x41 AT 0030da6c INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 0030ddf4 INSTRUCTION LOAD P5.H = 0x41
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
SCALAR 0x41 AT 0030de34 INSTRUCTION LOAD R1.H = 0x41
SCALAR 0x41 AT 0030e65c INSTRUCTION LOAD P3.H = 0x41
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
SCALAR 0x41 AT 0030e788 INSTRUCTION LOAD P0.H = 0x41
FUNCTION 0030e764 FUN_0030e764 success=true

undefined * FUN_0030e764(int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x13)) {
                    /* WARNING: Treating indirect jump as return */
    return (&PTR_PTR_00418bec)[param_1];
  }
                    /* WARNING: Treating indirect jump as return */
  return (undefined *)0x0;
}


END_FUNCTION
SCALAR 0x41 AT 0030eafc INSTRUCTION LOAD P1.H = 0x41
FUNCTION 0030eaf4 FUN_0030eaf4 success=true

void FUN_0030eaf4(void)

{
  DAT_00418c3c = 10;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0030ed20 INSTRUCTION LOAD P3.H = 0x41
FUNCTION 0030ed14 FUN_0030ed14 success=true

void FUN_0030ed14(void)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  char *pcVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  
  piVar6 = &DAT_00418c3c;
  if (DAT_00418c3c == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  DAT_00418c3c = DAT_00418c3c + -1;
  if (DAT_00418c40 == 0) {
    iVar5 = 2;
    psVar7 = &DAT_00434fc8;
    do {
      sVar1 = *psVar7;
      uVar3 = FUN_00366aa4(&DAT_00434fcc,3);
      FUN_003666d8(uVar3,0,(int)sVar1,0);
      FUN_003667ec(uVar3);
      iVar5 = iVar5 + -1;
      psVar7 = psVar7 + 1;
    } while (iVar5 != 0);
  }
  else {
    iVar5 = 2;
    psVar7 = &DAT_00434fc8;
    do {
      sVar1 = *psVar7;
      uVar3 = FUN_00366aa4(&DAT_00434fcc,3);
      FUN_003666d8(uVar3,0,(int)sVar1,1);
      FUN_003667ec(uVar3);
      iVar5 = iVar5 + -1;
      psVar7 = psVar7 + 1;
    } while (iVar5 != 0);
  }
  piVar6[1] = piVar6[1] ^ 1;
  if (*piVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0030edde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar5 = 2;
  psVar7 = &DAT_00434fc8;
  pcVar8 = &DAT_00440d5c;
  do {
    sVar1 = *psVar7;
    uVar3 = 0;
    cVar2 = *pcVar8;
    uVar4 = FUN_00366aa4(&DAT_00434fcc,3);
    if ((cVar2 != '\0') && (uVar3 = 2, cVar2 == '\x01')) {
      uVar3 = 1;
    }
    FUN_003666d8(uVar4,0,(int)sVar1,uVar3);
    FUN_003667ec(uVar4);
    iVar5 = iVar5 + -1;
    psVar7 = psVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (iVar5 != 0);
                    /* WARNING: Could not recover jumptable at 0x0030edd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x12 AT 003108e8 INSTRUCTION LOAD R0 = 0x12
SCALAR 0x41 AT 003108f8 INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 00310904 INSTRUCTION LOAD P5.H = 0x41
SCALAR 0x41 AT 00310c08 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00310c00 FUN_00310c00 success=true

void FUN_00310c00(void)

{
  DAT_00418d00 = 0;
  DAT_00418d04 = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00311b6c INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 00312bd4 INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 0031351a INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 003135b0 INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 00313744 INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 00315852 INSTRUCTION LOAD P5.H = 0x41
SCALAR 0x41 AT 00316e4c INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00316e44 FUN_00316e44 success=true

void FUN_00316e44(undefined4 param_1)

{
  DAT_00418f6c = param_1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 003186e0 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 003186d8 FUN_003186d8 success=true

void FUN_003186d8(undefined4 param_1)

{
  DAT_00419000 = param_1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00319494 INSTRUCTION LOAD P4.H = 0x41
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
SCALAR 0x41 AT 003198fc INSTRUCTION LOAD P1.H = 0x41
FUNCTION 003198f0 firmware_entry_003198f0 success=true

void firmware_entry_003198f0(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (iRam00419020 == 0) {
    iRam00419020 = 1;
    firmware_entry_0030d8f8();
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
SCALAR 0x11 AT 0031afb4 INSTRUCTION LOAD R0 = 0x11
SCALAR 0x41 AT 0031bb28 INSTRUCTION LOAD P4.H = 0x41
SCALAR 0x41 AT 0031c68e INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x41 AT 0031d7d8 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 0031d7d0 firmware_entry_0031d7d0 success=true

void firmware_entry_0031d7d0(void)

{
  DAT_0041912c = 1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0031d828 INSTRUCTION LOAD P4.H = 0x41
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
SCALAR 0x41 AT 0031d8e8 INSTRUCTION LOAD P4.H = 0x41
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
SCALAR 0x41 AT 0031d97e INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 0031dd64 INSTRUCTION LOAD P3.H = 0x41
SCALAR 0x11 AT 0031dd90 INSTRUCTION BITSET (R7,0x11)
SCALAR 0x41 AT 0031de10 INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x41 AT 0031e0b0 INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 0031e15a INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 0031e40a INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 0031e47e INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 0031e4ea INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 0031e50c INSTRUCTION LOAD P5.H = 0x41
SCALAR 0x41 AT 0031e6f2 INSTRUCTION LOAD P5.H = 0x41
SCALAR 0x41 AT 0031e76a INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 0031e82c INSTRUCTION LOAD P5.H = 0x41
SCALAR 0x41 AT 0031e954 INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT 0031e9b0 INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 0031e9d4 INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 0031e9f6 INSTRUCTION LOAD P5.H = 0x41
SCALAR 0x41 AT 0031ea6c INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 0031ea8a INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 0031eaf8 INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 0031eb16 INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 0031eb88 INSTRUCTION LOAD P4.H = 0x41
SCALAR 0x41 AT 0031ebcc INSTRUCTION LOAD P5.H = 0x41
SCALAR 0x41 AT 0031ee14 INSTRUCTION LOAD P3.H = 0x41
SCALAR 0x41 AT 0031ef94 INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 0031eff8 INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 0031f016 INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 0031f084 INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 0031f0a2 INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 0031f10c INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 0031f12a INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 0031f194 INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 0031f1b2 INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 0031f228 INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x12 AT 0031f408 INSTRUCTION ADD P1 += 0x12
SCALAR 0x12 AT 0031f432 INSTRUCTION ADD P1 += 0x12
SCALAR 0x11 AT 0031f45a INSTRUCTION LOAD R0 = 0x11
SCALAR 0x12 AT 0031f464 INSTRUCTION LOAD R0 = 0x12
SCALAR 0x12 AT 0031f470 INSTRUCTION ADD P1 += 0x12
SCALAR 0x12 AT 0031fa5e INSTRUCTION LOAD R3 = 0x12
FUNCTION 0031fa2c FUN_0031fa2c success=true

void FUN_0031fa2c(char *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = &DAT_00442327;
  DAT_0044231c = 0x41f0;
  DAT_0044231e = 0x10;
  DAT_00442320 = 0x4d00;
  DAT_00442322 = 0x12;
  DAT_00442323 = -*param_1;
  DAT_00442324 = param_1[1];
  DAT_00442325 = param_1[2];
  DAT_00442326 = param_1[3];
  bVar1 = ((DAT_00442323 - DAT_00442324) - DAT_00442325) - DAT_00442326;
  pbVar3 = pbVar2;
  if (0 < param_3) {
    do {
      bVar1 = bVar1 - *param_2;
      pbVar2 = pbVar3 + 1;
      *pbVar3 = *param_2;
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      pbVar3 = pbVar2;
    } while (param_3 != 0);
  }
  *pbVar2 = bVar1 & 0x7f;
  pbVar2[1] = 0xf7;
  FUN_0036965c(&DAT_0044231c,pbVar2 + -0x44231a,0);
  FUN_0036965c(&DAT_0044231c,pbVar2 + -0x44231a,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00320610 INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 00320624 INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 003209f8 INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 003245d6 INSTRUCTION LOAD R3 = 0x41
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
SCALAR 0x41 AT 003250ec INSTRUCTION LOAD R0 = 0x41
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
SCALAR 0x41 AT 00325522 INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 00325874 INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT 003259bc INSTRUCTION LOAD P4.H = 0x41
FUNCTION 003259b0 FUN_003259b0 success=true

void FUN_003259b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(PTR_DAT_00419414 + 4) != 0) {
    iVar2 = 4;
    do {
      puVar1 = (undefined4 *)(PTR_DAT_00419414 + iVar2);
      iVar2 = iVar2 + 4;
      (*(code *)*puVar1)();
    } while (*(int *)(PTR_DAT_00419414 + iVar2) != 0);
  }
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00325a16 INSTRUCTION LOAD P0.H = 0x41
FUNCTION 00325a10 FUN_00325a10 success=true

void FUN_00325a10(undefined4 *param_1)

{
  *param_1 = DAT_00419418;
  DAT_00419418 = param_1;
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00325aae INSTRUCTION LOAD P3.H = 0x41
FUNCTION 00325a76 FUN_00325a76 success=true

void FUN_00325a76(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  iVar1 = FUN_ffa001c8(param_1);
  if (iVar1 == 0) {
    puVar2 = &DAT_0041941c;
    do {
      if ((code *)*puVar2 == (code *)0x0) {
        if (DAT_00442c10 == 0) {
          DAT_00442c10 = 1;
          DAT_00442c14 = s_bad_allocation_00436694;
          DAT_00442c18 = &DAT_004039a0;
          FUN_00325a10(&DAT_00419420);
        }
        FUN_00325b58(&DAT_00442c14);
      }
      else {
        (*(code *)*puVar2)();
      }
      iVar1 = FUN_ffa001c8(param_1);
    } while (iVar1 == 0);
  }
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00325afa INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x41 AT 0032609a INSTRUCTION LOAD P5.H = 0x41
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
SCALAR 0x41 AT 003279f0 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 003279e8 FUN_003279e8 success=true

void FUN_003279e8(void)

{
  FUN_ffa00f68(DAT_00419430);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00327a10 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00327a08 FUN_00327a08 success=true

void FUN_00327a08(void)

{
  FUN_ffa00dd4(DAT_00419430);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00327a34 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00327a28 FUN_00327a28 success=true

void FUN_00327a28(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *DAT_00419438;
  DAT_00442c1c = param_1;
  piVar2 = DAT_00419438;
  while (iVar1 != 0) {
    *(undefined4 *)*piVar2 = param_1;
    (**(code **)(*(int *)(*piVar2 + 0x10) + 0x1c))
              (*piVar2 + (int)*(short *)(*(int *)(*piVar2 + 0x10) + 0x18));
    *(uint *)(*piVar2 + 0xc) = *(uint *)(*piVar2 + 0xc) | 2;
    iVar1 = *piVar2;
    if (((*(uint *)(iVar1 + 0xc) & 4) == 1) || ((*(uint *)(iVar1 + 0xc) & 8) == 1)) {
      (**(code **)(*(int *)(iVar1 + 0x10) + 0x2c))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x10) + 0x28));
    }
    iVar1 = piVar2[1];
    piVar2 = piVar2 + 1;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00327b84 INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT 00327c72 INSTRUCTION LOAD P5.H = 0x41
FUNCTION 00327c5c FUN_00327c5c success=true

void FUN_00327c5c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_003279e8();
  do {
    UNRECOVERED_JUMPTABLE = (code *)0x327c7c;
    iVar2 = -1;
    iVar1 = param_3 * (uint)(param_3 < 0x100) + (uint)(param_3 >= 0x100) * 0x100;
    FUN_00325cec(PTR_DAT_00419434,param_2,iVar1);
    FUN_ffa002e0(param_1,PTR_DAT_00419434,iVar1);
    param_3 = param_3 - iVar1;
    param_2 = param_2 + iVar1;
    param_1 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x00327cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if (param_3 < 1) {
      FUN_00327a08();
                    /* WARNING: Treating indirect jump as return */
      return;
    }
  } while ((iVar2 == 0) || (iVar2 == 1));
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 003280f2 INSTRUCTION LOAD P0.H = 0x41
FUNCTION 003280ec FUN_003280ec success=true

void FUN_003280ec(undefined4 *param_1)

{
  DAT_00419454 = *param_1;
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0032822e INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 003283ca INSTRUCTION LOAD P4.H = 0x41
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
SCALAR 0x41 AT 003284d2 INSTRUCTION LOAD R7.H = 0x41
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
SCALAR 0x41 AT 003285b8 INSTRUCTION LOAD R7.H = 0x41
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
SCALAR 0x41 AT 00328ace INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT 00328cb2 INSTRUCTION LOAD R7.H = 0x41
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
SCALAR 0x41 AT 0032aaf0 INSTRUCTION LOAD R7.H = 0x41
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
SCALAR 0x41 AT 0032ab08 INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x12 AT 0032b25c INSTRUCTION BITCLR (R1,0x12)
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
SCALAR 0x12 AT 0032b290 INSTRUCTION BITSET (R0,0x12)
SCALAR 0x11 AT 0032b762 INSTRUCTION BITSET (R1,0x11)
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
SCALAR 0x12 AT 0032bc22 INSTRUCTION BITSET (R1,0x12)
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
SCALAR 0x12 AT 0032bc58 INSTRUCTION BITSET (R0,0x12)
SCALAR 0x12 AT 0032bcb0 INSTRUCTION BITSET (R0,0x12)
SCALAR 0x41 AT 0032c28c INSTRUCTION LOAD R0 = B [SP + 0x41] (Z)
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
SCALAR 0x11 AT 0032e9e0 INSTRUCTION LOAD R1 = 0x11
FUNCTION 0032e9c0 FUN_0032e9c0 success=true

void FUN_0032e9c0(int param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18 [4];
  
  uVar1 = *param_2;
  if (0xe < uVar1) {
    if (uVar1 == 0xf) {
      FUN_0033fb88(&DAT_00445210);
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    if (uVar1 == 0x11) {
      iVar3 = FUN_0033fa68(param_1 + 0x28,(int)(short)param_2[1]);
      if (iVar3 != 0) {
        iVar2 = *(int *)(param_1 + 100);
        if (iVar3 == iVar2) {
          if (*(int *)(param_1 + 0x1080) == 0) {
            if (iVar2 != 0) {
              FUN_0032ef48(iVar2);
              FUN_0032ee5e(*(undefined4 *)(param_1 + 100));
              *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 100);
              *(undefined4 *)(param_1 + 100) = 0;
            }
            if (*(int *)(param_1 + 100) != 0) {
              FUN_0032eee4();
              FUN_0032ee5e(*(undefined4 *)(param_1 + 100));
            }
            if (*(int *)(param_1 + 100) == 0) {
              local_18[0] = 0x19;
              FUN_0033fbb0(&DAT_00445210,local_18);
            }
          }
        }
        else {
          FUN_0032ef48();
        }
      }
      FUN_0032e888(param_1);
                    /* WARNING: Treating indirect jump as return */
      return;
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0032f0fe INSTRUCTION LOAD P1.H = 0x41
FUNCTION 0032f06c FUN_0032f06c success=true

void FUN_0032f06c(int param_1)

{
  short sVar1;
  int iVar2;
  undefined1 auStack_18 [8];
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0034e146(*(undefined4 *)(param_1 + 0x34),auStack_18);
  local_a = *(undefined2 *)(param_1 + 0x46);
  local_10 = *(undefined2 *)(param_1 + 0x40);
  local_e = *(undefined2 *)(param_1 + 0x42);
  local_c = *(undefined2 *)(param_1 + 0x44);
  FUN_0035b844(&local_10,(int)*(short *)(*(int *)(param_1 + 0x34) + 0xc),
               (int)*(short *)(*(int *)(param_1 + 0x34) + 0xe));
  iVar2 = FUN_0035b5a4(auStack_18,&local_10);
  if (iVar2 != 0) {
    FUN_0032e05c(DAT_004451fc,param_1,&local_10);
    if (DAT_0041901c == 0) {
      (**(code **)(*(int *)(param_1 + 0x6c) + 100))
                (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0x60));
    }
    else {
      FUN_0034df50(*(undefined4 *)(param_1 + 0x34));
      sVar1 = *(short *)(*(int *)(param_1 + 0x34) + 0x94);
      (**(code **)(*(int *)(param_1 + 0x6c) + 100))
                (param_1 + *(short *)(*(int *)(param_1 + 0x6c) + 0x60));
      if (sVar1 != *(short *)(*(int *)(param_1 + 0x34) + 0x94)) {
        FUN_00356768(&DAT_004453c8,2,0);
      }
      FUN_0034df02(*(undefined4 *)(param_1 + 0x34));
    }
    if (DAT_004194f0 != 0) {
      FUN_0034e0b6(DAT_00440944,0x1000003);
      FUN_0034e8ae(DAT_00440944,&local_10);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0032f120 INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 0032f22e INSTRUCTION LOAD P3.H = 0x41
FUNCTION 0032f1a8 FUN_0032f1a8 success=true

int FUN_0032f1a8(int param_1)

{
  undefined2 uVar1;
  
  *(undefined **)(param_1 + 0x6c) = &DAT_00403cb0;
  FUN_0033e0f0();
  FUN_0033e0f0(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0x34) = param_1 + 0x54;
  *(undefined4 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(undefined4 *)(param_1 + 0x30) = 1;
  FUN_0035b896(param_1 + 0x54,0xffffffff,0xffffffff);
  *(undefined2 *)(param_1 + 0x2e) = 0xffff;
  uVar1 = FUN_0032e8ee(DAT_004451fc,0,param_1);
  *(undefined2 *)(param_1 + 0x2c) = uVar1;
  DAT_004194ec = DAT_004194ec + 1;
  FUN_0035b786(param_1 + 0x40,0,0,0,0);
  *(undefined2 *)(param_1 + 0x3e) = *(undefined2 *)(param_1 + 0x46);
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_1 + 0x44);
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(param_1 + 0x42);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_1 + 0x40);
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}


END_FUNCTION
SCALAR 0x12 AT 00330a30 INSTRUCTION LOAD R0 = 0x12
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
SCALAR 0x11 AT 00331ba4 INSTRUCTION LOAD R1 = 0x11
SCALAR 0x11 AT 00331bac INSTRUCTION LOAD R0 = 0x11
SCALAR 0x12 AT 003346d4 INSTRUCTION LOAD R0 = 0x12
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
SCALAR 0x11 AT 003347ee INSTRUCTION LOAD R0 = 0x11
SCALAR 0x12 AT 00335b7e INSTRUCTION LOAD R0 = 0x12
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
SCALAR 0x12 AT 00337be8 INSTRUCTION ADD R1 += 0x12
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
SCALAR 0x11 AT 00337ebc INSTRUCTION LOAD R0 = 0x11
SCALAR 0x11 AT 00337f3e INSTRUCTION LOAD P0 = 0x11
SCALAR 0x11 AT 00338644 INSTRUCTION LOAD R1 = 0x11
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
SCALAR 0x12 AT 00338744 INSTRUCTION LOAD R1 = 0x12
SCALAR 0x12 AT 00338758 INSTRUCTION LOAD R1 = 0x12
SCALAR 0x12 AT 00338a18 INSTRUCTION LOAD R1 = 0x12
FUNCTION 00338774 FUN_00338774 success=true

void FUN_00338774(int param_1,undefined4 param_2)

{
  *(short *)(param_1 + 0xbc) = (short)param_2;
  switch(param_2) {
  case 2:
    *(undefined2 *)(param_1 + 0xb0) = 0;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xae) = 0xf;
    *(undefined2 *)(param_1 + 0xbe) = 1;
    *(undefined2 *)(param_1 + 0xc0) = 0xffff;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 3:
  case 4:
    *(undefined2 *)(param_1 + 0xb0) = 0;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xbe) = 1;
    *(undefined2 *)(param_1 + 0xc0) = 1;
    *(undefined2 *)(param_1 + 0xae) = 0xffff;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 5:
    *(undefined2 *)(param_1 + 0xb0) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xae) = 0xffff;
    *(undefined2 *)(param_1 + 0xbe) = 1;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 6:
    *(undefined2 *)(param_1 + 0xbe) = 0;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xae) = 0xffff;
    *(undefined2 *)(param_1 + 0xb0) = 0xb;
    *(undefined2 *)(param_1 + 0xc0) = 1;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 7:
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xae) = 0xffff;
    *(undefined2 *)(param_1 + 0xb0) = 0xc;
    *(undefined2 *)(param_1 + 0xbe) = 1;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 8:
    *(undefined2 *)(param_1 + 0xbe) = 1;
    *(undefined2 *)(param_1 + 0xc0) = 1;
    *(undefined2 *)(param_1 + 0xae) = 0xffff;
    *(undefined2 *)(param_1 + 0xb0) = 0xd;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 9:
    *(undefined2 *)(param_1 + 0xbe) = 0;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xae) = 0xffff;
    *(undefined2 *)(param_1 + 0xb0) = 0xe;
    *(undefined2 *)(param_1 + 0xc0) = 1;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 10:
    *(undefined2 *)(param_1 + 0xbe) = 0;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xae) = 0xffff;
    *(undefined2 *)(param_1 + 0xb0) = 6;
    *(undefined2 *)(param_1 + 0xc0) = 1;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xb:
    *(undefined2 *)(param_1 + 0xb0) = 0;
    *(undefined2 *)(param_1 + 0xbe) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xae) = 0xffff;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xc:
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xae) = 0xffff;
    *(undefined2 *)(param_1 + 0xb0) = 0xb;
    *(undefined2 *)(param_1 + 0xbe) = 2;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xd:
    *(undefined2 *)(param_1 + 0xbe) = 1;
    *(undefined2 *)(param_1 + 0xc0) = 1;
    *(undefined2 *)(param_1 + 0xae) = 0xf;
    *(undefined2 *)(param_1 + 0xb0) = 0xe;
    *(undefined2 *)(param_1 + 0xc2) = 2;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xe:
  case 0xf:
    *(undefined2 *)(param_1 + 0xbe) = 1;
    *(undefined2 *)(param_1 + 0xc0) = 1;
    *(undefined2 *)(param_1 + 0xae) = 0xf;
    *(undefined2 *)(param_1 + 0xb0) = 6;
    *(undefined2 *)(param_1 + 0xc2) = 2;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x10:
    *(undefined2 *)(param_1 + 0xb0) = 0;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xbe) = 1;
    *(undefined2 *)(param_1 + 0xc0) = 1;
    *(undefined2 *)(param_1 + 0xae) = 0xf;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  default:
    *(undefined2 *)(param_1 + 0xb0) = 0;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xbe) = 1;
    *(undefined2 *)(param_1 + 0xc0) = 1;
    *(undefined2 *)(param_1 + 0xae) = 0xf;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x12:
    *(undefined2 *)(param_1 + 0xb0) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xae) = 0xf;
    *(undefined2 *)(param_1 + 0xbe) = 1;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x13:
    *(undefined2 *)(param_1 + 0xbe) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xae) = 0x12;
    *(undefined2 *)(param_1 + 0xb0) = 0x12;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x14:
  case 0x15:
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x17:
  case 0x18:
  case 0x19:
    *(undefined2 *)(param_1 + 0xbe) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xae) = 0xb;
    *(undefined2 *)(param_1 + 0xb0) = 0xb;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1a:
  case 0x1b:
    *(undefined2 *)(param_1 + 0xbe) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0xc2) = 0;
    *(undefined2 *)(param_1 + 0xae) = 0x12;
    *(undefined2 *)(param_1 + 0xb0) = 0x12;
    FUN_00338610();
                    /* WARNING: Treating indirect jump as return */
    return;
  }
}


END_FUNCTION
SCALAR 0x12 AT 00338a74 INSTRUCTION LOAD R1 = 0x12
SCALAR 0x11 AT 00338ca8 INSTRUCTION LOAD R0 = 0x11
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
SCALAR 0x11 AT 00338d3a INSTRUCTION LOAD R7 = 0x11
SCALAR 0x11 AT 0033a526 INSTRUCTION LOAD R1 = 0x11
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
SCALAR 0x41 AT 0033c544 INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x11 AT 0033c9ae INSTRUCTION LOAD R1 = 0x11
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
SCALAR 0x11 AT 0033cbb4 INSTRUCTION LOAD R1 = 0x11
SCALAR 0x11 AT 0033cdd6 INSTRUCTION LOAD R1 = 0x11
SCALAR 0x11 AT 0033d006 INSTRUCTION LOAD R1 = 0x11
SCALAR 0x11 AT 0033d086 INSTRUCTION LOAD R1 = 0x11
SCALAR 0x11 AT 0033d3be INSTRUCTION LOAD R1 = 0x11
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
SCALAR 0x12 AT 0033e530 INSTRUCTION LOAD R2 = W [P1 + 0x12] (X)
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
SCALAR 0x41 AT 0033e758 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 0033e720 FUN_0033e720 success=true

void FUN_0033e720(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar5 = *(int *)(param_1 + 0x838);
  if (0 < iVar5) {
    iVar4 = 0;
    do {
      iVar5 = iVar5 + -1;
      FUN_0033e604(param_1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar5 != 0);
  }
  if (0 < *(int *)(param_1 + 0x838)) {
    DAT_004194f8 = DAT_004194f8 + 1;
  }
  *(undefined2 *)(param_1 + 0x81c) = 0;
  FUN_0034e162(*(undefined4 *)(param_1 + 0x18),param_1 + 0x828);
  iVar5 = *(int *)(param_1 + 0x18);
  uVar1 = *(ushort *)(param_1 + 0x832);
  uVar2 = *(ushort *)(param_1 + 0x834);
  uVar3 = *(ushort *)(param_1 + 0x830);
  *(uint *)(iVar5 + 0x12) = (uint)*(ushort *)(param_1 + 0x836);
  *(uint *)(iVar5 + 0x10) = (uint)uVar2;
  *(uint *)(iVar5 + 0xe) = (uint)uVar1;
  *(uint *)(iVar5 + 0xc) = (uint)uVar3;
  *(undefined2 *)(param_1 + 0x83e) = 0;
  *(undefined2 *)(param_1 + 0x83c) = 0;
  *(undefined2 *)(param_1 + 0x840) = 0;
  *(undefined2 *)(param_1 + 0x81e) = 0;
  *(undefined2 *)(param_1 + 0x820) = 0;
  *(undefined2 *)(param_1 + 0x846) = 0;
  *(undefined2 *)(param_1 + 0x842) = 0;
  *(undefined2 *)(param_1 + 0x848) = 0;
  *(undefined2 *)(param_1 + 0x844) = 0;
                    /* WARNING: Could not recover jumptable at 0x0033e7c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x12 AT 0033e78c INSTRUCTION STORE W [P1 + 0x12] = R2
SCALAR 0x41 AT 0033e832 INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x12 AT 0033e86a INSTRUCTION STORE W [P1 + 0x12] = R2
SCALAR 0x12 AT 0033ebb2 INSTRUCTION LOAD R2 = W [P1 + 0x12] (X)
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
SCALAR 0x12 AT 0033ec1a INSTRUCTION LOAD R2 = W [P1 + 0x12] (X)
SCALAR 0x12 AT 0033f00c INSTRUCTION STORE W [P1 + 0x12] = R2
FUNCTION 0033ef3c FUN_0033ef3c success=true

void FUN_0033ef3c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uStack_18;
  short local_16;
  undefined2 uStack_14;
  short local_12;
  uint local_10;
  undefined4 local_c;
  
  local_12 = *(short *)(param_2 + 0x46);
  uStack_14 = 0;
  uStack_18 = *(undefined2 *)(param_2 + 0x40);
  local_16 = 0;
  FUN_0035b844(&uStack_18,(int)-*(short *)(param_1 + 0x83c),(int)-*(short *)(param_1 + 0x83e));
  if (*(short *)(param_1 + 0x82e) < local_12) {
    *(short *)(param_1 + 0x83e) =
         (local_12 - *(short *)(param_1 + 0x82e)) + *(short *)(param_1 + 0x83e);
    local_10 = *(uint *)(param_1 + 0x830);
    local_c = CONCAT22(*(undefined2 *)(param_1 + 0x836),*(undefined2 *)(param_1 + 0x834));
    FUN_0035b844(&local_10,(int)-*(short *)(param_1 + 0x83c),(int)-*(short *)(param_1 + 0x83e));
    iVar1 = *(int *)(param_1 + 0x18);
    *(uint *)(iVar1 + 0xe) = local_10 >> 0x10;
    *(uint *)(iVar1 + 0x10) = local_c;
    *(uint *)(iVar1 + 0xc) = local_10;
    *(uint *)(iVar1 + 0x12) = local_c >> 0x10;
    if (param_3 == 0) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    FUN_0033fb88(&DAT_00445210);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (*(short *)(param_1 + 0x82a) <= local_16) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  *(short *)(param_1 + 0x83e) =
       (local_16 - *(short *)(param_1 + 0x82a)) + *(short *)(param_1 + 0x83e);
  local_10 = *(uint *)(param_1 + 0x830);
  local_c = CONCAT22(*(undefined2 *)(param_1 + 0x836),*(undefined2 *)(param_1 + 0x834));
  FUN_0035b844(&local_10,(int)-*(short *)(param_1 + 0x83c),(int)-*(short *)(param_1 + 0x83e));
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(iVar1 + 0xe) = local_10 >> 0x10;
  *(uint *)(iVar1 + 0x10) = local_c;
  *(uint *)(iVar1 + 0xc) = local_10;
  *(uint *)(iVar1 + 0x12) = local_c >> 0x10;
  if (param_3 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0033fb88(&DAT_00445210);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x12 AT 0033f090 INSTRUCTION STORE W [P1 + 0x12] = R2
SCALAR 0x41 AT 0033f9fc INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x12 AT 003405e2 INSTRUCTION STORE W [FP + 0x12] = R1
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
SCALAR 0x12 AT 00340610 INSTRUCTION LOAD R0 = B [SP + 0x12] (Z)
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
SCALAR 0x12 AT 0034063a INSTRUCTION LOAD R0 = B [SP + 0x12] (Z)
SCALAR 0x12 AT 00340674 INSTRUCTION LOAD R0 = B [SP + 0x12] (Z)
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
SCALAR 0x12 AT 0034069e INSTRUCTION LOAD R0 = B [SP + 0x12] (Z)
SCALAR 0x41 AT 00340874 INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x12 AT 0034090c INSTRUCTION STORE W [P1 + 0x12] = R2
FUNCTION 003408dc FUN_003408dc success=true

void FUN_003408dc(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(int *)(param_1 + 0x14) = (int)*(short *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x16) = (int)*(short *)(param_1 + 0x1e);
  *(int *)(param_1 + 0x10) = (int)*(short *)(param_1 + 0x18);
  *(int *)(param_1 + 0x12) = (int)*(short *)(param_1 + 0x1a);
  (**(code **)(*(int *)(param_1 + 0x24) + 0x1c))
            (param_1 + 0x24 + (int)*(short *)(*(int *)(param_1 + 0x24) + 0x18),
             (int)*(short *)(param_1 + 0x18),(int)*(short *)(param_1 + 0x1a),
             (int)*(short *)(param_1 + 0x1c),(int)*(short *)(param_1 + 0x1e));
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x12 AT 00340960 INSTRUCTION STORE W [P1 + 0x12] = R2
FUNCTION 0034092a FUN_0034092a success=true

void FUN_0034092a(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_1;
  for (uVar2 = (uint)param_1[3] >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = param_2;
    if (uVar2 == 0) break;
    puVar1 = puVar1 + 1;
  }
  param_1[8] = 1;
  param_1[0x1c] = 0;
  *(int *)((int)param_1 + 0x16) = (int)*(short *)((int)param_1 + 0x1e);
  param_1[5] = (int)(short)param_1[7];
  *(int *)((int)param_1 + 0x12) = (int)*(short *)((int)param_1 + 0x1a);
  param_1[4] = (int)(short)param_1[6];
  (**(code **)(param_1[9] + 0x1c))
            ((int)param_1 + *(short *)(param_1[9] + 0x18) + 0x24,(int)(short)param_1[6],
             (int)*(short *)((int)param_1 + 0x1a),(int)(short)param_1[7],
             (int)*(short *)((int)param_1 + 0x1e));
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x12 AT 003409d2 INSTRUCTION LOAD R1 = W [P1 + 0x12] (X)
FUNCTION 00340982 FUN_00340982 success=true

void FUN_00340982(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  undefined2 uStack_e;
  ushort uVar4;
  undefined2 uStack_a;
  ushort uVar5;
  
  uStack_e = *(short *)(param_2 + 2);
  uVar5 = *(short *)(param_2 + 6) >> 0xf;
  if ((-1 < *(short *)(param_2 + 4)) && (-1 < *(short *)(param_2 + 6))) {
    if ((short)uStack_e < 0) {
      uStack_e = 0;
    }
    bVar3 = (short)uStack_e < 0;
    iVar2 = *(short *)(param_1 + 0x1c) + -1;
    uStack_a = (ushort)((uint)iVar2 >> 0x10);
    uStack_e = uVar5;
    uVar4 = (ushort)iVar2;
    if (bVar3) {
      uStack_e = 0;
      uVar4 = uVar5;
    }
    uVar1 = *(ushort *)(param_1 + 0x1e);
    if ((short)uVar1 < (short)uStack_a) {
      uVar5 = (short)uVar1 >> 0xf;
      uStack_a = uVar1;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      *(uint *)(param_1 + 0x10) = (uint)uStack_e << 0x10;
      *(uint *)(param_1 + 0x12) = (uint)uStack_e;
      *(uint *)(param_1 + 0x14) = CONCAT22(uStack_a,uVar4);
      *(uint *)(param_1 + 0x16) = (uint)uStack_a;
      *(undefined4 *)(param_1 + 0x20) = 1;
    }
    else {
      if ((short)uStack_e < *(short *)(param_1 + 0x12)) {
        *(uint *)(param_1 + 0x12) = (uint)uStack_e;
      }
      if (*(short *)(param_1 + 0x16) < (short)uStack_a) {
        *(uint *)(param_1 + 0x16) = (uint)uStack_a;
      }
    }
    iVar2 = *(int *)(param_1 + 0x24);
    (**(code **)(iVar2 + 0x1c))
              (param_1 + 0x24 + (int)*(short *)(iVar2 + 0x18),0,(int)(short)uStack_e,
               (int)(short)uVar4,(int)(short)uStack_a,0,uVar4,uVar5);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x12 AT 003409dc INSTRUCTION STORE W [P1 + 0x12] = R1
SCALAR 0x12 AT 00340a12 INSTRUCTION STORE W [P1 + 0x12] = R1
SCALAR 0x12 AT 00340b10 INSTRUCTION STORE W [P5 + 0x12] = R2
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
SCALAR 0x41 AT 003442b2 INSTRUCTION LOAD P4.H = 0x41
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
SCALAR 0x41 AT 003444e2 INSTRUCTION LOAD P4.H = 0x41
SCALAR 0x41 AT 00344506 INSTRUCTION LOAD P3.H = 0x41
SCALAR 0x12 AT 0034823a INSTRUCTION LOAD R0 = W [P1 + 0x12] (X)
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
SCALAR 0x12 AT 0034a6d0 INSTRUCTION LOAD R6 = 0x12
FUNCTION 0034a684 FUN_0034a684 success=true

void FUN_0034a684(int *param_1,int param_2)

{
  param_1[6] = (int)&DAT_00406010;
  *param_1 = param_2;
  FUN_0035b786(param_1 + 1,0,0,(int)(short)(*(short *)(param_2 + 4) + -1),0);
  param_1[3] = 0x12;
  FUN_0030e764(0x12);
  param_1[5] = (int)param_1;
  param_1[4] = 0x12;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x12 AT 0034a6d4 INSTRUCTION LOAD R0 = 0x12
SCALAR 0x4d AT 0034d468 INSTRUCTION LOAD R2 = 0x4d
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
SCALAR 0x4d AT 0034d704 INSTRUCTION LOAD R1 = 0x4d
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
SCALAR 0x41 AT 0034da20 INSTRUCTION LOAD R0.H = 0x41
FUNCTION 0034da16 FUN_0034da16 success=true

undefined1 FUN_0034da16(byte *param_1)

{
                    /* WARNING: Treating indirect jump as return */
  return (&DAT_00419538)[*param_1];
}


END_FUNCTION
SCALAR 0x12 AT 0034db98 INSTRUCTION LOAD R2 = B [SP + 0x12] (Z)
FUNCTION 0034db84 FUN_0034db84 success=true

void FUN_0034db84(byte *param_1,uint param_2)

{
  param_2 = param_2 >> 6;
  *param_1 = (((byte)(param_2 >> 0x10) >> 5) << 3 | (byte)(param_2 >> 8) >> 5) << 2 |
             (byte)param_2 & 3;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x11 AT 0034db9e INSTRUCTION LOAD R3 = B [SP + 0x11] (Z)
SCALAR 0x41 AT 0034f1e2 INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x12 AT 0034f22a INSTRUCTION STORE W [P5 + 0x12] = R0
SCALAR 0x41 AT 0034f32c INSTRUCTION LOAD P2.H = 0x41
FUNCTION 0034f31c FUN_0034f31c success=true

undefined4 FUN_0034f31c(undefined4 param_1,int param_2)

{
  undefined4 unaff_FP;
  undefined2 local_10;
  undefined2 uStack_e;
  short sStack_c;
  int local_a;
  undefined2 uStack_6;
  
  uStack_6 = (undefined2)((uint)unaff_FP >> 0x10);
  local_10 = DAT_00419648;
  uStack_e = DAT_0041964a;
  if (param_2 == 0) {
    param_2 = DAT_00445300;
  }
  sStack_c = *(short *)(param_2 + 4) + -1;
  local_a = *(short *)(param_2 + 6) + -1;
  FUN_0034f17c(param_1,param_2,&local_10,param_1);
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}


END_FUNCTION
SCALAR 0x12 AT 0034f34e INSTRUCTION STORE W [SP + 0x12] = R1
SCALAR 0x12 AT 0034fbf6 INSTRUCTION LOAD R1 = 0x12
FUNCTION 0034fbd0 FUN_0034fbd0 success=true

undefined4 FUN_0034fbd0(short *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 2);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x10));
    iVar1 = (int)*param_1;
    if ((-1 < iVar1) && (iVar1 < 0x12)) {
      (*(code *)(&PTR_LAB_00439afc)[iVar1])(*(undefined4 *)(param_1 + 2),0);
    }
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
                    /* WARNING: Treating indirect jump as return */
    return 1;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x4d AT 003510c6 INSTRUCTION LOAD R1 = 0x4d
SCALAR 0x4d AT 0035171c INSTRUCTION LOAD R0 = 0x4d
SCALAR 0x4d AT 00351f7a INSTRUCTION LOAD R1 = 0x4d
SCALAR 0x12 AT 00352408 INSTRUCTION STORE W [P1 + 0x12] = R2
SCALAR 0x41 AT 00353268 INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 0035386e INSTRUCTION LOAD P0.H = 0x41
FUNCTION 00353800 FUN_00353800 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_00353800(undefined1 *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x80)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  *param_1 = 0x2d;
  param_1[1] = 0x2d;
  param_1[2] = 0x2d;
                    /* WARNING: Treating indirect jump as return */
  return 3;
}


END_FUNCTION
SCALAR 0x41 AT 00353d2e INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 003550cc INSTRUCTION LOAD P4.H = 0x41
SCALAR 0x41 AT 003551bc INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x12 AT 003557b6 INSTRUCTION LOAD R5 = 0x12
FUNCTION 003557a8 FUN_003557a8 success=true

void FUN_003557a8(int param_1)

{
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  
  *(undefined4 *)(param_1 + 0x70) = 1;
  FUN_0032f468();
  local_18 = 0x12;
  local_16 = FUN_0032ebbe(param_1);
  local_14 = param_1;
  FUN_0032e274(DAT_004451fc,&local_18);
  FUN_00358604();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x12 AT 003557fc INSTRUCTION LOAD R0 = 0x12
FUNCTION 003557f8 FUN_003557f8 success=true

void FUN_003557f8(void)

{
  FUN_0035861c(0x12);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x12 AT 00355a80 INSTRUCTION LOAD R0 = 0x12
SCALAR 0x12 AT 00355aa0 INSTRUCTION LOAD R0 = 0x12
SCALAR 0x12 AT 00355acc INSTRUCTION LOAD R1 = 0x12
SCALAR 0x12 AT 00355c50 INSTRUCTION LOAD R5 = 0x12
FUNCTION 00355c40 FUN_00355c40 success=true

void FUN_00355c40(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  
  piVar3 = param_1 + 0x10;
  iVar2 = 0x10;
  do {
    iVar1 = *param_1;
    if ((iVar1 != 0) && ((param_2 < 0 || (param_2 == (short)*piVar3)))) {
      *(undefined4 *)(*param_1 + 0x70) = 1;
      FUN_0032f468(iVar1);
      local_18 = 0x12;
      local_16 = FUN_0032ebbe(iVar1);
      local_14 = iVar1;
      FUN_0032e274(DAT_004451fc,&local_18);
      FUN_00358604();
    }
    iVar2 = iVar2 + -1;
    piVar3 = (int *)((int)piVar3 + 2);
    param_1 = param_1 + 1;
  } while (iVar2 != 0);
                    /* WARNING: Could not recover jumptable at 0x00355cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x12 AT 00355d14 INSTRUCTION LOAD R0 = 0x12
FUNCTION 00355cb4 FUN_00355cb4 success=true

void FUN_00355cb4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined2 local_18;
  undefined2 local_16;
  int local_14;
  
  piVar3 = param_1 + 0x10;
  iVar2 = 0x10;
  do {
    iVar1 = *param_1;
    if ((iVar1 != 0) && (*(short *)(&DAT_00439ef4 + (short)*piVar3 * 8) <= param_2)) {
      *(undefined4 *)(*param_1 + 0x70) = 1;
      FUN_0032f468(iVar1);
      local_18 = 0x12;
      local_16 = FUN_0032ebbe(iVar1);
      local_14 = iVar1;
      FUN_0032e274(DAT_004451fc,&local_18);
      FUN_00358604();
    }
    iVar2 = iVar2 + -1;
    piVar3 = (int *)((int)piVar3 + 2);
    param_1 = param_1 + 1;
  } while (iVar2 != 0);
                    /* WARNING: Could not recover jumptable at 0x00355d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x12 AT 0035606c INSTRUCTION LOAD R0 = 0x12
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
SCALAR 0x12 AT 00356100 INSTRUCTION LOAD R2 = 0x12
FUNCTION 003560c6 FUN_003560c6 success=true

undefined4 FUN_003560c6(int param_1,int param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if ((-1 < param_2) && (param_2 < 4)) {
    if (*(short *)(param_1 + 0xa0) == 0) {
      FUN_00355e1c();
                    /* WARNING: Treating indirect jump as return */
      return 1;
    }
    *(short *)(param_1 + 0xa2) = (short)param_2;
    local_18 = 0;
    local_14 = 0;
    FUN_0032e274(DAT_004451fc,&local_18);
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x12 AT 003563be INSTRUCTION LOAD R5 = 0x12
FUNCTION 00356376 FUN_00356376 success=true

void FUN_00356376(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined2 local_14;
  undefined2 uStack_12;
  
  iVar4 = 0x10;
  iVar2 = 0;
  psVar3 = (short *)(param_1 + 0x40);
  while( true ) {
    if (param_2 == *psVar3) break;
    if ((iVar4 == 0) || (iVar4 = iVar4 + -1, iVar2 = iVar2 + 1, psVar3 = psVar3 + 1, iVar4 == 0))
    goto LAB_003563a0;
  }
  piVar1 = (int *)(param_1 + iVar2 * 4);
  iVar2 = *piVar1;
  *(undefined4 *)(*piVar1 + 0x70) = 1;
  FUN_0032f468(iVar2);
  local_18 = 0x12;
  uStack_16 = 0;
  uStack_16 = FUN_0032ebbe(iVar2);
  local_14 = (undefined2)iVar2;
  uStack_12 = (undefined2)((uint)iVar2 >> 0x10);
  FUN_0032e274(DAT_004451fc,&local_18);
  FUN_00358604();
LAB_003563a0:
  FUN_00356230(param_1);
                    /* WARNING: Could not recover jumptable at 0x003563b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00356524 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 0035650c FUN_0035650c success=true

void FUN_0035650c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (DAT_00419b48 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  uVar1 = 2;
  if (param_4 == 0) {
    uVar1 = 1;
  }
  FUN_0035b288(&DAT_00446db8,uVar1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0035674a INSTRUCTION LOAD P0.H = 0x41
FUNCTION 00356736 FUN_00356736 success=true

undefined * FUN_00356736(int param_1)

{
  if ((-1 < param_1) && (param_1 < 2)) {
                    /* WARNING: Treating indirect jump as return */
    return (&PTR_DAT_00419a34)[param_1];
  }
                    /* WARNING: Treating indirect jump as return */
  return (undefined *)0x0;
}


END_FUNCTION
SCALAR 0x41 AT 003567b4 INSTRUCTION LOAD P2.H = 0x41
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
SCALAR 0x41 AT 00357068 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00357060 FUN_00357060 success=true

void FUN_00357060(void)

{
  DAT_00419a3c = 0xffff;
  FUN_003585d0();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00357098 INSTRUCTION LOAD P4.H = 0x41
FUNCTION 0035707c FUN_0035707c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035707c(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x11 AT 00357776 INSTRUCTION LOAD R1 = 0x11
SCALAR 0x11 AT 00357846 INSTRUCTION LOAD R1 = 0x11
SCALAR 0x11 AT 00357916 INSTRUCTION LOAD R1 = 0x11
SCALAR 0x11 AT 003579e6 INSTRUCTION LOAD R1 = 0x11
SCALAR 0x41 AT 00357f20 INSTRUCTION LOAD P5.H = 0x41
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
SCALAR 0x41 AT 003585c2 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 003585b8 FUN_003585b8 success=true

int FUN_003585b8(void)

{
                    /* WARNING: Treating indirect jump as return */
  return (int)DAT_00419a5e;
}


END_FUNCTION
SCALAR 0x41 AT 003585d8 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 003585d0 FUN_003585d0 success=true

void FUN_003585d0(void)

{
  DAT_00419a6c = DAT_00419a6c | 0x1000;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 003585f6 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 003585ec FUN_003585ec success=true

void FUN_003585ec(void)

{
  DAT_00419a54 = 1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0035860c INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00358604 FUN_00358604 success=true

void FUN_00358604(void)

{
  DAT_00419a50 = 1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00358680 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00358678 FUN_00358678 success=true

void FUN_00358678(undefined2 param_1)

{
  DAT_00419a6c = DAT_00419a6c | 0x8000;
  DAT_00419a50 = 0;
  DAT_00419a54 = 0;
  DAT_00419a5c = param_1;
  FUN_0033f904(0x5200);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00358690 INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 003586c0 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 003586b8 FUN_003586b8 success=true

undefined4 FUN_003586b8(void)

{
  DAT_00419a5c = 0xfffe;
  DAT_00419a50 = 1;
  FUN_0033f904(&DAT_00445200);
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
SCALAR 0x41 AT 003586ec INSTRUCTION LOAD P1.H = 0x41
FUNCTION 003586e4 FUN_003586e4 success=true

void FUN_003586e4(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 < 0) {
    param_1 = (int)DAT_00419a5e;
  }
  iVar2 = (int)(short)param_1;
  sVar1 = 0;
  if (DAT_00419a58 == iVar2) {
    puVar3 = (undefined *)0x0;
    if (-1 < iVar2) {
      puVar3 = (&PTR_DAT_0043a980)[iVar2 * 4];
    }
    if (*(code **)(puVar3 + 4) != (code *)0x0) {
      sVar1 = (**(code **)(puVar3 + 4))(param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0035870a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)((int)sVar1);
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00358744 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00358734 FUN_00358734 success=true

void FUN_00358734(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  ulonglong uVar3;
  undefined4 uVar4;
  
  uVar1 = (uint)DAT_00419a5e;
  uVar3 = (ulonglong)uVar1;
  uVar4 = param_1;
  if ((int)DAT_00419a58 == uVar1) {
    puVar2 = (undefined *)0x0;
    if (-1 < (int)uVar1) {
      puVar2 = (&PTR_DAT_0043a980)[uVar1 * 4];
    }
    uVar3 = 0;
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(puVar2 + 4))();
    }
  }
  if ((short)(uVar3 >> 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0035878e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0030db0c(param_1,(int)uVar3,(int)(uVar3 >> 0x20),uVar4);
                    /* WARNING: Could not recover jumptable at 0x0035879e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 003587b0 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 003587a0 FUN_003587a0 success=true

void FUN_003587a0(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  ulonglong uVar3;
  undefined4 uVar4;
  
  uVar1 = (uint)DAT_00419a5e;
  uVar3 = (ulonglong)uVar1;
  uVar4 = param_1;
  if ((int)DAT_00419a58 == uVar1) {
    puVar2 = (undefined *)0x0;
    if (-1 < (int)uVar1) {
      puVar2 = (&PTR_DAT_0043a980)[uVar1 * 4];
    }
    uVar3 = 0;
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(puVar2 + 4))();
    }
  }
  if ((short)(uVar3 >> 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x003587fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0030d94c(param_1,(int)uVar3,(int)(uVar3 >> 0x20),uVar4);
                    /* WARNING: Could not recover jumptable at 0x0035880a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0035881c INSTRUCTION LOAD P1.H = 0x41
FUNCTION 0035880c FUN_0035880c success=true

void FUN_0035880c(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  ulonglong uVar3;
  undefined4 uVar4;
  
  uVar1 = (uint)DAT_00419a5e;
  uVar3 = (ulonglong)uVar1;
  uVar4 = param_1;
  if ((int)DAT_00419a58 == uVar1) {
    puVar2 = (undefined *)0x0;
    if (-1 < (int)uVar1) {
      puVar2 = (&PTR_DAT_0043a980)[uVar1 * 4];
    }
    uVar3 = 0;
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(puVar2 + 4))();
    }
  }
  if ((short)(uVar3 >> 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00358866. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0030dc04(param_1,(int)uVar3,(int)(uVar3 >> 0x20),uVar4);
                    /* WARNING: Could not recover jumptable at 0x00358876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 003588a8 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00358878 FUN_00358878 success=true

void FUN_00358878(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined *puVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  
  sVar1 = *(short *)(param_1 + 2);
  iVar4 = sVar1 * 8;
  sVar2 = *(short *)(param_1 + 4);
  if ((int)sVar2 != (int)*(short *)(&DAT_0044545c + iVar4)) {
    *(short *)(&DAT_0044545c + iVar4) = sVar2;
    *(undefined4 *)(&DAT_00445460 + iVar4) = 1;
  }
  sVar3 = 0;
  iVar4 = (int)DAT_00419a5e;
  if (DAT_00419a58 == iVar4) {
    puVar5 = (undefined *)0x0;
    if (-1 < iVar4) {
      puVar5 = (&PTR_DAT_0043a980)[iVar4 * 4];
    }
    if (*(code **)(puVar5 + 4) != (code *)0x0) {
      sVar3 = (**(code **)(puVar5 + 4))();
    }
  }
  if (sVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x003588f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0030d998((int)sVar1,(int)sVar2);
                    /* WARNING: Could not recover jumptable at 0x0035890c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0035894a INSTRUCTION LOAD P5.H = 0x41
FUNCTION 00358938 FUN_00358938 success=true

void FUN_00358938(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 local_1c [5];
  
  FUN_0030d978();
  iVar1 = (int)(short)DAT_00419a60;
  iVar2 = (int)(char)(&DAT_0043a985)[DAT_00419a5e * 0x10];
  if ((-1 < iVar2) && (iVar1 != iVar2)) {
    FUN_0030d9a4(iVar2);
    DAT_00419a60 = iVar2;
  }
  if (-1 < *(short *)(&DAT_0043a986 + DAT_00419a5e * 0x10)) {
    FUN_003581ac();
  }
  DAT_00419a58 = (undefined2)param_1;
  iVar2 = param_1;
  if (param_1 < 0) {
    iVar2 = (int)DAT_00419a5e;
  }
  iVar2 = (int)(short)iVar2;
  local_1c[0] = 1;
  if (param_1 == iVar2) {
    puVar3 = (undefined *)0x0;
    if (-1 < iVar2) {
      puVar3 = (&PTR_DAT_0043a980)[iVar2 * 4];
    }
    if (*(code **)(puVar3 + 4) != (code *)0x0) {
      (**(code **)(puVar3 + 4))(local_1c);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x003589c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 003589e4 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 003589d4 FUN_003589d4 success=true

void FUN_003589d4(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar3;
  undefined4 uVar4;
  
  uVar1 = (uint)DAT_00419a5e;
  uVar3 = (ulonglong)uVar1;
  uVar4 = param_1;
  if ((int)DAT_00419a58 == uVar1) {
    puVar2 = (undefined *)0x0;
    if (-1 < (int)uVar1) {
      puVar2 = (&PTR_DAT_0043a980)[uVar1 * 4];
    }
    uVar3 = 0;
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(puVar2 + 4))();
    }
  }
  if ((short)(uVar3 >> 0x20) == 0) {
    FUN_0030d91c(param_1,(int)uVar3,(int)(uVar3 >> 0x20),uVar4);
  }
  FUN_0032e888(DAT_004451fc);
                    /* WARNING: Could not recover jumptable at 0x00358a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00358a5c INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00358a4c FUN_00358a4c success=true

void FUN_00358a4c(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar3;
  undefined4 uVar4;
  
  uVar1 = (uint)DAT_00419a5e;
  uVar3 = (ulonglong)uVar1;
  uVar4 = param_1;
  if ((int)DAT_00419a58 == uVar1) {
    puVar2 = (undefined *)0x0;
    if (-1 < (int)uVar1) {
      puVar2 = (&PTR_DAT_0043a980)[uVar1 * 4];
    }
    uVar3 = 0;
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(puVar2 + 4))();
    }
  }
  if ((short)(uVar3 >> 0x20) == 0) {
    FUN_0030d910(param_1,(int)uVar3,(int)(uVar3 >> 0x20),uVar4);
  }
  FUN_0032e888(DAT_004451fc);
                    /* WARNING: Could not recover jumptable at 0x00358ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00358af0 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00358ac4 FUN_00358ac4 success=true

void FUN_00358ac4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  undefined *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = FUN_0033f904(&DAT_00445200,param_2,param_3,param_1);
  if (iVar2 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  sVar1 = 0;
  iVar2 = (int)DAT_00419a5e;
  if (DAT_00419a58 == iVar2) {
    puVar3 = (undefined *)0x0;
    if (-1 < iVar2) {
      puVar3 = (&PTR_DAT_0043a980)[iVar2 * 4];
    }
    if (*(code **)(puVar3 + 4) != (code *)0x0) {
      sVar1 = (**(code **)(puVar3 + 4))(param_1);
    }
  }
  if (sVar1 == 0) {
    FUN_0030dc7a(param_1);
  }
  FUN_0032e888(DAT_004451fc);
                    /* WARNING: Could not recover jumptable at 0x00358b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00358b9c INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00358b58 FUN_00358b58 success=true

void FUN_00358b58(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  undefined *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = FUN_0033f93c(&DAT_00445200);
  if (iVar2 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar2 = FUN_0033f904(&DAT_00445200);
  if (iVar2 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  sVar1 = 0;
  iVar2 = (int)DAT_00419a5e;
  if (DAT_00419a58 == iVar2) {
    puVar3 = (undefined *)0x0;
    if (-1 < iVar2) {
      puVar3 = (&PTR_DAT_0043a980)[iVar2 * 4];
    }
    if (*(code **)(puVar3 + 4) != (code *)0x0) {
      sVar1 = (**(code **)(puVar3 + 4))(param_1);
    }
  }
  if (sVar1 == 0) {
    FUN_0030d928(param_1);
  }
  FUN_0032e888(DAT_004451fc);
                    /* WARNING: Could not recover jumptable at 0x00358bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00358c34 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00358c08 FUN_00358c08 success=true

void FUN_00358c08(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_0033f904(&DAT_00445200,param_2,param_3,param_1);
  if (iVar1 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = (int)DAT_00419a5e;
  if (DAT_00419a58 == iVar1) {
    puVar2 = (undefined *)0x0;
    if (-1 < iVar1) {
      puVar2 = (&PTR_DAT_0043a980)[iVar1 * 4];
    }
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      (**(code **)(puVar2 + 4))(param_1);
    }
  }
  FUN_0032e888(DAT_004451fc);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00358c94 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00358c84 FUN_00358c84 success=true

void FUN_00358c84(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar3;
  undefined4 uVar4;
  
  uVar1 = (uint)DAT_00419a5e;
  uVar3 = (ulonglong)uVar1;
  uVar4 = param_1;
  if ((int)DAT_00419a58 == uVar1) {
    puVar2 = (undefined *)0x0;
    if (-1 < (int)uVar1) {
      puVar2 = (&PTR_DAT_0043a980)[uVar1 * 4];
    }
    uVar3 = 0;
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(puVar2 + 4))();
    }
  }
  if ((short)(uVar3 >> 0x20) == 0) {
    FUN_0030da4e(param_1,(int)uVar3,(int)(uVar3 >> 0x20),uVar4);
  }
  FUN_0032e888(DAT_004451fc);
                    /* WARNING: Could not recover jumptable at 0x00358cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00358d0c INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00358cfc FUN_00358cfc success=true

void FUN_00358cfc(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar3;
  undefined4 uVar4;
  
  uVar1 = (uint)DAT_00419a5e;
  uVar3 = (ulonglong)uVar1;
  uVar4 = param_1;
  if ((int)DAT_00419a58 == uVar1) {
    puVar2 = (undefined *)0x0;
    if (-1 < (int)uVar1) {
      puVar2 = (&PTR_DAT_0043a980)[uVar1 * 4];
    }
    uVar3 = 0;
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(puVar2 + 4))();
    }
  }
  if ((short)(uVar3 >> 0x20) == 0) {
    FUN_0030db56(param_1,(int)uVar3,(int)(uVar3 >> 0x20),uVar4);
  }
  FUN_0032e888(DAT_004451fc);
                    /* WARNING: Could not recover jumptable at 0x00358d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00358da0 INSTRUCTION LOAD P4.H = 0x41
FUNCTION 00358d72 FUN_00358d72 success=true

void FUN_00358d72(int param_1)

{
  short sVar1;
  int iVar2;
  undefined *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_0032e5b4(DAT_004451fc,(int)*(short *)(param_1 + 2),param_1 + 4);
  sVar1 = 0;
  iVar2 = (int)DAT_00419a5e;
  if (DAT_00419a58 == iVar2) {
    puVar3 = (undefined *)0x0;
    if (-1 < iVar2) {
      puVar3 = (&PTR_DAT_0043a980)[iVar2 * 4];
    }
    if (*(code **)(puVar3 + 4) != (code *)0x0) {
      sVar1 = (**(code **)(puVar3 + 4))(param_1);
    }
  }
  if (sVar1 == 0) {
    FUN_0030db8c(param_1);
  }
  FUN_0032e888(DAT_004451fc);
                    /* WARNING: Could not recover jumptable at 0x00358df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00358e10 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00358e00 FUN_00358e00 success=true

void FUN_00358e00(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = (uint)DAT_00419a5e;
  uVar3 = (ulonglong)uVar1;
  iVar4 = param_1;
  if ((int)DAT_00419a58 == uVar1) {
    puVar2 = (undefined *)0x0;
    if (-1 < (int)uVar1) {
      puVar2 = (&PTR_DAT_0043a980)[uVar1 * 4];
    }
    uVar3 = 0;
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(puVar2 + 4))();
    }
  }
  if ((short)(uVar3 >> 0x20) == 0) {
    FUN_0030d940(*(undefined4 *)(param_1 + 4),(int)uVar3,(int)(uVar3 >> 0x20),iVar4);
  }
  FUN_0032e888(DAT_004451fc);
                    /* WARNING: Could not recover jumptable at 0x00358e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00358e88 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00358e78 FUN_00358e78 success=true

void FUN_00358e78(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = (uint)DAT_00419a5e;
  uVar3 = (ulonglong)uVar1;
  iVar4 = param_1;
  if ((int)DAT_00419a58 == uVar1) {
    puVar2 = (undefined *)0x0;
    if (-1 < (int)uVar1) {
      puVar2 = (&PTR_DAT_0043a980)[uVar1 * 4];
    }
    uVar3 = 0;
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(puVar2 + 4))();
    }
  }
  if ((short)(uVar3 >> 0x20) == 0) {
    FUN_0030d934(*(undefined4 *)(param_1 + 4),(int)uVar3,(int)(uVar3 >> 0x20),iVar4);
  }
  FUN_0032e888(DAT_004451fc);
                    /* WARNING: Could not recover jumptable at 0x00358ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00358f00 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00358ef0 FUN_00358ef0 success=true

void FUN_00358ef0(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = (uint)DAT_00419a5e;
  uVar3 = (ulonglong)uVar1;
  iVar4 = param_1;
  if ((int)DAT_00419a58 == uVar1) {
    puVar2 = (undefined *)0x0;
    if (-1 < (int)uVar1) {
      puVar2 = (&PTR_DAT_0043a980)[uVar1 * 4];
    }
    uVar3 = 0;
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(puVar2 + 4))();
    }
  }
  if ((short)(uVar3 >> 0x20) == 0) {
    FUN_0030da34(*(undefined4 *)(param_1 + 4),(int)uVar3,(int)(uVar3 >> 0x20),iVar4);
  }
  FUN_0032e888(DAT_004451fc);
                    /* WARNING: Could not recover jumptable at 0x00358f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00358f70 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00358f68 FUN_00358f68 success=true

void FUN_00358f68(void)

{
  short sVar1;
  int iVar2;
  undefined *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  sVar1 = 0;
  iVar2 = (int)DAT_00419a5e;
  if (DAT_00419a58 == iVar2) {
    puVar3 = (undefined *)0x0;
    if (-1 < iVar2) {
      puVar3 = (&PTR_DAT_0043a980)[iVar2 * 4];
    }
    if (*(code **)(puVar3 + 4) != (code *)0x0) {
      sVar1 = (**(code **)(puVar3 + 4))();
    }
  }
  if (sVar1 == 0) {
    FUN_0030d904();
  }
  FUN_0032e888(DAT_004451fc);
                    /* WARNING: Could not recover jumptable at 0x00358fce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00358fe8 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00358fd8 FUN_00358fd8 success=true

void FUN_00358fd8(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = (uint)DAT_00419a5e;
  uVar3 = (ulonglong)uVar1;
  iVar4 = param_1;
  if ((int)DAT_00419a58 == uVar1) {
    puVar2 = (undefined *)0x0;
    if (-1 < (int)uVar1) {
      puVar2 = (&PTR_DAT_0043a980)[uVar1 * 4];
    }
    uVar3 = 0;
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(puVar2 + 4))();
    }
  }
  if ((short)(uVar3 >> 0x20) == 0) {
    FUN_0030dbdc(*(undefined4 *)(param_1 + 4),(int)uVar3,(int)(uVar3 >> 0x20),iVar4);
  }
  FUN_0032e888(DAT_004451fc);
                    /* WARNING: Could not recover jumptable at 0x00359044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0035905c INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT 0035909c INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 003596b8 INSTRUCTION LOAD P4.H = 0x41
FUNCTION 003596ac FUN_003596ac success=true

void FUN_003596ac(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)&DAT_00445442;
  if ((DAT_00419a46 != 0) ||
     (((uint)(byte)(&DAT_0044544c)[(int)(char)DAT_00445442 >> 3 & 0xff] &
      1 << ((int)(char)DAT_00445442 & 7U) & 0xffU) == 0)) {
    FUN_0030e00c(0xffffffff);
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_00355dbe(&DAT_00445310,0xffffffff);
  DAT_00419a60._2_2_ = 1;
  iVar1 = FUN_0032e7dc(DAT_004451fc,(int)*pcVar2);
  if (iVar1 == 0) {
    FUN_0035a43c((int)*pcVar2);
  }
  iVar1 = FUN_0032e788(DAT_004451fc,(int)*pcVar2);
  if (iVar1 == 0) {
    FUN_0035a400((int)*pcVar2);
  }
  FUN_00359050();
  DAT_00419a60._2_2_ = 0;
  if (pcVar2[2] == '\0') {
    FUN_0030e00c((int)DAT_00419a42);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0030e00c((int)DAT_00419a44);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 003597f4 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 0035979c FUN_0035979c success=true

void FUN_0035979c(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(short *)(param_1 + 2);
  uVar1 = (uint)(byte)(&DAT_0044544c)[(int)uVar4 >> 3 & 0xff];
  uVar2 = (1 << (uVar4 & 7) & 0xffU ^ 0xffffffff) & uVar1;
  (&DAT_0044544c)[(int)uVar4 >> 3 & 0xff] = (byte)uVar2;
  if (uVar1 == uVar2) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (uVar4 == (int)DAT_00445442._1_1_) {
    DAT_00445444 = 0;
    FUN_0030e00c((int)DAT_00419a42);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (uVar4 == (int)(char)DAT_00445442) {
    DAT_00445442 = 0xffff;
    DAT_00445444 = 0;
    FUN_0030e00c();
  }
  iVar3 = FUN_0032e7dc(DAT_004451fc,uVar4);
  if (iVar3 == 0) {
    FUN_0035a43c(uVar4);
  }
  FUN_00359050();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00359898 INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT 003598d0 INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 00359ac4 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00359a70 FUN_00359a70 success=true

void FUN_00359a70(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_0033f904(&DAT_00445200);
  if (iVar1 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = FUN_0032e830(DAT_004451fc,(int)*(short *)(param_1 + 2),(int)*(short *)(param_1 + 4));
  if ((iVar1 == 0) && (iVar1 = (int)DAT_00419a5e, DAT_00419a58 == iVar1)) {
    puVar2 = (undefined *)0x0;
    if (-1 < iVar1) {
      puVar2 = (&PTR_DAT_0043a980)[iVar1 * 4];
    }
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      (**(code **)(puVar2 + 4))(param_1);
    }
  }
  FUN_00359050();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00359b08 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00359b00 FUN_00359b00 success=true

void FUN_00359b00(void)

{
  int iVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)DAT_00419a5e;
  if (DAT_00419a58 == iVar1) {
    puVar2 = (undefined *)0x0;
    if (-1 < iVar1) {
      puVar2 = (&PTR_DAT_0043a980)[iVar1 * 4];
    }
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      (**(code **)(puVar2 + 4))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00359b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00359b58 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00359b48 FUN_00359b48 success=true

void FUN_00359b48(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  ulonglong uVar3;
  undefined4 uVar4;
  
  uVar1 = (uint)DAT_00419a5e;
  uVar3 = (ulonglong)uVar1;
  uVar4 = param_1;
  if ((int)DAT_00419a58 == uVar1) {
    puVar2 = (undefined *)0x0;
    if (-1 < (int)uVar1) {
      puVar2 = (&PTR_DAT_0043a980)[uVar1 * 4];
    }
    uVar3 = 0;
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(puVar2 + 4))();
    }
  }
  if ((short)(uVar3 >> 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00359ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0030db6a(param_1,(int)uVar3,(int)(uVar3 >> 0x20),uVar4);
                    /* WARNING: Could not recover jumptable at 0x00359bb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00359ecc INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT 00359f16 INSTRUCTION LOAD P5.H = 0x41
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
SCALAR 0x41 AT 0035a062 INSTRUCTION LOAD P4.H = 0x41
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
SCALAR 0x41 AT 0035a228 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 0035a220 FUN_0035a220 success=true

void FUN_0035a220(void)

{
  if (DAT_00419a88 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_00359f80();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0035a396 INSTRUCTION LOAD R7.H = 0x41
SCALAR 0x41 AT 0035a40a INSTRUCTION LOAD R7.H = 0x41
FUNCTION 0035a400 FUN_0035a400 success=true

void FUN_0035a400(undefined4 param_1)

{
  int iVar1;
  
  DAT_00419aba = param_1;
  iVar1 = FUN_003586e4(0xffffff9c,&DAT_00419ab8);
  if (iVar1 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0030d9d0(&DAT_00419ab8);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0035a446 INSTRUCTION LOAD R7.H = 0x41
FUNCTION 0035a43c FUN_0035a43c success=true

void FUN_0035a43c(undefined4 param_1)

{
  int iVar1;
  
  DAT_00419ace = param_1;
  iVar1 = FUN_003586e4(0xffffff9c,&DAT_00419acc);
  if (iVar1 != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0030d958(&DAT_00419acc);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0035a4ce INSTRUCTION LOAD P0.H = 0x41
FUNCTION 0035a4aa FUN_0035a4aa success=true

undefined * FUN_0035a4aa(undefined4 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 1)) {
                    /* WARNING: Treating indirect jump as return */
    return (&PTR_DAT_00419ae0)[param_2];
  }
                    /* WARNING: Treating indirect jump as return */
  return (undefined *)0x43ae3c;
}


END_FUNCTION
SCALAR 0x41 AT 0035a52a INSTRUCTION LOAD P0.H = 0x41
FUNCTION 0035a520 FUN_0035a520 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035a520(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x41 AT 0035a62a INSTRUCTION LOAD P0.H = 0x41
FUNCTION 0035a620 FUN_0035a620 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035a620(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x41 AT 0035a692 INSTRUCTION LOAD P0.H = 0x41
FUNCTION 0035a688 FUN_0035a688 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035a688(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x41 AT 0035a6fe INSTRUCTION LOAD P0.H = 0x41
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
SCALAR 0x41 AT 0035a76e INSTRUCTION LOAD P0.H = 0x41
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
SCALAR 0x41 AT 0035a7de INSTRUCTION LOAD P0.H = 0x41
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
SCALAR 0x41 AT 0035a84e INSTRUCTION LOAD P0.H = 0x41
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
SCALAR 0x41 AT 0035a8ba INSTRUCTION LOAD P0.H = 0x41
FUNCTION 0035a8b0 FUN_0035a8b0 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035a8b0(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x41 AT 0035a992 INSTRUCTION LOAD P0.H = 0x41
FUNCTION 0035a988 FUN_0035a988 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035a988(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x41 AT 0035aa2e INSTRUCTION LOAD P0.H = 0x41
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
SCALAR 0x41 AT 0035aa98 INSTRUCTION LOAD P0.H = 0x41
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
SCALAR 0x41 AT 0035aafa INSTRUCTION LOAD P0.H = 0x41
FUNCTION 0035aaf0 FUN_0035aaf0 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035aaf0(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x41 AT 0035b268 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 0035b25c FUN_0035b25c success=true

void FUN_0035b25c(void)

{
  DAT_00419b48 = 0;
  FUN_00358678(1);
  FUN_0034076c(&DAT_00445200);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0035b294 INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT 0035b2f0 INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x41 AT 0035b970 INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 0035b9ca INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 0035bcd4 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 0035bccc FUN_0035bccc success=true

void FUN_0035bccc(void)

{
  int iVar1;
  
  iVar1 = DAT_00419b48 + -1;
  if (iVar1 < 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (1 < iVar1) {
    iVar1 = 0;
  }
  FUN_00358678((int)*(short *)((&PTR_PTR_0043b2f8)[iVar1 * 2] + 4));
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0035bef0 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 0035bee4 FUN_0035bee4 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035bee4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xc;
  if (DAT_00419b48 == 2) {
    iVar2 = 0x17;
  }
  iVar1 = 0;
  if ((-1 < param_2) && (iVar1 = param_2, iVar2 <= param_2)) {
    iVar1 = iVar2 + -1;
  }
  DAT_00419b70 = (undefined2)iVar1;
  FUN_003585b8();
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x41 AT 0035bf2c INSTRUCTION LOAD P4.H = 0x41
SCALAR 0x41 AT 0035bfd8 INSTRUCTION LOAD P0.H = 0x41
FUNCTION 0035bfbe FUN_0035bfbe success=true

void FUN_0035bfbe(int param_1)

{
  short sVar1;
  
  if (*(int *)(param_1 + 0x884) != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  sVar1 = DAT_00419b70 + 1;
  *(undefined4 *)(param_1 + 0x888) = 1;
  FUN_0035bee4(param_1,(int)sVar1);
  FUN_0030e750();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x12 AT 0035c090 INSTRUCTION LOAD R0 = 0x12
SCALAR 0x41 AT 0035c0f8 INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x12 AT 0035c130 INSTRUCTION LOAD R0 = 0x12
SCALAR 0x41 AT 0035c8a4 INSTRUCTION LOAD P4.H = 0x41
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
SCALAR 0x12 AT 0035ef2c INSTRUCTION LOAD R1 = 0x12
SCALAR 0x12 AT 0035ef78 INSTRUCTION LOAD R1 = 0x12
SCALAR 0x41 AT 003617ca INSTRUCTION LOAD P0.H = 0x41
SCALAR 0x41 AT 003618c8 INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT 00361a9c INSTRUCTION LOAD P4.H = 0x41
SCALAR 0x41 AT 00361b0c INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 00361b48 INSTRUCTION LOAD P4.H = 0x41
SCALAR 0x41 AT 00361bb4 INSTRUCTION LOAD P5.H = 0x41
SCALAR 0x41 AT 00361c1a INSTRUCTION LOAD P5.H = 0x41
SCALAR 0x41 AT 00361c46 INSTRUCTION LOAD P3.H = 0x41
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
SCALAR 0x41 AT 00361d8c INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 00362b3c INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00362b34 FUN_00362b34 success=true

void FUN_00362b34(void)

{
  (**(code **)(DAT_00419da0 + 8))(1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00362b5e INSTRUCTION LOAD P5.H = 0x41
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
SCALAR 0x41 AT 00362ca0 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00362c9c FUN_00362c9c success=true

int * FUN_00362c9c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (0 < DAT_00419d90) {
    piVar1 = &DAT_00446e18;
    iVar2 = DAT_00419d90;
    do {
      if (param_1 == *piVar1) {
        return piVar1;
      }
    } while ((iVar2 != 0) && (iVar2 = iVar2 + -1, piVar1 = piVar1 + 5, iVar2 != 0));
  }
  return (int *)0x0;
}


END_FUNCTION
SCALAR 0x41 AT 00362cf8 INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 00362ea2 INSTRUCTION LOAD P4.H = 0x41
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
SCALAR 0x41 AT 00362f56 INSTRUCTION LOAD P4.H = 0x41
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
SCALAR 0x41 AT 00363106 INSTRUCTION LOAD P5.H = 0x41
FUNCTION 003630d0 FUN_003630d0 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_003630d0(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x41 AT 0036318a INSTRUCTION LOAD P4.H = 0x41
FUNCTION 00363158 FUN_00363158 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00363158(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x41 AT 0036328e INSTRUCTION LOAD P5.H = 0x41
FUNCTION 00363254 FUN_00363254 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00363254(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x41 AT 00363386 INSTRUCTION LOAD P5.H = 0x41
SCALAR 0x41 AT 00363908 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 003638f8 FUN_003638f8 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_003638f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_ffa038f0(DAT_00419dbc,param_1,param_3,param_1);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
SCALAR 0x41 AT 003639ac INSTRUCTION LOAD P1.H = 0x41
FUNCTION 003639a4 FUN_003639a4 success=true

void FUN_003639a4(void)

{
  FUN_ffa00f68(DAT_00419db4);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 003639cc INSTRUCTION LOAD P1.H = 0x41
FUNCTION 003639c4 FUN_003639c4 success=true

void FUN_003639c4(void)

{
  FUN_ffa00dd4(DAT_00419db4);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT 00363aac INSTRUCTION LOAD P5.H = 0x41
SCALAR 0x41 AT 00363d34 INSTRUCTION LOAD P5.H = 0x41
SCALAR 0x41 AT 00363f88 INSTRUCTION LOAD P5.H = 0x41
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
SCALAR 0x41 AT 003640c4 INSTRUCTION LOAD P5.H = 0x41
SCALAR 0x41 AT 00364194 INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT 0036489c INSTRUCTION LOAD R1 = 0x41
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
SCALAR 0x41 AT 0036513e INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x12 AT 003659a0 INSTRUCTION LOAD R1 = 0x12
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
SCALAR 0x11 AT 00365a18 INSTRUCTION LOAD R0 = 0x11
SCALAR 0x11 AT 00365a7e INSTRUCTION BITSET (R5,0x11)
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
SCALAR 0x11 AT 00365e50 INSTRUCTION BITSET (R1,0x11)
FUNCTION 00365e34 FUN_00365e34 success=true

void FUN_00365e34(void)

{
  FUN_00365c30(2,0);
  FUN_00365d54(&stack0x00000008,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x11 AT 00365e60 INSTRUCTION BITSET (R1,0x11)
SCALAR 0x11 AT 0036641e INSTRUCTION BITSET (R0,0x11)
SCALAR 0x12 AT 003665f4 INSTRUCTION STORE W [FP + 0x12] = R0
SCALAR 0x11 AT 00366620 INSTRUCTION BITSET (R0,0x11)
SCALAR 0x12 AT 00366628 INSTRUCTION LOAD R1 = W [FP + 0x12] (X)
SCALAR 0x12 AT 0036662c INSTRUCTION STORE W [FP + 0x12] = R0
SCALAR 0x12 AT 00366630 INSTRUCTION ADD R0 += 0x12
SCALAR 0x41 AT 00368328 INSTRUCTION LOAD P0.H = 0x41
FUNCTION 003682d8 FUN_003682d8 success=true

void FUN_003682d8(void)

{
  uint uVar1;
  
  uVar1 = DAT_00448958;
  if (DAT_0044894c != 0) {
    if (DAT_00448960 != 0) {
      DAT_00448960 = 0;
      DAT_00448954 = DAT_00448950;
    }
    uVar1 = DAT_00448958 + 10;
    if (59999 < DAT_00448958 + 10) {
      uVar1 = DAT_00448958 - 0xea56;
      if (DAT_00448954 != 0) {
        DAT_00448954 = DAT_00448954 + -1;
      }
    }
  }
  DAT_00448958 = uVar1;
  if (DAT_00419f9c != DAT_00448954) {
    DAT_00419f9c = DAT_00448954;
    if (DAT_0044895c != (code *)0x0) {
      (*DAT_0044895c)();
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
SCALAR 0x41 AT 003683dc INSTRUCTION LOAD P4.H = 0x41
SCALAR 0x12 AT 0036869e INSTRUCTION LOAD R1 = 0x12
SCALAR 0x12 AT 0036880a INSTRUCTION LOAD R1 = 0x12
SCALAR 0x41 AT 00368a04 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00368a00 FUN_00368a00 success=true

void FUN_00368a00(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  
  uVar1 = 0;
  puVar2 = (uint *)(PTR_DAT_00419fe8 + 4);
  if (*(int *)PTR_DAT_00419fe8 == 0) {
    return;
  }
  do {
    iVar4 = -1;
    do {
      puVar3 = puVar2 + 1;
      if (uVar1 < *puVar2) {
        uVar1 = *puVar2;
      }
      puVar2 = puVar2 + 2;
      if (*puVar3 == 0) {
        return;
      }
    } while ((iVar4 != 0) && (iVar4 = iVar4 + -1, iVar4 != 0));
  } while( true );
}


END_FUNCTION
SCALAR 0x41 AT 00368a68 INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT 00368aae INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00368aa8 FUN_00368aa8 success=true

int FUN_00368aa8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar6;
  int iVar7;
  int *piVar5;
  
  if (PTR_DAT_00419fe8 == (undefined *)0x0) {
    return 0;
  }
  iVar3 = 0;
  iVar1 = 0;
  piVar4 = (int *)PTR_DAT_00419fe8;
  do {
    do {
      piVar5 = piVar4 + 1;
      iVar7 = *piVar4;
      if (iVar7 == 0) {
        return iVar1;
      }
      piVar4 = piVar4 + 2;
      iVar2 = iVar1;
    } while (iVar7 < 1);
    do {
      bVar6 = param_1 == iVar3;
      iVar1 = *piVar5 + iVar2;
      iVar3 = iVar3 + 1;
      if (bVar6) {
        return iVar2;
      }
    } while ((iVar7 != 0) && (iVar7 = iVar7 + -1, iVar2 = iVar1, iVar7 != 0));
  } while( true );
}


END_FUNCTION
SCALAR 0x41 AT 00368b10 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00368b0a FUN_00368b0a success=true

int FUN_00368b0a(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar6;
  int *piVar5;
  
  if (PTR_DAT_00419fe8 == (undefined *)0x0) {
    return 0;
  }
  iVar1 = 0;
  iVar3 = 0;
  piVar4 = (int *)PTR_DAT_00419fe8;
  do {
    do {
      piVar5 = piVar4 + 1;
      iVar6 = *piVar4;
      if (iVar6 == 0) {
        return iVar1;
      }
      piVar4 = piVar4 + 2;
      iVar2 = iVar1;
    } while (iVar6 < 1);
    do {
      iVar3 = *piVar5 + iVar3;
      iVar1 = iVar2 + 1;
      if (param_1 < iVar3) {
        return iVar2;
      }
    } while ((iVar6 != 0) && (iVar6 = iVar6 + -1, iVar2 = iVar1, iVar6 != 0));
  } while( true );
}


END_FUNCTION
SCALAR 0x41 AT 00368ba8 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 00368ba4 FUN_00368ba4 success=true

void FUN_00368ba4(void)

{
  int iVar1;
  int iVar2;
  
  *(undefined2 *)PTR_DAT_00419fe4 = 0xf0;
  iVar2 = 0x14;
  do {
    iVar1 = 0x2e8;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if ((iVar2 == 0) || (iVar2 = iVar2 + -1, iVar2 == 0)) {
      return;
    }
  } while( true );
}


END_FUNCTION
SCALAR 0x41 AT 00368cc0 INSTRUCTION LOAD P2.H = 0x41
FUNCTION 00368c98 FUN_00368c98 success=true

undefined4 FUN_00368c98(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_00368a5e(param_1,param_1);
  puVar1 = PTR_DAT_00419fe4;
  if ((int)((ulonglong)uVar5 >> 0x20) == 0) {
    FUN_00368bcc();
                    /* WARNING: Treating indirect jump as return */
    return 2;
  }
  ppuVar4 = &PTR_DAT_00419fe4;
  iVar2 = FUN_00368b6c((int)uVar5);
  *(undefined2 *)(puVar1 + 0xaaa) = 0xaa;
  *(undefined2 *)(*ppuVar4 + 0x554) = 0x55;
  puVar3 = (undefined2 *)(puVar1 + iVar2 * 2);
  *(undefined2 *)(*ppuVar4 + 0xaaa) = 0x80;
  *(undefined2 *)(*ppuVar4 + 0xaaa) = 0xaa;
  *(undefined2 *)(*ppuVar4 + 0x554) = 0x55;
  *puVar3 = 0x30;
  iVar2 = FUN_00368c08(puVar3,0xffff);
  if (iVar2 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 2;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
SCALAR 0x41 AT 00368d56 INSTRUCTION LOAD P4.H = 0x41
FUNCTION 00368d30 FUN_00368d30 success=true

undefined4 FUN_00368d30(undefined4 param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  short *psVar4;
  short *psVar5;
  bool bVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_00368a5e(param_1,param_1);
  if ((int)((ulonglong)uVar7 >> 0x20) == 0) {
    FUN_00368bcc();
                    /* WARNING: Treating indirect jump as return */
    return 1;
  }
  iVar1 = FUN_00368b6c((int)uVar7);
  psVar4 = (short *)(PTR_DAT_00419fe4 + iVar1 * 2);
  psVar5 = param_2;
  iVar1 = FUN_00368b88(param_1);
  do {
    bVar6 = iVar1 < 1;
    iVar1 = iVar1 + -1;
    if (bVar6) {
                    /* WARNING: Treating indirect jump as return */
      return 0;
    }
    if (*param_2 != -1) {
      sVar3 = *psVar5;
      *(undefined2 *)(PTR_DAT_00419fe4 + 0xaaa) = 0xaa;
      *(undefined2 *)(PTR_DAT_00419fe4 + 0x554) = 0x55;
      *(undefined2 *)(PTR_DAT_00419fe4 + 0xaaa) = 0xa0;
      *psVar4 = sVar3;
      iVar2 = FUN_00368c08();
      if (iVar2 == 0) {
                    /* WARNING: Treating indirect jump as return */
        return 1;
      }
    }
    psVar5 = psVar5 + 1;
    psVar4 = psVar4 + 1;
    param_2 = param_2 + 1;
  } while( true );
}


END_FUNCTION
SCALAR 0x41 AT 003692ec INSTRUCTION LOAD P5.H = 0x41
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
SCALAR 0x41 AT 00369672 INSTRUCTION LOAD R3.H = 0x41
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
SCALAR 0x12 AT 003696a0 INSTRUCTION LOAD R0 = W [P1 + 0x12] (X)
FUNCTION 0036969e FUN_0036969e success=true

int FUN_0036969e(int param_1)

{
  return (int)(short)(*(short *)(param_1 + 0x12) - *(short *)(param_1 + 0x10));
}


END_FUNCTION
SCALAR 0x12 AT 003696bc INSTRUCTION LOAD R0 = W [P1 + 0x12] (X)
FUNCTION 003696b8 FUN_003696b8 success=true

bool FUN_003696b8(int param_1)

{
  return *(short *)(param_1 + 0x10) < *(short *)(param_1 + 0x12);
}


END_FUNCTION
SCALAR 0x12 AT 003696ea INSTRUCTION STORE W [P1 + 0x12] = R1
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
SCALAR 0x11 AT 00369c78 INSTRUCTION STORE B [P0 + 0x11] = R1
SCALAR 0x11 AT 00369ca8 INSTRUCTION STORE B [P1 + 0x11] = R1
SCALAR 0x41 AT 00369fba INSTRUCTION LOAD P0.H = 0x41
FUNCTION 00369fac FUN_00369fac success=true

undefined * FUN_00369fac(void)

{
  return (&PTR_DAT_0041b0fc)[DAT_00448b94];
}


END_FUNCTION
SCALAR 0x41 AT 0036a168 INSTRUCTION LOAD P4.H = 0x41
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
SCALAR 0x41 AT 0036a1ac INSTRUCTION LOAD P1.H = 0x41
FUNCTION 0036a1a8 FUN_0036a1a8 success=true

void FUN_0036a1a8(undefined4 param_1)

{
  DAT_0041b13c = param_1;
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0036a1bc INSTRUCTION LOAD P1.H = 0x41
FUNCTION 0036a1b4 FUN_0036a1b4 success=true

void FUN_0036a1b4(void)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_0041b144 != (code *)0x0) {
    iVar1 = (*DAT_0041b144)();
    uVar2 = 1;
    if (iVar1 != 0) goto LAB_0036a1d6;
  }
  uVar2 = 0;
LAB_0036a1d6:
                    /* WARNING: Could not recover jumptable at 0x0036a1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}


END_FUNCTION
SCALAR 0x41 AT 0036a1e4 INSTRUCTION LOAD P1.H = 0x41
FUNCTION 0036a1e0 FUN_0036a1e0 success=true

void FUN_0036a1e0(undefined4 param_1)

{
  DAT_0041b144 = param_1;
  return;
}


END_FUNCTION
SCALAR 0x12 AT 0036a434 INSTRUCTION STORE W [P4 + 0x12] = R2
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
SCALAR 0x41 AT 0036a52c INSTRUCTION LOAD P1.H = 0x41
FUNCTION 0036a528 FUN_0036a528 success=true

void FUN_0036a528(undefined4 param_1)

{
  DAT_0041b140 = param_1;
  return;
}


END_FUNCTION
SCALAR 0x12 AT 0036b21c INSTRUCTION STORE W [P1 + 0x12] = R0
FUNCTION 0036b210 FUN_0036b210 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0036b210(void)

{
  DAT_0044904c._0_2_ = 0;
  DAT_0044904c._2_2_ = 0;
  DAT_00449054 = 0;
  DAT_00449058 = 0;
  DAT_00449064 = 0;
  _DAT_00449068 = 0;
  DAT_0044905c = 0xff;
  DAT_00449060 = 0xff;
  DAT_00449050._0_2_ = (undefined2)DAT_0044904c;
  DAT_00449050._2_2_ = DAT_0044904c._2_2_;
  return;
}


END_FUNCTION
SCALAR 0x12 AT 0036c320 INSTRUCTION LOAD R0 = 0x12
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
SCALAR 0x11 AT 0036c512 INSTRUCTION LOAD R7 = 0x11
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
SCALAR 0x12 AT ffa00074 INSTRUCTION LOAD R0 = 0x12
FUNCTION ffa0000c FUN_ffa0000c success=true

void FUN_ffa0000c(void)

{
  ushort uVar1;
  bool in_AZflag;
  code *UNRECOVERED_JUMPTABLE;
  
  DAT_ff8003b0 = (DAT_ff8003b0 + 1) * 0x2000000;
  if (in_AZflag) {
    uVar1 = PORTHIO;
    DAT_ff8003b4 = (uVar1 & 0x200) != 0 | DAT_ff8003b4;
    if (DAT_ff8003b4 == 7) {
      FUN_ffa01612(0x10);
      FUN_ffa01612(0x12);
      SPORT1_RCR1 = 0;
      SPORT1_TCR1 = 0;
      SPORT0_RCR1 = 0;
      SPORT0_TCR1 = 0;
      DMA3_IRQ_STATUS = 1;
      DMA5_IRQ_STATUS = 1;
      DAT_ff8003b4 = 0;
    }
    DAT_ff8003b4 = (DAT_ff8003b4 & 3) << 1;
                    /* WARNING: Could not recover jumptable at 0xffa00064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT ffa00104 INSTRUCTION LOAD R0.H = 0x41
FUNCTION ffa000cc FUN_ffa000cc success=true

void FUN_ffa000cc(void)

{
  FUN_0030e460(0);
  FUN_0030e414(0);
  FUN_0032bae8(0);
  FUN_0030832c(0);
  FUN_003280ec(&DAT_00418bb0);
  FUN_003030b4(0);
  FUN_0036bb20(&DAT_00418bc0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x41 AT ffa00122 INSTRUCTION LOAD R0.H = 0x41
SCALAR 0x41 AT ffa0176a INSTRUCTION LOAD P1.H = 0x41
SCALAR 0x41 AT ffa01a28 INSTRUCTION LOAD P0.H = 0x41
FUNCTION ffa01a24 FUN_ffa01a24 success=true

undefined4 FUN_ffa01a24(void)

{
  undefined2 uVar1;
  byte bVar2;
  
  if (*(int *)(DAT_00419d84 + 0x10) == 0) {
    if (0 < DAT_00419d7c) {
      bVar2 = *DAT_00419d74;
      DAT_00419d74 = DAT_00419d74 + 1;
      DAT_00419d7c = DAT_00419d7c + -1;
      SPI_TDBR = (ushort)bVar2;
      ssync();
      return 1;
    }
  }
  else if (0 < DAT_00419d7c) {
    uVar1 = *(undefined2 *)DAT_00419d74;
    DAT_00419d74 = DAT_00419d74 + 2;
    DAT_00419d7c = DAT_00419d7c + -1;
    SPI_TDBR = uVar1;
    ssync();
    return 1;
  }
  return 0;
}


END_FUNCTION
SCALAR 0x41 AT ffa01a7c INSTRUCTION LOAD P1.H = 0x41
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
SCALAR 0x41 AT ffa01ae6 INSTRUCTION LOAD P5.H = 0x41
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
SCALAR 0x41 AT ffa01b82 INSTRUCTION LOAD P5.H = 0x41
SCALAR 0x41 AT ffa02858 INSTRUCTION LOAD P5.H = 0x41
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
SCALAR 0x11 AT ffa02abc INSTRUCTION ASH R0 = R0 >>> 0x11
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
SCALAR 0x11 AT ffa0392c INSTRUCTION LSHIFT R3 >>= 0x11
FUNCTION ffa038f0 FUN_ffa038f0 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_ffa038f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -param_1;
  iVar2 = -param_2;
  if (param_2 * (uint)(iVar2 < param_2) + iVar2 * (uint)(iVar2 >= param_2) <=
      param_1 * (uint)(iVar1 < param_1) + iVar1 * (uint)(iVar1 >= param_1)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  return 0;
}


END_FUNCTION
SCALAR 0x11 AT ffa039a4 INSTRUCTION LSHIFT R1 >>= 0x11
FUNCTION ffa03974 FUN_ffa03974 success=true

/* WARNING: Control flow encountered unimplemented instructions */

bool FUN_ffa03974(uint param_1,uint param_2)

{
  if (param_2 <= param_1 >> 1) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  return param_2 <= param_1;
}


END_FUNCTION
SCALAR 0x11 AT ffa03a8e INSTRUCTION LSH R2 = R1 >> 0x11
FUNCTION ffa03a60 FUN_ffa03a60 success=true

/* WARNING: Control flow encountered unimplemented instructions */

ulonglong FUN_ffa03a60(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 <= param_1 >> 1) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  uVar1 = param_1 - param_2;
  if (param_2 > param_1) {
    uVar1 = param_1;
  }
  return (ulonglong)CONCAT14(param_2 <= param_1,uVar1);
}


END_FUNCTION
SCALAR 0x11 AT ffa04378 INSTRUCTION LSH R1 = R3 >> 0x11
FUNCTION ffa04340 FUN_ffa04340 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_ffa04340(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -param_1;
  iVar2 = -param_2;
  if (param_2 * (uint)(iVar2 < param_2) + iVar2 * (uint)(iVar2 >= param_2) <=
      param_1 * (uint)(iVar1 < param_1) + iVar1 * (uint)(iVar1 >= param_1)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  return;
}


END_FUNCTION
SCALAR 0x11 AT ffa04462 INSTRUCTION LSH R2 = R1 >> 0x11
FUNCTION ffa04434 FUN_ffa04434 success=true

/* WARNING: Control flow encountered unimplemented instructions */

uint FUN_ffa04434(uint param_1,uint param_2)

{
  if (param_2 <= param_1 >> 1) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  if (param_2 <= param_1) {
    param_1 = param_1 - param_2;
  }
  return param_1;
}


END_FUNCTION
