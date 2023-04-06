// class-> Student->Test
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
			cout<<"\nEnter stuent name:";
			cin>>name;
	    }
		void disp_stud_info()
		{
			cout<<"\nEnter student roll no:"<<roll_no;
			cout<<"\nEnter student name:"<<name;
			
		}
};

class test:public student
{
	protected:
		
			int test1_mark;
			int test2_mark;
			
	public: 
	    void get_stud_mark_info()
	    {
	        cout<<"\nEnter test1 mark:";
		    cin>>test1_mark;
		    cout<<"\nEnter test2 mark:";
		    cin>>test2_mark;	
	    	
		}
		void disp_stud_mark_info()
		{
		cout<<"\nEnter test1 mark:"<<test1_mark;
		cout<<"\nEnter test2 mark:"<<test2_mark;	
	    }  
		
};
int main()
{
	test t1;
	t1.get_stud_info();
    t1.get_stud_mark_info();
    cout<<"\n*****************************************************:";
    cout<<"\n**************student information********************:";
    t1.disp_stud_info();
    t1.disp_stud_mark_info();
	return 0;
}
