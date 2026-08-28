SYMBOL_QUERY FUN_0031fa14
SYMBOL 0031fa14 FUN_0031fa14 Function
XREF 00302f4a firmware_entry_00302f40
FUNCTION 00302f40 firmware_entry_00302f40 success=true

void firmware_entry_00302f40(void)

{
  undefined4 *in_P2;
  int unaff_FP;
  
  in_P2[-1] = 1;
  *in_P2 = 0;
  FUN_0031fa14();
                    /* WARNING: Could not recover jumptable at 0x00302f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_FP + 4))();
  return;
}


END_FUNCTION
XREF 00302fa8 <no-function>
SYMBOL_QUERY firmware_entry_00320574
SYMBOL 00320574 firmware_entry_00320574 Function
XREF Entry Point <no-function>
SYMBOL_QUERY FUN_00320574
