/* A c++ program to display Book information (Using Structure) */
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
struct book
{
int pages;
char author[20];
char publish[20];
float price;
};
struct book cpp;
cout<<"\n Enter the Pages of book: ";
cin>>cpp.pages;
cout<<"\n Enter the Name of Author: ";
cin>>cpp.author;
cout<<"\n Enter the Name of publisher: ";
cin>>cpp.publish;
cout<<"\n Enter the Price of the book:";
cin>>cpp.price;
cout<<"\n -----------------------------------------------------------------\n";
cout<<"\n Book Information: ";
cout<<"\n -----------------------------------------------------------------\n";
cout<<"\n Pages of Book: "<<cpp.pages;
cout<<"\n Name of Author: "<<cpp.author;
cout<<"\n Name of publisher: "<<cpp.publish;
cout<<"\n Price of the book: "<<cpp.price<<"(Rs.)";
cout<<"\n -----------------------------------------------------------------\n";
getch();
}
/* Output:
Enter the Pages of book: 605
Enter the Name of Author: Y.Kanetkar
Enter the Name of publisher: BPBpublications
Enter the Price of the book:180

-----------------------------------------------------------------
Book Information:
-----------------------------------------------------------------
Pages of Book: 605
Name of Author: Y.Kanetkar
Name of publisher: BPBpublications
Price of the book: 180(Rs.)
-----------------------------------------------------------------
*/