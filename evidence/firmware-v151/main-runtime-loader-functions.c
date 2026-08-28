FUNCTION 0030f044 FUN_0030f044 contains=0030f044 success=true

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Removing unreachable block (ram,0x0030f254) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0030f044(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 in_AZflag;
  code *UNRECOVERED_JUMPTABLE;
  
  if (PTR_DAT_0036e66c == (undefined *)0x0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  csync();
  if ((*(short *)(PTR_DAT_0036e66c + 2) != -1) || (*PTR_DAT_0036e66c != '\0')) {
                    /* WARNING: Treating indirect jump as return */
    return 0xffffffff;
  }
  uVar2 = *(uint *)(PTR_DAT_0036e66c + 4);
  if (uVar2 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  uVar6 = 0;
  puVar11 = (uint *)(PTR_DAT_0036e66c + 8);
LAB_0030f086:
  do {
    bVar16 = uVar2 <= uVar6;
    uVar6 = uVar6 + 1;
    if (bVar16) {
      _DAT_00440de0 = 0;
      _DAT_00440de2 = 0;
      _DAT_00440de4 = 0;
      _DAT_00440de6 = 0;
      _DAT_00440de8 = 0;
      _DAT_00440dea = 0;
      _DAT_00440dec = 0;
      _DAT_00440dee = 0;
      _DAT_00440ddc = 0;
      _DAT_00440dde = 0;
                    /* WARNING: Could not recover jumptable at 0x0030f370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)(0);
      return uVar5;
    }
    uVar3 = puVar11[2];
    puVar15 = puVar11 + 4;
    if ((uVar3 & 0x3c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0030f334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffffe);
      return uVar5;
    }
    if ((uVar3 & 3) != 2) {
                    /* WARNING: Could not recover jumptable at 0x0030f326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffffd);
      return uVar5;
    }
    uVar3 = (uVar3 & 0x1c0) >> 6;
    if (uVar3 == 0) {
      puVar8 = (undefined1 *)*puVar11;
      uVar3 = puVar11[1];
      if (puVar8 < (undefined1 *)0xffa14001 && (undefined1 *)0xff9fffff < puVar8) {
        iVar4 = FUN_0030ee24(puVar15,puVar8,uVar3,0);
        if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0030f318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffffc);
          return uVar5;
        }
        puVar11 = (uint *)((int)puVar15 + uVar3);
      }
      else {
        puVar11 = puVar15;
        if (0 < (int)uVar3) {
          puVar11 = (uint *)((int)puVar15 + uVar3);
          do {
            *puVar8 = (char)*puVar15;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            puVar8 = puVar8 + 1;
            puVar15 = (uint *)((int)puVar15 + 1);
          } while (uVar3 != 0);
        }
      }
      if (!(bool)in_AZflag) {
        puVar11 = puVar11 + 1;
      }
      puVar11 = (uint *)((uint)puVar11 & 0xfffffffc);
      goto LAB_0030f086;
    }
    if (uVar3 != 1) {
      if (uVar3 != 3) {
                    /* WARNING: Could not recover jumptable at 0x0030f1da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffff7);
        return uVar5;
      }
      uVar14 = puVar11[1];
      uVar3 = *puVar11;
      if (uVar3 < 0xffa14001 && 0xff9fffff < uVar3) {
        uVar1 = puVar11[3];
        puVar7 = (uint *)((int)puVar15 + uVar14);
        if (0x10 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x0030f1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffffa);
          return uVar5;
        }
        puVar12 = puVar15;
        if (uVar1 != 0) {
          puVar8 = &DAT_00440de0;
          puVar13 = puVar15;
          uVar14 = uVar1;
          do {
            *puVar8 = (char)*puVar13;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            puVar8 = puVar8 + 1;
            puVar13 = (uint *)((int)puVar13 + 1);
          } while (uVar14 != 0);
        }
        do {
          uVar14 = uVar3 + uVar1;
          puVar12 = (uint *)((int)puVar12 + uVar1);
          iVar4 = FUN_0030ee24(&DAT_00440de0,uVar3,uVar1,3);
          if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0030f1be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffff9);
            return uVar5;
          }
          uVar3 = uVar14;
        } while (puVar12 < puVar7);
        if ((puVar7 != puVar12) &&
           (iVar4 = FUN_0030ee24(&DAT_00440de0,uVar14,(int)puVar7 - (int)puVar12,3), iVar4 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0030f1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffff8);
          return uVar5;
        }
      }
      else {
        puVar8 = (undefined1 *)*puVar11;
        puVar7 = puVar15;
        if (0 < (int)uVar14) {
          do {
            puVar12 = (uint *)((int)puVar7 + 1);
            *puVar8 = (char)*puVar7;
            puVar7 = puVar12;
            if (puVar12 == (uint *)((int)puVar15 + puVar11[3])) {
              puVar7 = puVar15;
            }
          } while ((uVar14 != 0) && (uVar14 = uVar14 - 1, puVar8 = puVar8 + 1, uVar14 != 0));
        }
      }
      uVar3 = puVar11[3];
      if (!(bool)in_AZflag) {
        uVar3 = puVar11[3] + 4;
      }
      puVar11 = (uint *)((int)puVar15 + (uVar3 & 0xfffffffc));
      goto LAB_0030f086;
    }
    puVar10 = (undefined2 *)*puVar11;
    uVar3 = puVar11[1];
    puVar11 = puVar15;
    if ((undefined2 *)0xffa14000 < puVar10 || puVar10 < (undefined2 *)0xffa00000) {
      if ((int)uVar3 < 1) goto LAB_0030f086;
      if (!(bool)in_AZflag) {
        do {
          *(undefined1 *)puVar10 = 0;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          puVar10 = (undefined2 *)((int)puVar10 + 1);
        } while (uVar3 != 0);
        goto LAB_0030f086;
      }
      puVar9 = puVar10;
      if (uVar3 != 1) {
        if ((int)uVar3 >> 1 != 1) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
        puVar9 = puVar10 + 1;
        *puVar10 = 0;
        if ((uVar3 & 1) != 1) goto LAB_0030f086;
      }
      *(undefined1 *)puVar9 = 0;
      goto LAB_0030f086;
    }
    _DAT_00440de0 = 0;
    iVar4 = FUN_0030ee24(&DAT_00440de0,puVar10,uVar3,1);
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0030f296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)(0xfffffffb);
      return uVar5;
    }
  } while( true );
}


END_FUNCTION
