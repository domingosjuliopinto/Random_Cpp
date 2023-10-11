#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 double sum=0,i;
 int n;
 cout<<" Enter the series till : ";
 cin>>n;
 for(i=1;i<=n;i++)
 {
  sum=sum+(1/i);
  }
  cout<<" The sum of the series is "<<sum;
  getch();
  }
