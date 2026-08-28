TARGET 00366aa4
XREF 00302b12 UNCONDITIONAL_CALL FUN_00302a34
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
XREF 00302966 UNCONDITIONAL_CALL FUN_0030294c
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
XREF 00302b84 UNCONDITIONAL_CALL FUN_00302a34
XREF 003028de UNCONDITIONAL_CALL FUN_003025a4
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
XREF 003028f4 UNCONDITIONAL_CALL FUN_003025a4
XREF 0030ed50 UNCONDITIONAL_CALL FUN_0030ed14
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
XREF 0030ed9e UNCONDITIONAL_CALL FUN_0030ed14
XREF 0030edee UNCONDITIONAL_CALL FUN_0030ed14
XREF 0030ec00 UNCONDITIONAL_CALL FUN_0030ebb8
FUNCTION 0030ebb8 FUN_0030ebb8 success=true

void FUN_0030ebb8(int param_1)

{
  undefined4 uVar1;
  
  if ((-1 < param_1) && (param_1 < 7)) {
    if ((&DAT_00440d5c)[param_1] == '\x01') {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    uVar1 = FUN_00366aa4(&DAT_00434fcc,3);
    FUN_003666d8(uVar1,0,param_1,1);
    FUN_003667ec(uVar1);
    (&DAT_00440d5c)[param_1] = '\x01';
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
XREF 0031dd8c UNCONDITIONAL_CALL firmware_entry_0031dc18
FUNCTION 0031dc18 firmware_entry_0031dc18 success=true

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Removing unreachable block (ram,0x0031de72) */
/* WARNING: Removing unreachable block (ram,0x0031df06) */
/* WARNING: Removing unreachable block (ram,0x0031df18) */
/* WARNING: Removing unreachable block (ram,0x0031df26) */
/* WARNING: Removing unreachable block (ram,0x0031df28) */
/* WARNING: Removing unreachable block (ram,0x0031df2a) */
/* WARNING: Removing unreachable block (ram,0x0031df30) */
/* WARNING: Removing unreachable block (ram,0x0031dfb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void firmware_entry_0031dc18(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  DAT_00441107 = 0;
  if ((DAT_00441106 == '\0') && ((*(code *)0xffa00658)(&DAT_00419440), DAT_00441106 == '\0')) {
    func_0x003082b0();
    uVar1 = FUN_00366aa4(s_audio_serial_004361e8,3);
    FUN_003666d8(uVar1,1);
    FUN_003667ec(uVar1);
    uVar1 = FUN_00366aa4(0x4361d4,3);
    FUN_003666d8(uVar1,2,1);
    FUN_003666d8(uVar1,3,1);
    FUN_003667ec(uVar1);
    if (DAT_00441106 == '\0') {
      uVar1 = FUN_00366aa4(0x4361d4,3);
      FUN_003666d8(uVar1,1,1);
      FUN_003666d8(uVar1,0,uVar2,0);
      FUN_003666d8(uVar1,1,0);
      FUN_003666d8(uVar1,2,0);
      FUN_003666d8(uVar1,3,0);
      FUN_003667ec(uVar1);
      uVar1 = 3;
      if (DAT_00441106 == '\0') {
        uVar1 = FUN_00366aa4(s_audio_serial_004361e8,3);
        FUN_003666d8(uVar1,1,uVar2);
        FUN_003667ec(uVar1);
        uVar1 = FUN_00366aa4(0x4361e4,3);
        FUN_003666d8(uVar1,0,uVar2,0);
        FUN_003667ec(uVar1);
        uVar1 = 0;
      }
      switch(uVar1) {
      case 0:
      default:
        FUN_003082cc(uVar2);
        puVar3 = &DAT_00419160;
        if (DAT_00419160 == 0) {
          DAT_00419160 = 1;
          FUN_0030305c();
        }
        if (DAT_00441106 == '\0') {
          FUN_0031eff0(0,uVar2,0);
          uVar1 = FUN_00366aa4(s_audio_serial_004361e8,3);
          uVar6 = 0;
          uVar5 = 0;
          FUN_003666d8(uVar1,0,uVar2,0,0);
          FUN_003667ec(uVar1);
          uVar1 = 500;
          if (puVar3[1] != 0) {
            uVar1 = 2000;
          }
          FUN_0032b6d8(uVar1);
          puVar3[1] = 0;
          if (DAT_00441106 == '\0') {
            uVar1 = FUN_00366aa4(0x4361d4,3);
            FUN_003666d8(uVar1,4,0,uVar5,uVar6);
            FUN_003667ec(uVar1);
            FUN_ffa006d8(&DAT_00419440);
            DAT_00441107 = 1;
            DAT_004410fc = 0;
            DAT_004410f8 = uVar2;
            uRam00441100 = uVar4;
            FUN_0031eff0(1,uVar2,0);
          }
        }
        break;
      case 1:
        FUN_0031eff0(2,uVar2,0);
        DAT_004410f8 = 0;
        break;
      case 2:
        FUN_0031eff0(3,uVar2,0);
        DAT_004410f8 = 0;
        break;
      case 3:
        DAT_004410f8 = 0;
      }
    }
  }
  DAT_00441106 = 0;
  _DAT_00441104 = 0;
                    /* WARNING: Could not recover jumptable at 0x0031de58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
XREF 0031ddf8 UNCONDITIONAL_CALL firmware_entry_0031dc18
XREF 0030ec74 UNCONDITIONAL_CALL FUN_0030ec2c
FUNCTION 0030ec2c FUN_0030ec2c success=true

void FUN_0030ec2c(int param_1)

{
  undefined4 uVar1;
  
  if ((-1 < param_1) && (param_1 < 7)) {
    if ((&DAT_00440d5c)[param_1] == '\0') {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    uVar1 = FUN_00366aa4(&DAT_00434fcc,3);
    FUN_003666d8(uVar1,0,param_1,0);
    FUN_003667ec(uVar1);
    (&DAT_00440d5c)[param_1] = '\0';
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
XREF 0030ece8 UNCONDITIONAL_CALL FUN_0030eca0
FUNCTION 0030eca0 FUN_0030eca0 success=true

void FUN_0030eca0(int param_1)

{
  undefined4 uVar1;
  
  if ((-1 < param_1) && (param_1 < 7)) {
    if ((&DAT_00440d5c)[param_1] == '\x02') {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    uVar1 = FUN_00366aa4(&DAT_00434fcc,3);
    FUN_003666d8(uVar1,0,param_1,2);
    FUN_003667ec(uVar1);
    (&DAT_00440d5c)[param_1] = '\x02';
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
XREF 00361a92 UNCONDITIONAL_CALL <no-function>
XREF 00361af4 UNCONDITIONAL_CALL <no-function>
XREF 00361b3e UNCONDITIONAL_CALL <no-function>
XREF 00361ba0 UNCONDITIONAL_CALL <no-function>
XREF 00361c08 UNCONDITIONAL_CALL <no-function>
XREF 00361c78 UNCONDITIONAL_CALL FUN_00361c38
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
XREF 00361c92 UNCONDITIONAL_CALL FUN_00361c38
XREF 00361cac UNCONDITIONAL_CALL FUN_00361c38
XREF 00361cca UNCONDITIONAL_CALL FUN_00361c38
XREF 00361d00 UNCONDITIONAL_CALL FUN_00361c38
XREF 00361d2a UNCONDITIONAL_CALL FUN_00361c38
XREF 00361d66 UNCONDITIONAL_CALL FUN_00361c38
XREF 00361868 UNCONDITIONAL_CALL FUN_00361830
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
XREF 003618a6 UNCONDITIONAL_CALL FUN_00361830
XREF 003618e2 UNCONDITIONAL_CALL FUN_00361830
XREF 0036195c UNCONDITIONAL_CALL FUN_00361830
XREF 00361974 UNCONDITIONAL_CALL FUN_00361830
XREF 003619ac UNCONDITIONAL_CALL FUN_00361830
XREF 003619ca UNCONDITIONAL_CALL FUN_00361830
XREF 003619ec UNCONDITIONAL_CALL FUN_00361830
XREF 00361a34 UNCONDITIONAL_CALL FUN_00361830
XREF 00361a4c UNCONDITIONAL_CALL FUN_00361830
XREF 0031db82 UNCONDITIONAL_CALL firmware_entry_0031db4c
FUNCTION 0031db4c firmware_entry_0031db4c success=true

void firmware_entry_0031db4c(void)

{
  undefined4 uVar1;
  
  FUN_0035aaf0(5);
  FUN_00356768(&DAT_004453c8,0,0);
  DAT_004453c8 = 0;
  FUN_0036da08();
  uVar1 = FUN_00366aa4(s_audio_serial_00436170,3);
  FUN_003666d8(uVar1,1);
  FUN_003667ec(uVar1);
  FUN_0032b6d8(1000);
  uVar1 = FUN_00366aa4(s_power_00436180,2);
  FUN_003666d8(uVar1,3);
  FUN_003667ec(uVar1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
XREF 0031dba2 UNCONDITIONAL_CALL firmware_entry_0031db4c
XREF 003030dc UNCONDITIONAL_CALL FUN_003030b4
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
XREF 003657b2 UNCONDITIONAL_CALL <no-function>
XREF 0036532e UNCONDITIONAL_CALL FUN_0036523c
FUNCTION 0036523c FUN_0036523c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0036523c(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar2 = DAT_00446f94;
  bVar6 = 0x7f800000 < (param_2 & 0x7fffffff);
  uVar5 = 0;
  if (((bVar6 || 0x412fffff < (int)param_2) && (uVar5 = 1, bVar6 || 0x41afffff < (int)param_2)) &&
     (uVar5 = 3, !bVar6 && (int)param_2 < 0x42040000)) {
    uVar5 = 2;
  }
  bVar6 = uVar5 != DAT_00446fa0;
  DAT_00446fa0 = uVar5;
  if ((bVar6) && (DAT_00446fa4 != (code *)0x0)) {
    (*DAT_00446fa4)();
  }
  uVar1 = 1 << (&DAT_0043ca18)[param_1] * 4 + 2;
  uVar3 = 1 << (&DAT_0043ca18)[param_1] * 4 + 3;
  uVar4 = uVar2 | uVar3;
  if ((uVar5 & 1) != 1) {
    uVar4 = uVar2 & (uVar3 ^ 0xffffffff);
  }
  uVar2 = uVar4 | uVar1;
  if ((uVar5 & 2) != 1) {
    uVar2 = uVar4 & (uVar1 ^ 0xffffffff);
  }
  FUN_003651a0(uVar2);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
XREF 0031e468 UNCONDITIONAL_CALL <no-function>
XREF 0031e4a4 UNCONDITIONAL_CALL FUN_0031e494
FUNCTION 0031e494 FUN_0031e494 success=true

void FUN_0031e494(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00366aa4(&DAT_00436280,3);
  FUN_003666d8(uVar1,2);
  FUN_003667ec(uVar1);
  FUN_0031e128();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
XREF 0031e4d4 UNCONDITIONAL_CALL <no-function>
XREF 0031eee4 UNCONDITIONAL_CALL <no-function>
XREF 0031ec94 UNCONDITIONAL_CALL firmware_entry_0031eb7c
FUNCTION 0031eb7c firmware_entry_0031eb7c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void firmware_entry_0031eb7c(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  
  iVar1 = DAT_004192bc;
  FUN_0031dbf0(auStack_48);
  iVar2 = DAT_004192dc;
  if (iStack_44 != 0) {
    if (((param_1 & 2) == 1) && ((param_2 & 2) != 1)) {
      if (DAT_004191ac != 0) {
        puStack_c = &DAT_004192b4;
        uStack_34 = 0;
        uStack_28 = DAT_004191b0;
        uStack_1c = DAT_00419358;
        uStack_18 = DAT_0041935c;
        uStack_14 = DAT_00419360;
        uStack_10 = DAT_00419364;
        puStack_20 = auStack_48;
        uStack_38 = 5;
        puStack_24 = &DAT_004191b4;
        FUN_0031dbd8();
        FUN_0031dbc0();
        FUN_ffa00dae(&uStack_28);
      }
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    if (param_3 != iVar1) {
      if (DAT_004191ac != 0) {
        puStack_c = &DAT_004192b4;
        uStack_28 = DAT_004191b0;
        uStack_1c = DAT_00419358;
        uStack_18 = DAT_0041935c;
        uStack_14 = DAT_00419360;
        uStack_10 = DAT_00419364;
        puStack_20 = auStack_48;
        uStack_34 = 1;
        puStack_24 = &DAT_004191b4;
        uStack_38 = 5;
        FUN_0031dbd8();
        FUN_ffa00dae(&uStack_28);
      }
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    if ((param_1 & 8) != (param_2 & 8)) {
      if (DAT_004191ac != 0) {
        puStack_c = &DAT_004192b4;
        uStack_28 = DAT_004191b0;
        uStack_1c = DAT_00419358;
        uStack_18 = DAT_0041935c;
        uStack_14 = DAT_00419360;
        uStack_10 = DAT_00419364;
        puStack_20 = auStack_48;
        uStack_34 = 1;
        puStack_24 = &DAT_004191b4;
        uStack_38 = 5;
        FUN_0031dbd8();
        FUN_ffa00dae(&uStack_28);
      }
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    if ((param_1 & 1) != (param_2 & 1)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    if ((param_1 & 4) != (param_2 & 4)) {
      uVar3 = FUN_00366aa4(s_audio_serial_00436284,3);
      FUN_003666d8(uVar3,2,(param_1 & 4) != 0);
      FUN_003667ec(uVar3);
    }
  }
  if (iVar2 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (((param_1 & 2) != 1) && ((param_2 & 2) == 1)) {
    if (DAT_004191ac != 0) {
      uStack_28 = DAT_004191b0;
      uStack_1c = DAT_00419358;
      uStack_18 = DAT_0041935c;
      uStack_14 = DAT_00419360;
      uStack_10 = DAT_00419364;
      puStack_20 = auStack_48;
      uStack_34 = 1;
      puStack_24 = &DAT_004191b4;
      uStack_38 = 5;
      puStack_c = &DAT_004192b4;
      FUN_0031dbd8();
      FUN_ffa00dae(&uStack_28);
    }
                    /* WARNING: Could not recover jumptable at 0x0031ec2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
XREF 0031ecbc UNCONDITIONAL_CALL firmware_entry_0031eb7c
XREF 0035b2b0 UNCONDITIONAL_CALL FUN_0035b288
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
XREF 0035b304 UNCONDITIONAL_CALL FUN_0035b288
XREF 0035b32c UNCONDITIONAL_CALL FUN_0035b288
XREF 0030eb84 UNCONDITIONAL_CALL FUN_0030eb38
FUNCTION 0030eb38 FUN_0030eb38 success=true

void FUN_0030eb38(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((-1 < param_1) && (param_1 < 7)) {
    if (param_2 != (char)(&DAT_00440d5c)[param_1]) {
      uVar1 = FUN_00366aa4(&DAT_00434fcc,3);
      FUN_003666d8(uVar1,0,param_1,param_1);
      FUN_003667ec(uVar1);
      (&DAT_00440d5c)[param_1] = (char)param_2;
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
XREF 0035afd0 UNCONDITIONAL_CALL <no-function>
XREF 0031d184 UNCONDITIONAL_CALL firmware_entry_0031d160
FUNCTION 0031d160 firmware_entry_0031d160 success=true

/* WARNING: Removing unreachable block (ram,0x0031d1a0) */

undefined4 firmware_entry_0031d160(void)

{
  int iVar1;
  
  iVar1 = FUN_00366aa4(s_extmem_00435dd4,2);
  if (iVar1 == -1) {
                    /* WARNING: Treating indirect jump as return */
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(iVar1,0xf0040,0);
}


END_FUNCTION
XREF 003197d4 UNCONDITIONAL_CALL <no-function>
XREF 0031d098 UNCONDITIONAL_CALL FUN_0031d074
FUNCTION 0031d074 FUN_0031d074 success=true

/* WARNING: Removing unreachable block (ram,0x0031d0b4) */
/* WARNING: Removing unreachable block (ram,0x0031d0fe) */
/* WARNING: Removing unreachable block (ram,0x0031d118) */
/* WARNING: Removing unreachable block (ram,0x0031d11a) */
/* WARNING: Removing unreachable block (ram,0x0031d0dc) */
/* WARNING: Removing unreachable block (ram,0x0031d0e0) */
/* WARNING: Removing unreachable block (ram,0x0031d0ec) */

undefined4 FUN_0031d074(void)

{
  int iVar1;
  
  iVar1 = FUN_00366aa4(s_extmem_00435dd4,1);
  if (iVar1 == -1) {
                    /* WARNING: Treating indirect jump as return */
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(iVar1,0xf0040,0);
}


END_FUNCTION
XREF 0031d2a0 UNCONDITIONAL_CALL FUN_0031d27c
FUNCTION 0031d27c FUN_0031d27c success=true

/* WARNING: Removing unreachable block (ram,0x0031d2be) */
/* WARNING: Removing unreachable block (ram,0x0031d2e6) */
/* WARNING: Removing unreachable block (ram,0x0031d2f8) */

undefined4 FUN_0031d27c(void)

{
  int iVar1;
  
  iVar1 = FUN_00366aa4(s_extmem_00435dd4,2);
  if (iVar1 == -1) {
                    /* WARNING: Treating indirect jump as return */
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(iVar1,0xf0040,0);
}


END_FUNCTION
XREF 0031d2d2 UNCONDITIONAL_CALL FUN_0031d27c
XREF 00319688 UNCONDITIONAL_CALL <no-function>
XREF 003196cc UNCONDITIONAL_CALL <no-function>
XREF 00319700 UNCONDITIONAL_CALL <no-function>
XREF 0031dc70 UNCONDITIONAL_CALL firmware_entry_0031dc18
XREF 0031dc8a UNCONDITIONAL_CALL firmware_entry_0031dc18
XREF 0031dcce UNCONDITIONAL_CALL firmware_entry_0031dc18
XREF 0031dd20 UNCONDITIONAL_CALL firmware_entry_0031dc18
XREF 0031dd38 UNCONDITIONAL_CALL firmware_entry_0031dc18
XREF 0031de76 UNCONDITIONAL_CALL firmware_entry_0031dc18
XREF 0031deb4 UNCONDITIONAL_CALL firmware_entry_0031dc18
XREF 0031deda UNCONDITIONAL_CALL firmware_entry_0031dc18
XREF 0031df34 UNCONDITIONAL_CALL firmware_entry_0031dc18
XREF 0031df58 UNCONDITIONAL_CALL firmware_entry_0031dc18
XREF 0031df7a UNCONDITIONAL_CALL firmware_entry_0031dc18
XREF 0031df98 UNCONDITIONAL_CALL firmware_entry_0031dc18
XREF 0031d360 UNCONDITIONAL_CALL firmware_entry_0031d334
FUNCTION 0031d334 firmware_entry_0031d334 success=true

/* WARNING: Removing unreachable block (ram,0x0031d380) */
/* WARNING: Removing unreachable block (ram,0x0031d3ca) */
/* WARNING: Removing unreachable block (ram,0x0031d3e4) */
/* WARNING: Removing unreachable block (ram,0x0031d3e6) */
/* WARNING: Removing unreachable block (ram,0x0031d3a8) */
/* WARNING: Removing unreachable block (ram,0x0031d3ac) */
/* WARNING: Removing unreachable block (ram,0x0031d3b8) */

undefined4 firmware_entry_0031d334(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00419110 + 0xf0040;
  iVar1 = FUN_00366aa4(s_extmem_00435dd4,1);
  if (iVar1 == -1) {
                    /* WARNING: Treating indirect jump as return */
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(iVar1,iVar2,0);
}


END_FUNCTION
XREF 0031d428 UNCONDITIONAL_CALL firmware_entry_0031d404
FUNCTION 0031d404 firmware_entry_0031d404 success=true

/* WARNING: Removing unreachable block (ram,0x0031d44e) */

undefined4 firmware_entry_0031d404(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00419110;
  iVar2 = FUN_00366aa4(s_extmem_00435dd4,2);
  if (iVar2 == -1) {
                    /* WARNING: Treating indirect jump as return */
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(iVar2,iVar1 + 0xf0040,0);
}


END_FUNCTION
