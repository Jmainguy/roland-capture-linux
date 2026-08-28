FUNCTION 2000159c FUN_2000159c contains=200015ca success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2000159c(void)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_28 [32];
  
  _DAT_ffc01730 = _DAT_ffc01730 | 0x2000;
  _DAT_ffc01740 = _DAT_ffc01740 & 0xdfff;
  _DAT_ffc03208 = _DAT_ffc03208 & 0xdfff;
  _DAT_ffc01708 = 0x2000;
  _DAT_ffc00a00 = 0xf;
  uVar6 = FUN_20001294();
  FUN_200013e4((int)((ulonglong)uVar6 >> 0x20),(int)uVar6,0xff801b28);
  FUN_20001450();
  pbVar2 = (byte *)&DAT_200efffc;
  if ((_DAT_ff802360 & 0xf0) == 0x70) {
    pbVar2 = &DAT_000000fe;
    FUN_200022a8(auStack_28,0xff801f28,_DAT_000000fc >> 8,auStack_28,_DAT_000000fe);
    FUN_200014cc(0);
  }
  else {
    FUN_200022a8(auStack_28,0xff801f40,DAT_200200f8 >> 8,DAT_200200f8 >> 8,auStack_28);
    FUN_200014cc(3);
  }
  if ((_DAT_ff802360 & 0xf0) == 0x70) {
    _DAT_ff801014 = 2;
  }
  else if (_DAT_ff802360 == 0) {
    pbVar2 = &DAT_20020000;
    iVar4 = 0xcfffd;
    iVar5 = 0;
    uVar1 = (uint)DAT_20020000;
    do {
      pbVar2 = pbVar2 + 1;
      iVar5 = iVar5 + uVar1;
      uVar1 = (uint)*pbVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pbVar2 = &DAT_200efffe;
    bVar3 = (iVar5 + uVar1 & 0xff) == (uint)DAT_200efffe;
    if (bVar3) {
      pbVar2 = &DAT_200effff;
    }
    if (bVar3 && (iVar5 + uVar1 >> 8 & 0xff) == (uint)DAT_200effff) {
      _DAT_ff801014 = 1;
    }
    else {
      pbVar2 = &DAT_20004000;
      iVar4 = 0x1bffd;
      iVar5 = 0;
      uVar1 = (uint)DAT_20004000;
      do {
        pbVar2 = pbVar2 + 1;
        iVar5 = iVar5 + uVar1;
        uVar1 = (uint)*pbVar2;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      pbVar2 = &DAT_2001fffe;
      bVar3 = (iVar5 + uVar1 & 0xff) == (uint)DAT_2001fffe;
      if (bVar3) {
        pbVar2 = &DAT_2001ffff;
      }
      if (!bVar3 || (iVar5 + uVar1 >> 8 & 0xff) != (uint)DAT_2001ffff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      _DAT_ff801014 = 0;
      _DAT_ff802360 = 0x33;
    }
  }
  else {
    pbVar2 = &DAT_20004000;
    iVar4 = 0x1bffd;
    iVar5 = 0;
    uVar1 = (uint)DAT_20004000;
    do {
      pbVar2 = pbVar2 + 1;
      iVar5 = iVar5 + uVar1;
      uVar1 = (uint)*pbVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pbVar2 = &DAT_2001fffe;
    bVar3 = (iVar5 + uVar1 & 0xff) == (uint)DAT_2001fffe;
    if (bVar3) {
      pbVar2 = &DAT_2001ffff;
    }
    if (!bVar3 || (iVar5 + uVar1 >> 8 & 0xff) != (uint)DAT_2001ffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    _DAT_ff801014 = 0;
  }
  if ((_DAT_ff801014 == 0) || (_DAT_ff801014 == 1)) {
    bVar3 = true;
    pbVar2 = *(byte **)(_DAT_ff801014 * 4 + -0x7fefe8);
  }
  else {
    bVar3 = false;
    if (_DAT_ff801014 != 2) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  if (bVar3) {
    if (0 < (int)((uint)*pbVar2 * 0x1000000 + (uint)pbVar2[1] * 0x10000 + (uint)pbVar2[2] * 0x100 +
                 (uint)pbVar2[3])) {
      (*(code *)&SUB_ffa0811c)(pbVar2 + 4);
                    /* WARNING: Could not recover jumptable at 0x2000171c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar5 = 2000;
  do {
    iVar4 = 400000;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if ((iVar5 == 0) || (iVar5 = iVar5 + -1, iVar5 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x200016e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  } while( true );
}


END_FUNCTION
FUNCTION 2000159c FUN_2000159c contains=20001690 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2000159c(void)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_28 [32];
  
  _DAT_ffc01730 = _DAT_ffc01730 | 0x2000;
  _DAT_ffc01740 = _DAT_ffc01740 & 0xdfff;
  _DAT_ffc03208 = _DAT_ffc03208 & 0xdfff;
  _DAT_ffc01708 = 0x2000;
  _DAT_ffc00a00 = 0xf;
  uVar6 = FUN_20001294();
  FUN_200013e4((int)((ulonglong)uVar6 >> 0x20),(int)uVar6,0xff801b28);
  FUN_20001450();
  pbVar2 = (byte *)&DAT_200efffc;
  if ((_DAT_ff802360 & 0xf0) == 0x70) {
    pbVar2 = &DAT_000000fe;
    FUN_200022a8(auStack_28,0xff801f28,_DAT_000000fc >> 8,auStack_28,_DAT_000000fe);
    FUN_200014cc(0);
  }
  else {
    FUN_200022a8(auStack_28,0xff801f40,DAT_200200f8 >> 8,DAT_200200f8 >> 8,auStack_28);
    FUN_200014cc(3);
  }
  if ((_DAT_ff802360 & 0xf0) == 0x70) {
    _DAT_ff801014 = 2;
  }
  else if (_DAT_ff802360 == 0) {
    pbVar2 = &DAT_20020000;
    iVar4 = 0xcfffd;
    iVar5 = 0;
    uVar1 = (uint)DAT_20020000;
    do {
      pbVar2 = pbVar2 + 1;
      iVar5 = iVar5 + uVar1;
      uVar1 = (uint)*pbVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pbVar2 = &DAT_200efffe;
    bVar3 = (iVar5 + uVar1 & 0xff) == (uint)DAT_200efffe;
    if (bVar3) {
      pbVar2 = &DAT_200effff;
    }
    if (bVar3 && (iVar5 + uVar1 >> 8 & 0xff) == (uint)DAT_200effff) {
      _DAT_ff801014 = 1;
    }
    else {
      pbVar2 = &DAT_20004000;
      iVar4 = 0x1bffd;
      iVar5 = 0;
      uVar1 = (uint)DAT_20004000;
      do {
        pbVar2 = pbVar2 + 1;
        iVar5 = iVar5 + uVar1;
        uVar1 = (uint)*pbVar2;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      pbVar2 = &DAT_2001fffe;
      bVar3 = (iVar5 + uVar1 & 0xff) == (uint)DAT_2001fffe;
      if (bVar3) {
        pbVar2 = &DAT_2001ffff;
      }
      if (!bVar3 || (iVar5 + uVar1 >> 8 & 0xff) != (uint)DAT_2001ffff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      _DAT_ff801014 = 0;
      _DAT_ff802360 = 0x33;
    }
  }
  else {
    pbVar2 = &DAT_20004000;
    iVar4 = 0x1bffd;
    iVar5 = 0;
    uVar1 = (uint)DAT_20004000;
    do {
      pbVar2 = pbVar2 + 1;
      iVar5 = iVar5 + uVar1;
      uVar1 = (uint)*pbVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pbVar2 = &DAT_2001fffe;
    bVar3 = (iVar5 + uVar1 & 0xff) == (uint)DAT_2001fffe;
    if (bVar3) {
      pbVar2 = &DAT_2001ffff;
    }
    if (!bVar3 || (iVar5 + uVar1 >> 8 & 0xff) != (uint)DAT_2001ffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    _DAT_ff801014 = 0;
  }
  if ((_DAT_ff801014 == 0) || (_DAT_ff801014 == 1)) {
    bVar3 = true;
    pbVar2 = *(byte **)(_DAT_ff801014 * 4 + -0x7fefe8);
  }
  else {
    bVar3 = false;
    if (_DAT_ff801014 != 2) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  if (bVar3) {
    if (0 < (int)((uint)*pbVar2 * 0x1000000 + (uint)pbVar2[1] * 0x10000 + (uint)pbVar2[2] * 0x100 +
                 (uint)pbVar2[3])) {
      (*(code *)&SUB_ffa0811c)(pbVar2 + 4);
                    /* WARNING: Could not recover jumptable at 0x2000171c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar5 = 2000;
  do {
    iVar4 = 400000;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if ((iVar5 == 0) || (iVar5 = iVar5 + -1, iVar5 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x200016e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  } while( true );
}


END_FUNCTION
FUNCTION 2000159c FUN_2000159c contains=20001734 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2000159c(void)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_28 [32];
  
  _DAT_ffc01730 = _DAT_ffc01730 | 0x2000;
  _DAT_ffc01740 = _DAT_ffc01740 & 0xdfff;
  _DAT_ffc03208 = _DAT_ffc03208 & 0xdfff;
  _DAT_ffc01708 = 0x2000;
  _DAT_ffc00a00 = 0xf;
  uVar6 = FUN_20001294();
  FUN_200013e4((int)((ulonglong)uVar6 >> 0x20),(int)uVar6,0xff801b28);
  FUN_20001450();
  pbVar2 = (byte *)&DAT_200efffc;
  if ((_DAT_ff802360 & 0xf0) == 0x70) {
    pbVar2 = &DAT_000000fe;
    FUN_200022a8(auStack_28,0xff801f28,_DAT_000000fc >> 8,auStack_28,_DAT_000000fe);
    FUN_200014cc(0);
  }
  else {
    FUN_200022a8(auStack_28,0xff801f40,DAT_200200f8 >> 8,DAT_200200f8 >> 8,auStack_28);
    FUN_200014cc(3);
  }
  if ((_DAT_ff802360 & 0xf0) == 0x70) {
    _DAT_ff801014 = 2;
  }
  else if (_DAT_ff802360 == 0) {
    pbVar2 = &DAT_20020000;
    iVar4 = 0xcfffd;
    iVar5 = 0;
    uVar1 = (uint)DAT_20020000;
    do {
      pbVar2 = pbVar2 + 1;
      iVar5 = iVar5 + uVar1;
      uVar1 = (uint)*pbVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pbVar2 = &DAT_200efffe;
    bVar3 = (iVar5 + uVar1 & 0xff) == (uint)DAT_200efffe;
    if (bVar3) {
      pbVar2 = &DAT_200effff;
    }
    if (bVar3 && (iVar5 + uVar1 >> 8 & 0xff) == (uint)DAT_200effff) {
      _DAT_ff801014 = 1;
    }
    else {
      pbVar2 = &DAT_20004000;
      iVar4 = 0x1bffd;
      iVar5 = 0;
      uVar1 = (uint)DAT_20004000;
      do {
        pbVar2 = pbVar2 + 1;
        iVar5 = iVar5 + uVar1;
        uVar1 = (uint)*pbVar2;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      pbVar2 = &DAT_2001fffe;
      bVar3 = (iVar5 + uVar1 & 0xff) == (uint)DAT_2001fffe;
      if (bVar3) {
        pbVar2 = &DAT_2001ffff;
      }
      if (!bVar3 || (iVar5 + uVar1 >> 8 & 0xff) != (uint)DAT_2001ffff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      _DAT_ff801014 = 0;
      _DAT_ff802360 = 0x33;
    }
  }
  else {
    pbVar2 = &DAT_20004000;
    iVar4 = 0x1bffd;
    iVar5 = 0;
    uVar1 = (uint)DAT_20004000;
    do {
      pbVar2 = pbVar2 + 1;
      iVar5 = iVar5 + uVar1;
      uVar1 = (uint)*pbVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pbVar2 = &DAT_2001fffe;
    bVar3 = (iVar5 + uVar1 & 0xff) == (uint)DAT_2001fffe;
    if (bVar3) {
      pbVar2 = &DAT_2001ffff;
    }
    if (!bVar3 || (iVar5 + uVar1 >> 8 & 0xff) != (uint)DAT_2001ffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    _DAT_ff801014 = 0;
  }
  if ((_DAT_ff801014 == 0) || (_DAT_ff801014 == 1)) {
    bVar3 = true;
    pbVar2 = *(byte **)(_DAT_ff801014 * 4 + -0x7fefe8);
  }
  else {
    bVar3 = false;
    if (_DAT_ff801014 != 2) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  if (bVar3) {
    if (0 < (int)((uint)*pbVar2 * 0x1000000 + (uint)pbVar2[1] * 0x10000 + (uint)pbVar2[2] * 0x100 +
                 (uint)pbVar2[3])) {
      (*(code *)&SUB_ffa0811c)(pbVar2 + 4);
                    /* WARNING: Could not recover jumptable at 0x2000171c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar5 = 2000;
  do {
    iVar4 = 400000;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if ((iVar5 == 0) || (iVar5 = iVar5 + -1, iVar5 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x200016e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  } while( true );
}


END_FUNCTION
FUNCTION 2000159c FUN_2000159c contains=20001790 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2000159c(void)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_28 [32];
  
  _DAT_ffc01730 = _DAT_ffc01730 | 0x2000;
  _DAT_ffc01740 = _DAT_ffc01740 & 0xdfff;
  _DAT_ffc03208 = _DAT_ffc03208 & 0xdfff;
  _DAT_ffc01708 = 0x2000;
  _DAT_ffc00a00 = 0xf;
  uVar6 = FUN_20001294();
  FUN_200013e4((int)((ulonglong)uVar6 >> 0x20),(int)uVar6,0xff801b28);
  FUN_20001450();
  pbVar2 = (byte *)&DAT_200efffc;
  if ((_DAT_ff802360 & 0xf0) == 0x70) {
    pbVar2 = &DAT_000000fe;
    FUN_200022a8(auStack_28,0xff801f28,_DAT_000000fc >> 8,auStack_28,_DAT_000000fe);
    FUN_200014cc(0);
  }
  else {
    FUN_200022a8(auStack_28,0xff801f40,DAT_200200f8 >> 8,DAT_200200f8 >> 8,auStack_28);
    FUN_200014cc(3);
  }
  if ((_DAT_ff802360 & 0xf0) == 0x70) {
    _DAT_ff801014 = 2;
  }
  else if (_DAT_ff802360 == 0) {
    pbVar2 = &DAT_20020000;
    iVar4 = 0xcfffd;
    iVar5 = 0;
    uVar1 = (uint)DAT_20020000;
    do {
      pbVar2 = pbVar2 + 1;
      iVar5 = iVar5 + uVar1;
      uVar1 = (uint)*pbVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pbVar2 = &DAT_200efffe;
    bVar3 = (iVar5 + uVar1 & 0xff) == (uint)DAT_200efffe;
    if (bVar3) {
      pbVar2 = &DAT_200effff;
    }
    if (bVar3 && (iVar5 + uVar1 >> 8 & 0xff) == (uint)DAT_200effff) {
      _DAT_ff801014 = 1;
    }
    else {
      pbVar2 = &DAT_20004000;
      iVar4 = 0x1bffd;
      iVar5 = 0;
      uVar1 = (uint)DAT_20004000;
      do {
        pbVar2 = pbVar2 + 1;
        iVar5 = iVar5 + uVar1;
        uVar1 = (uint)*pbVar2;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      pbVar2 = &DAT_2001fffe;
      bVar3 = (iVar5 + uVar1 & 0xff) == (uint)DAT_2001fffe;
      if (bVar3) {
        pbVar2 = &DAT_2001ffff;
      }
      if (!bVar3 || (iVar5 + uVar1 >> 8 & 0xff) != (uint)DAT_2001ffff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      _DAT_ff801014 = 0;
      _DAT_ff802360 = 0x33;
    }
  }
  else {
    pbVar2 = &DAT_20004000;
    iVar4 = 0x1bffd;
    iVar5 = 0;
    uVar1 = (uint)DAT_20004000;
    do {
      pbVar2 = pbVar2 + 1;
      iVar5 = iVar5 + uVar1;
      uVar1 = (uint)*pbVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pbVar2 = &DAT_2001fffe;
    bVar3 = (iVar5 + uVar1 & 0xff) == (uint)DAT_2001fffe;
    if (bVar3) {
      pbVar2 = &DAT_2001ffff;
    }
    if (!bVar3 || (iVar5 + uVar1 >> 8 & 0xff) != (uint)DAT_2001ffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    _DAT_ff801014 = 0;
  }
  if ((_DAT_ff801014 == 0) || (_DAT_ff801014 == 1)) {
    bVar3 = true;
    pbVar2 = *(byte **)(_DAT_ff801014 * 4 + -0x7fefe8);
  }
  else {
    bVar3 = false;
    if (_DAT_ff801014 != 2) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  if (bVar3) {
    if (0 < (int)((uint)*pbVar2 * 0x1000000 + (uint)pbVar2[1] * 0x10000 + (uint)pbVar2[2] * 0x100 +
                 (uint)pbVar2[3])) {
      (*(code *)&SUB_ffa0811c)(pbVar2 + 4);
                    /* WARNING: Could not recover jumptable at 0x2000171c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar5 = 2000;
  do {
    iVar4 = 400000;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if ((iVar5 == 0) || (iVar5 = iVar5 + -1, iVar5 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x200016e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  } while( true );
}


END_FUNCTION
FUNCTION 2000159c FUN_2000159c contains=200017e4 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2000159c(void)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_28 [32];
  
  _DAT_ffc01730 = _DAT_ffc01730 | 0x2000;
  _DAT_ffc01740 = _DAT_ffc01740 & 0xdfff;
  _DAT_ffc03208 = _DAT_ffc03208 & 0xdfff;
  _DAT_ffc01708 = 0x2000;
  _DAT_ffc00a00 = 0xf;
  uVar6 = FUN_20001294();
  FUN_200013e4((int)((ulonglong)uVar6 >> 0x20),(int)uVar6,0xff801b28);
  FUN_20001450();
  pbVar2 = (byte *)&DAT_200efffc;
  if ((_DAT_ff802360 & 0xf0) == 0x70) {
    pbVar2 = &DAT_000000fe;
    FUN_200022a8(auStack_28,0xff801f28,_DAT_000000fc >> 8,auStack_28,_DAT_000000fe);
    FUN_200014cc(0);
  }
  else {
    FUN_200022a8(auStack_28,0xff801f40,DAT_200200f8 >> 8,DAT_200200f8 >> 8,auStack_28);
    FUN_200014cc(3);
  }
  if ((_DAT_ff802360 & 0xf0) == 0x70) {
    _DAT_ff801014 = 2;
  }
  else if (_DAT_ff802360 == 0) {
    pbVar2 = &DAT_20020000;
    iVar4 = 0xcfffd;
    iVar5 = 0;
    uVar1 = (uint)DAT_20020000;
    do {
      pbVar2 = pbVar2 + 1;
      iVar5 = iVar5 + uVar1;
      uVar1 = (uint)*pbVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pbVar2 = &DAT_200efffe;
    bVar3 = (iVar5 + uVar1 & 0xff) == (uint)DAT_200efffe;
    if (bVar3) {
      pbVar2 = &DAT_200effff;
    }
    if (bVar3 && (iVar5 + uVar1 >> 8 & 0xff) == (uint)DAT_200effff) {
      _DAT_ff801014 = 1;
    }
    else {
      pbVar2 = &DAT_20004000;
      iVar4 = 0x1bffd;
      iVar5 = 0;
      uVar1 = (uint)DAT_20004000;
      do {
        pbVar2 = pbVar2 + 1;
        iVar5 = iVar5 + uVar1;
        uVar1 = (uint)*pbVar2;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      pbVar2 = &DAT_2001fffe;
      bVar3 = (iVar5 + uVar1 & 0xff) == (uint)DAT_2001fffe;
      if (bVar3) {
        pbVar2 = &DAT_2001ffff;
      }
      if (!bVar3 || (iVar5 + uVar1 >> 8 & 0xff) != (uint)DAT_2001ffff) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      _DAT_ff801014 = 0;
      _DAT_ff802360 = 0x33;
    }
  }
  else {
    pbVar2 = &DAT_20004000;
    iVar4 = 0x1bffd;
    iVar5 = 0;
    uVar1 = (uint)DAT_20004000;
    do {
      pbVar2 = pbVar2 + 1;
      iVar5 = iVar5 + uVar1;
      uVar1 = (uint)*pbVar2;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pbVar2 = &DAT_2001fffe;
    bVar3 = (iVar5 + uVar1 & 0xff) == (uint)DAT_2001fffe;
    if (bVar3) {
      pbVar2 = &DAT_2001ffff;
    }
    if (!bVar3 || (iVar5 + uVar1 >> 8 & 0xff) != (uint)DAT_2001ffff) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    _DAT_ff801014 = 0;
  }
  if ((_DAT_ff801014 == 0) || (_DAT_ff801014 == 1)) {
    bVar3 = true;
    pbVar2 = *(byte **)(_DAT_ff801014 * 4 + -0x7fefe8);
  }
  else {
    bVar3 = false;
    if (_DAT_ff801014 != 2) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  if (bVar3) {
    if (0 < (int)((uint)*pbVar2 * 0x1000000 + (uint)pbVar2[1] * 0x10000 + (uint)pbVar2[2] * 0x100 +
                 (uint)pbVar2[3])) {
      (*(code *)&SUB_ffa0811c)(pbVar2 + 4);
                    /* WARNING: Could not recover jumptable at 0x2000171c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar5 = 2000;
  do {
    iVar4 = 400000;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if ((iVar5 == 0) || (iVar5 = iVar5 + -1, iVar5 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x200016e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  } while( true );
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
FUNCTION 20001a1c FUN_20001a1c contains=20001d28 success=true

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Removing unreachable block (ram,0x20001c18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_20001a1c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 in_AZflag;
  code *UNRECOVERED_JUMPTABLE;
  int iVar17;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (PTR_DAT_200023a0 == (undefined *)0x0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  csync();
  if ((*(short *)(PTR_DAT_200023a0 + 2) != -1) || (*PTR_DAT_200023a0 != '\0')) {
                    /* WARNING: Treating indirect jump as return */
    return 0xffffffff;
  }
  uVar2 = *(uint *)(PTR_DAT_200023a0 + 4);
  if (uVar2 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  uVar3 = 0;
  puVar11 = (uint *)(PTR_DAT_200023a0 + 8);
LAB_20001a60:
  do {
    bVar16 = uVar2 <= uVar3;
    uVar3 = uVar3 + 1;
    if (bVar16) {
                    /* WARNING: Could not recover jumptable at 0x20001d02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)(0);
      return uVar6;
    }
    puVar14 = puVar11 + 4;
    uVar4 = puVar11[2];
    if ((uVar4 & 0x3c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x20001cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)(0xffffffff);
      return uVar6;
    }
    if ((uVar4 & 3) != 2) {
                    /* WARNING: Could not recover jumptable at 0x20001ce2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)(0xffffffff);
      return uVar6;
    }
    uVar4 = (uVar4 & 0x1c0) >> 6;
    if (uVar4 == 0) {
      puVar7 = (undefined1 *)*puVar11;
      uVar4 = puVar11[1];
      if (puVar7 < (undefined1 *)0xffa14001 && (undefined1 *)0xff9fffff < puVar7) {
        iVar5 = FUN_20001844(puVar14,puVar7,uVar4,0);
        if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x20001cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (*UNRECOVERED_JUMPTABLE)(0xffffffff);
          return uVar6;
        }
        puVar11 = (uint *)((int)puVar14 + uVar4);
      }
      else {
        puVar11 = puVar14;
        if (0 < (int)uVar4) {
          puVar11 = (uint *)((int)puVar14 + uVar4);
          do {
            *puVar7 = (char)*puVar14;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            puVar7 = puVar7 + 1;
            puVar14 = (uint *)((int)puVar14 + 1);
          } while (uVar4 != 0);
        }
      }
      if (!(bool)in_AZflag) {
        puVar11 = puVar11 + 1;
      }
      puVar11 = (uint *)((uint)puVar11 & 0xfffffffc);
      goto LAB_20001a60;
    }
    if (uVar4 != 1) {
      if (uVar4 != 3) {
                    /* WARNING: Could not recover jumptable at 0x20001b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*UNRECOVERED_JUMPTABLE)(0xffffffff);
        return uVar6;
      }
      puVar7 = (undefined1 *)*puVar11;
      uVar4 = puVar11[1];
      if (puVar7 < (undefined1 *)0xffa14001 && (undefined1 *)0xff9fffff < puVar7) {
        uVar1 = puVar11[3];
        puVar12 = (uint *)((int)puVar14 + uVar4);
        puVar13 = puVar14;
        uVar4 = uVar1;
        puVar8 = &DAT_ff802368;
        if (0x10 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x20001b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (*UNRECOVERED_JUMPTABLE)(0xfffffffe);
          return uVar6;
        }
        for (; puVar15 = puVar14, uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = (char)*puVar13;
          if (uVar4 == 0) break;
          puVar13 = (uint *)((int)puVar13 + 1);
          puVar8 = puVar8 + 1;
        }
        while( true ) {
          UNRECOVERED_JUMPTABLE_00 = (code *)0x20001b24;
          iVar17 = -1;
          puVar8 = puVar7 + uVar1;
          puVar15 = (uint *)((int)puVar15 + uVar1);
          iVar5 = FUN_20001844(&DAT_ff802368,puVar7,uVar1,3);
          if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x20001b7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar6 = (*UNRECOVERED_JUMPTABLE)(0xffffffff);
            return uVar6;
          }
                    /* WARNING: Could not recover jumptable at 0x20001b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          if (puVar12 <= puVar15) break;
          puVar7 = puVar8;
          if ((iVar17 != 0) && (iVar17 != 1)) {
            uVar6 = (*UNRECOVERED_JUMPTABLE_00)();
            return uVar6;
          }
        }
        if ((puVar12 != puVar15) &&
           (iVar5 = FUN_20001844(&DAT_ff802368,puVar8,(int)puVar12 - (int)puVar15,3), iVar5 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x20001b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (*UNRECOVERED_JUMPTABLE)(0xffffffff);
          return uVar6;
        }
      }
      else {
        puVar13 = puVar14;
        if (0 < (int)uVar4) {
          do {
            puVar12 = (uint *)((int)puVar13 + 1);
            *puVar7 = (char)*puVar13;
            puVar13 = puVar12;
            if (puVar12 == (uint *)((int)puVar14 + puVar11[3])) {
              puVar13 = puVar14;
            }
          } while ((uVar4 != 0) && (uVar4 = uVar4 - 1, puVar7 = puVar7 + 1, uVar4 != 0));
        }
      }
      uVar4 = puVar11[3];
      if (!(bool)in_AZflag) {
        uVar4 = puVar11[3] + 4;
      }
      puVar11 = (uint *)((int)puVar14 + (uVar4 & 0xfffffffc));
      goto LAB_20001a60;
    }
    puVar10 = (undefined2 *)*puVar11;
    uVar4 = puVar11[1];
    puVar11 = puVar14;
    if ((undefined2 *)0xffa14000 < puVar10 || puVar10 < (undefined2 *)0xffa00000) {
      if ((int)uVar4 < 1) goto LAB_20001a60;
      if (!(bool)in_AZflag) {
        do {
          *(undefined1 *)puVar10 = 0;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          puVar10 = (undefined2 *)((int)puVar10 + 1);
        } while (uVar4 != 0);
        goto LAB_20001a60;
      }
      puVar9 = puVar10;
      if (uVar4 != 1) {
        if ((int)uVar4 >> 1 != 1) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
        puVar9 = puVar10 + 1;
        *puVar10 = 0;
        if ((uVar4 & 1) != 1) goto LAB_20001a60;
      }
      *(undefined1 *)puVar9 = 0;
      goto LAB_20001a60;
    }
    _DAT_ff802368 = 0x2368;
    iVar5 = FUN_20001844(&DAT_ff802368,puVar10,uVar4,1);
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x20001c52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)(0xffffffff);
      return uVar6;
    }
  } while( true );
}


END_FUNCTION
FUNCTION 20001d38 FUN_20001d38 contains=20001eb4 success=true

int FUN_20001d38(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                int param_7)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  code *UNRECOVERED_JUMPTABLE;
  int iVar9;
  int iVar10;
  code *UNRECOVERED_JUMPTABLE_00;
  char local_14 [10];
  char local_a [2];
  
  if (param_2 == 0) {
    local_14[0] = '0';
    local_14[1] = '\0';
    uVar3 = 0x20;
    if (0 < param_5) {
      pcVar7 = local_14 + 1;
      iVar1 = 1;
      do {
        iVar2 = -1;
        iVar10 = iVar1;
        pcVar6 = pcVar7;
        do {
          pcVar7 = pcVar6 + 1;
          iVar1 = iVar10 + 1;
          if (*pcVar6 == '\0') {
            bVar8 = iVar10 < param_5;
            iVar10 = param_5 - iVar10;
            param_5 = 0;
            if (bVar8) {
              param_5 = iVar10;
            }
            if ((param_6 & 2) == 1) {
              uVar3 = 0x30;
            }
            goto LAB_20001ef2;
          }
        } while ((iVar2 != 0) && (iVar2 = iVar2 + -1, iVar10 = iVar1, pcVar6 = pcVar7, iVar2 != 0));
      } while( true );
    }
LAB_20001ef2:
    iVar1 = 0;
    iVar10 = param_5;
    if (((param_6 & 1) != 1) &&
       ((0 < param_5 && (iVar10 = 0, iVar1 = param_5, param_1 != (int *)0x0)))) {
      puVar4 = (undefined1 *)*param_1;
      do {
        *puVar4 = uVar3;
        *param_1 = (int)(puVar4 + 1);
        if (param_5 == 0) break;
        param_5 = param_5 + -1;
        puVar4 = puVar4 + 1;
      } while (param_5 != 0);
    }
    pcVar7 = local_14;
    do {
      iVar2 = -1;
      pcVar6 = pcVar7;
      do {
        pcVar7 = pcVar6 + 1;
        if (param_1 != (int *)0x0) {
          pcVar5 = (char *)*param_1;
          *pcVar5 = *pcVar6;
          *param_1 = (int)(pcVar5 + 1);
        }
        iVar1 = iVar1 + 1;
        if (*pcVar7 == '\0') {
          if (iVar10 < 1) {
            return iVar1;
          }
          if (param_1 != (int *)0x0) {
            puVar4 = (undefined1 *)*param_1;
            do {
              *puVar4 = uVar3;
              *param_1 = (int)(puVar4 + 1);
              iVar1 = iVar1 + 1;
              if (iVar10 == 0) {
                return iVar1;
              }
              iVar10 = iVar10 + -1;
              puVar4 = puVar4 + 1;
            } while (iVar10 != 0);
                    /* WARNING: Treating indirect jump as return */
            return iVar1;
          }
          do {
            iVar1 = iVar1 + 1;
            if (iVar10 == 0) {
              return iVar1;
            }
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          return iVar1;
        }
      } while ((iVar2 != 0) && (iVar2 = iVar2 + -1, pcVar6 = pcVar7, iVar2 != 0));
    } while( true );
  }
  bVar8 = false;
  if ((param_4 != 0) && ((param_3 == 10 && (param_2 < 0)))) {
    param_2 = -param_2;
    bVar8 = true;
  }
  local_a[1] = 0;
  pcVar7 = local_a + 1;
  if (param_2 != 0) {
    pcVar7 = local_a;
    while( true ) {
      UNRECOVERED_JUMPTABLE_00 = (code *)0x20001d8a;
      iVar10 = -1;
      iVar1 = FUN_20002338(param_2,param_3);
      if (9 < iVar1) {
        iVar1 = param_7 + -0x3a + iVar1;
      }
      pcVar6 = pcVar7 + -1;
      *pcVar7 = (char)iVar1 + '0';
      param_2 = FUN_200022d0(param_2,param_3);
      if (param_2 == 0) break;
                    /* WARNING: Could not recover jumptable at 0x20001dae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar7 = pcVar6;
      if ((iVar10 != 0) && (iVar10 != 1)) {
        iVar1 = (*UNRECOVERED_JUMPTABLE_00)();
        return iVar1;
      }
    }
  }
  iVar1 = 0;
  if (bVar8) {
    if ((param_5 == 0) || ((param_6 & 2) != 1)) {
      pcVar7 = pcVar7 + -1;
      *pcVar7 = '-';
    }
    else {
      if (param_1 != (int *)0x0) {
        puVar4 = (undefined1 *)*param_1;
        *puVar4 = 0x2d;
        *param_1 = (int)(puVar4 + 1);
      }
      param_5 = param_5 + -1;
      iVar1 = 1;
    }
  }
  uVar3 = 0x20;
  if (0 < param_5) {
    iVar10 = 0;
    pcVar6 = pcVar7 + 1;
    if (*pcVar7 != '\0') {
      iVar2 = 1;
      do {
        iVar9 = -1;
        iVar10 = iVar2;
        pcVar5 = pcVar6;
        do {
          pcVar6 = pcVar5 + 1;
          iVar2 = iVar10 + 1;
          if (*pcVar5 == '\0') goto LAB_20001e04;
        } while ((iVar9 != 0) && (iVar9 = iVar9 + -1, iVar10 = iVar2, pcVar5 = pcVar6, iVar9 != 0));
      } while( true );
    }
LAB_20001e04:
    bVar8 = iVar10 < param_5;
    iVar10 = param_5 - iVar10;
    param_5 = 0;
    if (bVar8) {
      param_5 = iVar10;
    }
    if ((param_6 & 2) == 1) {
      uVar3 = 0x30;
    }
  }
  iVar10 = 0;
  iVar2 = param_5;
  if ((((param_6 & 1) != 1) && (0 < param_5)) &&
     (iVar2 = 0, iVar10 = param_5, param_1 != (int *)0x0)) {
    puVar4 = (undefined1 *)*param_1;
    do {
      *puVar4 = uVar3;
      *param_1 = (int)(puVar4 + 1);
      if (param_5 == 0) break;
      param_5 = param_5 + -1;
      puVar4 = puVar4 + 1;
    } while (param_5 != 0);
  }
  if (*pcVar7 != '\0') {
    do {
      iVar9 = -1;
      pcVar6 = pcVar7;
      do {
        pcVar7 = pcVar6 + 1;
        if (param_1 != (int *)0x0) {
          pcVar5 = (char *)*param_1;
          *pcVar5 = *pcVar6;
          *param_1 = (int)(pcVar5 + 1);
        }
        iVar10 = iVar10 + 1;
        if (*pcVar7 == '\0') goto LAB_20001e6a;
      } while ((iVar9 != 0) && (iVar9 = iVar9 + -1, pcVar6 = pcVar7, iVar9 != 0));
    } while( true );
  }
LAB_20001e6a:
  if ((0 < iVar2) && (iVar10 = iVar2 + iVar10, param_1 != (int *)0x0)) {
    puVar4 = (undefined1 *)*param_1;
    do {
      *puVar4 = uVar3;
      *param_1 = (int)(puVar4 + 1);
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      puVar4 = puVar4 + 1;
    } while (iVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x20001e96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)(iVar1 + iVar10);
  return iVar1;
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
