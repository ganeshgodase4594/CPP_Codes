/*
write a c++ program to declare class "Book" having data members Book_Name,Author_Name,Book_Price.
Accept and Diisplay data book having maximum price.
*/
#include<iostream>
using namespace std;
class Book
{
	   public:
		char Book_Name[20];
		char Book_Author_Name[20];
		int Book_Price;
		
		public:
			void getdata()
			{
				cout<<"\nEnter book name:";
				cin>>Book_Name;
				cout<<"\nEnter book author name:";
				cin>>Book_Author_Name;
				cout<<"\nEnter book price:";
				cin>>Book_Price;
			}
			
			void putdata()
			{
				if(Book_Price>550)
				cout<<"\n****************************************************";
             	cout<<"\n**************Ganesh Godase Book Stall***************";
            	cout<<"\nBook_Name="<<Book_Name;
             	cout<<"\nBook_Author_Name="<<Book_Author_Name;
            	cout<<"\nBook_Price="<<Book_Price;
			}
};
int main()
{
	Book b[5];
	for(int i=0;i<=5;i++)
	{
	b[i].getdata();
	}
	for(int i=0;i<=5;i++)
	{
	b[i].putdata();
	}
	return 0;
}
