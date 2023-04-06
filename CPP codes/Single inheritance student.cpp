/*
Write a c++ progrm which create class "student" having data members roll no,name.
create a class "marks" from student class having data members m1,m2,m3,total & percentage.
Accept and display data for one object.
*/
#include<iostream>
using namespace std;
class student 
{
	protected:
	int roll_no;
	char name[20];
	public:
		void get_stud_info()
		{
		cout<<"\nEnter student roll no:";
		cin>>roll_no;
		cout<<"\nEnter student name:";
		cin>>name;	
		}
		
};
class marks:public student
	{
		private:
		int mark_m1;
		int mark_m2;
		int mark_m3;
		int total;
		int percentage;
		 
		public:
			void disp_stud_info()
			{
				cout<<"\nEnter student m1 marks:";
				cin>>mark_m1;
				cout<<"\nEnter student m2 marks:";
				cin>>mark_m1;
				cout<<"\nEnter student m3 marks:";
				cin>>mark_m3;
				total=(mark_m1+mark_m2+mark_m3);
				cout<<"\nEnter student total marks="<<total;
				percentage=100*(mark_m1+mark_m2+mark_m3)/300;
				cout<<"\nEnter student percentage="<<percentage;
				
			}
	};
int main()
{
	marks m1;
	m1.get_stud_info();
	m1.disp_stud_info();
	
	return 0;
} 
