#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 float a[5]={5.2,9.3,11.2,13.4,15.6},S=0.0;
 int i;
 cout<<"...Output...";
 cout<<"\n The starting address of array "<<a;
 cout<<" \n size of element to which it points : "<<sizeof(*a)<<" in bytes \n";
 for (i=0;i<=4;i++)
 {
  S=S+*(a+i);
  cout<<"\n\n the sum of first "<<i+1<<" elements is "<<S;
  cout<<"\n The "<<i+1<<" Element of an array is : "<<*(a+i)<<" and its address is : "<<a+i;
  }
  cout<<"\n\n\n The last element  of array is "<<*(a+4)<<" and its address is "<<a+4;
  getch();
  }
