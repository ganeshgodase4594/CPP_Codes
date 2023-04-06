// constructor Overloading: Same Constructor Name but Different arguments;

#include<iostream>
using namespace std;
class Code
{
	private:
		int id;
		public:
		Code()  //Default Constructor;
		{
		id=100;
		}
		Code(int x) //parameterzied constuctor;
		{
			id=x;
			
		
		}
		Code(Code &m) //copy constructor;
		{
			id=m.id;
		}
		void display()
		{
			cout<<"\ID="<<id;
		}
		
	
};
int main()
{
	Code c1;
	Code c2(45);
	Code c3(c2);
	cout<<"\nnObject c1:";
	c1.display();
	
	c1.display();

	return 0;
}
