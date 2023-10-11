#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int Ano=0,a,d,n;
 cout<<" Enter a number = ";
 cin>>n;
 d=n;
 while(n>0)
 {
  a=n%10;
  n=n/10;
  Ano=Ano+a*a*a;
  }
 if(Ano==d)
 {
  cout<<d<<" is a Ano";
  }
 else
 {
  cout<<d<<" is not an ano ";
  }
  getch();
  }
