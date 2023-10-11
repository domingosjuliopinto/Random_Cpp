#include<iostream.h>
#include<conio.h>
class ratio
{
 private: int num,den;
 public: ratio()
	 {
	  num=0;
	  den=1;
		}
	 ratio(int a)
	 {
	  num=a;
	  den=1;
		}
	 void print()
	 {
	  cout<<num<<"/"<<den;
	  }
	   };
 void main()
 {
  clrscr();
  ratio r1,r2(5);
  cout<<"....output....\n\n";
  cout<<"Value of the first constructor is: ";
  r1.print();
  cout<<"\n Value of the second constructor is : ";
  r2.print();
  getch();
  }
