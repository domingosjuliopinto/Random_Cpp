#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 int len;
 char str[80];
 cout<<" Enter a string : \n ";
 cin.get(str,80);
 len=strlen(str);
 for(int i=0;i<len;i++)
 {
  if(str[i]==' ')
  str[i]='-';
  }
 cout<<"\n The final string is : \n "<<str;
 getch();
 }