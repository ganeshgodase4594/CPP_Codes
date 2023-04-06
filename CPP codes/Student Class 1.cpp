//class & object - Create class student having data member rollno,name,marks.
//Accept & display data for one object.
#include<iostream>
using namespace std;
class student
{
	private:
	int rollno;  // data members
	char name[20];
	float marks;
	
	public:
	void get_stud_info()
	{
	cout<<"Enter student roll no";  // member function
	cin>>rollno;
	cout<<"\nEnter student name";
	cin>>name;
	cout<<"\nEnter student marks";
	cin>>marks;
	}
	void disp_stud_info()
	{
	cout<<"\n********************Student Information******************";
	cout<<"\nroll no:"<<rollno;
	cout<<"\nname:"<<name;
	cout<<"\nmark:"<<marks;
	}
};
int main()
{
	student s1;
	s1.get_stud_info();
	s1.disp_stud_info();
	return 0;
}
