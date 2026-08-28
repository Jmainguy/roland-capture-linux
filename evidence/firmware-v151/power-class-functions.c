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
