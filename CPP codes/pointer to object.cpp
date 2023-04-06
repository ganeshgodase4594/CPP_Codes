#include<iostream>
using namespace std;
class item
{
	int a,b;
	public:
		void getdata(int x,int y)
		{
			a=x;
			b=y;
			
		}
		void display()
		{
			cout<<"\na="<<a;
			cout<<"\nb="<<b;
		}
};
int main()
{
	item x;
	item *ptr;
	ptr=&x;	
    ptr->getdata(67,78); 
    ptr->display();
	return 0;
}  
