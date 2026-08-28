FUNCTION 003191dc firmware_entry_003191dc success=true

undefined4 firmware_entry_003191dc(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
FUNCTION 003191ec firmware_entry_003191ec success=true

undefined4 firmware_entry_003191ec(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
FUNCTION 003191fc firmware_entry_003191fc success=true

undefined4 firmware_entry_003191fc(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
FUNCTION 0031920a firmware_entry_0031920a success=true

void firmware_entry_0031920a(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x888);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x6c) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x6c) + 8),3);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00319254 firmware_entry_00319254 success=true

undefined4 firmware_entry_00319254(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 00319268 firmware_entry_00319268 success=true

undefined4 firmware_entry_00319268(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 0031927c firmware_entry_0031927c success=true

undefined4 firmware_entry_0031927c(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 0;
}


END_FUNCTION
FUNCTION 00319290 firmware_entry_00319290 success=true

void firmware_entry_00319290(void)

{
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 003192ce firmware_entry_003192ce success=true

void firmware_entry_003192ce(int param_1)

{
  FUN_0034e0d4(*(undefined4 *)(param_1 + 0x28));
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 003192e4 firmware_entry_003192e4 success=true

void firmware_entry_003192e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x884) = 0;
  func_0x0031dae0(0,0x31929c);
  iVar1 = FUN_00325a76(0x88);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = func_0x00331fa4(iVar1,*(undefined4 *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x888) = uVar2;
  FUN_0032ece8(uVar2,10,0x14);
  iVar1 = *(int *)(param_1 + 0x888);
  *(undefined2 *)(iVar1 + 0x72) = 0x68;
  *(undefined2 *)(iVar1 + 0x70) = 8;
  func_0x00331dde(iVar1);
  uRam00440e10 = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x888) + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x88c) = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00319368 firmware_entry_00319368 success=true

void firmware_entry_00319368(int param_1)

{
  int iVar1;
  
  FUN_0034e0d4(*(undefined4 *)(param_1 + 0x28));
  FUN_0034eb60(*(undefined4 *)(param_1 + 0x28),0,10,s_POWER_OFF_0043581c);
  if (*(int *)(param_1 + 0x884) == 0) {
    FUN_0034eb60(*(undefined4 *)(param_1 + 0x28),0,0x1e,s_Saving_Parameters_0043582c);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  iVar1 = *(int *)(param_1 + 0x888);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x6c) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x6c) + 8),3);
  }
  *(undefined4 *)(param_1 + 0x888) = 0;
  FUN_0034eb60(*(undefined4 *)(param_1 + 0x28),0,0x1e,s_Save_Complete_00435840);
  FUN_0034eb60(*(undefined4 *)(param_1 + 0x28),0,0x28,0x4357f8);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00319420 firmware_entry_00319420 success=true

void firmware_entry_00319420(void)

{
  FUN_003585ec();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00319430 firmware_entry_00319430 success=true

void firmware_entry_00319430(int param_1,uint param_2)

{
  if (3 < param_2) {
    if (param_2 == 4) {
      iRam00440e10 = iRam00440e10 + 1;
      func_0x00331df8(*(undefined4 *)(param_1 + 0x888));
      FUN_003585ec();
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    if (param_2 == 5) {
      *(undefined4 *)(param_1 + 0x884) = 1;
      FUN_003585ec();
                    /* WARNING: Treating indirect jump as return */
      return;
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00319484 firmware_entry_00319484 success=true

void firmware_entry_00319484(short *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  sVar1 = *param_1;
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      puVar3 = (undefined4 *)FUN_00325a76(0x890);
      puVar4 = (undefined4 *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        FUN_00325a24(puVar3,0x890);
        puVar3[6] = 0;
        puVar3[0x220] = &DAT_004001e0;
        *puVar3 = s_NO_NAME_004357f0;
        *(undefined4 **)((int)puVar3 + 0x16) = puVar3;
        FUN_0033eaac(puVar3 + 0xb);
        puVar3[0x220] = &DAT_00402548;
        puVar4 = puVar3;
      }
      uVar2 = 0;
      DAT_00419018 = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        uVar2 = (**(code **)(puVar4[0x220] + 0xc))
                          ((int)puVar4 + (int)*(short *)(puVar4[0x220] + 8),param_1);
      }
      goto LAB_003194d8;
    }
    if (sVar1 == 2) {
      uVar2 = 0;
      if (DAT_00419018 != (undefined4 *)0x0) {
        uVar2 = (**(code **)(DAT_00419018[0x220] + 0xc))
                          ((int)DAT_00419018 + (int)*(short *)(DAT_00419018[0x220] + 8),param_1);
      }
      puVar4 = DAT_00419018;
      if (DAT_00419018 != (undefined4 *)0x0) {
        DAT_00419018[0x220] = &DAT_004001e0;
        FUN_0033e7c4(puVar4 + 0xb,2);
        FUN_003259f8(puVar4);
      }
      DAT_00419018 = (undefined4 *)0x0;
      goto LAB_003194d8;
    }
  }
  uVar2 = 0;
  if (DAT_00419018 != (undefined4 *)0x0) {
    uVar2 = (**(code **)(DAT_00419018[0x220] + 0xc))
                      ((int)DAT_00419018 + (int)*(short *)(DAT_00419018[0x220] + 8),param_1);
  }
LAB_003194d8:
                    /* WARNING: Could not recover jumptable at 0x003194e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}


END_FUNCTION
FUNCTION 003195a8 firmware_entry_003195a8 success=true

undefined4 firmware_entry_003195a8(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
FUNCTION 003195b8 firmware_entry_003195b8 success=true

undefined4 firmware_entry_003195b8(void)

{
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
FUNCTION 003195e4 firmware_entry_003195e4 success=true

void firmware_entry_003195e4(void)

{
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 00319640 firmware_entry_00319640 success=true

void firmware_entry_00319640(void)

{
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
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
  func_0x0031da6c(0,0x319740);
  iVar1 = FUN_00325a76(0x88);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = func_0x00331fa4(iVar1,*(undefined4 *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x888) = uVar2;
  FUN_0032ece8(uVar2,10,0x22);
  iVar1 = *(int *)(param_1 + 0x888);
  *(undefined2 *)(iVar1 + 0x72) = 0x68;
  *(undefined2 *)(iVar1 + 0x70) = 8;
  func_0x00331dde(iVar1);
  *(undefined2 *)(*(int *)(param_1 + 0x888) + 0x80) = 1;
  func_0x00331e6c(*(undefined4 *)(param_1 + 0x888),100);
  func_0x00331df8(*(undefined4 *)(param_1 + 0x888),0);
  FUN_0030ebb8(6);
  func_0x0031da6c(1,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 003198f0 firmware_entry_003198f0 success=true

void firmware_entry_003198f0(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (iRam00419020 == 0) {
    iRam00419020 = 1;
    func_0x0030d8f8();
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
