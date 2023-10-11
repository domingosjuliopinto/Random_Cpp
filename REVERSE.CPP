#include<iostream.h>
#include<conio.h>
int reverse(int n)
{
 int d,r=0;
 while(n!=0)
 {
  d=n%10;
  r=r*10+d;
  n=n/10;
  }
  return(r);
  }
  void main()
  {
   clrscr();
   int p,q;
   cout<< " Enter a number ";
   cin>>p;
   q=reverse(p);
   cout<<"Reverse of "<<p<<" is : "<<q;
   getch();
   }