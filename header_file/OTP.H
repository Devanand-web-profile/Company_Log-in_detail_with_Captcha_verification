
int otp()
{
// clrscr();
 char code[size],ch,otp[size];
 int n=0;
 randomize();

 while(n<size)
 {
  ch=(char)random(127);
  if(ch>='a'&&ch<='z' || ch>='0'&&ch<='9' || ch>='A'&&ch<='Z')
  {
   code[n++]=ch;
  }
 }
 code[n]='\0';
 gotoxy(6,16);
 textcolor(6);
 cprintf("CAPTCHA CODE GENERATED : ");

 textcolor(11);
 gotoxy(35,16);
 cprintf(code);
 cout<<endl;
 gotoxy(6,17);
 textcolor(6);
 cprintf("Enter the Captcha to verify: ");
 cin>>otp;

 if(strcmp(code,otp)==0)
 {
  gotoxy(6,18);
  cprintf("Captcha Verified....");
 }
 else
 {
  gotoxy(6,18);
  cprintf(" captcha wrong....");
  gotoxy(6,19);
  cprintf("Try Again.....TATA BYE BYE...");
  getch();
  exit(0);
 }
 return 0;
}