
int user_info(char name[])
{
 char user[20];
 char add[20],gender[7];
 double d,m,y;
 int age,total=0;
 char no[9];


 gotoxy(6,7);
 textcolor(15);
 cprintf("Enter User name    : ");
 cin>>user;
 gotoxy(6,8);
 cprintf("Enter your D.o.B   : ");

 // date ...........
 gotoxy(17,9);
 cprintf(" Date   : ") ;
 cin>>d;
 if(d>31)
 {
  textcolor(RED);
  gotoxy(6,15);
  cputs("Sorry !! You Entered Out of Range..");
  gotoxy(6,16);
  cputs("Try again later..");
  getch();
  exit(0);
 }

 // month.......
 gotoxy(17,10);
 cprintf(" Month  : ");
 cin>>m;
if(m>12)
{
   textcolor(RED);
  gotoxy(6,15);
  cputs("Sorry !! You Entered Out of Range of month..");
  gotoxy(6,16);
  cputs("Try again later..");
  getch();
  exit(0);
}
// year..........
 gotoxy(17,11);
 cprintf(" Year   : ");
 cin>>y;
if(y<2022)
{
 total=2022-y;
 gotoxy(35,10);
 cputs("Age   : ");
 gotoxy(40,10);
 cout<<total;

 }
else
{
 gotoxy(6,16);
 cputs("You are not eligibal to sign in");
 getch();
 exit(0);

}
// gender---------------------
gotoxy(35,11);
cputs("Gender : ");
gotoxy(44,11);
cin>>gender;


// Mobile number...........
gotoxy(6,13);
cputs("Enter your Number  : +91-");
cin>>no;

// address............
gotoxy(6,14);
cputs("Enter Your City    : ");
cin>>add;

// otp start ------------------------

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
 textcolor(7);
 cputs("CAPTCHA CODE GENERATED : ");

 textcolor(11);
 gotoxy(35,16);
 cputs(code);
 cout<<endl;
 gotoxy(6,17);
 textcolor(7);
 cputs("Enter the Captcha to verify: ");
 cin>>otp;

 if(strcmp(code,otp)==0)
 {
  gotoxy(6,18);
  cputs("Captcha Verified....");
 }
 else
 {
  gotoxy(6,18);
  cputs(" captcha wrong....");
  gotoxy(6,19);
  cprintf("Try Again.....TATA BYE BYE...");
  getch();
  exit(0);
 }


// opt end-------------------------

// successful message ---------------
	gotoxy(25,22);
	textcolor(10+BLINK)  ;
	cputs("Details is registered Successfully..");
	gotoxy(25,23);
	textcolor(RED);
	cputs("Press Enter to continue... ");
	getch();
// message end..
clrscr();
border();


// Database --------------------------------------------
char filen[30];


// company name code inserted ......
  gotoxy(25,2);
  textcolor(3);
  cprintf("%s",name);
// company name end :

textcolor(13);
gotoxy(3,4);
cputs("--------------Databse Page------------ ");

textcolor(12);
gotoxy(2,7);
cputs(" Enter File name Where you want to store your data : ");
gotoxy(2,9);
cputs(" e.g : myfile.txt  myfile.doc etc  : ");
cin>>filen;

//file create...
ofstream file;
file.open(filen,ios::in);

if(!filen)
{
 cout<<" Oops Your File is not Created...";
}
else
{

  file<<"\tName  \t|  Contact-no  \t|  Address  \t|   D.O.B  \t|Gender  | \n";
  file<<"---------------------------------------------------------------------------------\n 1.";
  file<<user;
  file<<"\t  "<<no;
  file<<"\t  "<<add;
  file<<"\t  "<<d<<":"<<m<<":"<<y;
  file<<"\t  "<<gender;
 }

file.close();  // file close...

textcolor(3);
gotoxy(2,12);
cputs("Your File Successfully created  :");
gotoxy(2,13);
cputs("Go to this path : C:\\Turboc3\\bin\\......");
gotoxy(2,14);
cputs("Choose 1: Display Your Input data is here./ ");
gotoxy(2,15);
cputs("Choose 2: Exit the Program. ");
int choise;
cin>>choise;
switch(choise)
{
 case 1:
  cout<<"  Name \t|  Contact-no  \t|  Address  \t|   D.O.B  \t|Gender  | \n";
  cout<<":-------------------------------------------------------------------:\n 1.";
  cout<<"   "<<user;
  cout<<"\t  "<<no;
  cout<<"\t  "<<add;
  cout<<"\t  "<<d<<":"<<m<<":"<<y;
  cout<<"\t  "<<gender;
  getch();
  break;

  case 2:
  cout<<"Program is terminated.";
  getch();
  exit(1);

  default:
  cout<<" Out of Range input :";
  break;
}


getch();



clrscr();
border();

// company name code start........
  gotoxy(20,2);
  textcolor(3);
  cprintf("%s",name);
// company name code end........

gotoxy(45,2);
cout<<" user :"<<user;
getch();

 return 0;
}








