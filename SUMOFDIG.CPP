#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,no,sum=0;
 cout<<" Enter any number : ";
 cin>>no;
 while(no>0)
 {
  a=no%10;
  no=no/10;
  sum=sum+a;
  }
  cout<<"\n sum of the digits is : "<<sum;
  getch();
  }
