#include<iostream.h>
#include<conio.h>
double power(double,int);
void main()
{
 clrscr();
 double X;
 int n;
 cout<<"Enter the value of X \n";
 cin>>X;
 cout<<"Enter the value of n \n";
 cin>>n;
 cout<<"The result is : "<<power(X,n);
 getch();
}
double power(double X, int n)
{
 if(X==0)
 return 0;
 if(n==0)
 return 1;
 double y=1;
 for(int i=0;i<n;i++)
 y=y*X;
 return y;
 }
