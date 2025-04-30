/*A C++ Program to determine which number is greater amongst three
numbers with the help multiple inheritance */
#include<iostream.h>
#include<conio.h>
class a
{
protected:
int i;
public:
};
class b
{
protected:
int j;
public:
};
class c:public b,public a
{
private:
int k;
public:
void show()
{
cout<<"\n Enter i= ";
cin>>i;
cout<<"\n Enter j= ";
cin>>j;
cout<<"\n Enter k= ";
cin>>k;
}
void greater()
{
if(i>j && i>k)
{
cout<<"\n i is greater than j and k";
}
else if(j>i && j>k)
{
cout<<"\n j is greater than i and k";
}
else if(k>i && k>j)
{
cout<<"\n k is greater than i and j";
}
}
};
void main()
{
clrscr();
cout<<"\n Output: ";
c obj;
obj.show();
obj.greater();
getch();
}
/*
Output:
Enter i= 15
Enter j= 16
Enter k= 14
j is greater than i and k
*/