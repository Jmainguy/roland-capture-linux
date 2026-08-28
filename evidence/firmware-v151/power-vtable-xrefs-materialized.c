TARGET 00402548
XREF 00319584 DATA firmware_entry_00319484
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
TARGET 004357f0
XREF 0031956c DATA firmware_entry_00319484
XREF 00319564 PARAM firmware_entry_00319484
TARGET 0041d47c
XREF 0030cf38 DATA firmware_entry_0030cf22
FUNCTION 0030cf22 firmware_entry_0030cf22 success=true

void firmware_entry_0030cf22(uint param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x0030cf3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_firmware_entry_0030cf4c_0041d47c)[param_2])();
    return;
  }
  *param_3 = 0;
  *param_4 = 0;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
TARGET 0041d380
XREF 0030cd10 DATA firmware_entry_0030cce8
FUNCTION 0030cce8 firmware_entry_0030cce8 success=true

void firmware_entry_0030cce8(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  int iVar4;
  
  switch(param_2) {
  case 5:
    puVar3 = (undefined2 *)(param_1 + 0x24);
    break;
  case 6:
    puVar3 = (undefined2 *)(param_1 + 0x26);
    break;
  case 7:
    puVar3 = (undefined2 *)(param_1 + 0x28);
    break;
  case 8:
    puVar3 = (undefined2 *)(param_1 + 0x2a);
    break;
  case 9:
    puVar3 = (undefined2 *)(param_1 + 0x2c);
    break;
  default:
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  *puVar3 = param_3;
  (**(code **)(*(int *)(param_1 + 0x10) + 0x114))
            (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x110));
  iVar1 = FUN_0033e07e();
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      piVar2 = (int *)FUN_0033e030(param_1 + 0x14,iVar4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),&stack0x00000000);
      }
      iVar1 = iVar1 + -1;
      iVar4 = iVar4 + 1;
    } while (iVar1 != 0);
  }
  (**(code **)(*(int *)(param_1 + 0x10) + 0x10c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x108),param_2,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
TARGET 0043f890
XREF 0030cde4 WRITE <no-function>
XREF 0041c2c0 DATA <no-function>
