//  Area Of Circle
#include<iostream>
using namespace std;
class Circle
{
	private:
		int radius;
	
	public:
		
		void getdata()
		{
			cout<<"\nEnter radius of circle:";
			cin>>radius;
			
		}
			
		void putdata()
			{
				float Area;
				Area=(3.14*radius*radius);
				cout<<"\nArea Of Circle="<<Area;
			}
};
int main()
{
	Circle c1;
	c1.getdata();
	c1.putdata();
	return 0;
}
