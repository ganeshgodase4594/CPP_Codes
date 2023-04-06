#include<iostream>
using namespace std;
class addition;
{
	
	private:
	int a,b;
	
	public:
	void getdata()
	{
	a=465;
	b=342;	
	}
	void putdata()
	{
		cout<<"Addition of two Numbers="<<(a+b);

	}


	
};
int main()
{
	Addition a1;
	a1.getdata();
	a1.putdata();
	return 0;
}
