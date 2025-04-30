/* A c++ program to find whether entered no. is Armstrong no. or not
(Using do-while loop) */
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,x,sum=0,b;
cout<<"\n Output: ";
cout<<"\n Enter any No.= ";
cin>>a;
b=a;
do
{
x=a%10;
sum=sum+pow(x,3);
a=a/10;
}while(a>0);
if(b==sum)
{
cout<<"\n Entered No.("<<b<<")is Armstrong!!!!!";
}
else
{
cout<<"\n Entered No. ("<<b<<")is not Armstrong!!!!!";
}
getch();
}
/*
Output:
Enter any No.= 153
Entered No.(153)is Armstrong!!!!! */
//OR
/*
Output:
Enter any No.= 121
Entered No. (121)is not Armstrong!!!!!
*/