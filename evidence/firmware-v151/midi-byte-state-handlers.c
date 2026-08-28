FUNCTION 00369880 FUN_00369880 success=true

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
FUNCTION 0036989c firmware_entry_0036989c success=true

void firmware_entry_0036989c(byte *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xd] = 0xf6;
  param_1[0xe] = 0xff;
  param_1[0xf] = 0xff;
  param_1[0xc] = *param_1 | 5;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
                    /* WARNING: Could not recover jumptable at 0x003698d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 003698d8 firmware_entry_003698d8 success=true

void firmware_entry_003698d8(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


END_FUNCTION
FUNCTION 003698e0 firmware_entry_003698e0 success=true

void firmware_entry_003698e0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 4) = 10;
  return;
}


END_FUNCTION
FUNCTION 003698ec firmware_entry_003698ec success=true

void firmware_entry_003698ec(byte *param_1,byte param_2)

{
  param_1[0xd] = param_2;
  param_1[4] = 7;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = *param_1 | 3;
  return;
}


END_FUNCTION
FUNCTION 00369902 firmware_entry_00369902 success=true

void firmware_entry_00369902(byte *param_1,byte param_2)

{
  param_1[0xf] = 0xff;
  param_1[0xd] = param_2;
  param_1[4] = 9;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = *param_1 | 2;
  return;
}


END_FUNCTION
FUNCTION 0036991c firmware_entry_0036991c success=true

void firmware_entry_0036991c(byte *param_1,byte param_2)

{
  param_1[4] = 5;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xd] = param_2;
  param_1[0xc] = *param_1 | 4;
  return;
}


END_FUNCTION
FUNCTION 00369930 firmware_entry_00369930 success=true

void firmware_entry_00369930(byte *param_1,uint param_2)

{
  param_1[0xd] = (byte)param_2;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = *param_1 | (byte)(param_2 >> 4);
  return;
}


END_FUNCTION
FUNCTION 00369948 firmware_entry_00369948 success=true

void firmware_entry_00369948(byte *param_1,uint param_2)

{
  param_1[0xd] = (byte)param_2;
  param_1[0xf] = 0xff;
  param_1[4] = 3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = *param_1 | (byte)(param_2 >> 4);
  return;
}


END_FUNCTION
FUNCTION 00369968 firmware_entry_00369968 success=true

void firmware_entry_00369968(byte *param_1,byte param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xf] = param_2;
  param_1[0xc] = *param_1 | 2;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
                    /* WARNING: Could not recover jumptable at 0x00369994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369998 firmware_entry_00369998 success=true

void firmware_entry_00369998(byte *param_1,byte param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xe] = param_2;
  param_1[0xf] = 0xff;
  param_1[0xc] = *param_1 | 5;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
                    /* WARNING: Could not recover jumptable at 0x003699cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 003699d0 firmware_entry_003699d0 success=true

void firmware_entry_003699d0(byte *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xd] = 0xf7;
  param_1[0xc] = *param_1 | 5;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
                    /* WARNING: Could not recover jumptable at 0x00369a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369a04 firmware_entry_00369a04 success=true

void firmware_entry_00369a04(byte *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xf] = 0xf7;
  param_1[0xc] = *param_1 | 7;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
                    /* WARNING: Could not recover jumptable at 0x00369a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369a38 firmware_entry_00369a38 success=true

void firmware_entry_00369a38(byte *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xe] = 0xf7;
  param_1[0xf] = 0xff;
  param_1[0xc] = *param_1 | 6;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
                    /* WARNING: Could not recover jumptable at 0x00369a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369a70 firmware_entry_00369a70 success=true

void firmware_entry_00369a70(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 4) = 5;
  return;
}


END_FUNCTION
FUNCTION 00369a7c firmware_entry_00369a7c success=true

void firmware_entry_00369a7c(byte *param_1,byte param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xf] = param_2;
  param_1[0xc] = *param_1 | 3;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
                    /* WARNING: Could not recover jumptable at 0x00369aaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369aac firmware_entry_00369aac success=true

void firmware_entry_00369aac(int param_1,undefined1 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined1 *)(param_1 + 0xf) = param_2;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00369ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369ad4 firmware_entry_00369ad4 success=true

void firmware_entry_00369ad4(int param_1,undefined1 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined1 *)(param_1 + 0xf) = param_2;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00369afa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369afc firmware_entry_00369afc success=true

void firmware_entry_00369afc(int param_1,undefined1 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined1 *)(param_1 + 0xf) = param_2;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 4) = 4;
                    /* WARNING: Could not recover jumptable at 0x00369b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369b24 firmware_entry_00369b24 success=true

void firmware_entry_00369b24(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xe) = param_2;
  *(undefined4 *)(param_1 + 4) = 0xb;
  return;
}


END_FUNCTION
FUNCTION 00369b30 firmware_entry_00369b30 success=true

void firmware_entry_00369b30(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xe) = param_2;
  *(undefined4 *)(param_1 + 4) = 6;
  return;
}


END_FUNCTION
FUNCTION 00369b3c firmware_entry_00369b3c success=true

void firmware_entry_00369b3c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xe) = param_2;
  *(undefined4 *)(param_1 + 4) = 8;
  return;
}


END_FUNCTION
FUNCTION 00369b48 firmware_entry_00369b48 success=true

void firmware_entry_00369b48(int param_1,undefined1 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined1 *)(param_1 + 0xe) = param_2;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00369b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369b70 firmware_entry_00369b70 success=true

void firmware_entry_00369b70(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xe) = param_2;
  *(undefined4 *)(param_1 + 4) = 2;
  return;
}


END_FUNCTION
FUNCTION 00369b7c firmware_entry_00369b7c success=true

void firmware_entry_00369b7c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xe) = param_2;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00369ba4 firmware_entry_00369ba4 success=true

void firmware_entry_00369ba4(void)

{
  return;
}


END_FUNCTION
FUNCTION 00369ba6 firmware_entry_00369ba6 success=true

void firmware_entry_00369ba6(byte *param_1,byte param_2)

{
  param_1[0xd] = param_2;
  param_1[0xf] = 0xff;
  param_1[0xe] = 0xff;
  param_1[0xc] = *param_1 | 5;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00369be0 firmware_entry_00369be0 success=true

void firmware_entry_00369be0(byte *param_1,byte param_2)

{
  param_1[0xd] = param_2;
  param_1[4] = 7;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = *param_1 | 3;
  return;
}


END_FUNCTION
FUNCTION 00369bf6 firmware_entry_00369bf6 success=true

void firmware_entry_00369bf6(byte *param_1,byte param_2)

{
  param_1[0xf] = 0xff;
  param_1[0xd] = param_2;
  param_1[4] = 9;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = *param_1 | 2;
  return;
}


END_FUNCTION
FUNCTION 00369c10 firmware_entry_00369c10 success=true

void firmware_entry_00369c10(byte *param_1,byte param_2)

{
  param_1[4] = 5;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xd] = param_2;
  param_1[0xc] = *param_1 | 4;
  return;
}


END_FUNCTION
FUNCTION 00369c24 firmware_entry_00369c24 success=true

void firmware_entry_00369c24(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 4) = 10;
  return;
}


END_FUNCTION
FUNCTION 00369c30 firmware_entry_00369c30 success=true

void firmware_entry_00369c30(byte *param_1,uint param_2)

{
  param_1[0xd] = (byte)param_2;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = *param_1 | (byte)(param_2 >> 4);
  return;
}


END_FUNCTION
FUNCTION 00369c48 firmware_entry_00369c48 success=true

void firmware_entry_00369c48(byte *param_1,uint param_2)

{
  param_1[0xd] = (byte)param_2;
  param_1[0xf] = 0xff;
  param_1[4] = 3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = *param_1 | (byte)(param_2 >> 4);
  return;
}


END_FUNCTION
FUNCTION 00369c66 firmware_entry_00369c66 success=true

void firmware_entry_00369c66(void)

{
  return;
}


END_FUNCTION
FUNCTION 00369c68 firmware_entry_00369c68 success=true

void firmware_entry_00369c68(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0x14) != 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  *(undefined1 *)(param_1 + 0x11) = param_2;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00369c9e firmware_entry_00369c9e success=true

void firmware_entry_00369c9e(byte *param_1,byte param_2)

{
  param_1[0x11] = param_2;
  param_1[0x10] = *param_1 | 0xf;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00369cd0 firmware_entry_00369cd0 success=true

void firmware_entry_00369cd0(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xf] = 0xff;
  param_1[0xe] = 0xf6;
  param_1[0xc] = *param_1 | 6;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369d24 firmware_entry_00369d24 success=true

void firmware_entry_00369d24(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xf] = 0xf6;
  param_1[0xc] = *param_1 | 7;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369d70 firmware_entry_00369d70 success=true

void firmware_entry_00369d70(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xe] = 0xff;
  param_1[0xf] = 0xff;
  param_1[0xc] = *param_1 | 5;
  param_1[0xd] = 0xf6;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369dc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369dc4 firmware_entry_00369dc4 success=true

void firmware_entry_00369dc4(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xe] = (byte)param_2;
  param_1[0xf] = 0xff;
  param_1[0xc] = *param_1 | 6;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369e14 firmware_entry_00369e14 success=true

void firmware_entry_00369e14(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xf] = 0xff;
  param_1[0xe] = 0xff;
  param_1[0xd] = (byte)param_2;
  param_1[0xc] = *param_1 | 5;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369e68 firmware_entry_00369e68 success=true

void firmware_entry_00369e68(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xe] = (byte)param_2;
  param_1[0xf] = 0xff;
  param_1[0xc] = *param_1 | 5;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369eb8 firmware_entry_00369eb8 success=true

void firmware_entry_00369eb8(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xe] = (byte)param_2;
  param_1[0xf] = 0xff;
  param_1[0xc] = *param_1 | 5;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369f08 firmware_entry_00369f08 success=true

void firmware_entry_00369f08(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xf] = (byte)param_2;
  param_1[0xc] = *param_1 | 2;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 00369f4c firmware_entry_00369f4c success=true

void firmware_entry_00369f4c(byte *param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[0xf] = (byte)param_2;
  param_1[0xc] = *param_1 | 2;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00369846(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00369f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
