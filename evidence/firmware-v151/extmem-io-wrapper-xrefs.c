TARGET 003667b0
XREF 00365428 UNCONDITIONAL_CALL <no-function>
XREF 003651f6 UNCONDITIONAL_CALL FUN_003651a0
FUNCTION 003651a0 FUN_003651a0 success=true

void FUN_003651a0(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 & 0xffff) != (DAT_00446f94 & 0xffff)) {
    uVar1 = FUN_00366a4c(DAT_00446f84,3,0);
                    /* WARNING: Subroutine does not return */
    FUN_003667b0(uVar1,0x14,0);
  }
  if (param_1 >> 0x10 == DAT_00446f94 >> 0x10) {
    DAT_00446f94 = param_1;
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  uVar1 = FUN_00366a4c(DAT_00446f84,3,1);
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(uVar1,0x14,0);
}


END_FUNCTION
XREF 00365224 UNCONDITIONAL_CALL FUN_003651a0
XREF 0036753c UNCONDITIONAL_CALL firmware_entry_00367522
FUNCTION 00367522 firmware_entry_00367522 success=true

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
XREF 003675a2 UNCONDITIONAL_CALL firmware_entry_00367562
FUNCTION 00367562 firmware_entry_00367562 success=true

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
XREF 003687ac UNCONDITIONAL_CALL firmware_entry_0036879a
FUNCTION 0036879a firmware_entry_0036879a success=true

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
XREF 003687f8 UNCONDITIONAL_CALL firmware_entry_003687b8
FUNCTION 003687b8 firmware_entry_003687b8 success=true

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
XREF 003657c4 UNCONDITIONAL_CALL <no-function>
XREF 003657dc UNCONDITIONAL_CALL firmware_entry_003657d0
FUNCTION 003657d0 firmware_entry_003657d0 success=true

void firmware_entry_003657d0(void)

{
  FUN_00366730();
                    /* WARNING: Subroutine does not return */
  FUN_003667b0();
}


END_FUNCTION
XREF 003674cc UNCONDITIONAL_CALL firmware_entry_003674c2
FUNCTION 003674c2 firmware_entry_003674c2 success=true

void firmware_entry_003674c2(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00366a4c();
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(uVar1,0x14,0);
}


END_FUNCTION
XREF 003686a4 UNCONDITIONAL_CALL firmware_entry_0036869a
FUNCTION 0036869a firmware_entry_0036869a success=true

void firmware_entry_0036869a(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00366a4c();
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(uVar1,0x12,0);
}


END_FUNCTION
XREF 0031d1bc UNCONDITIONAL_CALL firmware_entry_0031d160
FUNCTION 0031d160 firmware_entry_0031d160 success=true

/* WARNING: Removing unreachable block (ram,0x0031d1a0) */

undefined4 firmware_entry_0031d160(void)

{
  int iVar1;
  
  iVar1 = FUN_00366aa4(s_extmem_00435dd4,2);
  if (iVar1 == -1) {
                    /* WARNING: Treating indirect jump as return */
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(iVar1,0xf0040,0);
}


END_FUNCTION
XREF 0031d126 UNCONDITIONAL_CALL FUN_0031d074
FUNCTION 0031d074 FUN_0031d074 success=true

/* WARNING: Removing unreachable block (ram,0x0031d0b4) */
/* WARNING: Removing unreachable block (ram,0x0031d0fe) */
/* WARNING: Removing unreachable block (ram,0x0031d118) */
/* WARNING: Removing unreachable block (ram,0x0031d11a) */
/* WARNING: Removing unreachable block (ram,0x0031d0dc) */
/* WARNING: Removing unreachable block (ram,0x0031d0e0) */
/* WARNING: Removing unreachable block (ram,0x0031d0ec) */

undefined4 FUN_0031d074(void)

{
  int iVar1;
  
  iVar1 = FUN_00366aa4(s_extmem_00435dd4,1);
  if (iVar1 == -1) {
                    /* WARNING: Treating indirect jump as return */
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(iVar1,0xf0040,0);
}


END_FUNCTION
XREF 0031d2fa UNCONDITIONAL_CALL FUN_0031d27c
FUNCTION 0031d27c FUN_0031d27c success=true

/* WARNING: Removing unreachable block (ram,0x0031d2be) */
/* WARNING: Removing unreachable block (ram,0x0031d2e6) */
/* WARNING: Removing unreachable block (ram,0x0031d2f8) */

undefined4 FUN_0031d27c(void)

{
  int iVar1;
  
  iVar1 = FUN_00366aa4(s_extmem_00435dd4,2);
  if (iVar1 == -1) {
                    /* WARNING: Treating indirect jump as return */
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(iVar1,0xf0040,0);
}


END_FUNCTION
XREF 0031d31c UNCONDITIONAL_CALL FUN_0031d27c
XREF 0031d3ec UNCONDITIONAL_CALL firmware_entry_0031d334
FUNCTION 0031d334 firmware_entry_0031d334 success=true

/* WARNING: Removing unreachable block (ram,0x0031d380) */
/* WARNING: Removing unreachable block (ram,0x0031d3ca) */
/* WARNING: Removing unreachable block (ram,0x0031d3e4) */
/* WARNING: Removing unreachable block (ram,0x0031d3e6) */
/* WARNING: Removing unreachable block (ram,0x0031d3a8) */
/* WARNING: Removing unreachable block (ram,0x0031d3ac) */
/* WARNING: Removing unreachable block (ram,0x0031d3b8) */

undefined4 firmware_entry_0031d334(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00419110 + 0xf0040;
  iVar1 = FUN_00366aa4(s_extmem_00435dd4,1);
  if (iVar1 == -1) {
                    /* WARNING: Treating indirect jump as return */
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(iVar1,iVar2,0);
}


END_FUNCTION
XREF 0031d462 UNCONDITIONAL_CALL firmware_entry_0031d404
FUNCTION 0031d404 firmware_entry_0031d404 success=true

/* WARNING: Removing unreachable block (ram,0x0031d44e) */

undefined4 firmware_entry_0031d404(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00419110;
  iVar2 = FUN_00366aa4(s_extmem_00435dd4,2);
  if (iVar2 == -1) {
                    /* WARNING: Treating indirect jump as return */
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003667b0(iVar2,iVar1 + 0xf0040,0);
}


END_FUNCTION
