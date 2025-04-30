/* A c++ program to calculate addition from 1 to entered no. using while
loop*/
#include<iostream.h>
#include<conio.h>
void main()
{
int i=1,sum=0,n;
clrscr();
cout<<"\n Output: ";
cout<<"\n Enter any no. =";
cin>>n;
while(i<=n)
{
sum=sum+i;
i++;
}
cout<<"\n Addition from 1 to entered no.("<<n<<") ="<<sum;
getch();
}

/* Output:
Enter any no. =100
Addition from 1 to entered no.(100) =5050 */