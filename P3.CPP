#include<iostream.h>
#include<conio.h>
void swap(int*a,int*b)
{
 int t;
 t=*a;
 *a=*b;
 *b=t;
 }
void main()
{
 clrscr();
 int x,y;
 cout<<" Enter a number ";
 cin>>x;
 cout<<" Enter another number ";
 cin>>y;
 cout<<" The two numbers are : "<<x<<" and "<<y;
 swap(&x,&y);
 cout<<"\n The two swapped numbers are : "<<x<<" and "<<y;
 getch();
 }