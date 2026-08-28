MATCH 0031fae0 LOAD P5.L = 0x1a1c FUNCTION FUN_0031fad8
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
