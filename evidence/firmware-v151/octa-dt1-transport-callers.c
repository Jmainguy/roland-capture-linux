SYMBOL_QUERY FUN_0031fa2c
SYMBOL 0031fa2c FUN_0031fa2c Function
XREF 00320780 <no-function>
XREF 00320ace <no-function>
XREF 00320ae6 <no-function>
XREF 0031fb96 FUN_0031fad8
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
SYMBOL_QUERY FUN_0036965c
SYMBOL 0036965c FUN_0036965c Function
XREF 0031fabe FUN_0031fa2c
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
XREF 0031fac8 FUN_0031fa2c
