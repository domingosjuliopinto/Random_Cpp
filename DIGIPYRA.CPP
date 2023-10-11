#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int p,m,q,n;
 cout<<"\n Enter number of lines : ";
 cin>>n;
 cout<<"\n\n";

 for(p=1;p<=n;p++)
 {
  for(q=1;q<=n-p;q++)
  cout<<"   ";

  m=p;
  for(q=1;q<=p;q++)
  cout<<"  "<<m++;
  m=m-2;

  for(q=1;q<p;q++)
  cout<<"  "<<m--;
  cout<<"\n\n";
  }
  cout<<"\n";
  getch();
  }
