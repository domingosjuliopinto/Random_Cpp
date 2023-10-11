#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 float a[101],p;
 int i,top,bot,mid;
 cout<<"type number in ascending order \n";
 for (i=0;i<10;i++)
 {
  cin>>a[i];
   }
  top=0;
  bot=9;
  cout<<"type the number you want to search \n";
  cin>>p;
  mid=(top+bot)/2;
  while((top<=bot)&&(a[mid]!=p))
  {
   if(p<a[mid])
   bot=mid-1;
   else
   top=mid+1;
   mid=(top+bot)/2;
   }
  if(a[mid]==p)
  {
   cout<<" the number is at position " <<(mid+1)<<endl;
  }
  else
  cout<<"the number is not found ";
  getch();
  }
