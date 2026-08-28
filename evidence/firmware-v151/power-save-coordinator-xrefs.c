TARGET 0031dae0
XREF 003192fe UNCONDITIONAL_CALL firmware_entry_003192e4
FUNCTION 003192e4 firmware_entry_003192e4 success=true

void firmware_entry_003192e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x884) = 0;
  firmware_entry_0031dae0(0,0x31929c);
  iVar1 = FUN_00325a76(0x88);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = firmware_entry_00331fa4(iVar1,*(undefined4 *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x888) = uVar2;
  FUN_0032ece8(uVar2,10,0x14);
  iVar1 = *(int *)(param_1 + 0x888);
  *(undefined2 *)(iVar1 + 0x72) = 0x68;
  *(undefined2 *)(iVar1 + 0x70) = 8;
  firmware_entry_00331dde(iVar1);
  uRam00440e10 = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x888) + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x88c) = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
XREF Entry Point EXTERNAL <no-function>
TARGET 0031da6c
XREF 00319870 UNCONDITIONAL_CALL firmware_entry_00319808
FUNCTION 00319808 firmware_entry_00319808 success=true

void firmware_entry_00319808(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (cRam0043f90d == '\x01') {
    if (DAT_004094f0 == 2) {
      FUN_0035b288(&DAT_00446db8,2);
    }
    else {
      FUN_0035b288(&DAT_00446db8,1);
    }
  }
  *(undefined2 *)(param_1 + 0x884) = DAT_200200f8;
  *(undefined2 *)(param_1 + 0x886) = DAT_200efffc;
  firmware_entry_0031da6c(0,0x319740);
  iVar1 = FUN_00325a76(0x88);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = firmware_entry_00331fa4(iVar1,*(undefined4 *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x888) = uVar2;
  FUN_0032ece8(uVar2,10,0x22);
  iVar1 = *(int *)(param_1 + 0x888);
  *(undefined2 *)(iVar1 + 0x72) = 0x68;
  *(undefined2 *)(iVar1 + 0x70) = 8;
  firmware_entry_00331dde(iVar1);
  *(undefined2 *)(*(int *)(param_1 + 0x888) + 0x80) = 1;
  firmware_entry_00331e6c(*(undefined4 *)(param_1 + 0x888),100);
  firmware_entry_00331df8(*(undefined4 *)(param_1 + 0x888),0);
  FUN_0030ebb8(6);
  firmware_entry_0031da6c(1,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
XREF 003198de UNCONDITIONAL_CALL firmware_entry_00319808
XREF Entry Point EXTERNAL <no-function>
TARGET 0030d8f8
XREF 00319942 UNCONDITIONAL_CALL firmware_entry_003198f0
FUNCTION 003198f0 firmware_entry_003198f0 success=true

void firmware_entry_003198f0(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (iRam00419020 == 0) {
    iRam00419020 = 1;
    firmware_entry_0030d8f8();
  }
  iVar1 = *(int *)(param_1 + 0x888);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x6c) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x6c) + 8),3);
                    /* WARNING: Could not recover jumptable at 0x00319932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0031993c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


END_FUNCTION
XREF Entry Point EXTERNAL <no-function>
