#include<iostream>
using namespace std;
struct student
{
	int rollNo;   //structure member
	float Marks;
	char name[10];
};
int main()
{
	struct student s1;
	cout<<"Enter Student Roll No:";
	cin>>s1.rollNo;  // variable name.structure member
	cout<<"\nEnter Student Marks:";
	cin>>s1.Marks;                                      //accesing structure member
	cout<<"\nEnter Student Name:";
	cin>>s1.name;
	cout<<"\n*******************************************************:";
	cout<<"\n******Ganesh Godase Computer Technology College*********:";
	cout<<"\n********************************************************";
	cout<<"\n**********************_________________*****************";
	cout<<"\nRoll No\tMarks\tName:";
	cout<<"\n"<<s1.rollNo<<"\t"<<s1. Marks<<"\t"<<s1.name;
return 0;

}
