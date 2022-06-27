void border()
{
    for(int i=1;i<=80;i++)
	cout<<"-";

    for(int j=2;j<=24;j++)
      {
	gotoxy(80,j);
	cout<<"|";
      }
    for(int k=80;k>=1;k--)
    {
      gotoxy(k,24);
      cout<<"-";
    }
    for(int l=23;l>=2;l--)
    {
     gotoxy(1,l);
     cout<<"|";
    }
   for(int z=2;z<=78;z++)
   {
     gotoxy(z,3);
     cout<<"-";
   }
}
