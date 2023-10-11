#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[100];
 int i,n,larg;
 cout<<"How many numbers are in the array ?"<<endl;
 cin>>n;
 cout<<" Enter the elements "<<endl;
 for(i=0;i<=n-1;++i)
 {
  cin>>a[i];
  }
 cout<<"\n contents of the array"<<endl;
 for(i=0;i<=n-1;++i)
 {
  cout<<a[i]<<"\t";
  }
 cout<<endl;
 larg=a[0];
 for(i=1;i<=n-1;++i)
 {
  if(larg<a[i])
  larg=a[i];
  }
 cout<<"\n Largest value in the array = "<<larg;
 getch();
 }
