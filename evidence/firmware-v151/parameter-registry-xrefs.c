TARGET 00441a18
XREF 0032037e READ FUN_0032036c
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
XREF 0032043a READ FUN_0032036c
XREF 0032059a READ firmware_entry_00320574
FUNCTION 00320574 firmware_entry_00320574 success=true

/* WARNING: Removing unreachable block (ram,0x00320ade) */

void firmware_entry_00320574(void)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  int *piVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  ushort *puVar20;
  bool bVar21;
  code *UNRECOVERED_JUMPTABLE_00;
  byte bVar22;
  byte bVar23;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_3c;
  int *local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  
  if (DAT_00441a14 == 1) {
    DAT_00441a14 = 0;
    FUN_0032036c();
    pbVar14 = &DAT_00441b1c;
    if (0 < DAT_00441a18) {
      local_38 = &DAT_00441a1c;
      local_3c = 0;
      do {
        iVar10 = *local_38;
        iVar4 = (**(code **)(*(int *)(iVar10 + 0x10) + 0x2c))
                          (iVar10 + *(short *)(*(int *)(iVar10 + 0x10) + 0x28));
        iVar5 = (**(code **)(*(int *)(iVar10 + 0x10) + 0x34))
                          (iVar10 + *(short *)(*(int *)(iVar10 + 0x10) + 0x30));
        switch(*(undefined4 *)(iVar10 + 4)) {
        case 1:
          if ((0 < iVar4) &&
             (local_50 = 0, 0 < (int)(iVar5 + 3 + ((uint)(iVar5 + 3 >> 0x1f) >> 0x1e)) >> 2)) {
            do {
              local_58 = 0;
              pbVar17 = pbVar14;
              local_5c = iVar5;
              do {
                uVar13 = 0;
                bVar2 = 0;
                iVar11 = local_5c;
                if (local_58 != 0) {
                  iVar11 = 4;
                }
                if (0 < iVar11) {
                  iVar12 = 0;
                  do {
                    uVar9 = 1 << iVar12;
                    iVar6 = (**(code **)(*(int *)(iVar10 + 0x10) + 0x14))
                                      (iVar10 + *(short *)(*(int *)(iVar10 + 0x10) + 0x10),local_50)
                    ;
                    iVar12 = iVar12 + 1;
                    uVar7 = 0;
                    if (iVar6 != 0) {
                      uVar7 = uVar9;
                    }
                    uVar13 = uVar7 | uVar13;
                    bVar2 = (byte)uVar13;
                  } while (iVar12 < iVar11);
                }
                local_58 = local_58 + 1;
                local_5c = local_5c + -4;
                pbVar14 = pbVar17 + 1;
                *pbVar17 = bVar2;
                pbVar17 = pbVar14;
              } while (local_58 < 0);
              local_50 = local_50 + 1;
            } while (local_50 < iVar4);
          }
          break;
        case 2:
          if (0 < iVar4) {
            iVar11 = iVar5 / 2 + 3;
            local_60 = 0;
            if (0 < (int)(iVar11 + ((uint)(iVar11 >> 0x1f) >> 0x1e)) >> 2) {
              do {
                local_50 = 0;
                pbVar17 = pbVar14;
                local_48 = iVar5 / 2;
                do {
                  uVar13 = 0;
                  bVar2 = 0;
                  iVar11 = local_48;
                  if (local_50 != 0) {
                    iVar11 = 4;
                  }
                  if (0 < iVar11) {
                    iVar12 = 0;
                    do {
                      uVar9 = 1 << iVar12;
                      iVar6 = (**(code **)(*(int *)(iVar10 + 0x10) + 0x14))
                                        (iVar10 + *(short *)(*(int *)(iVar10 + 0x10) + 0x10),
                                         local_60);
                      iVar12 = iVar12 + 1;
                      uVar7 = 0;
                      if (iVar6 != 0) {
                        uVar7 = uVar9;
                      }
                      uVar13 = uVar7 | uVar13;
                      bVar2 = (byte)uVar13;
                    } while (iVar12 < iVar11);
                  }
                  local_50 = local_50 + 1;
                  local_48 = local_48 + -4;
                  pbVar14 = pbVar17 + 1;
                  *pbVar17 = bVar2;
                  pbVar17 = pbVar14;
                } while (local_50 < 0);
                local_60 = local_60 + 1;
              } while (local_60 < iVar4);
            }
          }
          break;
        case 3:
          if ((0 < iVar4) && (iVar11 = 0, 0 < iVar5)) {
            do {
              iVar12 = 0;
              pbVar17 = pbVar14;
              do {
                iVar12 = iVar12 + 1;
                bVar2 = (**(code **)(*(int *)(iVar10 + 0x10) + 0x14))
                                  (iVar10 + *(short *)(*(int *)(iVar10 + 0x10) + 0x10),iVar11);
                pbVar14 = pbVar17 + 1;
                *pbVar17 = bVar2;
                pbVar17 = pbVar14;
              } while (iVar12 < iVar5);
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar4);
          }
          break;
        case 4:
          if ((0 < iVar4) && (local_4c = 0, 0 < iVar5)) {
            do {
              pbVar8 = pbVar14 + 1;
              iVar11 = 0;
              pbVar17 = pbVar14;
              do {
                iVar12 = iVar11 + 1;
                pbVar14 = pbVar8 + 3;
                (**(code **)(*(int *)(iVar10 + 0x10) + 0x14))
                          (iVar10 + *(short *)(*(int *)(iVar10 + 0x10) + 0x10),local_4c,iVar11);
                pbVar8 = pbVar8 + 4;
                bVar22 = (byte)((uint)pbVar8 >> 8);
                local_14 = CONCAT11(bVar22,bVar22 >> 4) & 0xfff;
                bVar2 = (byte)pbVar8;
                local_12 = CONCAT11(bVar2,bVar2 >> 4) & 0xfff;
                *pbVar17 = bVar22 >> 4;
                pbVar17[1] = bVar22 & 0xf;
                pbVar16 = pbVar17 + 3;
                pbVar17[2] = bVar2 >> 4;
                pbVar17 = pbVar17 + 4;
                *pbVar16 = bVar2 & 0xf;
                iVar11 = iVar12;
              } while (iVar12 < iVar5);
              local_4c = local_4c + 1;
            } while (local_4c < iVar4);
          }
          break;
        case 5:
          if ((0 < iVar4) && (local_4c = 0, 0 < iVar5)) {
            do {
              iVar11 = 0;
              pbVar17 = pbVar14;
              do {
                iVar12 = iVar11 + 1;
                (**(code **)(*(int *)(iVar10 + 0x10) + 0x14))
                          (iVar10 + *(short *)(*(int *)(iVar10 + 0x10) + 0x10),local_4c,iVar11);
                pbVar8 = pbVar14 + 5;
                pbVar14 = pbVar14 + 6;
                bVar23 = (byte)((uint)pbVar8 >> 0x10);
                local_14 = CONCAT11(bVar23,bVar23 >> 4) & 0xfff;
                bVar22 = (byte)((uint)pbVar8 >> 8);
                local_12 = CONCAT11(bVar22,bVar22 >> 4) & 0xfff;
                bVar2 = (byte)pbVar8;
                local_10 = CONCAT11(bVar2,bVar2 >> 4) & 0xfff;
                *pbVar17 = bVar23 >> 4;
                pbVar17[1] = bVar23 & 0xf;
                pbVar17[2] = bVar22 >> 4;
                pbVar17[3] = bVar22 & 0xf;
                pbVar8 = pbVar17 + 5;
                pbVar17[4] = bVar2 >> 4;
                pbVar17 = pbVar17 + 6;
                *pbVar8 = bVar2 & 0xf;
                iVar11 = iVar12;
              } while (iVar12 < iVar5);
              local_4c = local_4c + 1;
            } while (local_4c < iVar4);
          }
        }
        local_3c = local_3c + 1;
        local_38 = local_38 + 1;
      } while (local_3c < DAT_00441a18);
    }
    local_14 = 1;
    local_12 = 0;
    FUN_0031fa2c(&local_14);
  }
  else {
    FUN_0032036c(1);
  }
  if (DAT_00441a10 == 0) {
    DAT_00442b24 = DAT_004193f0;
    DAT_00442b28 = DAT_004193f4;
    DAT_00441a10 = 1;
  }
  uVar13 = 9;
  iVar10 = 2;
  piVar15 = &DAT_00442b24;
  do {
    if (*piVar15 != 0) {
      FUN_0032ac10();
      bVar21 = *(char *)(*piVar15 + 0x14) != '\0';
      if (bVar21) {
        *(undefined1 *)(*piVar15 + 0x14) = 0;
      }
      FUN_0032ac64();
      if ((bVar21) && (iVar4 = *piVar15, iVar4 != 0)) {
        local_14 = *(ushort *)(iVar4 + 8);
        local_12 = *(ushort *)(iVar4 + 10);
        if (*(uint *)(iVar4 + 4) < uVar13) {
                    /* WARNING: Could not recover jumptable at 0x003206b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(&DAT_00436464 + *(uint *)(iVar4 + 4) * 4))();
          return;
        }
      }
    }
    iVar10 = iVar10 + -1;
    piVar15 = piVar15 + 1;
  } while (iVar10 != 0);
  if (DAT_004193ec == 0) {
    DAT_0043ede8 = 0;
    DAT_0043edec = 0;
    DAT_0043edf0 = 0;
    DAT_0043edf4 = 0;
    DAT_0043edf8 = 0;
    DAT_0043edfc = 0;
    DAT_0043ee00 = 0;
    DAT_0043ee04 = 0;
                    /* WARNING: Could not recover jumptable at 0x00320a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  local_28 = DAT_004363e0;
  local_18 = DAT_0043644c;
  local_1c = DAT_00436448;
  local_20 = DAT_00436444;
  local_24 = DAT_00436440;
  FUN_0032ac10();
  DAT_0043ede8 = 0;
  DAT_0043edec = 0;
  iVar10 = 3;
  puVar1 = (ushort *)&local_24;
  puVar19 = &DAT_0043ede8;
  do {
    puVar20 = puVar1;
    puVar18 = puVar19 + 2;
    *puVar20 = (ushort)*puVar18;
    *puVar18 = 0;
    uVar13 = puVar19[3];
    puVar20[1] = (ushort)uVar13;
    puVar19[3] = 0;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    puVar1 = puVar20 + 2;
    puVar19 = puVar18;
  } while (iVar10 != 0);
  uVar3 = (ushort)((uVar13 & 0x7f) << 8);
  puVar20[2] = uVar3;
  puVar20[3] = (ushort)(uVar13 >> 7) & 0x7f | uVar3;
  FUN_0032ac64();
  FUN_0031fa2c(&local_28,&local_24,0x10);
                    /* WARNING: Could not recover jumptable at 0x00320adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
XREF 00320762 READ firmware_entry_00320574
XREF 0031fc56 READ FUN_0031fc2c
FUNCTION 0031fc2c FUN_0031fc2c success=true

void FUN_0031fc2c(int param_1,char *param_2,byte *param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  byte *pbVar15;
  byte *pbVar16;
  ushort *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  code *UNRECOVERED_JUMPTABLE;
  int iVar20;
  uint uVar21;
  byte *local_3c;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_14;
  undefined1 local_10 [2];
  byte bStack_e;
  
  if (param_4 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if ((param_1 == 0x11) && (*param_2 == '\x01')) {
    DAT_00441a14 = 1;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (param_1 != 0x12) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (*param_2 == '\x01') {
    if (0 < DAT_00441a18) {
      local_14 = 0;
      piVar14 = &DAT_00441a1c;
      local_3c = param_3;
      do {
        iVar3 = *piVar14;
        iVar20 = iVar3;
        iVar11 = (**(code **)(*(int *)(iVar3 + 0x10) + 0x2c))
                           (iVar3 + *(short *)(*(int *)(iVar3 + 0x10) + 0x28));
        iVar5 = (**(code **)(*(int *)(iVar20 + 0x10) + 0x34))
                          (iVar3 + *(short *)(*(int *)(iVar20 + 0x10) + 0x30));
        pbVar19 = local_3c;
        switch(*(undefined4 *)(iVar20 + 4)) {
        case 1:
          if ((0 < iVar11) &&
             (local_2c = 0, 0 < (int)(iVar5 + 3 + ((uint)(iVar5 + 3 >> 0x1f) >> 0x1e)) >> 2)) {
            do {
              iVar10 = 0;
              local_34 = 0;
              pbVar19 = local_3c;
              local_38 = iVar5;
              do {
                iVar8 = local_38;
                if (local_34 != 0) {
                  iVar8 = 4;
                }
                local_3c = pbVar19 + 1;
                bVar2 = *pbVar19;
                if (0 < iVar8) {
                  iVar6 = 0;
                  iVar7 = iVar10;
                  do {
                    iVar10 = iVar7 + 1;
                    uVar21 = 1 << iVar6;
                    iVar6 = iVar6 + 1;
                    (**(code **)(*(int *)(iVar20 + 0x10) + 0x1c))
                              (iVar3 + *(short *)(*(int *)(iVar20 + 0x10) + 0x18),local_2c,iVar7,
                               (bVar2 & uVar21) != 0);
                    iVar7 = iVar10;
                  } while (iVar6 < iVar8);
                }
                local_34 = local_34 + 1;
                local_38 = local_38 + -4;
                pbVar19 = local_3c;
              } while (local_34 < 0);
              local_2c = local_2c + 1;
            } while (local_2c < iVar11);
          }
          break;
        case 2:
          if (0 < iVar11) {
            iVar10 = iVar5 / 2 + 3;
            local_38 = 0;
            if (0 < (int)(iVar10 + ((uint)(iVar10 >> 0x1f) >> 0x1e)) >> 2) {
              do {
                iVar10 = 0;
                local_34 = 0;
                pbVar19 = local_3c;
                local_2c = iVar5 / 2;
                do {
                  iVar8 = local_2c;
                  if (local_34 != 0) {
                    iVar8 = 4;
                  }
                  local_3c = pbVar19 + 1;
                  bVar2 = *pbVar19;
                  if (0 < iVar8) {
                    iVar7 = 0;
                    do {
                      uVar21 = 1 << iVar7;
                      iVar7 = iVar7 + 1;
                      (**(code **)(*(int *)(iVar20 + 0x10) + 0x1c))
                                (iVar3 + *(short *)(*(int *)(iVar20 + 0x10) + 0x18),local_38,iVar10,
                                 (bVar2 & uVar21) != 0);
                      iVar10 = iVar10 + 2;
                    } while (iVar7 < iVar8);
                  }
                  local_34 = local_34 + 1;
                  local_2c = local_2c + -4;
                  pbVar19 = local_3c;
                } while (local_34 < 0);
                local_38 = local_38 + 1;
              } while (local_38 < iVar11);
            }
          }
          break;
        case 3:
          if ((0 < iVar11) && (iVar10 = 0, 0 < iVar5)) {
            do {
              iVar8 = 0;
              pbVar19 = local_3c;
              do {
                local_3c = pbVar19 + 1;
                iVar7 = iVar8 + 1;
                (**(code **)(*(int *)(iVar20 + 0x10) + 0x1c))
                          (iVar3 + *(short *)(*(int *)(iVar20 + 0x10) + 0x18),iVar10,iVar8,*pbVar19)
                ;
                iVar8 = iVar7;
                pbVar19 = local_3c;
              } while (iVar7 < iVar5);
              iVar10 = iVar10 + 1;
            } while (iVar10 < iVar11);
          }
          break;
        case 4:
          if ((0 < iVar11) && (local_28 = 0, 0 < iVar5)) {
            do {
              iVar10 = 0;
              pbVar19 = local_3c;
              do {
                cVar1 = (char)local_3c;
                pbVar15 = pbVar19 + 1;
                local_3c = (byte *)0x0;
                pbVar16 = pbVar19 + 2;
                pbVar18 = pbVar19 + 3;
                _local_10 = CONCAT12(*pbVar16,CONCAT11(*pbVar15,cVar1 + '\x03'));
                pbVar19 = pbVar19 + 4;
                iVar8 = iVar10 + 1;
                (**(code **)(*(int *)(iVar20 + 0x10) + 0x1c))
                          (iVar3 + *(short *)(*(int *)(iVar20 + 0x10) + 0x18),local_28,iVar10,
                           *pbVar18 & 0xf | (*pbVar16 & 0xf) << 4 |
                           (*pbVar15 & 0xf | (_local_10 & 0xf) << 4) << 8);
                iVar10 = iVar8;
              } while (iVar8 < iVar5);
              local_28 = local_28 + 1;
              pbVar19 = (byte *)0x0;
            } while (local_28 < iVar11);
          }
          break;
        case 5:
          if ((0 < iVar11) && (local_28 = 0, 0 < iVar5)) {
            do {
              iVar10 = 0;
              pbVar19 = local_3c;
              do {
                local_3c = local_3c + 6;
                pbVar15 = pbVar19 + 2;
                pbVar16 = pbVar19 + 3;
                puVar17 = (ushort *)(pbVar19 + 4);
                pbVar18 = pbVar19 + 5;
                pbVar19 = pbVar19 + 6;
                iVar8 = iVar10 + 1;
                (**(code **)(*(int *)(iVar20 + 0x10) + 0x1c))
                          (iVar3 + *(short *)(*(int *)(iVar20 + 0x10) + 0x18),local_28,iVar10,
                           *pbVar18 & 0xf | (*puVar17 & 0xf) << 4 |
                           (*pbVar16 & 0xf | (*pbVar15 & 0xf) << 4) << 8);
                iVar10 = iVar8;
              } while (iVar8 < iVar5);
              local_28 = local_28 + 1;
              pbVar19 = local_3c;
            } while (local_28 < iVar11);
          }
        }
        local_14 = local_14 + 1;
        piVar14 = piVar14 + 1;
        local_3c = pbVar19;
      } while (local_14 < DAT_00441a18);
    }
                    /* WARNING: Could not recover jumptable at 0x0031ffd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  pcVar13 = param_2 + 1;
  iVar3 = 0;
  if (0 < DAT_00441a18) {
    piVar14 = &DAT_00441a1c;
    iVar20 = DAT_00441a18;
    do {
      iVar11 = iVar3 + 1;
      if ((*pcVar13 == *(char *)(*piVar14 + 9)) || (iVar3 = iVar11, iVar20 == 0)) break;
      iVar20 = iVar20 + -1;
      piVar14 = piVar14 + 1;
    } while (iVar20 != 0);
  }
  if (DAT_00441a18 <= iVar3) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar20 = DAT_00441a18 - iVar3;
  piVar14 = &DAT_00441a1c + iVar3;
  do {
    iVar11 = iVar3 + 1;
    if (((*(char *)(*piVar14 + 10) == -1) || (param_2[2] == *(char *)(*piVar14 + 10))) ||
       (iVar3 = iVar11, iVar20 == 0)) break;
    iVar20 = iVar20 + -1;
    piVar14 = piVar14 + 1;
  } while (iVar20 != 0);
  if (DAT_00441a18 <= iVar3) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar20 = DAT_00441a18 - iVar3;
  piVar14 = &DAT_00441a1c + iVar3;
  while( true ) {
    iVar11 = *piVar14;
    iVar5 = iVar3 + 1;
    if ((*(char *)(iVar11 + 0xb) == -1) || (param_2[3] == *(char *)(iVar11 + 0xb))) break;
    iVar3 = iVar5;
    if ((iVar20 == 0) || (iVar20 = iVar20 + -1, piVar14 = piVar14 + 1, iVar20 == 0)) break;
  }
  if (DAT_00441a18 <= iVar3) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar20 = 3;
  iVar3 = 1;
  pcVar12 = (char *)(iVar11 + 9);
  while( true ) {
    iVar5 = iVar3 + 1;
    if ((*pcVar12 != -1) && (*pcVar12 != *pcVar13)) break;
    pcVar13 = pcVar13 + 1;
    iVar3 = iVar5;
    if ((iVar20 == 0) || (iVar20 = iVar20 + -1, pcVar12 = pcVar12 + 1, iVar20 == 0)) break;
  }
  if (iVar3 != 4) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar20 = 4;
  iVar3 = 0;
  pcVar13 = (char *)(iVar11 + 8);
  do {
    iVar5 = iVar3 + 1;
    if ((*pcVar13 == -1) || (iVar3 = iVar5, iVar20 == 0)) break;
    iVar20 = iVar20 + -1;
    pcVar13 = pcVar13 + 1;
  } while (iVar20 != 0);
  bVar4 = 0;
  bVar9 = 0;
  bVar2 = 0;
  if (iVar3 != 4) {
    bVar2 = param_2[iVar3];
    bVar9 = bVar2 & 0xf;
    bVar4 = bVar2 >> 4;
  }
  if (*(int *)(iVar11 + 4) == 6) {
    (**(code **)(*(int *)(iVar11 + 0x10) + 0x24))
              (iVar11 + *(short *)(*(int *)(iVar11 + 0x10) + 0x20),bVar2);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  uVar21 = 0;
  switch(*(undefined4 *)(iVar11 + 4)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 8:
    uVar21 = (uint)*param_3;
    break;
  case 4:
    uVar21 = param_3[3] & 0xf | (param_3[2] & 0xf) << 4 |
             (param_3[1] & 0xf | (*param_3 & 0xf) << 4) << 8;
    break;
  case 5:
    uVar21 = param_3[5] & 0xf | (param_3[4] & 0xf) << 4 |
             (param_3[3] & 0xf | (param_3[2] & 0xf) << 4) << 8;
    break;
  case 7:
    uVar21 = (uint)(byte)(*param_3 & 0xf | param_3[1] << 4);
  }
  (**(code **)(*(int *)(iVar11 + 0x10) + 0x1c))
            (iVar11 + *(short *)(*(int *)(iVar11 + 0x10) + 0x18),bVar4,bVar9,uVar21);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
XREF 0031fd00 READ FUN_0031fc2c
XREF 0031ffc6 READ FUN_0031fc2c
TARGET 00441a1c
XREF 00320392 READ FUN_0032036c
XREF 0031faf0 DATA FUN_0031fad8
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
XREF 003205b0 DATA firmware_entry_00320574
XREF 003205b6 READ firmware_entry_00320574
XREF 0031fc64 DATA FUN_0031fc2c
XREF 0031fc82 READ FUN_0031fc2c
XREF 0031fca8 READ FUN_0031fc2c
XREF 0031fdf4 READ FUN_0031fc2c
