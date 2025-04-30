/* A c++ program to decide whether entered no. is palindrome or not
(using class & object)*/
#include<iostream.h>
#include<conio.h>
class mech
{
private:
int r,no,ans,sum;
public:
void show()
{
int r=0;
cout<<"\n Enter Any No.= ";
cin>>no;
ans=no;
sum=0;
while(no>0)
{
r=no%10;
sum=sum*10+r;
no=no/10;
}
if(ans= =sum)
cout<<"\n Entered Number is palindrome!!!!!";
else
cout<<"\n Entered Number is not palindrome!!!!!";
}
};
void main()
{
clrscr();
cout<<"\n\n OUTPUT:";
mech obj;
obj.show();
getch();
}

/*
OUTPUT:
Enter Any No.= 121
Entered Number is palindrome!!!!!
*/
//OR
/*
OUTPUT:
Enter Any No.= 153
Entered Number is not palindrome!!!!!
*/