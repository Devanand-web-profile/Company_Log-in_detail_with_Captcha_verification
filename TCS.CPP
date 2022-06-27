#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream.h>

// define macro... OTP purpose..
#define size 5

#include "border.h"
#include "user.h"
#include "otp.h"
#include "note.h"

       void company_name(char name[])
	  {
	   gotoxy(25,2);
	   textcolor(3);
	   cprintf("%s",name);
	  }

void main()
{
 clrscr();
 note();    // note.h
 clrscr();
 char name[20];
 border();     // border.h
	   gotoxy(4,4);
	   textcolor(12);
	   cprintf("Enter Your Company Name : ");
	   scanf("%s",&name);

 company_name(name);    // tcs.cpp

	   textcolor(9);
	   gotoxy(4,5);
	   cputs("Enter user detail... ");
 user_info(name);     // code present in [ user.h ] file



getch();
}