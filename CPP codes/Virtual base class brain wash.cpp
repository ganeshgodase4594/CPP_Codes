/* 

*/
#include<iostream>
using namespace std;
class A
{
	public:
		void display_A()
		{
			cout<<"\nEnter method of class A:";
			
		}
};
class B:virtual public A
{
	public:
		void display_B()
		{
			cout<<"\nEnter method of class B:";
		}
};
class C:virtual public A 
{
	public:
		void display_C()
		{
			cout<<"\nEnter method of class C:";
		}
};
class D:public B,public C
{
	public:
		void dispaly_D()
		{
			cout<<"\nEnter method of class D:";
		}
};


int main()
{ 
D d1;
d1.display_A();
d1.display_C();
d1.display_B();
d1.dispaly_D();
return 0;
}
