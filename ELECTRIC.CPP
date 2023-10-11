#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 long e;
 float a,b,c,d,u;
 cout<<"Enter customer number : ";
 cin>>e;
 cout<<"\n Enter units used : ";
 cin>>u;
 if(u>0 && u<=30)
 {
  a=0.75*u;
  cout<<"Customer no "<<e<<" bill is "<<a<<"Rs.";
					       }
 else if(u>30 && u<=100)
 {
  b=30*0.75+(u-30)*0.25;
  cout<<" Customer no "<<e<<" bill is "<<b<<"Rs.";
						 }
 else if(u>100 && u<=300)
 {
  c=30*0.75+70*0.25+(u-100)*3.00;
  cout<<" Customer no "<<e<<" bill is "<<c<<"Rs.";
						  }
 else if(u>300)
 {
  d=30*0.75+70*0.25+200*3.00+(u-300)*4.60;
  cout<<" Customer no "<<e<<" bill is "<<d<<"Rs.";
						}
 else
 {
  cout<<" Units consumed cannot be negative";
    }
 getch();
 }