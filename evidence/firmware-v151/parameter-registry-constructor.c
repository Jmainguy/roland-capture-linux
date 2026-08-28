FUNCTION 00322378 firmware_entry_00322378 success=true

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void firmware_entry_00322378(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  DAT_00441a18 = 0;
  DAT_00441a14 = 0;
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x402d40;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 0;
    *(undefined1 *)((int)puVar5 + 10) = 0;
    puVar1 = puVar5 + 3;
    *(undefined1 *)((int)puVar5 + 0xb) = 0;
    puVar5[1] = 0;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar1[1] + 0x34))((int)puVar5 + (int)*(short *)(puVar1[1] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar5 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x402d78;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 0;
    *(undefined1 *)((int)puVar5 + 10) = 0;
    puVar1 = puVar5 + 3;
    *(undefined1 *)((int)puVar5 + 0xb) = 1;
    puVar5[1] = 0;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar1[1] + 0x34))((int)puVar5 + (int)*(short *)(puVar1[1] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar5 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x402db0;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 0;
    *(undefined1 *)((int)puVar5 + 10) = 0;
    puVar1 = puVar5 + 3;
    *(undefined1 *)((int)puVar5 + 0xb) = 2;
    puVar5[1] = 0;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar1[1] + 0x34))((int)puVar5 + (int)*(short *)(puVar1[1] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar5 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x402de8;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 1;
    *(undefined1 *)((int)puVar5 + 10) = 0;
    puVar1 = puVar5 + 3;
    *(undefined1 *)((int)puVar5 + 0xb) = 0;
    puVar5[1] = 3;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar1[1] + 0x34))((int)puVar5 + (int)*(short *)(puVar1[1] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar5 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x402e20;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 2;
    *(undefined1 *)((int)puVar5 + 10) = 0;
    *(undefined1 *)((int)puVar5 + 0xb) = 0;
    puVar5[1] = 3;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x402e58;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 2;
    *(undefined1 *)((int)puVar5 + 10) = 0;
    *(undefined1 *)((int)puVar5 + 0xb) = 1;
    puVar5[1] = 3;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x402e90;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 2;
    *(undefined1 *)((int)puVar5 + 10) = 0;
    puVar1 = puVar5 + 3;
    *(undefined1 *)((int)puVar5 + 0xb) = 2;
    puVar5[1] = 3;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar1[1] + 0x34))((int)puVar5 + (int)*(short *)(puVar1[1] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar5 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x402ec8;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 2;
    *(undefined1 *)((int)puVar5 + 10) = 0;
    puVar1 = puVar5 + 3;
    *(undefined1 *)((int)puVar5 + 0xb) = 3;
    puVar5[1] = 3;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar1[1] + 0x34))((int)puVar5 + (int)*(short *)(puVar1[1] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar5 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x1c);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00325a24(puVar1,0x1c);
    *(undefined1 *)(puVar1 + 5) = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    *puVar1 = 0;
    puVar1[4] = 0x403910;
    puVar5 = puVar1;
  }
  DAT_004193f0 = puVar5;
  puVar1 = (undefined4 *)FUN_00325a76(0x1c);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00325a24(puVar1,0x1c);
    *(undefined1 *)(puVar1 + 5) = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    *puVar1 = 0;
    puVar1[4] = 0x403948;
    puVar5 = puVar1;
  }
  puVar1 = DAT_004193f0;
  DAT_004193f4 = puVar5;
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = DAT_004193f0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)((int)puVar1 + 9) = 2;
    *(undefined1 *)((int)puVar1 + 10) = 1;
    puVar5 = puVar1 + 3;
    *(undefined1 *)((int)puVar1 + 0xb) = 4;
    puVar1[1] = 7;
    iVar2 = (**(code **)(puVar1[4] + 0x2c))((int)puVar1 + (int)*(short *)(puVar1[4] + 0x28));
    iVar3 = (**(code **)(puVar5[1] + 0x34))((int)puVar1 + (int)*(short *)(puVar5[1] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar5 = DAT_004193f4;
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = DAT_004193f4;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 2;
    *(undefined1 *)((int)puVar5 + 10) = 1;
    puVar1 = puVar5 + 3;
    *(undefined1 *)((int)puVar5 + 0xb) = 5;
    puVar5[1] = 8;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar1[1] + 0x34))((int)puVar5 + (int)*(short *)(puVar1[1] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar5 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x402f00;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 3;
    *(undefined1 *)((int)puVar5 + 10) = 0;
    *(undefined1 *)((int)puVar5 + 0xb) = 0xff;
    puVar5[1] = 3;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x402f38;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 4;
    *(undefined1 *)((int)puVar5 + 10) = 0;
    *(undefined1 *)((int)puVar5 + 0xb) = 0;
    puVar5[1] = 3;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x402f70;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 4;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 1;
    puVar5[1] = 3;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x402fa8;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 4;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 2;
    puVar5[1] = 3;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x403020;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 5;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 0;
    puVar5[1] = 1;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x403060;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 5;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 1;
    puVar5[1] = 1;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x4030a0;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 5;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 2;
    puVar5[1] = 1;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = 0x4030e0;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 5;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 3;
    puVar5[1] = 1;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00325a24(puVar1,0x14);
    *(undefined1 *)(puVar1 + 3) = 0;
    *puVar1 = 0;
    puVar1[4] = 0x403120;
    puVar5 = puVar1;
  }
  puRam004193f8 = puVar5;
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 5;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 4;
    puVar5[1] = 3;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403160;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 5;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 5;
    puVar5[1] = 2;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_004031a0;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 5;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 6;
    puVar5[1] = 1;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_004031e0;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 5;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 7;
    puVar5[1] = 3;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403220;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 5;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 8;
    puVar5[1] = 3;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403260;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 5;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 9;
    puVar5[1] = 3;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_004032a0;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 5;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 10;
    puVar5[1] = 3;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_004032e0;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 5;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 0xb;
    puVar5[1] = 3;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403320;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 5;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 0xc;
    puVar5[1] = 3;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_004033a0;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 6;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 0;
    puVar5[1] = 2;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_004033e0;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 6;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 1;
    puVar5[1] = 2;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403420;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 6;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 2;
    puVar5[1] = 1;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403460;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 6;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 3;
    puVar5[1] = 1;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_004034a0;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 6;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 4;
    puVar5[1] = 4;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_004034e0;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 6;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 8;
    puVar5[1] = 5;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403520;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 6;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 0xe;
    puVar5[1] = 5;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403560;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 6;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 0x14;
    puVar5[1] = 6;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar2 * iVar3 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403598;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 7;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 0;
    puVar5[1] = 2;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar2 * iVar3 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_004035d8;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 7;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 1;
    puVar5[1] = 2;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403618;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 7;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 2;
    puVar5[1] = 1;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar2 * iVar3 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403658;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 7;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 3;
    puVar5[1] = 1;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403698;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 7;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 4;
    puVar5[1] = 4;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_004036d8;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 7;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 8;
    puVar5[1] = 5;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar2 * iVar3 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403718;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 8;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 0;
    puVar5[1] = 1;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar2 * iVar3 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403750;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 8;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    puVar1 = puVar5 + 3;
    *(undefined1 *)((int)puVar5 + 0xb) = 1;
    puVar5[1] = 5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar1[1] + 0x34))((int)puVar5 + (int)*(short *)(puVar1[1] + 0x30));
    uVar4 = FUN_00325a38(iVar2 * iVar3 * 4);
    *puVar5 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403788;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 8;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    puVar1 = puVar5 + 3;
    *(undefined1 *)((int)puVar5 + 0xb) = 7;
    puVar5[1] = 5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar1[1] + 0x34))((int)puVar5 + (int)*(short *)(puVar1[1] + 0x30));
    uVar4 = FUN_00325a38(iVar2 * iVar3 * 4);
    *puVar5 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_004037c0;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 8;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    puVar1 = puVar5 + 3;
    *(undefined1 *)((int)puVar5 + 0xb) = 0xd;
    puVar5[1] = 1;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar1[1] + 0x34))((int)puVar5 + (int)*(short *)(puVar1[1] + 0x30));
    uVar4 = FUN_00325a38(iVar2 * iVar3 * 4);
    *puVar5 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_004037f8;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 8;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    puVar1 = puVar5 + 3;
    *(undefined1 *)((int)puVar5 + 0xb) = 0xe;
    puVar5[1] = 1;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar1[1] + 0x34))((int)puVar5 + (int)*(short *)(puVar1[1] + 0x30));
    uVar4 = FUN_00325a38(iVar2 * iVar3 * 4);
    *puVar5 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403830;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 9;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    puVar1 = puVar5 + 3;
    *(undefined1 *)((int)puVar5 + 0xb) = 0;
    puVar5[1] = 1;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar1[1] + 0x34))((int)puVar5 + (int)*(short *)(puVar1[1] + 0x30));
    uVar4 = FUN_00325a38(iVar2 * iVar3 * 4);
    *puVar5 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_00403868;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 9;
    *(undefined1 *)((int)puVar5 + 10) = 0xff;
    *(undefined1 *)((int)puVar5 + 0xb) = 1;
    puVar5[1] = 5;
    puVar1 = puVar5;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar5[4] + 0x34))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x30));
    uVar4 = FUN_00325a38(iVar3 * iVar2 * 4);
    *puVar1 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  puVar1 = (undefined4 *)FUN_00325a76(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[4] = &DAT_004038a0;
    puVar5 = puVar1;
  }
  if (DAT_00441a18 < 0x3f) {
    (&DAT_00441a1c)[DAT_00441a18] = puVar5;
    *(undefined1 *)(puVar5 + 2) = 0;
    *(undefined1 *)((int)puVar5 + 9) = 10;
    *(undefined1 *)((int)puVar5 + 10) = 0;
    puVar1 = puVar5 + 3;
    *(undefined1 *)((int)puVar5 + 0xb) = 0;
    puVar5[1] = 0;
    iVar2 = (**(code **)(puVar5[4] + 0x2c))((int)puVar5 + (int)*(short *)(puVar5[4] + 0x28));
    iVar3 = (**(code **)(puVar1[1] + 0x34))((int)puVar5 + (int)*(short *)(puVar1[1] + 0x30));
    uVar4 = FUN_00325a38(iVar2 * iVar3 * 4);
    *puVar5 = uVar4;
    DAT_00441a18 = DAT_00441a18 + 1;
  }
  FUN_0032036c(0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
