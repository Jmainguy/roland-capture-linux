FUNCTION 0031fc2c FUN_0031fc2c contains=0031fc2c success=true

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
