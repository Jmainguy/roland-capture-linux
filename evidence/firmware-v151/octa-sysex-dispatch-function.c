FUNCTION 00320574 firmware_entry_00320574 contains=00320574 success=true

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
