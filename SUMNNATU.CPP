#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,i=1,sum=0;
 cout<<" Enter a natural number (n) : ";
 cin>>n;
 while (i<=n)
 {
   sum+=i;
   i++;
   }
 cout<<"the sum of the natural number till n is : "<<sum;
 getch();
 }
