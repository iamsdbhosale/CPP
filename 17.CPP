/* A c++ program for function overloading concept */
#include<iostream.h>
#include<conio.h>
#include<math.h>
class mech
{
int a,b;
public:
mech(int l,int m) //parameterized constructor
{
a=l;
b=m;
}
void fun(int a)
{
cout<<"\n Square of variable a ("<<a<<")= "<<a*a;
}
void fun(int a,int b)
{
cout<<"\n\n Multiplication of a ("<<a<<") and b ("<<b<<")= "<<a*b;
}
};
void main()
{
int a,b;
clrscr();
cout<<"\n\n Output: ";
cout<<"\n Enter a= ";
cin>>a;
cout<<"\n Enter b= ";
cin>>b;
mech obj(a,b);
obj.fun(a);
obj.fun(a,b);
getch();
}

/* Output:
Enter a= 10
Enter b= 25
Square of variable a (10)= 100
Multiplication of a (10) and b (25)= 250 */