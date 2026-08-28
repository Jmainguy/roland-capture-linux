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
FUNCTION 0030c87c firmware_entry_0030c87c success=true

undefined4 firmware_entry_0030c87c(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
FUNCTION 0030c88c firmware_entry_0030c88c success=true

undefined4 firmware_entry_0030c88c(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 0030c8a0 firmware_entry_0030c8a0 success=true

undefined4 firmware_entry_0030c8a0(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 10;
}


END_FUNCTION
FUNCTION 0030c8b0 firmware_entry_0030c8b0 success=true

undefined4 firmware_entry_0030c8b0(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 0030c8c6 firmware_entry_0030c8c6 success=true

void firmware_entry_0030c8c6(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *in_P1;
  
  *in_P1 = 0;
  if (param_2 < 5) {
    *param_4 = 0x7f;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  *param_4 = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030c8f8 firmware_entry_0030c8f8 success=true

undefined4 firmware_entry_0030c8f8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  bool in_CCflag;
  
  if (in_CCflag) {
                    /* WARNING: Could not recover jumptable at 0x0030c90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2 * 4 + 0x41d354))();
    return uVar1;
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 0030c966 firmware_entry_0030c966 success=true

void firmware_entry_0030c966(void)

{
  int in_P1;
  
  *(undefined2 *)(in_P1 + 0x24) = 100;
  *(undefined2 *)(in_P1 + 0x26) = 100;
  *(undefined2 *)(in_P1 + 0x28) = 100;
  *(undefined2 *)(in_P1 + 0x2a) = 100;
  *(undefined2 *)(in_P1 + 0x2c) = 100;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030c98c firmware_entry_0030c98c success=true

undefined4 firmware_entry_0030c98c(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 0030c9a0 firmware_entry_0030c9a0 success=true

undefined4 firmware_entry_0030c9a0(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 0030c9b4 firmware_entry_0030c9b4 success=true

undefined4 firmware_entry_0030c9b4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int in_P1;
  undefined4 in_stack_00000000;
  
  (**(code **)(*(int *)(in_P1 + 0x10) + 0x84))
            (param_1 + *(short *)(*(int *)(in_P1 + 0x10) + 0x80),param_2,&stack0x00000004,
             &stack0x00000000,param_3);
                    /* WARNING: Treating indirect jump as return */
  return in_stack_00000000;
}


END_FUNCTION
FUNCTION 0030c9ec firmware_entry_0030c9ec success=true

undefined4 firmware_entry_0030c9ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int in_P1;
  undefined4 in_stack_00000004;
  
  (**(code **)(*(int *)(in_P1 + 0x10) + 0x84))
            (param_1 + *(short *)(*(int *)(in_P1 + 0x10) + 0x80),param_2,&stack0x00000004,
             &stack0x00000000,param_3);
                    /* WARNING: Treating indirect jump as return */
  return in_stack_00000004;
}


END_FUNCTION
FUNCTION 0030ca24 firmware_entry_0030ca24 success=true

undefined4 firmware_entry_0030ca24(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0xffffffff;
}


END_FUNCTION
FUNCTION 0030ca34 firmware_entry_0030ca34 success=true

void firmware_entry_0030ca34(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = (**(code **)(iVar2 + 0x6c))(param_1 + *(short *)(iVar2 + 0x68));
  (**(code **)(iVar2 + 0x7c))(param_1 + *(short *)(iVar2 + 0x78),param_2,iVar1 == 0,param_3);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030ca78 firmware_entry_0030ca78 success=true

void firmware_entry_0030ca78
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int in_P1;
  
  (**(code **)(*(int *)(in_P1 + 0x10) + 0xa4))
            (param_1 + *(short *)(*(int *)(in_P1 + 0x10) + 0xa0),param_2,param_3,param_4,param_5);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030caa0 firmware_entry_0030caa0 success=true

void firmware_entry_0030caa0
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int in_P1;
  
  (**(code **)(*(int *)(in_P1 + 0x10) + 0xa4))
            (param_1 + *(short *)(*(int *)(in_P1 + 0x10) + 0xa0),param_2,param_3,param_4,param_5);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030cac8 firmware_entry_0030cac8 success=true

void firmware_entry_0030cac8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_P1;
  
  (**(code **)(*(int *)(in_P1 + 0x10) + 0x8c))
            (param_1 + *(short *)(*(int *)(in_P1 + 0x10) + 0x88),param_2,param_3,param_4);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030cae8 firmware_entry_0030cae8 success=true

void firmware_entry_0030cae8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_P1;
  
  (**(code **)(*(int *)(in_P1 + 0x10) + 0x8c))
            (param_1 + *(short *)(*(int *)(in_P1 + 0x10) + 0x88),param_2,param_3,param_4);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030cb08 firmware_entry_0030cb08 success=true

undefined4 firmware_entry_0030cb08(void)

{
  undefined4 uVar1;
  int in_stack_0000000c;
  
  uVar1 = 1;
  if (in_stack_0000000c != 0) {
    uVar1 = 10;
  }
                    /* WARNING: Treating indirect jump as return */
  return uVar1;
}


END_FUNCTION
FUNCTION 0030cb20 firmware_entry_0030cb20 success=true

void firmware_entry_0030cb20(void)

{
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030cb2c firmware_entry_0030cb2c success=true

undefined4 firmware_entry_0030cb2c(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 0030cb40 firmware_entry_0030cb40 success=true

undefined4 firmware_entry_0030cb40(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
FUNCTION 0030cb50 firmware_entry_0030cb50 success=true

void firmware_entry_0030cb50(void)

{
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030cb5c firmware_entry_0030cb5c success=true

undefined4 firmware_entry_0030cb5c(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 0030cb70 firmware_entry_0030cb70 success=true

void firmware_entry_0030cb70(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = (**(code **)(iVar2 + 0x6c))(param_1 + *(short *)(iVar2 + 0x68));
  (**(code **)(iVar2 + 0x7c))(param_1 + *(short *)(iVar2 + 0x78),param_2,iVar1 == 0,param_3);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030cbb4 firmware_entry_0030cbb4 success=true

undefined4 firmware_entry_0030cbb4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Treating indirect jump as return */
  return param_3;
}


END_FUNCTION
FUNCTION 0030cbc8 firmware_entry_0030cbc8 success=true

undefined4 firmware_entry_0030cbc8(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 0030cbdc firmware_entry_0030cbdc success=true

void firmware_entry_0030cbdc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_P1;
  
  (**(code **)(*(int *)(in_P1 + 0x10) + 0x7c))
            (param_1 + *(short *)(*(int *)(in_P1 + 0x10) + 0x78),param_2,param_3,param_4);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030cbfc firmware_entry_0030cbfc success=true

void firmware_entry_0030cbfc(void)

{
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030cc08 firmware_entry_0030cc08 success=true

void firmware_entry_0030cc08(void)

{
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030cc14 firmware_entry_0030cc14 success=true

void firmware_entry_0030cc14(int param_1,uint param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (param_1 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = param_1 + 0x14;
  *(undefined4 *)(param_1 + 0x10) = 0x401040;
  if (iVar1 != 0) {
    FUN_0033e2b8(iVar1);
    FUN_0033e2fc(iVar1,2);
  }
  if ((param_2 & 1) != 1) {
                    /* WARNING: Could not recover jumptable at 0x0030cc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_003259f8(param_1);
                    /* WARNING: Could not recover jumptable at 0x0030cc6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
FUNCTION 0030cc7a firmware_entry_0030cc7a success=true

void firmware_entry_0030cc7a(undefined4 param_1)

{
  FUN_00324010(param_1,0xd338);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030cc96 firmware_entry_0030cc96 success=true

void firmware_entry_0030cc96
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool in_CCflag;
  
  if (in_CCflag) {
    FUN_00324010(param_2,0x41d344,param_4);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_00324010(param_2,0x41d34c,param_4);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030ccd4 firmware_entry_0030ccd4 success=true

void firmware_entry_0030ccd4(void)

{
  FUN_00301798();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
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
FUNCTION 0030ce2c FUN_0030ce2c success=true

void FUN_0030ce2c(int param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x7c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x78),0xd,
             (int)*(short *)(param_1 + 0x3e),0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030ce5c FUN_0030ce5c success=true

void FUN_0030ce5c(int param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030ce70 firmware_entry_0030ce70 success=true

undefined4 firmware_entry_0030ce70(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
FUNCTION 0030ce80 firmware_entry_0030ce80 success=true

undefined4 firmware_entry_0030ce80(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 0030ce94 firmware_entry_0030ce94 success=true

undefined4 firmware_entry_0030ce94(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0x11;
}


END_FUNCTION
FUNCTION 0030cea4 firmware_entry_0030cea4 success=true

undefined4 firmware_entry_0030cea4(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
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
FUNCTION 0030ceee firmware_entry_0030ceee success=true

void firmware_entry_0030ceee(void)

{
  int unaff_FP;
  
                    /* WARNING: Could not recover jumptable at 0x0030cef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))(10);
  return;
}


END_FUNCTION
FUNCTION 0030cef8 firmware_entry_0030cef8 success=true

void firmware_entry_0030cef8(void)

{
  int unaff_FP;
  
                    /* WARNING: Could not recover jumptable at 0x0030cf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))(10);
  return;
}


END_FUNCTION
FUNCTION 0030cf08 firmware_entry_0030cf08 success=true

void firmware_entry_0030cf08(void)

{
  int unaff_FP;
  
                    /* WARNING: Could not recover jumptable at 0x0030cf14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))(0);
  return;
}


END_FUNCTION
FUNCTION 0030cf16 firmware_entry_0030cf16 success=true

void firmware_entry_0030cf16(void)

{
  int unaff_FP;
  
                    /* WARNING: Could not recover jumptable at 0x0030cf1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))(5);
  return;
}


END_FUNCTION
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
FUNCTION 0030cf4c firmware_entry_0030cf4c success=true

void firmware_entry_0030cf4c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *in_P0;
  int unaff_FP;
  
  *param_3 = 0;
  *in_P0 = 0x13;
                    /* WARNING: Could not recover jumptable at 0x0030cf5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
FUNCTION 0030cf5e firmware_entry_0030cf5e success=true

void firmware_entry_0030cf5e(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *in_P0;
  int unaff_FP;
  
  *param_3 = 0;
  *in_P0 = 10;
                    /* WARNING: Could not recover jumptable at 0x0030cf6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
FUNCTION 0030cf70 firmware_entry_0030cf70 success=true

void firmware_entry_0030cf70(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *in_P0;
  int unaff_FP;
  
  *param_3 = 0;
  *in_P0 = 1;
                    /* WARNING: Could not recover jumptable at 0x0030cf80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
FUNCTION 0030cf82 firmware_entry_0030cf82 success=true

void firmware_entry_0030cf82(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *in_P0;
  int unaff_FP;
  
  *param_3 = 0;
  *in_P0 = 10;
                    /* WARNING: Could not recover jumptable at 0x0030cf92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
FUNCTION 0030cf94 FUN_0030cf94 success=true

int FUN_0030cf94(int param_1,int param_2)

{
  if (param_2 < 0x11) {
                    /* WARNING: Treating indirect jump as return */
    return (int)*(short *)(param_1 + 0x24 + param_2 * 2);
  }
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 0030cfc8 firmware_entry_0030cfc8 success=true

void firmware_entry_0030cfc8(void)

{
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0030cfd4 firmware_entry_0030cfd4 success=true

void firmware_entry_0030cfd4(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar3 = 0x11;
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar2 = 0;
  puVar4 = (undefined2 *)(param_1 + 0x24);
  do {
    iVar3 = iVar3 + -1;
    uVar1 = (**(code **)(*(int *)(param_1 + 0x10) + 0x2c))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x28),iVar2,0);
    *puVar4 = uVar1;
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 != 0);
                    /* WARNING: Could not recover jumptable at 0x0030d016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
