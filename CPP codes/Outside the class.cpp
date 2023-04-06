//Write a program to declare class Time having data member as hrs,mins,secs.
#include<iostream>
using namespace std;
class Time
{
	private:
	int hrs,mins,secs;
	
	public:
	void getTime();
	void putTime();
};
	void Time::getTime()
	{
	cout<<"\nEnter Hours:";
	cin>>hrs;
	cout<<"\nEnter Minute:";
	cin>>mins;
	cout<<"\nEnter secs:";
	cin>>secs;
	}
	
	void Time::putTime()
	{
		cout<<"\nTime:"<<hrs<<":"<<mins<<":"<<secs;
	}
int main()
{
	Time t1;
	t1.getTime();
	t1.putTime();
	return 0;
}
