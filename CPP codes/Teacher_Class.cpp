#include<iostream>
using namespace std;

class teacher
{
 
 public:
	int teacher_id;
	char teacher_name[40];
	char teacher_education[40];
	char teacher_subject[40];
	int teacher_salary;
	
	
	public:
		void get_teacher_info()
		{
			cout<<"\nEnter Teacher Id:";
			cin>>teacher_id;
			
			cout<<"\nEnter Teacher Name:";
			cin>>teacher_name;
			
			cout<<"\nEnter Teacher Educational Detail:";
			cin>>teacher_education;
			
			cout<<"\nEnter Teachers Teaching subject:";
			cin>>teacher_subject;
			
			cout<<"\nEnter Teacher Salary:";
			cin>>teacher_salary;
		}
		
		void disp_teacher_info()
		{
//			cout<<"\nEnter Teacher Id="<<teacher_id;
//			cout<<"\nEnter Teacher Name="<<teacher_name;
//			cout<<"\nEnter Teacher Educational Details="<<teacher_education;
//			cout<<"\nEnter Teacher Teaching Subject="<<teacher_subject;
//			cout<<"\nEnter Teacher Salary="<<teacher_salary;
			
			cout<<"\n"<<teacher_id<<"\t"<<teacher_name<<"\t"<<teacher_education<<"\t"<<teacher_subject<<"\t"<<teacher_salary;
		}
};

int main()
{
	teacher t1,t2,t3,t4,t5;
	t1.get_teacher_info();
	t2.get_teacher_info();
//	t3.get_teacher_info();
//	t4.get_teacher_info();
//	t5.get_teacher_info();
	
	
	cout<<"\n******************************Teacher_Info*************************************";
	cout<<"\n"<<"teacher_id"<<"\t"<<"teacher_name"<<"\t"<<"teacher_education"<<"\t"<<"teacher_subject"<<"\t"<<"teacher_salary";
	
	t1.disp_teacher_info();
	t2.disp_teacher_info();
//	t3.disp_teacher_info();
//	t4.disp_teacher_info();
//	t5.disp_teacher_info();
//	
	return 0;
}
