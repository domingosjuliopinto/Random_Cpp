#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
 clrscr();
 char name[80],cap[80];
 ifstream ifile1,ifile2;
 ofstream ofile;
 ofile.open("country.data");
 cout<<"...Output...";
 ofile<<"  India\n  USA\n  UK\n France\n Japan";
 ofile.close();
 ofile.open("capital.data");
 ofile<<"  Delhi\n  Washington\n London\n Paris\n Tokyo";
 ofile.close();
 ifile1.open("country.data");
 ifile2.open("capital.data");
 cout<<"\n country  capital\n";
 while(!ifile1.eof()&&!ifile2.eof())
 {
  ifile1.getline(name,80);
  ifile2.getline(cap,80);
  cout<<name<<"\t"<<cap<<"\n";
  }
 ifile1.close();
 ifile2.close();
 getch();
 }
