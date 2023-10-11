#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 float a[10]={9.1,9.2,7.1,7.2,3.2,3.1,4.2,4.1,8.2,8.1},t;
 int i,j;
 cout<<"...output...";
 cout<<"\n\n Array elements are : \n";
 for(i=0;i<10;i++)
 {
  cout<<a[i]<<" ";
  }
 for(i=0;i<9;i++)
 {
  for(j=0;j<9-i;j++)
  {
   if(a[j]>a[j+1])
   {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
    }
    }
    }
cout<<"\n\n\n after sorting the array elements are: \n";
for(i=0;i<10;i++)
{
 cout<<a[i]<<" ";
 }
getch();
}
