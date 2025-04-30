/*A c++ Program to display series "(1/1)+(1/4)+(1/9)+(1/16)+...."
Using friend function */
#include<iostream.h>
#include<conio.h>
class b;
class a
{
private:
int i;
public:
friend void log(a,b);
};
class b
{
private:
int j;
public:
friend void log(a,b);
};
void log(a p,b q)
{
cout<<"\n Output: ";
cout<<"\n Display Result:";
for(p.i=1;p.i<=4;p.i++)
{
q.j=p.i*p.i;
cout<<"(1"<<"/"<<q.j<<")+";
}
cout<<".......";
}
void main()
{
clrscr();
a p;
b q;
log(p,q);
getch();
}

/*Output:
Display Result:(1/1)+(1/4)+(1/9)+(1/16)+....... */