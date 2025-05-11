/*
A C++ program to understand virtual functions in C++*/
#include<iostream.h>
#include<conio.h>
class Base;
class Derived;
class Base
{
public:
//overriding the virtual function in the derived class
virtual void print()
{
cout<<"\n print() gets executed from Base Class";
}
void show()
{
cout<<"\n show() gets executed from Base Class";
}
};
class Derived:public Base
{
public:
void print()
{
cout<<"\n print() gets executed from Derived Class";
}
void show()
{
cout<<"\n show() gets executed from Derived Class";
}
};
void main()
{
clrscr();
Base *baseptr;
Derived derivedobj;
baseptr=&derivedobj;
//calling virtual function
baseptr->print();
baseptr->show();
//derivedobj.show();
getch();
}
/*
Here :
derivedobj.show(); and baseptr->show(); are equivalent due to virtual function
Output :

 print() gets executed from Derived Class
 show() gets executed from Base Class
*/