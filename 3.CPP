/*A c++ program to calculate addition, subtraction, multiplication, division,
remainder for two nos. using arithmetic & Input and Output operator*/
#include<iostream.h>
#include<conio.h>
void main()
{
int add,sub,mul,div,rem,a,b;
clrscr();
cout<<"OUTPUT: \n\n";
cout<<"Enter a= ";
cin>>a;
cout<<"Enter b= ";
cin>>b;
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
rem=a%b;
cout<<"\n Addition of a("<<a<<") and b("<<b<<") ="<<add;
cout<<"\n Subtraction of a("<<a<<") and b("<<b<<") ="<<sub;
cout<<"\n Multiplication of a("<<a<<") and b("<<b<<") ="<<mul;
cout<<"\n Division of a("<<a<<") and b("<<b<<") ="<<div;
cout<<"\n Remainder of a("<<a<<") and b("<<b<<") ="<<rem;
getch();
}
/*
OUTPUT:
Enter a= 20
Enter b= 5
Addition of a(20) and b(5)=25
Subtraction of a(20) and b(5)=15
Multiplication of a(20) and b(5)=100
Division of a(20) and b(5)=4
Remainder of a(20) and b(5)=0
*/