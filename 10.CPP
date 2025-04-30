/* A c++ program to calculate area of circle using constructor & destructor
to display message"we are in destructor"*/
#include<iostream.h>
#include<conio.h>
class mech
{
private:
float a,r,pi;
public:
void show()
{
cout<<"\n Output:";
cout<<"\n Enter radius of circle=";
cin>>r;
}
void read()
{
a=pi*r*r;
cout<<"\n Area of circle="<<a;
}
mech()
{
pi=3.14;
}
~mech()
{
cout<<"\n we are in destructor";
}
};
void main()
{
clrscr();
mech obj;
obj.show();
obj.read();
getch();
}
/*
Output:
Enter radius of circle=10
Area of circle=314
//After pressing alt+F5

Output:
Enter radius of circle=10
Area of circle=314
we are in destructor
*/