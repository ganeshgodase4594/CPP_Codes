#include<iostream>
using namespace std;
class item
{
	private:
	
	static int count;
	int no;
	
	public:
	void getdata(int x)
	{
	no=x;
	count++;
	
	}
	static void display()
	{
		cout<<"\ncount="<<count;
	}
};
int item::count; //static variable count is defined.
int main()
{
	item x1,y1,z1;
	x1.getdata(34);
	y1.getdata(21);
	z1.getdata(23);
	
	item::display();
	return 0;
}
