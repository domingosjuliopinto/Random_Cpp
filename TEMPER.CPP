#include<iostream.h>
#include<conio.h>
class temperature
{
 private : float f,c;
 public : temperature()
	  {
	   cout<<"Enter temp in celcius : ";
	   cin>>c;
	   }
	   void cal()
	   {
	    f= (9*c/5) +32;
	    }
	   void print()
	   {
	    cout<<" Temp in farenheit "<<f;
	    }
	    ~temperature(){}

	    };
 void main()
 {
  clrscr();
  temperature ob;
  ob.cal();
  ob.print();
  getch();
  }
