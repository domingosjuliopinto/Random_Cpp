#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void reverse(char str[],int l)
{
 int i,t;
 for(i=0;i<(l/2);i++)
 {
  t=str[i];
  str[i]=str[l-1-i];
  str[l-1-i]=t;
   }
   }
 void main()
 {
  clrscr();
  char S[20];
  int l;
  cout<<" Enter your string : ";
  gets(S);
  l=strlen(S);
  reverse(S,l);
  cout<<" The reversed string is : ";
  puts(S);
  getch();
  }