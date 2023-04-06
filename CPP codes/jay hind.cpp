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

class result:public test 
{
    protected:
    	int total;
    public:
    void get_total_info()
    {
    	total=(test1_mark+test2_mark);
	}
	void disp_total_info()
	{
		cout<<"\nEnter Total For test1 and test2:"<<total;
	}
};
int main()
{
	result r1;
	r1.get_stud_info();
    r1.get_stud_mark_info();
    r1.get_total_info();
    cout<<"\n*****************************************************:";
    cout<<"\n**************student information********************:";
    r1.disp_stud_info();
    r1.disp_stud_mark_info();
    r1.disp_total_info();
	return 0;
}
