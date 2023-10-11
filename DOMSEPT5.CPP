#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[100];
 int n,i,j, temp;
 cout<<"How many numbers ? : "<<endl;
 cin>>n;
 cout<<" Enter the elements : ";
 for(i=1;i<=n;i++)
 {
  cin>>a[i];
  }
 for(i=1;i<=(n-1);i++)
 {
  for(j=1;j<=n-i;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    }
   }
  }
 cout<<"Ascending order is : \n";
 for(i=1;i<=n;i++)
 {
  cout<<a[i]<<endl;
  }
  getch();
   }


