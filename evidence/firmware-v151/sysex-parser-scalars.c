SCALAR 0x7f AT 003024c4 INSTRUCTION LOAD P1 = 0x7f
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
SCALAR 0x7f AT 00303914 INSTRUCTION LOAD R0 = 0x7f
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
SCALAR 0x7f AT 00303a24 INSTRUCTION LOAD R0 = 0x7f
SCALAR 0x7f AT 00303ae4 INSTRUCTION LOAD R0 = 0x7f
SCALAR 0x7f AT 00303b98 INSTRUCTION LOAD R0 = 0x7f
SCALAR 0x7f AT 00303ba4 INSTRUCTION LOAD R0 = 0x7f
SCALAR 0x7f AT 00303c60 INSTRUCTION LOAD R0 = 0x7f
SCALAR 0x7f AT 00305a5c INSTRUCTION LOAD R0 = 0x7f
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
SCALAR 0x7f AT 00305b6c INSTRUCTION LOAD R0 = 0x7f
SCALAR 0x7f AT 00305c2c INSTRUCTION LOAD R0 = 0x7f
SCALAR 0x7f AT 00305ce0 INSTRUCTION LOAD R0 = 0x7f
SCALAR 0x7f AT 00305cec INSTRUCTION LOAD R0 = 0x7f
SCALAR 0x7f AT 00305da8 INSTRUCTION LOAD R0 = 0x7f
SCALAR 0xf0 AT 00306ac4 INSTRUCTION LOAD R0 = [P1 + 0xf0]
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
SCALAR 0x7f AT 0030c8d8 INSTRUCTION LOAD R0 = 0x7f
FUNCTION 0030c8c6 firmware_entry_0030c8c6 success=true

void firmware_entry_0030c8c6(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *in_P1;
  
  *in_P1 = 0;
  if (param_2 < 5) {
    *param_4 = 0x7f;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  *param_4 = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
SCALAR 0x7f AT 0031faa0 INSTRUCTION LOAD R1 = 0x7f
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
SCALAR 0x7f AT 00320a64 INSTRUCTION LOAD R2 = 0x7f
SCALAR 0x7f AT 0032fe22 INSTRUCTION LOAD R0 = 0x7f
FUNCTION 0032fe04 FUN_0032fe04 success=true

int FUN_0032fe04(int param_1)

{
  FUN_0032f1a8();
  *(undefined **)(param_1 + 0x6c) = &DAT_00403da8;
  *(undefined4 *)(param_1 + 0x9c) = 0x7f;
  *(char **)(param_1 + 0x84) = s_Undefined_00437cfc;
  *(undefined2 *)(param_1 + 0x90) = 3;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(undefined4 *)(param_1 + 0x94) = 1;
  *(undefined2 *)(param_1 + 0x7c) = 0xffff;
  *(undefined2 *)(param_1 + 0x7e) = 0xffff;
  *(undefined2 *)(param_1 + 0x80) = 0xffff;
  *(undefined2 *)(param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0xa4) = 0;
  FUN_0032f18c(param_1,1,param_1);
  FUN_0032f18c(param_1,3,param_1);
  FUN_0032f18c(param_1,4,param_1);
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}


END_FUNCTION
SCALAR 0x7f AT 00330a50 INSTRUCTION LOAD R0 = 0x7f
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
SCALAR 0x7f AT 003346c2 INSTRUCTION LOAD R0 = 0x7f
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
SCALAR 0x7f AT 003346de INSTRUCTION LOAD R0 = 0x7f
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
SCALAR 0xf0 AT 0034f426 INSTRUCTION LOAD R3 = 0xf0
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
SCALAR 0xf0 AT 003510c2 INSTRUCTION LOAD R0 = 0xf0
SCALAR 0x4d AT 003510c6 INSTRUCTION LOAD R1 = 0x4d
SCALAR 0xf0 AT 00351700 INSTRUCTION LOAD R0 = 0xf0
SCALAR 0x4d AT 0035171c INSTRUCTION LOAD R0 = 0x4d
SCALAR 0xf0 AT 00351f76 INSTRUCTION LOAD R0 = 0xf0
SCALAR 0x4d AT 00351f7a INSTRUCTION LOAD R1 = 0x4d
SCALAR 0x7f AT 0035380e INSTRUCTION LOAD R0 = 0x7f
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
SCALAR 0x7f AT 00353ce2 INSTRUCTION LOAD R0 = 0x7f
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
SCALAR 0x7f AT 0036421a INSTRUCTION LOAD R1 = 0x7f
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
SCALAR 0xf0 AT 00366216 INSTRUCTION LOAD R1 = 0xf0
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
SCALAR 0xf0 AT 00368bae INSTRUCTION LOAD R0 = 0xf0
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
SCALAR 0x7f AT ffa03424 INSTRUCTION LOAD R6 = 0x7f
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
SCALAR 0x7f AT ffa0343a INSTRUCTION LOAD R2 = 0x7f
SCALAR 0x7f AT ffa034ac INSTRUCTION LOAD R1 = 0x7f
SCALAR 0x7f AT ffa042c6 INSTRUCTION LOAD R1 = 0x7f
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
SCALAR 0x7f AT ffa04642 INSTRUCTION LOAD R3.L = 0x7f
FUNCTION ffa04630 FUN_ffa04630 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_ffa04630(int param_1)

{
  if ((0 < param_1 >> 0x17) && (param_1 >> 0x17 != 0xff)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  return 0;
}


END_FUNCTION
