/*
A C++ program to calculate perimeter of rectangle by using
member function of class and passing parameters from main function
*/
#include<iostream.h>
#include<conio.h>
class Perimeter
{
private:
public:
void calperi(int x,int y)
{
int pm;
pm=2*(x+y);
cout<<"\n Perimeter of Rectangle="<<pm;
}
};
void main()
{
int l,b;
clrscr();
cout<<"\n Plese enter l=";
cin>>l;
cout<<"\n Plese enter b=";
cin>>b;
Perimeter p; // p is object of class Perimeter
p.calperi(l,b);
getch();
}
/*
Output :

 Plese enter l=2

 Plese enter b=3

 Perimeter of Rectangle=10
*/