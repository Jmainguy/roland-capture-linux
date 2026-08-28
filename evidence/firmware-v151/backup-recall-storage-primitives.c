FUNCTION 0031d018 firmware_entry_0031d018 success=true

void firmware_entry_0031d018(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0031cbfc(param_1,param_2,DAT_00419114,param_3);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0031d034 FUN_0031d034 success=true

void FUN_0031d034(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0031cd58(param_1,param_2,DAT_00419114,param_3,param_4,param_5);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 0031d058 firmware_entry_0031d058 success=true

void firmware_entry_0031d058(undefined4 param_1)

{
  FUN_0031ca44(param_1,DAT_00419114);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
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
