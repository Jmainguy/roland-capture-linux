FUNCTION 00319484 firmware_entry_00319484 contains=00319484 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
        puVar3[0x220] = 0x4001e0;
        *puVar3 = 0x4357f0;
        *(undefined4 **)((int)puVar3 + 0x16) = puVar3;
        FUN_0033eaac(puVar3 + 0xb);
        puVar3[0x220] = 0x402548;
        puVar4 = puVar3;
      }
      uVar2 = 0;
      _DAT_00419018 = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        uVar2 = (**(code **)(puVar4[0x220] + 0xc))
                          ((int)puVar4 + (int)*(short *)(puVar4[0x220] + 8),param_1);
      }
      goto LAB_003194d8;
    }
    if (sVar1 == 2) {
      uVar2 = 0;
      if (_DAT_00419018 != (undefined4 *)0x0) {
        uVar2 = (**(code **)(_DAT_00419018[0x220] + 0xc))
                          ((int)_DAT_00419018 + (int)*(short *)(_DAT_00419018[0x220] + 8),param_1);
      }
      puVar4 = _DAT_00419018;
      if (_DAT_00419018 != (undefined4 *)0x0) {
        _DAT_00419018[0x220] = 0x4001e0;
        FUN_0033e7c4(puVar4 + 0xb,2);
        FUN_003259f8(puVar4);
      }
      _DAT_00419018 = (undefined4 *)0x0;
      goto LAB_003194d8;
    }
  }
  uVar2 = 0;
  if (_DAT_00419018 != (undefined4 *)0x0) {
    uVar2 = (**(code **)(_DAT_00419018[0x220] + 0xc))
                      ((int)_DAT_00419018 + (int)*(short *)(_DAT_00419018[0x220] + 8),param_1);
  }
LAB_003194d8:
                    /* WARNING: Could not recover jumptable at 0x003194e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}


END_FUNCTION
