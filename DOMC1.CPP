#include<iostream.h>
#include<conio.h>
void main()
{
 int a[10], i, *ptr;
 clrscr();
 cout<<"Enter 10 numbers : "<<endl;
 for(i=0;i<=9;i++)
 {
  cin>>a[i];
  }
 ptr=&a[0];
 cout<<"\n The numbers are \n";
 for (i=0;i<=9;i++)
 {
  cout<<*ptr<<"\n";
  ptr++;
  }
  getch();
 }