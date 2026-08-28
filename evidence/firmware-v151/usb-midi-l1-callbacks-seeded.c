FUNCTION ffa024c4 firmware_entry_ffa024c4 success=true

void firmware_entry_ffa024c4(void)

{
  return;
}


END_FUNCTION
FUNCTION ffa024c8 firmware_entry_ffa024c8 success=true

void firmware_entry_ffa024c8(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000000;
  undefined4 in_stack_00000004;
  
  if (DAT_0044775c == 0) {
    iVar2 = FUN_00369734(&DAT_00447740,&stack0x00000004);
    uVar1 = 0;
    if (iVar2 != 0) {
      FUN_0036977c(&DAT_00447754,in_stack_00000004,&DAT_00447764,&stack0x00000000);
      uVar1 = 0;
      if (in_stack_00000000 != 0) {
        DAT_0044775c = in_stack_00000000 + -1;
        uVar1 = 1;
        DAT_00447760 = 1;
        *param_1 = DAT_00447764;
      }
    }
  }
  else {
    uVar1 = 1;
    *param_1 = (&DAT_00447764)[DAT_00447760];
    DAT_00447760 = DAT_00447760 + 1;
    DAT_0044775c = DAT_0044775c + -1;
  }
                    /* WARNING: Could not recover jumptable at 0xffa0250a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


END_FUNCTION
FUNCTION ffa0255a firmware_entry_ffa0255a success=true

void firmware_entry_ffa0255a(undefined4 param_1)

{
  FUN_00369846(&DAT_0044777c,param_1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION ffa0257c firmware_entry_ffa0257c success=true

void firmware_entry_ffa0257c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_003696ee(&DAT_00447768,param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_ffa00e9c(DAT_00447798);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION ffa025f0 FUN_ffa025f0 success=true

void FUN_ffa025f0(void)

{
  *DAT_ff801190 = 1;
  return;
}


END_FUNCTION
FUNCTION ffa02600 FUN_ffa02600 success=true

void FUN_ffa02600(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = IMASK;
  IMASK = 0;
  *param_1 = (undefined2)DAT_ff8010e8;
  *param_2 = DAT_ff8010e8._2_2_;
  *param_3 = (short)DAT_ff8010ec;
  *param_4 = DAT_ff8010ec._2_2_;
  DAT_ff8010ec = 0;
  DAT_ff8010e8 = 0;
  IMASK = uVar1;
  return;
}


END_FUNCTION
FUNCTION ffa02634 FUN_ffa02634 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_ffa02634(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined2 *puVar8;
  int iVar9;
  uint *puVar7;
  
  iVar2 = DAT_ff801104;
  iVar4 = DAT_ff8010e0;
  if (DAT_ff801102 != '\0') {
    DAT_ff801102 = '\0';
    if (DAT_ff801109 != '\0') {
      DAT_ff801109 = '\0';
      *DAT_ff801130 = 0x4001;
    }
    ssync();
    DAT_ff801108 = (*DAT_ff801130 & 1) == 0;
  }
  if ((DAT_ff801114 != '\0') && (iVar4 == iVar2)) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  iVar9 = (int)DAT_ff801116;
  do {
    *param_2 = 0;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    param_2 = param_2 + 1;
  } while (iVar9 != 0);
  if ((DAT_ff801108 == '\0') || (iVar4 != iVar2)) {
    return;
  }
  iVar4 = ((uint)(int)DAT_ff80110a >> 1) - 1;
  puVar6 = param_1 + 1;
  uVar5 = *param_1;
  puVar3 = DAT_ff80110c;
  do {
    puVar8 = puVar3;
    puVar7 = puVar6 + 1;
    uVar1 = *puVar6;
    *puVar8 = (short)((uVar5 & 0xfffffff) >> 4);
    puVar8[1] = (ushort)((uVar5 & 0xfffffff) >> 0x14) | (ushort)(uVar1 << 4) & 0xff00;
    puVar6 = puVar6 + 2;
    uVar5 = *puVar7;
    puVar8[2] = (short)((uVar1 << 4) >> 0x10);
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    puVar3 = puVar8 + 3;
  } while (iVar4 != 0);
  iVar4 = (*puVar6 & 0xfffffef) << 4;
  puVar8[3] = (short)((uVar5 & 0xfffffff) >> 4);
  puVar8[4] = (ushort)((uVar5 & 0xfffffff) >> 0x14) | (ushort)iVar4 & 0xff00;
  puVar8[5] = (short)((uint)iVar4 >> 0x10);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
