FUNCTION 00320bd4 firmware_entry_00320bd4 success=true

void firmware_entry_00320bd4(void)

{
  int in_stack_0000000c;
  
  if (in_stack_0000000c == 0) {
    FUN_0031f18c(6,0);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_0031f18c(5,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00320c00 firmware_entry_00320c00 success=true

void firmware_entry_00320c00(undefined4 *param_1,uint param_2)

{
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  param_1[4] = 0x402d08;
  FUN_003259e8(*param_1);
  if ((param_2 & 1) != 1) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_003259f8(param_1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
