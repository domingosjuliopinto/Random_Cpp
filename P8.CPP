#include<iostream.h>
#include<conio.h>
class ratio
{
 public : ratio()
	  {
	   cout<<" \n Object is born ";
	   }
	  void x()
	  {
	   cout<<"\n now x is alive ";
	   }
	  ~ratio()
	  {
	   cout<<"\n Object dies ";
	   }
	   };
void main()
{
 clrscr();
 ratio r1;
 r1.x();
 getch();
 }