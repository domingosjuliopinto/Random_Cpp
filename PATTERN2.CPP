#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,n;
 char k;
 cout<<" Enter the number of rows : ";
 cin>>n;
 cout<<" Enter the symbol : ";
 cin>>k;
 for (i=1;i<=n;i++)
 {
  for (j=1;j<=i;j++)
  {
   cout<<k<<"\t";
		  }
  cout<<endl;
	      }
  getch();
	  }
