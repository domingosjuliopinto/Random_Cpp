#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,n;
 cout<<" Enter number of rows : ";
 cin>>n;
 for (i=n;i>=1;i--)
 {
  for (j=1;j<=i;j++)
  {
   cout<<j%2<<"\t";
   }
   cout<<"\n";
   }
   getch();
   }
