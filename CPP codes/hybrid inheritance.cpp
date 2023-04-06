// class-> Student->Test
/* 
hybrid inheritance: Student=>test,Test & sport => Result
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
			cout<<"\nEnter stuent name:";
			cin>>name;
	    }
		void disp_stud_info()
		{
			cout<<"\nEnter student roll no:"<<roll_no;
			cout<<"\nEnter student name:"<<name;
			
		}
};

class test
{
	protected:
		
			int test1_mark;
			int test2_mark;
			int total;
			
	public: 
	    void get_stud_mark_info()
	    {
	        cout<<"\nEnter test1 mark:";
		    cin>>test1_mark;
		    cout<<"\nEnter test2 mark:";
		    cin>>test2_mark;
			total=(test1_mark+test2_mark);	
	    	
		}
		void disp_stud_mark_info()
		{
		cout<<"\nEnter test1 mark:"<<test1_mark;
		cout<<"\nEnter test2 mark:"<<test2_mark;
		cout<<"\nEnter Total Mark:"<<total;	
	    }  
		
}; 
class sport:public student,public test
{
	protected:
		int sport_mark;
	public:
		void get_sport_mark()
		{
		cout<<"\nEnter Studet Sport Mark:";
		cin>>sport_mark;	
		}
		void disp_sport_mark()
		{
			cout<<"\nEnter Student Sport Mark="<<sport_mark;
			
		}
};


int main()
{
	sport s1;
	s1.get_stud_info();
	s1.get_stud_mark_info();
	s1.get_sport_mark();
	cout<<"\n**********Ganesh Information*************:";
	s1.disp_stud_info();
	s1.disp_stud_mark_info();
	s1.disp_sport_mark();
	return 0;
}
