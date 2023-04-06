/* 
function overloading
*/

#include<iostream>
using namespace std;
class Addition
{
	private:
		int a,b;
		
	public:
		
		void getdata()
		{
			a=100;
			b=300;
		}
		
		void getdata(int x)
		{
			a=x;
			b=250;
		}
	//	void getdata(float x)
	//	{
	//		a=x;
	//		b=250;
	//	}
			
		void getdata(int m,int n)
		{
			a=m;
			b=n;
		}
		
		void display()
		{
			cout<<"\Enter Addition Of a & b:"<<(a+b);
		}
};
int main()
{
	Addition a1,a2,a3;
	a1.getdata();
	a2.getdata(250);
	a3.getdata(200,300);
	cout<<"\nObject 1:";
	a1.display();
	cout<<"\nObject 2:";
	a2.display();
	cout<<"\nObject 3:";
	a3.display();
	return 0;
}
	
