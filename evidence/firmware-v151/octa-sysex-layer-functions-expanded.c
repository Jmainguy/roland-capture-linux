FUNCTION 0031ef60 firmware_entry_0031ef60 success=true

void firmware_entry_0031ef60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_P3;
  undefined4 *unaff_P4;
  int unaff_FP;
  
  in_P3[0x48] = 1;
  iVar3 = 2;
  do {
    if ((code *)*unaff_P4 != (code *)0x0) {
      (*(code *)*unaff_P4)(0,0,0);
    }
    iVar3 = iVar3 + -1;
    unaff_P4 = unaff_P4 + 1;
  } while (iVar3 != 0);
  if (*in_P3 != 0) {
    *(undefined4 *)(unaff_FP + -0x20) = DAT_0041934c;
    *(undefined4 *)(unaff_FP + -0x1c) = DAT_00419350;
    *(undefined4 *)(unaff_FP + -0x18) = DAT_00419354;
    *(undefined4 *)(unaff_FP + -0x14) = DAT_00419358;
    *(undefined4 *)(unaff_FP + -0x10) = DAT_0041935c;
    uVar1 = DAT_00419360;
    *(int **)(unaff_FP + -4) = in_P3 + 0x42;
    uVar2 = DAT_00419364;
    *(int *)(unaff_FP + -0x20) = in_P3[1];
    *(undefined4 *)(unaff_FP + -0xc) = uVar1;
    *(undefined4 *)(unaff_FP + -8) = uVar2;
    *(int *)(unaff_FP + -0x18) = unaff_FP + -0x40;
    *(int **)(unaff_FP + -0x1c) = in_P3 + 2;
    FUN_0031dbd8();
    FUN_ffa00dae(unaff_FP + -0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x0031ef8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
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
FUNCTION 0031f250 firmware_entry_0031f250 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void firmware_entry_0031f250(undefined4 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  ushort uVar7;
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined1 *local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  uint local_c;
  
  if (param_3 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  bVar5 = false;
  bVar4 = false;
  local_c = *param_2 & 0xffffff00;
  if (DAT_00436384 == local_c) {
    local_c = param_2[1] & 0xffffff00;
    bVar4 = DAT_00436388 == local_c;
  }
  if (!bVar4) {
    bVar5 = false;
    if (DAT_0043638c == (*param_2 & 0xffffff00)) {
      bVar5 = DAT_00436390 == (param_2[1] & 0xffffff00);
    }
    if (!bVar5) {
      FUN_0035b3b6(param_2);
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    FUN_0036965c(&DAT_00436394,0xf,0);
    FUN_0036965c(&DAT_00436394,0xf,1);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  param_2 = param_2 + 2;
  iVar3 = 0;
  FUN_ffa00f68(DAT_00441200);
  DAT_00441a08 = 0;
  do {
    bVar6 = (byte)*param_2 & 0xf;
    switch(bVar6) {
    case 4:
      uVar1 = *param_2;
      bVar6 = (byte)(uVar1 >> 8);
      uVar7 = (ushort)(uVar1 >> 0x10);
      if (iVar3 == 0) {
        iVar3 = 4;
        if ((0x10 < bVar6) && ((bVar6 == 0x11 || (bVar6 == 0x12)))) {
          DAT_00441204._2_2_ = 0;
          iVar3 = 1;
          DAT_00441204._0_2_ = uVar7;
          DAT_00441a0c = bVar6;
        }
      }
      else {
        uVar2 = (undefined1)(uVar1 >> 0x18);
        if (iVar3 == 1) {
          iVar3 = 2;
          DAT_00441204._2_2_ = uVar7 >> 8;
          _DAT_00441208 = 0;
          (&DAT_00441208)[DAT_00441a08] = uVar2;
          DAT_00441a08 = DAT_00441a08 + 1;
        }
        else {
          bVar4 = iVar3 == 2;
          iVar3 = 4;
          if ((bVar4) && (DAT_00441a08 < 0x7fc)) {
            iVar3 = 2;
            (&DAT_00441208)[DAT_00441a08] = bVar6;
            (&DAT_00441209)[DAT_00441a08] = uVar2;
            (&DAT_0044120a)[DAT_00441a08] = uVar2;
            DAT_00441a08 = DAT_00441a08 + 3;
          }
        }
      }
      break;
    case 5:
    case 6:
    case 7:
      iVar3 = 4;
      if (DAT_00441a08 != 0) {
        if (bVar6 < 6) {
          if (bVar6 != 5) break;
          DAT_00441a08 = DAT_00441a08 - 1;
        }
        else if (bVar6 != 6) {
          if ((bVar6 != 7) || (0x7fe < DAT_00441a08)) break;
          (&DAT_00441208)[DAT_00441a08] = (char)(*param_2 >> 8);
          DAT_00441a08 = DAT_00441a08 + 1;
        }
        iVar3 = 3;
      }
    }
    if (iVar3 == 3) {
      bVar5 = true;
LAB_0031f36c:
      if (!bVar5) {
        FUN_ffa00dd4(DAT_00441200);
                    /* WARNING: Treating indirect jump as return */
        return;
      }
      uStack_20 = DAT_004363b8;
      uStack_1c = DAT_004363bc;
      uStack_18 = DAT_004363c0;
      uStack_14 = DAT_004363c4;
      puStack_10 = PTR_DAT_004363c8;
      local_2c = DAT_00441108;
      local_30 = 1;
      local_24 = auStack_40;
      local_28 = &DAT_0044115c;
      FUN_ffa00dae(&local_2c);
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    if (iVar3 == 4) goto LAB_0031f36c;
    param_2 = param_2 + 1;
  } while( true );
}


END_FUNCTION
FUNCTION 0031f4ec firmware_entry_0031f4ec success=true

void firmware_entry_0031f4ec(void)

{
  firmware_entry_00320574();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0031f4fc firmware_entry_0031f4fc success=true

void firmware_entry_0031f4fc(void)

{
  FUN_0031fc2c(DAT_00441a0c,&DAT_00441204,&DAT_00441208,DAT_00441a08);
  FUN_ffa00dd4(DAT_00441200);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0031f690 FUN_0031f690 success=true

undefined4 FUN_0031f690(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 0031f6a4 FUN_0031f6a4 success=true

undefined4 FUN_0031f6a4(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 0031f6b8 FUN_0031f6b8 success=true

undefined4 FUN_0031f6b8(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 2;
}


END_FUNCTION
FUNCTION 0031f6c8 FUN_0031f6c8 success=true

undefined4 FUN_0031f6c8(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 4;
}


END_FUNCTION
FUNCTION 0031f6d8 FUN_0031f6d8 success=true

undefined4 FUN_0031f6d8(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 4;
}


END_FUNCTION
FUNCTION 0031f708 FUN_0031f708 success=true

undefined4 FUN_0031f708(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 4;
}


END_FUNCTION
FUNCTION 0031f718 FUN_0031f718 success=true

undefined4 FUN_0031f718(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 4;
}


END_FUNCTION
FUNCTION 0031f728 FUN_0031f728 success=true

undefined4 FUN_0031f728(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 2;
}


END_FUNCTION
FUNCTION 0031f738 FUN_0031f738 success=true

undefined4 FUN_0031f738(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 4;
}


END_FUNCTION
FUNCTION 0031f748 FUN_0031f748 success=true

undefined4 FUN_0031f748(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 4;
}


END_FUNCTION
FUNCTION 0031f7c4 FUN_0031f7c4 success=true

undefined4 FUN_0031f7c4(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 10;
}


END_FUNCTION
FUNCTION 0031f7d4 FUN_0031f7d4 success=true

undefined4 FUN_0031f7d4(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 4;
}


END_FUNCTION
FUNCTION 0031f7e4 FUN_0031f7e4 success=true

undefined4 FUN_0031f7e4(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
FUNCTION 0031f868 FUN_0031f868 success=true

undefined4 FUN_0031f868(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 10;
}


END_FUNCTION
FUNCTION 0031f878 FUN_0031f878 success=true

undefined4 FUN_0031f878(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 4;
}


END_FUNCTION
FUNCTION 0031f95c FUN_0031f95c success=true

undefined4 FUN_0031f95c(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 8;
}


END_FUNCTION
FUNCTION 0031f9d8 FUN_0031f9d8 success=true

undefined4 FUN_0031f9d8(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
FUNCTION 0031f9e8 FUN_0031f9e8 success=true

undefined4 FUN_0031f9e8(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
FUNCTION 0031fa14 FUN_0031fa14 success=true

void FUN_0031fa14(void)

{
  DAT_00441a14 = 1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
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
