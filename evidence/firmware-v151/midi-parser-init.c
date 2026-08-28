FUNCTION 00369880 FUN_00369880 contains=00369880 success=true

void FUN_00369880(char *param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  *(undefined4 *)(param_1 + 8) = param_2;
  *param_1 = param_3 << 4;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  return;
}


END_FUNCTION
FUNCTION 00369834 FUN_00369834 contains=00369834 success=true

void FUN_00369834(undefined4 *param_1)

{
  *param_1 = 1;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


END_FUNCTION
FUNCTION 0036965c FUN_0036965c contains=0036965c success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_0036965c(undefined4 param_1,int param_2)

{
  if (0 < param_2) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
