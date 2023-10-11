#include<iostream.h>
#include<conio.h>
class ratio
{
 private : int num,den;
 public : void assign(int n,int d);
	  double convert();
	  double invert();
	  void print();
		       };
 void ratio::assign(int n, int d)
 {
  num=n;
  den=d;
	 }
 double ratio::convert()
 {
  return double (num)/den;
			}
 double ratio::invert()
 {
  return double (den)/num;
		       }
 void ratio::print()
 {
  cout<<"\n Original ratio is : "<<num<<"/"<<den<<" = "<<convert();
  cout<<"\n Reciprocal is : "<<den<<"/"<<num<<" = "<<invert();
							  }
 void main()
 {
  clrscr();
  int num,den;
  cout<<".....Input.....\n\n";
  cout<<"Enter the  value of numerator : ";
  cin>>num;
  cout<<"Enter the value of denominator : ";
  cin>>den;
  ratio r1;
  r1.assign(num,den);
  cout<<"\n....Output...\n";
  r1.print();
  getch();
  }
