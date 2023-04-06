#include<iostream>
using namespace std;
class Base
{
	protected:
		int a,b;
    public:
		void getdata()
		{
			a=543;
			b=654;
		}
};
class Derived:public Base
{ 
    private:
     	int c;
    public:
    	void display()
    	{
    		cout<<"\nAddition Of Two Numbers="<<(a+b);
    		
		}
	
}; 
int main()
{ 
Derived d1;
d1.getdata();
d1.display();
	return 0;
}
