#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c;
 cout<<" Enter number a : ";
 cin>>a;
 cout<<" Enter number b : ";
 cin>>b;
 cout<<" Enter number c : ";
 cin>>c;
 if(a<b&&a<c)
 {
  cout<<"\n"<<a<<" is the minimum number ";
  }
 else if(b<a&&b<c)
 {
  cout<<"\n"<<b<<" is the minimum number ";
  }
  else
  {
  cout<<"\n"<<c<<" is the minimum number ";
  }
  getch();
  }
