//static data member
#include<iostream>
using namespace std;
class student
{
	private:
	int rollNo;
	char name[20];
	static int college_code;
	float marks;
	
	public:
		void getdata()
		{
			cout<<"\nEnter Student Roll No:";
			cin>>rollNo;
			cout<<"\nEnter Student Name:";
			cin>>name;
			
			cout<<"\nEnter Student Marks:";
			cin>>marks;
		}
		
		void putdata()
		{
			cout<<"\n"<<rollNo<<"\t"<<name<<"\t"<<college_code<<"\t"<<marks;
		}
};
int student::college_code=5453;
int main()
{
	student s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3.getdata();
	cout<<"\n********************************************************:";
	cout<<"\n***********Vj Tech Engineering College******************:";
	cout<<"\nrollNo\tname\tcollege_code\tmarks:";
	cout<<"\n********************************************************:";
	s1.putdata();
	s2.putdata();
	s3.putdata();
	return 0;
}

