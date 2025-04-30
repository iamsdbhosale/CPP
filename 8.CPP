/*A c++ program to display record of five employee
(name,salary,age) using class*/
#include<iostream.h>
#include<conio.h>
class emp
{
private:
char name[10];
long int salary;
int age;
public:
void start()
{
cout<<"\n Output: ";
}
void get()
{
cout<<"\n Enter name,salary,age\n";
cin>>name>>salary>>age;
}
void put()
{
int i;
cout<<"\n ------------------------------------------------------------------";
cout<<"\n Record of Employee No."<<i<<":";
cout<<"\n\t\t 1.Name="<<name;
cout<<"\n\t\t 2.Salary="<<salary;
cout<<"\n\t\t 3.Age="<<age<<"\n";
cout<<"\n ------------------------------------------------------------------";
}
};
void main()
{
clrscr();
int i;
emp y;
y.start();
for(i=1;i<=5;i++)
{
y.get();
y.put();
}
getch();
}

/*
Output:
Enter name,salary,age
ABC
15000
25

------------------------------------------------------------------
Record of Employee No.1:
1.Name=ABC
2.Salary=15000
3.Age=25
------------------------------------------------------------------
Enter name,salary,age
PQR
20000
30

------------------------------------------------------------------
Record of Employee No.2:
1.Name=PQR
2.Salary=20000
3.Age=30
------------------------------------------------------------------
Enter name,salary,age
XYZ
25000
30

------------------------------------------------------------------
Record of Employee No.3:
1.Name=XYZ
2.Salary=25000
3.Age=30
------------------------------------------------------------------
Enter name,salary,age
LMN
30000
35

------------------------------------------------------------------
Record of Employee No.4:
1.Name=LMN
2.Salary=30000
3.Age=35
Enter name,salary,age
STU
35000
40

------------------------------------------------------------------
Record of Employee No.5:
1.Name=STU
2.Salary=35000
3.Age=40
------------------------------------------------------------------
*/