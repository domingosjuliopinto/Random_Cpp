#include<iostream.h>
#include<conio.h>
#include<string.h>
class person
{
 private: char name[80];
 public:person()
	{
	 strcpy (name,"BOB");
	 }
	virtual void print()
	{
	 cout<<"\n name of person is :"<<name;
	  }
	 };
 class student:public person
 {
  char name1[80];
  public: student()
  {
   strcpy (name1,"TOM");
   }
   void print()
   {
    cout<<"\n name of student is :"<<name1;
    }
    };
void main()
{
 clrscr();
 cout<<"...Output...";
 person *p1,p2;
 student s1;
 cout<<"\n object ptr points to base ";
 p1=&p2;
 p1->print();
 cout<<"\n object ptr points to derive ";
 p1=&s1;
 p1->print();
 getch();
 }
