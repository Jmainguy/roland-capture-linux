FUNCTION 0031ef60 firmware_entry_0031ef60 contains=0031ef60 success=true

void firmware_entry_0031ef60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_P3;
  undefined4 *unaff_P4;
  int unaff_FP;
  
  in_P3[0x48] = 1;
  iVar3 = 2;
  do {
    if ((code *)*unaff_P4 != (code *)0x0) {
      (*(code *)*unaff_P4)(0,0,0);
    }
    iVar3 = iVar3 + -1;
    unaff_P4 = unaff_P4 + 1;
  } while (iVar3 != 0);
  if (*in_P3 != 0) {
    *(undefined4 *)(unaff_FP + -0x20) = DAT_0041934c;
    *(undefined4 *)(unaff_FP + -0x1c) = DAT_00419350;
    *(undefined4 *)(unaff_FP + -0x18) = DAT_00419354;
    *(undefined4 *)(unaff_FP + -0x14) = DAT_00419358;
    *(undefined4 *)(unaff_FP + -0x10) = DAT_0041935c;
    uVar1 = DAT_00419360;
    *(int **)(unaff_FP + -4) = in_P3 + 0x42;
    uVar2 = DAT_00419364;
    *(int *)(unaff_FP + -0x20) = in_P3[1];
    *(undefined4 *)(unaff_FP + -0xc) = uVar1;
    *(undefined4 *)(unaff_FP + -8) = uVar2;
    *(int *)(unaff_FP + -0x18) = unaff_FP + -0x40;
    *(int **)(unaff_FP + -0x1c) = in_P3 + 2;
    FUN_0031dbd8();
    FUN_ffa00dae(unaff_FP + -0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x0031ef8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
FUNCTION 0031f4ec firmware_entry_0031f4ec contains=0031f4ec success=true

void firmware_entry_0031f4ec(void)

{
  firmware_entry_00320574();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0031f4fc firmware_entry_0031f4fc contains=0031f4fc success=true

void firmware_entry_0031f4fc(void)

{
  FUN_0031fc2c(DAT_00441a0c,&DAT_00441204,&DAT_00441208,DAT_00441a08);
  FUN_ffa00dd4(DAT_00441200);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
