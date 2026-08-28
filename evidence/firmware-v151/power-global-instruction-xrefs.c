MATCH 0030c82c LOAD P5.L = 0xf85c FUNCTION firmware_entry_0030c820
FUNCTION 0030c820 firmware_entry_0030c820 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void firmware_entry_0030c820(void)

{
  _DAT_0043f86c = 0x400000;
  _DAT_0043f868 = 0;
  _DAT_0043f85c = 0;
  FUN_0033e0f0(&DAT_0043f870);
  _DAT_0043f870 = 0x41d2d4;
  _DAT_0043f86c = 0x400f08;
  FUN_00325a10(0x4094c0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
MATCH 0030cd06 LOAD P0.L = 0xd380 FUNCTION firmware_entry_0030cce8
FUNCTION 0030cce8 firmware_entry_0030cce8 success=true

void firmware_entry_0030cce8(undefined4 param_1,int param_2)

{
  if (4 < param_2 - 5U) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x0030cd10 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((param_2 - 5U) * 4 + 0x41d380))();
  return;
}


END_FUNCTION
MATCH 0030cdc0 LOAD P5.L = 0xf890 FUNCTION <none>
MATCH 0030cdf6 LOAD R0.L = 0xd368 FUNCTION <none>
MATCH 0030cec0 LOAD P0.L = 0xd46c FUNCTION firmware_entry_0030ceb8
FUNCTION 0030ceb8 firmware_entry_0030ceb8 success=true

undefined4 firmware_entry_0030ceb8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  bool in_CCflag;
  
  if (in_CCflag) {
                    /* WARNING: Could not recover jumptable at 0x0030cecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2 * 4 + 0x41d46c))();
    return uVar1;
  }
  if (param_2 == 0xf) {
                    /* WARNING: Treating indirect jump as return */
    return 1;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
MATCH 0030cf2e LOAD P2.L = 0xd47c FUNCTION firmware_entry_0030cf22
FUNCTION 0030cf22 firmware_entry_0030cf22 success=true

void firmware_entry_0030cf22(uint param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x0030cf3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 * 4 + 0x41d47c))();
    return;
  }
  *param_3 = 0;
  *param_4 = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
MATCH 0030d352 IF CC JUMP 0x0030d368 FUNCTION firmware_entry_0030d350
FUNCTION 0030d350 firmware_entry_0030d350 success=true

void firmware_entry_0030d350(void)

{
  int unaff_R6;
  int unaff_FP;
  
  if (unaff_R6 != 0) {
    FUN_00324010();
                    /* WARNING: Could not recover jumptable at 0x0030d366. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_FP + 4))();
    return;
  }
  FUN_00324010();
                    /* WARNING: Could not recover jumptable at 0x0030d37a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
