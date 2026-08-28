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
TARGET 0041912c
XREF 0031d982 WRITE firmware_entry_0031d8c4
XREF 0031d7de WRITE firmware_entry_0031d7d0
FUNCTION 0031d7d0 firmware_entry_0031d7d0 success=true

void firmware_entry_0031d7d0(void)

{
  DAT_0041912c = 1;
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
XREF 0031d954 READ firmware_entry_0031d8c4
XREF 0031d934 READ firmware_entry_0031d8c4
TARGET 00440ed4
XREF 0031d820 DATA firmware_entry_0031d7fc
XREF 0031d88e DATA firmware_entry_0031d7fc
TARGET 00440edc
XREF 0031d8f4 DATA firmware_entry_0031d8c4
XREF 0031d95a DATA firmware_entry_0031d8c4
