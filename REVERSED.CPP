#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 long m,a,d,n=0;
 cout<<" Enter a positive integer : ";
 cin>>m;
 a=m;
 while (a>0)
 {
  d=a%10;
  a=a/10;
  n=10*n+d;
  }
  cout<<" The reverse of "<<m<<" is "<<n<<endl;
  getch();
  }
