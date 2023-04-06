#include<iostream>
using namespace std;
struct student
{
	int Book_Id;   //structure member
	float Book_Price;
	char Book_Name[10];
	char Book_Author_Name[10];
};
int main()
{
	struct student b1,b2,b3;
	cout<<"Enter Book Id:";
	cin>>b1.Book_Id;  // variable name.structure member
	cout<<"\nEnter Book Price:";
	cin>>b1.Book_Price;                                      //accesing structure member
	cout<<"\nEnter Book Name:";
	cin>>b1.Book_Name;
	cout<<"\nEnter Book Author Name:";
	cin>>b1.Book_Author_Name;
	cout<<"Enter Book Id:";
	cin>>b2.Book_Id;  // variable name.structure member
	cout<<"\nEnter Book Price:";
	cin>>b2.Book_Price;                                      //accesing structure member
	cout<<"\nEnter Book Name:";
	cin>>b2.Book_Name;
	cout<<"\nEnter Book Author Name:";
	cin>>b2.Book_Author_Name;
	cin>>b3.Book_Id;  // variable name.structure member
	cout<<"\nEnter Book Price:";
	cin>>b3.Book_Price;                                      //accesing structure member
	cout<<"\nEnter Book Name:";
	cin>>b3.Book_Name;
	cout<<"\nEnter Book Author Name:";
	cin>>b3.Book_Author_Name;
	cout<<"\n*******************************************************:";
	cout<<"\n******Ganesh Godase Professional Book Stall*********:";
	cout<<"\n********************************************************";
	cout<<"\n**********************_________________*****************";
	cout<<"\nBookId\tBookPrice\tBookName\tBookAuthorName:";
	cout<<"\n"<<b1.Book_Id<<"\t"<<b1.Book_Price<<"t"<<b1.Book_Name<<"t"<<b1.Book_Author_Name;
	cout<<"\n"<<b2.Book_Id<<"\t"<<b2.Book_Price<<"t"<<b2.Book_Name<<"t"<<b2.Book_Author_Name;
	cout<<"\n"<<b3.Book_Id<<"\t"<<b3.Book_Price<<"t"<<b3.Book_Name<<"t"<<b3.Book_Author_Name;
	
return 0;

}
