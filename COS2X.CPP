#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 float x;
 cout<<"Cos2x \t 2Cosx*cosx-1";
 for(x=0;x<1;x=x+0.1)
 {
  cout<<"\n"<<cos(2*x)<<"\t   "<<2*cos(x)*cos(x)-1<<endl;
  }
  cout<<"\n Therefore cos2x = 2cos(x)*cos(x)-1 ";
  getch();
  }
