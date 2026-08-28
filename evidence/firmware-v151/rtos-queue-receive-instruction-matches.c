MATCH 0031e922 LOAD P1.L = 0x980 FUNCTION firmware_entry_0031e894
FUNCTION 0031e894 firmware_entry_0031e894 success=true

void firmware_entry_0031e894(void)

{
  undefined1 auStack_28 [16];
  int iStack_18;
  
  DAT_004191b0 = 0;
  func_0x0032a548(&DAT_004192b4,&DAT_004191b4,0x20,8,0);
  DAT_004192e0 = 0;
  DAT_004192bc = 0;
  DAT_004192c4 = 0;
  DAT_004192c8 = 0;
  DAT_004192cc = 0;
  DAT_004192d0 = 0;
  DAT_004192d4 = 0;
  DAT_004192d8 = 0;
  DAT_004192dc = 1;
  if (DAT_004191a8 == 0) {
    DAT_004191a8 = 1;
    DAT_004192e4 = 0;
    DAT_004192e8 = 0;
  }
  DAT_004191ac = 1;
  do {
    do {
      (*(code *)0xffa00980)(DAT_004191b0,auStack_28);
    } while (7 < iStack_18);
    if ((code *)(&PTR_LAB_00436354)[iStack_18] != (code *)0x0) {
      (*(code *)(&PTR_LAB_00436354)[iStack_18])(auStack_28);
    }
  } while( true );
}


END_FUNCTION
