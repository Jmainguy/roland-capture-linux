FUNCTION 00367522 firmware_entry_00367522 contains=00367522 success=true

void firmware_entry_00367522(void)

{
  int iVar1;
  undefined4 unaff_R5;
  int unaff_FP;
  
  iVar1 = FUN_00366a4c();
  if (iVar1 == -1) {
    FUN_0032aad8(s_dev_led_extio_error__emuexcpt__0043d838);
  }
  *(undefined4 *)(unaff_FP + 8) = unaff_R5;
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(iVar1,0x14,0);
}


END_FUNCTION
FUNCTION 0036879a firmware_entry_0036879a contains=0036879a success=true

void firmware_entry_0036879a(void)

{
  int iVar1;
  
  iVar1 = FUN_00366a4c();
  if (iVar1 == -1) {
    FUN_0032aad8(s_dev_sw_extio_error__0043da1c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(iVar1,0,0);
}


END_FUNCTION
FUNCTION 003674c2 firmware_entry_003674c2 contains=003674c2 success=true

void firmware_entry_003674c2(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00366a4c();
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(uVar1,0x14,0);
}


END_FUNCTION
FUNCTION 0036869a firmware_entry_0036869a contains=0036869a success=true

void firmware_entry_0036869a(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00366a4c();
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(uVar1,0x12,0);
}


END_FUNCTION
FUNCTION 00367562 firmware_entry_00367562 contains=00367562 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void firmware_entry_00367562(void)

{
  int *unaff_P4;
  
  FUN_00366730();
  if (*unaff_P4 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_003667b0();
  }
  if (*unaff_P4 != 1) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
FUNCTION 003687b8 firmware_entry_003687b8 contains=003687b8 success=true

/* WARNING: Control flow encountered unimplemented instructions */

void firmware_entry_003687b8(void)

{
  int iVar1;
  int unaff_P4;
  int unaff_FP;
  
  iVar1 = FUN_00366730();
  if (iVar1 != 2) {
    FUN_0032aad8(s_DEVICE_ERROR___s_0043da30,s_IC902_MCP23017___CN902_or_Flat_C_0043da44);
                    /* WARNING: Could not recover jumptable at 0x00368922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_FP + 4))();
    return;
  }
  if (0 < *(int *)(unaff_P4 + 8)) {
    if (*(int *)(unaff_P4 + 8) != 1) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* WARNING: Subroutine does not return */
  FUN_003667b0();
}


END_FUNCTION
FUNCTION 00368816 firmware_entry_00368816 contains=00368816 success=true

void firmware_entry_00368816(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_R5;
  int iVar3;
  int iVar4;
  int unaff_P4;
  int *unaff_P5;
  int unaff_FP;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00366730();
  FUN_003667ec();
  if (0 < *(int *)(unaff_P4 + 8)) {
    iVar4 = 0;
    iVar3 = 0;
    iVar2 = unaff_P4 + 0xc;
    while( true ) {
      UNRECOVERED_JUMPTABLE = (code *)0x368836;
      iVar5 = -1;
      iVar3 = iVar3 + 1;
      FUN_00368632(0,iVar2,*(undefined4 *)(*unaff_P5 + iVar4));
      iVar2 = iVar2 + 0x10;
      iVar4 = iVar4 + 4;
                    /* WARNING: Could not recover jumptable at 0x0036885e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (*(int *)(unaff_P4 + 8) <= iVar3) break;
      if ((iVar5 != 0) && (iVar5 != 1)) {
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
  }
  iVar2 = FUN_00368f84(unaff_P5[4]);
  *(int *)(unaff_P4 + 0x120) = iVar2;
  if (iVar2 == 0) {
    FUN_0032aad8(s_dev_sw_gpio_error_0043da78);
  }
  iVar2 = unaff_P5[6];
  *(int *)(unaff_P4 + 0x124) = iVar2;
  *(int *)(unaff_P4 + 0x128) = unaff_P5[5];
  if (0 < iVar2) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      uVar1 = *(undefined4 *)(*(int *)(unaff_P4 + 0x128) + iVar3);
      (**(code **)(*(int *)(unaff_P4 + 0x120) + 4))(uVar1);
      iVar3 = iVar3 + 4;
      (**(code **)(*(int *)(unaff_P4 + 0x120) + 0x14))(uVar1);
      iVar4 = iVar2 + *(int *)(unaff_P4 + 8);
      iVar2 = iVar2 + 1;
      FUN_00368632(1,unaff_P4 + 0xc + iVar4 * 0x10,uVar1);
    } while (iVar2 < *(int *)(unaff_P4 + 0x124));
  }
  *(undefined4 *)(unaff_P4 + 0x118) = 4;
  *(undefined4 *)(unaff_P4 + 0x11c) = unaff_R5;
  uVar1 = FUN_003669d4(&LAB_00368658,5,0);
  *(undefined4 *)(unaff_P4 + 0x114) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x003688f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
FUNCTION 003657d0 firmware_entry_003657d0 contains=003657d0 success=true

void firmware_entry_003657d0(void)

{
  FUN_00366730();
                    /* WARNING: Subroutine does not return */
  FUN_003667b0();
}


END_FUNCTION
FUNCTION 003657e8 firmware_entry_003657e8 contains=003657e8 success=true

void firmware_entry_003657e8(void)

{
  undefined4 uVar1;
  int iVar2;
  uint unaff_R4;
  undefined4 *puVar3;
  int unaff_P5;
  int unaff_FP;
  int in_stack_00000038;
  
  FUN_00366730();
  FUN_003667ec();
  puVar3 = *(undefined4 **)(unaff_P5 + 8);
  uVar1 = FUN_0036573c();
  *(undefined4 *)(unaff_P5 + 0x18) = uVar1;
  iVar2 = (*(code *)*puVar3)();
  *(int *)(unaff_P5 + 0xc) = iVar2;
  if ((unaff_R4 == *(ushort *)(unaff_P5 + 0x18)) && (in_stack_00000038 == iVar2)) {
                    /* WARNING: Could not recover jumptable at 0x00365852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_FP + 4))();
    return;
  }
  if (*(code **)(unaff_P5 + 0x1c) != (code *)0x0) {
    (**(code **)(unaff_P5 + 0x1c))((uint)*(ushort *)(unaff_P5 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0036583a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_FP + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00365846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
FUNCTION 003686b0 firmware_entry_003686b0 contains=003686b0 success=true

void firmware_entry_003686b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_R6;
  int unaff_P5;
  int unaff_FP;
  
  iVar1 = FUN_00366730();
  FUN_003667ec();
  if (iVar1 != 2) {
                    /* WARNING: Could not recover jumptable at 0x00368750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_FP + 4))();
    return;
  }
  iVar1 = unaff_P5 + 0xc;
  if (0 < *(int *)(unaff_P5 + 8)) {
    do {
      FUN_003685da(unaff_R6,iVar1,*(undefined2 *)(unaff_FP + 8));
      unaff_R6 = unaff_R6 + 1;
      iVar1 = iVar1 + 0x10;
    } while (unaff_R6 < *(int *)(unaff_P5 + 8));
  }
  if (unaff_R6 < *(int *)(unaff_P5 + 4)) {
    iVar1 = unaff_P5 + 0xc + unaff_R6 * 0x10;
    do {
      uVar2 = (**(code **)(*(int *)(unaff_P5 + 0x120) + 0x14))
                        (*(undefined4 *)
                          (*(int *)(unaff_P5 + 0x128) + (unaff_R6 - *(int *)(unaff_P5 + 8)) * 4));
      FUN_00368596(unaff_R6,iVar1,uVar2);
      unaff_R6 = unaff_R6 + 1;
      iVar1 = iVar1 + 0x10;
    } while (unaff_R6 < *(int *)(unaff_P5 + 4));
  }
                    /* WARNING: Could not recover jumptable at 0x00368744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
