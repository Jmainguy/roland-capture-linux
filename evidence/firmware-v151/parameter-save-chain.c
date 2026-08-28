FUNCTION 0032b2b0 FUN_0032b2b0 contains=0032b2b0 success=true

/* WARNING: Control flow encountered unimplemented instructions */

undefined4 FUN_0032b2b0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  uVar1 = IPEND;
  if (((uVar1 & 0x706f) == 0) && (uVar1 = IMASK, (uVar1 & 0x3060) != 0)) {
    if (((0 < param_1) && (param_1 <= DAT_ff8003b8)) || (uVar3 = 0xffffffee, param_1 == 0)) {
      puVar4 = DAT_00445158;
      if (param_1 != 0) {
        puVar4 = &DAT_ff800628 + (param_1 + -1) * 0x20;
      }
      csync();
      uVar1 = IMASK;
      IMASK = 0;
      IMASK = uVar1 & 0xffffcf9f;
      csync();
      if ((*(uint *)(puVar4 + 0xc) & 0xff) != 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      iVar2 = FUN_0032b106(puVar4);
      if (iVar2 != 0) {
        FUN_ffa00798();
      }
      uVar3 = 0;
      csync();
      uVar1 = IMASK;
      IMASK = 0;
      IMASK = uVar1 | 0x3060;
      csync();
    }
  }
  else {
    uVar3 = 0xffffffe7;
  }
                    /* WARNING: Treating indirect jump as return */
  return uVar3;
}


END_FUNCTION
FUNCTION 0035aaf0 FUN_0035aaf0 contains=0035aaf0 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0035aaf0(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
FUNCTION 0036da08 FUN_0036da08 contains=0036da08 success=true

void FUN_0036da08(void)

{
  FUN_0036c1d0(&stack0x00000000);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00366aa4 FUN_00366aa4 contains=00366aa4 success=true

void FUN_00366aa4(undefined4 param_1,undefined4 param_2)

{
  FUN_00366a4c(param_1,param_2,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 003666d8 FUN_003666d8 contains=003666d8 success=true

void FUN_003666d8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = 0;
  if ((param_1 < DAT_00447118) && (iVar2 = *(int *)(DAT_0044711c + param_1 * 0xc + 4), iVar2 != 0))
  {
    uVar1 = (**(code **)(iVar2 + 0x1c))(param_2,&stack0x00000008);
  }
                    /* WARNING: Could not recover jumptable at 0x0036672c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


END_FUNCTION
FUNCTION 003667ec FUN_003667ec contains=003667ec success=true

undefined4 FUN_003667ec(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_00447118 <= param_1) {
                    /* WARNING: Treating indirect jump as return */
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*(int *)(DAT_0044711c + param_1 * 0xc + 4) + 0xc))();
                    /* WARNING: Treating indirect jump as return */
  return uVar1;
}


END_FUNCTION
