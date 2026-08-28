FUNCTION 00367ae8 FUN_00367ae8 success=true

uint FUN_00367ae8(uint param_1,int param_2)

{
  if (DAT_004487a0 == 0) {
    return 0xffffffff;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      DAT_004487a4 = 0xfffff;
    }
    param_1 = param_1 + DAT_004487a4;
  }
  if (0xfffff < param_1) {
    param_1 = 0xfffff;
  }
  DAT_004487a4 = param_1;
  return param_1;
}


END_FUNCTION
