FUNCTION 0031f250 firmware_entry_0031f250 contains=0031f250 success=true

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
