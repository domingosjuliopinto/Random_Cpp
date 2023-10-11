#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,i,sum=0;
 cout<<"Enter the last number of the series : ";
 cin>>n;
 for (i=1;i<=n;i++)
 {
  sum=sum+(i*i);
  }
  cout<<" The sum of the squares is : "<<sum;
  getch();
  }
