/* A c++ program table of any no. with the help of inline
fuction*/
#include<iostream.h>
#include<conio.h>
class INLINE
{
private:
int a;
public:
void show()
{
cout<<"\n Output: ";
cout<<"\n Enter any No.= ";
cin>>a;
}
inline void show(int d);
};
void INLINE::show(int d)
{
cout<<"\n "<<a<<"X"<<d<<"="<<a*d;
}
void main()
{
clrscr();
int i;
INLINE il;
il.show();
for(i=1;i<=10;i++)
{
il.show(i);
}
getch();
}
/*Output:
Enter any No.= 25
25X1=25
25X2=50
25X3=75
25X4=100
25X5=125
25X6=150
25X7=175
25X8=200
25X9=225
25X10=250*/