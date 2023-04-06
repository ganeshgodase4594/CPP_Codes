/*
write a c++ program to define a class "Employee" having data member emp_id,emp_name ans emp_salary.
Accept and display data for employee having salary greater than 25000/-
*/
#include<iostream>
using namespace std;
class employee
{
	public:
		int emp_id;
		char emp_name[20];
		int emp_salary;
		
	
		void get_emp_info()
		{
		cout<<"\nEnter employee id:";
		cin>>emp_id;
		cout<<"\nEnter employee name:";
		cin>>emp_name;
		cout<<"\nEnter employee salary:";
		cin>>emp_salary;	
		}
		
		void disp_emp_info()
		{   
	//	if(emp_salary>25000);   
	//	{
			cout<<"\n"<<emp_id<<"\t"<<emp_name<<"\t"<<emp_salary;
	//	}
		
		}
	
};
int main()
{ 
    employee e[5];
    for(int i=0;i<5;i++)
    {
    	e[i].get_emp_info();
	}
	cout<<"\n*************************************************:";
	cout<<"\n*********Ganesh Godase Software Limited**********:";
	cout<<"\nemp_id\temp_name\temp_salary";
	for(int i=0;i<5;i++)
	{ 
	if(e[i].emp_salary>25000);
	{
	e[i].disp_emp_info();	
	}
	
		
		
	}
	
	return 0;
}
