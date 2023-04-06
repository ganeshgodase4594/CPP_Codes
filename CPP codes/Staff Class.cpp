/*
write a c++ program to declare a class "staff" having data members name,basic salary,
DA,HRA and calculate gross salary.Accept and display data for one staff.
where:
         DA=74.5% of basic salary
         HRA=30% of basic salary
         gross_salary=basic+HRA+DA
*/

#include<iostream>
using namespace std;
class staff
{
	private:
		char staff_name[20];
		int basic_salary;
		int DA;
		int HRA;
		int gross_salary;
		
	public:
		void get_staff_info()
		{
		cout<<"\nEnter staff name:";
		cin>>staff_name;
		cout<<"\nEnter basic salary:";
		cin>>basic_salary;
	    }
	    
	    void cal_gross_salary()
	    {
	    DA=(74.5*basic_salary)/100;
		HRA=(30*basic_salary)/100;
		gross_salary=(basic_salary+DA+HRA);
	    }
		
		void disp_staff_info()
		{
			cout<<"\nEnter staff name="<<staff_name;
			cout<<"\nEnter basic salary="<<basic_salary;
			cout<<"\nEnter staff DA="<<DA;
			cout<<"\nEnter staff HRA="<<HRA;
			cout<<"\nEnter staff gross salary="<<gross_salary;
		}
		
};
int main()
{
	staff s1;
	s1.get_staff_info();
	s1.disp_staff_info();
	return 0;
}
