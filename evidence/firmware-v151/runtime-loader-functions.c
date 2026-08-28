FUNCTION 20001294 FUN_20001294 contains=20001294 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20001294(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  _DAT_ffc01504 = 4;
  _DAT_ffc01530 = _DAT_ffc01530 | 0x76;
  _DAT_ffc01540 = _DAT_ffc01540 & 0xff89;
  _DAT_ffc03204 = _DAT_ffc03204 & 0xff89;
  iVar2 = 50000;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  _DAT_ffc01508 = 0x20;
  iVar2 = 50000;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)&DAT_ff801f5c;
  _DAT_ff80235c = 0;
  FUN_2000111c(0xe3);
  FUN_2000111c(0xa2);
  FUN_2000111c(0xa0);
  FUN_2000111c(200);
  FUN_2000111c(0x24);
  FUN_2000111c(0x81);
  FUN_2000111c(0x2a);
  FUN_2000111c(0x2f);
  FUN_2000111c(0x40);
  FUN_2000111c(0xac);
  FUN_2000111c(0xa4);
  FUN_2000111c(0xaf);
  FUN_2000111c(0xa6);
  puVar1[0x100] = 1;
  FUN_2000111c(0x81);
  FUN_2000111c(0x25);
  iVar2 = 0x100;
  do {
    *puVar1 = 0;
    if (iVar2 == 0) {
      return;
    }
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 200013e4 FUN_200013e4 contains=200013e4 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200013e4(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  ushort *puVar5;
  int iVar6;
  
  pbVar4 = &DAT_ff801f5c + _DAT_ff80132a;
  (&DAT_ff801f5c)[_DAT_ff801328] = *param_3 ^ 0xff;
  bVar3 = param_3[1];
  iVar6 = 0xff;
  puVar5 = (ushort *)&DAT_ff801328;
  do {
    uVar1 = puVar5[2];
    bVar2 = param_3[2];
    *pbVar4 = bVar3 ^ 0xff;
    pbVar4 = &DAT_ff801f5c + puVar5[3];
    bVar3 = param_3[3];
    (&DAT_ff801f5c)[uVar1] = bVar2 ^ 0xff;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    param_3 = param_3 + 2;
    puVar5 = puVar5 + 2;
  } while (iVar6 != 0);
  *pbVar4 = bVar3 ^ 0xff;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 20001450 FUN_20001450 contains=20001450 success=true

void FUN_20001450(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar4;
  
  uVar4 = 0;
  puVar3 = &DAT_ff801f5c;
  do {
    FUN_2000111c(uVar4 & 0xf | 0xb0);
    FUN_2000111c(0x10);
    FUN_2000111c();
    iVar1 = 0x10;
    iVar2 = 0;
    do {
      (*(code *)&SUB_ffa08000)(puVar3,iVar2);
      iVar1 = iVar1 + -1;
      iVar2 = iVar2 + 8;
      puVar3 = puVar3 + 8;
    } while (iVar1 != 0);
    FUN_200011da(0,0x80,1);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 8);
                    /* WARNING: Could not recover jumptable at 0x200014ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
FUNCTION 200014cc FUN_200014cc contains=200014cc success=true

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_200014cc(void)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


END_FUNCTION
FUNCTION 20001844 FUN_20001844 contains=20001844 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_20001844(undefined1 *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  
  uVar1 = 2;
  if ((param_4 != 0) && (uVar1 = 2, param_4 == 1)) {
    uVar1 = 0;
  }
  do {
    iVar7 = -1;
    uVar3 = param_2;
    do {
      if ((int)param_3 < 1) {
                    /* WARNING: Treating indirect jump as return */
        return 1;
      }
      uVar2 = uVar1;
      if (((((uint)param_1 & 1) == 1) || ((uVar3 & 1) == 1)) || (param_3 == 1)) {
        csync();
        csync();
        csync();
        idle();
        bVar6 = (uVar3 & 1) != 1;
        puVar5 = &DAT_ff802366;
        if (bVar6) {
          puVar5 = param_1;
        }
        DAT_ff802364 = *puVar5;
        puVar5 = &DAT_ff802367;
        if (!bVar6) {
          puVar5 = param_1;
        }
        DAT_ff802365 = *puVar5;
        _DAT_ffc00f44 = &DAT_ff800000;
        _DAT_ffc00f50 = 1;
        _DAT_ffc00f54 = 0;
        csync();
        csync();
        csync();
        idle();
        if (uVar1 != 0) {
          uVar2 = 1;
        }
        param_2 = uVar3 + 1;
        param_3 = param_3 - 1;
        _DAT_ffc00f04 = uVar3 & 0xfffffffe;
      }
      else {
        uVar4 = param_3 & 0xfffffffe;
        _DAT_ffc00f50 = (undefined2)(param_3 >> 1);
        _DAT_ffc00f54 = (undefined2)uVar1;
        csync();
        csync();
        csync();
        idle();
        param_2 = uVar3 + uVar4;
        param_3 = param_3 - uVar4;
        _DAT_ffc00f04 = uVar3;
        _DAT_ffc00f44 = param_1;
        if (uVar1 != 0) {
          uVar2 = uVar4;
        }
      }
      _DAT_ffc00f48 = 5;
      _DAT_ffc00f14 = 2;
      _DAT_ffc00f28 = 1;
      _DAT_ffc00f08 = 0x87;
      _DAT_ffc00124 = 0xffffffff;
      param_1 = param_1 + uVar2;
      _DAT_ffc00f10 = _DAT_ffc00f50;
    } while ((iVar7 != 0) && (iVar7 = iVar7 + -1, uVar3 = param_2, iVar7 != 0));
  } while( true );
}


END_FUNCTION
FUNCTION 200022a8 FUN_200022a8 contains=200022a8 success=true

void FUN_200022a8(void)

{
  FUN_20001f74();
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
FUNCTION 20002338 FUN_20002338 contains=20002338 success=true

/* WARNING: Control flow encountered unimplemented instructions */

uint FUN_20002338(uint param_1,uint param_2)

{
  if (param_2 <= param_1 >> 1) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  if (param_2 <= param_1) {
    param_1 = param_1 - param_2;
  }
  return param_1;
}


END_FUNCTION
