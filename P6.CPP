#include<iostream.h>
#include<conio.h>
class circle
{
 float x,y,r;
 float area1, circum;
 public : void assign();
	  void area();
	  void circumf();
	  void print();
	  };
void circle::assign()
{
 cout<<" Type the x & y co-ordinate :\n";
 cin>>x>>y;
 cout<<" Type the radius : ";
 cin>>r;
 }
void circle::area()
{
 area1=3.14*r*r;
 }
void circle::circumf()
{
 circum= 2*3.14*r;
 }
void circle::print()
{
 cout<<" The x & y co-ordinate is : "<<x<<"\t"<<y<<endl;
 cout<<" The radius is : "<<r<<endl;
 cout<<" The area is : "<<area1<<endl;
 cout<<" The circumference is : "<<circum<<endl;
 }
void main()
{
 clrscr();
 cout<<"...Input...\n";
 circle c1;
 c1.assign();
 c1.area();
 c1.circumf();
 cout<<"\n...Output...\n";
 c1.print();
 getch();
 }
