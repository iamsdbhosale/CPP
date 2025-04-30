/* inline function program */
#include<iostream.h>
#include<conio.h>
class Inline
{
private:
int a;
public:
Inline()
{
a=25;
}
inline void show(int d);
};
void Inline::show(int d)
{
cout<<”\n\n The result= ”<<a*d;
}
void main()
{
Inline il;
clrscr();
il.show(25);
il.show(5);
il.show(2);
getch();
}
/*
Output:
The result=625
The result=125
The result=50
*/