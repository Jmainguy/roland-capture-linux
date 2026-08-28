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
FUNCTION 0031dfb2 firmware_entry_0031dfb2 success=true

void firmware_entry_0031dfb2(void)

{
  undefined4 uVar1;
  undefined4 unaff_R4;
  undefined4 *puVar2;
  int unaff_P4;
  undefined4 unaff_P5;
  int unaff_FP;
  int in_stack_0000003c;
  
  if (in_stack_0000003c != 0) {
    unaff_R4 = *(undefined4 *)(unaff_FP + 0x10);
  }
  FUN_003082cc(unaff_R4);
  puVar2 = &DAT_00419160;
  if (DAT_00419160 == 0) {
    DAT_00419160 = 1;
    FUN_0030305c();
  }
  if (*(char *)(unaff_P4 + 0x11a) == '\0') {
    FUN_0031eff0(0,unaff_R4,in_stack_0000003c);
    uVar1 = FUN_00366aa4();
    FUN_003666d8(uVar1,0,unaff_R4);
    FUN_003667ec(uVar1);
    uVar1 = 500;
    if (puVar2[1] != 0) {
      uVar1 = 2000;
    }
    FUN_0032b6d8(uVar1);
    puVar2[1] = 0;
    if (*(char *)(unaff_P4 + 0x11a) == '\0') {
      uVar1 = FUN_00366aa4();
      FUN_003666d8(uVar1,4,0);
      FUN_003667ec(uVar1);
      FUN_ffa006d8(&DAT_00419440);
      *(undefined1 *)(unaff_P4 + 0x11b) = 1;
      *(char *)(unaff_P4 + 0x110) = (char)in_stack_0000003c;
      *(undefined4 *)(unaff_P4 + 0x10c) = unaff_R4;
      *(undefined4 *)(unaff_P4 + 0x114) = unaff_P5;
      FUN_0031eff0(1,unaff_R4,in_stack_0000003c);
    }
  }
  *(undefined1 *)(unaff_P4 + 0x11a) = 0;
  *(undefined2 *)(unaff_P4 + 0x118) = 0;
                    /* WARNING: Could not recover jumptable at 0x0031de58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
FUNCTION 0031dfc0 firmware_entry_0031dfc0 success=true

void firmware_entry_0031dfc0(void)

{
  int unaff_P4;
  int unaff_FP;
  
  FUN_0031eff0(2);
  *(undefined4 *)(unaff_P4 + 0x10c) = 0;
  *(undefined1 *)(unaff_P4 + 0x11a) = 0;
  *(undefined2 *)(unaff_P4 + 0x118) = 0;
                    /* WARNING: Could not recover jumptable at 0x0031de58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
FUNCTION 0031dfd8 firmware_entry_0031dfd8 success=true

void firmware_entry_0031dfd8(void)

{
  int unaff_P4;
  int unaff_FP;
  
  FUN_0031eff0(3);
  *(undefined4 *)(unaff_P4 + 0x10c) = 0;
  *(undefined1 *)(unaff_P4 + 0x11a) = 0;
  *(undefined2 *)(unaff_P4 + 0x118) = 0;
                    /* WARNING: Could not recover jumptable at 0x0031de58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
FUNCTION 0031dfee firmware_entry_0031dfee success=true

void firmware_entry_0031dfee(void)

{
  int unaff_P4;
  int unaff_FP;
  
  *(undefined4 *)(unaff_P4 + 0x10c) = 0;
  *(undefined1 *)(unaff_P4 + 0x11a) = 0;
  *(undefined2 *)(unaff_P4 + 0x118) = 0;
                    /* WARNING: Could not recover jumptable at 0x0031de58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
FUNCTION 0031e07c FUN_0031e07c success=true

void FUN_0031e07c(undefined4 param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined *local_c;
  
  if (DAT_00441104 != '\0') {
    DAT_00441106 = 1;
    do {
      FUN_0032b6d8(10);
    } while (DAT_00441104 != '\0');
  }
  local_28 = DAT_00440fec;
  local_38 = 0;
  local_c = &DAT_004410f0;
  local_24 = &DAT_00440ff0;
  uStack_1c = DAT_00419174;
  uStack_18 = DAT_00419178;
  DAT_00441104 = 1;
  uStack_14 = DAT_0041917c;
  local_20 = auStack_48;
  DAT_00441107 = 0;
  uStack_10 = DAT_00419180;
  local_30 = 0;
  local_2c = 0;
  local_34 = param_1;
  iVar1 = FUN_ffa00dae(&local_28);
                    /* WARNING: Could not recover jumptable at 0x0031e126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar1 == 0);
  return;
}


END_FUNCTION
FUNCTION 0031e128 FUN_0031e128 success=true

void FUN_0031e128(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined *local_c;
  
  if (DAT_00441104 != '\0') {
    DAT_00441106 = 1;
    do {
      FUN_0032b6d8(10);
    } while (DAT_00441104 != '\0');
  }
  local_28 = DAT_00440fec;
  local_38 = 0;
  local_c = &DAT_004410f0;
  local_24 = &DAT_00440ff0;
  uStack_1c = DAT_00419194;
  uStack_18 = DAT_00419198;
  DAT_00441104 = 1;
  uStack_14 = DAT_0041919c;
  local_30 = 1;
  local_20 = auStack_48;
  DAT_00441107 = 0;
  uStack_10 = DAT_004191a0;
  local_34 = 0;
  local_2c = 0;
  iVar1 = FUN_ffa00dae(&local_28);
                    /* WARNING: Could not recover jumptable at 0x0031e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar1 == 0);
  return;
}


END_FUNCTION
FUNCTION 0031e1d4 firmware_entry_0031e1d4 success=true

bool firmware_entry_0031e1d4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined *local_24;
  undefined1 *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined *local_c;
  
  local_20 = auStack_48;
  uStack_1c = DAT_0043626c;
  uStack_18 = DAT_00436270;
  local_28 = DAT_00440fec;
  uStack_14 = DAT_00436274;
  local_38 = 1;
  uStack_10 = DAT_00436278;
  local_c = &DAT_004410f0;
  local_24 = &DAT_00440ff0;
  local_34 = param_1;
  local_30 = param_2;
  iVar1 = FUN_ffa00dae(&local_28);
                    /* WARNING: Treating indirect jump as return */
  return iVar1 == 0;
}


END_FUNCTION
FUNCTION 0031e246 firmware_entry_0031e246 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void firmware_entry_0031e246(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  short *psVar6;
  bool bVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  pcVar4 = *(code **)(param_1 + 0x18);
  if (4 < uVar1) {
    if (uVar1 == 5) {
      (*(code *)0xffa00658)(&DAT_00419440);
      func_0x003082b0();
      func_0x0031d334(&DAT_00440ecc);
      iVar2 = 5;
      psVar6 = (short *)0x436200;
      do {
        FUN_0031d018(&DAT_00440ecc,1,(int)*psVar6);
        iVar2 = iVar2 + -1;
        psVar6 = psVar6 + 2;
      } while (iVar2 != 0);
      FUN_003082cc(DAT_004410f8);
      FUN_0032b6d8(0xd02);
      FUN_ffa00684(&DAT_00419440);
      goto LAB_0031e356;
    }
    if (uVar1 == 6) {
      FUN_0031d058(&DAT_00440ecc);
      FUN_0031d160(&DAT_00440ecc);
      func_0x0031d404(&DAT_00440ecc);
      goto LAB_0031e356;
    }
  }
  bVar7 = true;
  if (uVar1 != 0) {
    bVar7 = *(int *)((uVar1 - 1) * 4 + 0x436200) == 3;
  }
  (*(code *)0xffa00658)(&DAT_00419440);
  if (bVar7) {
    uVar5 = 0x96;
    iVar2 = 8;
    puVar3 = &DAT_ff80246c;
    do {
      iVar2 = iVar2 + -1;
      FUN_ffa00458(&DAT_00419440,puVar3,0,uVar5);
      puVar3 = puVar3 + 5;
    } while (iVar2 != 0);
  }
  if (uVar1 == 0) {
    iVar2 = 5;
    psVar6 = (short *)0x436200;
    do {
      func_0x0031d140(&DAT_00440ecc,(int)*psVar6);
      FUN_0031d018(&DAT_00440ecc,0,(int)*psVar6);
      iVar2 = iVar2 + -1;
      psVar6 = psVar6 + 2;
    } while (iVar2 != 0);
  }
  else {
    iVar2 = (int)*(short *)((uVar1 - 1) * 4 + 0x436200);
    func_0x0031d140(&DAT_00440ecc,iVar2);
    FUN_0031d018(&DAT_00440ecc,0,iVar2);
  }
  if (bVar7) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  FUN_ffa00684(&DAT_00419440);
LAB_0031e356:
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)();
                    /* WARNING: Could not recover jumptable at 0x0031e36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0031e378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
