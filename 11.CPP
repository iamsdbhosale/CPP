/*A c++ program to calculate simple interest with the help of
parameterized constructor*/
#include<iostream.h>
#include<conio.h>
class para
{
private:
float p,t,in,rate;
public:
para(int c,int b) //parameterized constructor
{
p=c;
t=b;
}
void show()
{
rate=8;
in=((p*rate*t)/100);
cout<<"\n Principal= "<<p<<"(Rs.)";
cout<<"\n Rate= "<<rate<<"%";
cout<<"\n Time= "<<t<<"(Year)";
cout<<"\n Simple Interest= "<<in<<"(Rs.)";
}
};
void main()
{
float c,b;
clrscr();
cout<<"\n Output: ";
cout<<"\n Enter Principal(in Rs.)= ";
cin>>c;
cout<<"\n Enter Time(in Year)= ";
cin>>b;
para object(c,b);
object.show();
getch();
}
/*
Output:
Enter Principal(in Rs.)= 5000
Enter Time(in Year)= 2
Principal= 5000(Rs.)
Rate= 8%
Time= 2(Year)
Simple Interest= 800(Rs.)
*/
