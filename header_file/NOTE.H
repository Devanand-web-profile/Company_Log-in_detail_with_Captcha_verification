void note()
 {
  int i;
  cout<<"--------------------------------Note----------------------------------- ";
  gotoxy(2,3);
  cout<<"\n*.Read all instruction carefully :-";

  textcolor(10);
  gotoxy(2,6);
  cputs("1. Please Enter your Data carefully. ");
  gotoxy(2,7);
  cputs("2. Do not use the space while filling the Form .");
  gotoxy(2,8);
  cputs("3. Use the underscore ( _ ) instesd of space .");
  gotoxy(2,9);
  cputs("4. If you get a wrong data while filling the form , you can not came back .");
  gotoxy(2,10);
  cputs("5. if you Entered Wrong Input then program is terminated.");
  gotoxy(2,11);
  cputs("6. Entered Captcha carefully.");
  gotoxy(2,12);
  cputs("7. After verify your captcha : Enter your File name must using at the end file     Extension [.txt  .doc  .xlsx ] ");

  gotoxy(3,18);
  cputs("Press 1 to continue.. 0 to exit program :");
  scanf("%d",&i);
  if(i==1)
  {
   cout<<"Thanks For Continue..";
  }
  else
  {
   exit (0);
  }

  getch();

 }
