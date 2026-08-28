TARGET 0032b2b0
XREF ffa0055a COMPUTED_CALL FUN_ffa00458
FUNCTION ffa00458 FUN_ffa00458 success=true

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ffa00458(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_0032ac10();
  sVar1 = *(short *)((int)param_2 + 10);
  uVar4 = (ushort)param_3;
  if ((_DAT_ff800d74 & 2) == 1) {
    if (sVar1 == 0) {
      if (param_4 == 0) {
        uVar3 = 1;
        *(ushort *)param_2[1] = uVar4;
        FUN_ffa00402(param_1,param_2);
        *(undefined4 *)((int)param_2 + 10) = uVar3;
      }
      else {
        puVar5 = (ushort *)param_2[1];
        FUN_ffa00324(param_1,param_2,param_4);
        uVar2 = FUN_ffa02b74();
        param_2[3] = uVar2;
        param_2[2] = param_3;
        *(uint *)((int)param_2 + 10) = uVar2 & 0xffff0000;
        param_2[4] = (uint)*puVar5 << 0x10;
      }
    }
    else {
      puVar5 = (ushort *)param_2[1];
      *param_2 = 0;
      if (param_4 == 0) {
        *puVar5 = uVar4;
        *(undefined4 *)((int)param_2 + 10) = 1;
      }
      else {
        if (param_3 != (short)*puVar5) {
          FUN_ffa00324(param_1,param_2,param_4);
          uVar2 = FUN_ffa02b74();
          param_2[3] = uVar2 & 0xffff0000;
          *(uint *)((int)param_2 + 10) = uVar2 & 0xffff0000;
          param_2[2] = param_3;
          param_2[4] = (uint)*puVar5 << 0x10;
          FUN_ffa0031a(param_1,param_2);
          FUN_0032ac64();
          FUN_0032b2b0(*(undefined4 *)(param_1 + 0x14));
                    /* WARNING: Treating indirect jump as return */
          return;
        }
        *(undefined4 *)((int)param_2 + 10) = 1;
      }
    }
  }
  else {
    *(ushort *)param_2[1] = uVar4;
    if (sVar1 == 0) {
      FUN_ffa00402(param_1,param_2);
      *(undefined4 *)((int)param_2 + 10) = 1;
    }
    else {
      *(undefined4 *)((int)param_2 + 10) = 1;
    }
  }
  FUN_0032ac64();
                    /* WARNING: Could not recover jumptable at 0xffa004e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


END_FUNCTION
XREF 0031d7ee UNCONDITIONAL_CALL firmware_entry_0031d7e8
FUNCTION 0031d7e8 firmware_entry_0031d7e8 success=true

void firmware_entry_0031d7e8(void)

{
  FUN_0032b2b0(8);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
XREF 0030c472 UNCONDITIONAL_CALL FUN_0030c29c
FUNCTION 0030c29c FUN_0030c29c success=true

undefined4 FUN_0030c29c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  
  iVar1 = FUN_00301908();
  if (iVar1 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  switch(param_2) {
  case 0:
    *(int *)(param_1 + 0x2c) = param_3;
  case 1:
    local_10 = 2;
    iVar4 = param_1 + 0x14;
    local_e = (**(code **)(*(int *)(param_1 + 0x10) + 0x114))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x110));
    local_c = 2;
    iVar1 = FUN_0033e07e(iVar4);
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        piVar2 = (int *)FUN_0033e030(iVar4,iVar3);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),&local_10);
        }
        iVar1 = iVar1 + -1;
        iVar3 = iVar3 + 1;
      } while (iVar1 != 0);
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x10c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x108),2,0);
    (**(code **)(*(int *)(param_1 + 0x10) + 0x114))
              (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x110));
    iVar1 = FUN_0033e07e();
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        piVar2 = (int *)FUN_0033e030(iVar4,iVar3);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8),&stack0x00000000);
        }
        iVar1 = iVar1 + -1;
        iVar3 = iVar3 + 1;
      } while (iVar1 != 0);
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x10c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x10) + 0x108),3,0);
    break;
  case 2:
    if (DAT_004094bc == '\0') {
      *(int *)(param_1 + 0x24) = param_3;
      DAT_004094bc = '\x01';
    }
    if (DAT_004094b8 != 0) {
                    /* WARNING: Treating indirect jump as return */
      return 0;
    }
    iVar1 = FUN_0030cf94(&DAT_0043f8c0,0xd,0,param_4);
    if ((iVar1 != 0) && ((&DAT_0041d2a4)[param_3] == 0x2ee00)) {
                    /* WARNING: Treating indirect jump as return */
      return 0;
    }
    FUN_0031e9c8((&DAT_0041d2a4)[param_3]);
    break;
  case 3:
    if (*(int *)(param_1 + 0x28) == -1) {
      FUN_0032b2b0(3);
    }
    FUN_0031ea64(param_3 != 0);
  }
  *(int *)(param_1 + 0x24 + param_2 * 4) = param_3;
                    /* WARNING: Treating indirect jump as return */
  return 1;
}


END_FUNCTION
TARGET 0031d7e8
XREF 0031d8aa COMPUTED_CALL firmware_entry_0031d7fc
FUNCTION 0031d7fc firmware_entry_0031d7fc success=true

void firmware_entry_0031d7fc(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar8;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (1 < iVar2) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  (&DAT_00440ed4)[iVar2] = 1;
  puVar9 = (undefined4 *)0x419130;
  iVar5 = 2;
  pcVar8 = &DAT_00440ed0;
  do {
    pcVar7 = pcVar8 + 1;
    if (*pcVar8 == '\0') {
      if (*(int *)(param_1 + 0x1c) != 0) {
        iVar3 = puVar9[1];
        piVar6 = (int *)*puVar9;
        if (0 < iVar3) {
          while (iVar2 != *piVar6) {
            if ((iVar3 == 0) || (iVar3 = iVar3 + -1, piVar6 = piVar6 + 1, iVar3 == 0))
            goto code_r0x0031d874;
          }
          puVar9[2] = *(int *)(param_1 + 0x1c);
        }
      }
code_r0x0031d874:
      iVar3 = puVar9[1];
      bVar1 = true;
      piVar6 = (int *)*puVar9;
      if (0 < iVar3) {
        do {
          if ((&DAT_00440ed4)[*piVar6] == '\0') {
            bVar1 = false;
            goto LAB_0031d896;
          }
        } while ((iVar3 != 0) && (iVar3 = iVar3 + -1, piVar6 = piVar6 + 1, iVar3 != 0));
        bVar1 = true;
      }
LAB_0031d896:
      if (bVar1) {
        pcVar4 = (code *)puVar9[2];
        *pcVar8 = '\x01';
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)();
        }
      }
    }
    iVar5 = iVar5 + -1;
    puVar9 = puVar9 + 3;
    pcVar8 = pcVar7;
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0031d846. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  } while( true );
}


END_FUNCTION
XREF 00419144 DATA <no-function>
XREF Entry Point EXTERNAL <no-function>
TARGET 0031db4c
XREF 0031d99a COMPUTED_CALL firmware_entry_0031d8c4
FUNCTION 0031d8c4 firmware_entry_0031d8c4 success=true

void firmware_entry_0031d8c4(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (1 < iVar2) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  puVar9 = (undefined4 *)0x419148;
  (&DAT_00440edc)[iVar2] = 1;
  iVar5 = 2;
  pcVar7 = &DAT_00440ed8;
  do {
    pcVar8 = pcVar7 + 1;
    if (*pcVar7 == '\0') {
      if (*(int *)(param_1 + 0x1c) != 0) {
        iVar3 = puVar9[1];
        piVar6 = (int *)*puVar9;
        if (0 < iVar3) {
          while (iVar2 != *piVar6) {
            if ((iVar3 == 0) || (iVar3 = iVar3 + -1, piVar6 = piVar6 + 1, iVar3 == 0))
            goto code_r0x0031d940;
          }
          puVar9[2] = *(int *)(param_1 + 0x1c);
        }
      }
code_r0x0031d940:
      iVar3 = puVar9[1];
      bVar1 = true;
      piVar6 = (int *)*puVar9;
      if (0 < iVar3) {
        do {
          if ((&DAT_00440edc)[*piVar6] == '\0') {
            bVar1 = false;
            goto LAB_0031d962;
          }
        } while ((iVar3 != 0) && (iVar3 = iVar3 + -1, piVar6 = piVar6 + 1, iVar3 != 0));
        bVar1 = true;
      }
LAB_0031d962:
      if (bVar1) {
        pcVar4 = (code *)puVar9[2];
        *pcVar7 = '\x01';
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)();
        }
      }
      iVar3 = 2;
      pcVar7 = &DAT_00440ed8;
      do {
        if (*pcVar7 == '\0') {
          bVar1 = false;
          goto LAB_0031d976;
        }
      } while ((iVar3 != 0) && (iVar3 = iVar3 + -1, pcVar7 = pcVar7 + 1, iVar3 != 0));
      bVar1 = true;
LAB_0031d976:
      if (bVar1) {
        DAT_0041912c = 1;
      }
    }
    iVar5 = iVar5 + -1;
    puVar9 = puVar9 + 3;
    pcVar7 = pcVar8;
    if (iVar5 == 0) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
  } while( true );
}


END_FUNCTION
XREF 0041915c DATA <no-function>
XREF Entry Point EXTERNAL <no-function>
TARGET 0036da08
XREF 0031db7a UNCONDITIONAL_CALL firmware_entry_0031db4c
FUNCTION 0031db4c firmware_entry_0031db4c success=true

void firmware_entry_0031db4c(void)

{
  undefined4 uVar1;
  
  FUN_0035aaf0(5);
  FUN_00356768(&DAT_004453c8,0,0);
  DAT_004453c8 = 0;
  FUN_0036da08();
  uVar1 = FUN_00366aa4(s_audio_serial_00436170,3);
  FUN_003666d8(uVar1,1);
  FUN_003667ec(uVar1);
  FUN_0032b6d8(1000);
  uVar1 = FUN_00366aa4(s_power_00436180,2);
  FUN_003666d8(uVar1,3);
  FUN_003667ec(uVar1);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
