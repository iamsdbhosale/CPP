/* A c++ program to calculate net-salary payable to an employee by using
following information:(Use scope resolution operator)
:Take basic salary as input from the user
:hra=20% of basic salary
:da=40% of basic salary
:pf=10% of basic salary */
#include<iostream.h>
#include<conio.h>
class scope
{
private:
float hra,da,pf,gs,ns,bs;
public:
void show();
void gross();
void net();
};
void scope::show()
{
cout<<"\n Output: ";
cout<<"\n Enter Basic Salary (Rs.)= ";
cin>>bs;
}
void scope::gross()
{
hra=((20*bs)/100);
cout<<"\n hra= "<<hra;
da=((40*bs)/100);
cout<<"\n da= "<<da;
gs=bs+hra+da;
cout<<"\n Gross Salary= "<<gs;
}
void scope::net()
{
pf=((10*gs)/100);
cout<<"\n pf= "<<pf;
ns=gs-pf;
cout<<"\n\n Net Salary= "<<ns;
}
void main()
{
clrscr();
scope resolution;
resolution.show();
resolution.gross();
resolution.net();
getch();
}
/*
Output:
Enter Basic Salary (Rs.)= 10000
hra= 2000
da= 4000
Gross Salary= 16000
pf= 1600

Net Salary= 14400

*/