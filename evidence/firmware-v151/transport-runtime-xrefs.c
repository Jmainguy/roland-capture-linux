TARGET 0041d4e8
XREF 0030d278 PARAM firmware_entry_0030d274
FUNCTION 0030d274 firmware_entry_0030d274 success=true

void firmware_entry_0030d274(undefined4 param_1)

{
  firmware_entry_0030d242(param_1,0xd4e8);
  return;
}


END_FUNCTION
TARGET 0041d4f8
XREF 0030d284 PARAM firmware_entry_0030d280
FUNCTION 0030d280 firmware_entry_0030d280 success=true

void firmware_entry_0030d280(undefined4 param_1)

{
  firmware_entry_0030d242(param_1,0xd4f8);
  return;
}


END_FUNCTION
TARGET 0043582c
TARGET 0043614c
TARGET 0043a100
XREF 00356926 DATA FUN_00356768
FUNCTION 00356768 FUN_00356768 success=true

void FUN_00356768(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_28 [32];
  
  if (*param_1 == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  switch(param_2) {
  case 0:
    FUN_00359ec4(&DAT_004458f0);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 1:
    break;
  case 2:
    if (DAT_0041901c == 0) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    FUN_00359eec(&DAT_004458f0,4,s_Run_Time_Error__0043a34c,2000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 3:
    FUN_00324010(auStack_28,&DAT_0043a0a0);
    FUN_00359eec(&DAT_004458f0,0xe,auStack_28,1000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 4:
    FUN_00359eec(&DAT_004458f0,0xd5,s_Now_Processing_0043a0a4,10000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 5:
    FUN_00359eec(&DAT_004458f0,0xe,s_COMPLETE_0043a0b4,1000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 6:
    FUN_00359eec(&DAT_004458f0,0xe,&DAT_0043a09c,1,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 7:
    FUN_00359eec(&DAT_004458f0,0xe,s_PANEL_Locked_0043a0c0,1000,s_Now_SCENE_mode_0043a0d0);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 8:
    FUN_00359eec(&DAT_004458f0,0xe,s_Freq_is_Locked_0043a0e0,2000,s_Now_D_In_Mode_0043a0f0);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 9:
    FUN_00359eec(&DAT_004458f0,0xe,s_Freq_is_Locked_0043a0e0,2000,s_Now_USB_Mode_0043a100);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 10:
    FUN_00359eec(&DAT_004458f0,0xe,s_BTT_LOW__0043a110,4000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xb:
    FUN_00359eec(&DAT_004458f0,0xe,s_Power_OFF_0043a11c,4000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xc:
    if (param_3 != 0) {
      FUN_00324010(auStack_28,s_SCENE_No___d_0043a128);
      FUN_00359eec(&DAT_004458f0,0xe,s_Now_Loading_0043a138,2000,auStack_28);
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    FUN_00359eec(&DAT_004458f0,0xe,s_Exit_SCENE_Mode_0043a35c,2000,s_Now_Processing_0043a0a4);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xd:
    FUN_00324010(auStack_28,s_SCENE_No___d_0043a128);
    FUN_00359eec(&DAT_004458f0,0xe,s_Save_Complete_0043a148,2000,auStack_28);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xe:
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0xf:
    FUN_00324010(auStack_28,s__dHz_0043a158);
    FUN_00359eec(&DAT_004458f0,0xa5,s_COAXIAL_CLOCK_0043a160,3000,auStack_28);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x10:
    FUN_00359eec(&DAT_004458f0,0xac,s_Coaxial_In_Unlocked_0043a370,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x11:
    FUN_00359eec(&DAT_004458f0,9,s_UNSUPPORTED_0043a170,0xffffffff,s_CLOCK_0043a17c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x12:
    FUN_00359eec(&DAT_004458f0,9,s_MISMATCH_CLOCK_0043a184,0xffffffff,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x13:
    if (param_3 == 0) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    FUN_00359eec(&DAT_004458f0,0xe,s_SCMS_ON_0043a194,5000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x14:
    if (param_3 == 0) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
    FUN_00359eec(&DAT_004458f0,0xe,s_NO_PCM_0043a19c,5000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x15:
    FUN_00359eec(&DAT_004458f0,0xab,s_USB_ON_LINE_0043a1a4,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x16:
    FUN_00359eec(&DAT_004458f0,0xab,s_USB_DISK_ON_LINE_0043a384,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x17:
    FUN_00359eec(&DAT_004458f0,0xac,s_USB_OFF_LINE_0043a1b0,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x18:
    FUN_00359eec(&DAT_004458f0,9,s_Supports_Only_0043a1c0,4000,s_USB_High_Speed_0043a1d0);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x19:
    FUN_00359eec(&DAT_004458f0,0xe,s_USB_BUS_RESET_0043a1e0,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1a:
    FUN_00359eec(&DAT_004458f0,0xe,s_USB_SUSPEND_0043a1f0,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1b:
    FUN_00359eec(&DAT_004458f0,0xe,s_USB_RESUME_0043a1fc,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1c:
    FUN_00359eec(&DAT_004458f0,0xe,s_PANEL_Connected_0043a398,3000,s_Now_recovering____0043a3a8);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1d:
    FUN_00359eec(&DAT_004458f0,9,s_FX_can_not_work_0043a3bc,3000,s_AUX2_is_Inserted_0043a3cc);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1e:
    FUN_00359eec(&DAT_004458f0,9,s_FNL_can_not_work_0043a3e0,3000,s_96kHz_USB_online_0043a3f4);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x1f:
    FUN_00359eec(&DAT_004458f0,0xe,s_Factory_Reset_0043a208,3000,s_Now_Processing_0043a0a4);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x20:
    FUN_00359eec(&DAT_004458f0,9,s_File_Sys_Error__0043a408,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x21:
    FUN_00359eec(&DAT_004458f0,9,s_File_Locked_0043a218,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x22:
    FUN_00359eec(&DAT_004458f0,9,s_No_SD_Card_0043a224,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x23:
    FUN_00359eec(&DAT_004458f0,9,s_SD_Card_Locked_0043a230,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x24:
    FUN_00359eec(&DAT_004458f0,0xe,s_SD_Buffering_0043a240,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x25:
    FUN_00359eec(&DAT_004458f0,9,s_SD_Card_Slow_0043a250,0xffffffff,s_Push_Any_Key_0043a418);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x26:
    FUN_00359eec(&DAT_004458f0,9,s_SD_Card_Full__0043a260,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x27:
    FUN_00359eec(&DAT_004458f0,9,s_Improper_File_0043a270,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x28:
    FUN_00359eec(&DAT_004458f0,0xe,s_Recoder_Working_0043a42c,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x29:
    FUN_00359eec(&DAT_004458f0,9,s_Files_Frequency_0043a43c,3000,s_Mismatch_0043a280);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2a:
    FUN_00359eec(&DAT_004458f0,9,s_Coaxial_Frequency_0043a450,3000,s_Mismatch_0043a280);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2b:
    FUN_00359eec(&DAT_004458f0,9,s_Now_USB_Online_0043a28c,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2c:
    FUN_00359eec(&DAT_004458f0,0xe,s_No_Backup_Data_0043a29c,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  default:
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x2f:
    FUN_00359eec(&DAT_004458f0,9,s_SD_Card_Error__0043a2ac,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x30:
    FUN_00359eec(&DAT_004458f0,9,s_SD_Unformatted_0043a2bc,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x31:
    FUN_00359eec(&DAT_004458f0,0xe,s_No_Channel_0043a2cc,2000,s_Selected_0043a2dc);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x32:
    FUN_00359eec(&DAT_004458f0,0xa0,s_FINISHED_0043a2ec,3000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x33:
    FUN_00359eec(&DAT_004458f0,9,s_AUTO_SENS_0043a2f8,3000,s_CANCELED_0043a304);
                    /* WARNING: Treating indirect jump as return */
    return;
  case 0x34:
    FUN_00359eec(&DAT_004458f0,9,s_Can_not_work_0043a314,3000,s_in_192kHz_0043a324);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (DAT_0041901c == 0) {
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_00359eec(&DAT_004458f0,4,s_Memory_No_Room__0043a33c,2000,&DAT_0043a09c);
                    /* WARNING: Treating indirect jump as return */
  return;
}


END_FUNCTION
TARGET 0043a1a4
XREF 00356b6c PARAM FUN_00356768
TARGET 0043a1b0
XREF 00356bbc PARAM FUN_00356768
TARGET 0043a1d0
XREF 00356bf0 DATA FUN_00356768
TARGET 0043a1e0
XREF 00356c14 PARAM FUN_00356768
TARGET 0043a1f0
XREF 00356c3c PARAM FUN_00356768
TARGET 0043a1fc
XREF 00356c64 PARAM FUN_00356768
TARGET 0043a28c
XREF 00356ef8 PARAM FUN_00356768
TARGET 0043a384
XREF 00356b9a PARAM FUN_00356768
TARGET 0043a3f4
XREF 00356ce4 DATA FUN_00356768
TARGET 0043d8cc
XREF 00367944 PARAM <no-function>
