/*
hierachical inheritance: staff=>Teacher & staff=>Officer
*/
#include<iostream>
using namespace std;
class staff
{
	protected:
		int staff_code;
	public:
		void get_staff_code()
		{
			cout<<"\nEnter staff code:";
			cin>>staff_code;
		} 
		void disp_staff_code()
		{
			cout<<"\nEnter staff code:"<<staff_code;
		}
};
class teacher:public staff
{
	protected:
		char subject_name[20];
	public:
		void get_teacher_detail()
		{
			cout<<"\nEnter teacher subject name:";
			cin>>subject_name;
		} 
		void disp_teacher_details()
		{
			cout<<"\nEnter teacher subject name:"<<subject_name;
		}
};
class officer: public staff
{
	protected:
	int officer_grade;
	public:
	void get_officer_details()
	{
	cout<<"\nEnter officer grade:";
	cin>>officer_grade;	
	}
	void disp_officer_details()
	{
		cout<<"\nEnter officer grade:"<<officer_grade;
	}
};
int main()
{ 
 teacher t1;
 t1.get_staff_code();
 t1.get_teacher_detail();
 cout<<"\n***********Teacher Details*************:";
 t1.disp_staff_code();
 t1.disp_teacher_details();
 
 officer o1;
 o1.get_staff_code();
 o1.get_officer_details();
 cout<<"\n************Officer Details************:";
 o1.disp_staff_code();
 o1.disp_officer_details();
	return 0;
}
