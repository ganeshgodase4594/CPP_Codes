//Write a program to delcare class'city' with data members cityname and state.
#include<iostream>
using namespace std;
class city
{
	private:
	char city_name[30];
	char state_name[30];
	public:
		void get_city_info()
		{
			cout<<"Enter city name";
			cin>> city_name;
			cout<<"\nEnter state name";
			cin>> state_name;
		}
		void disp_city_info()
		{
			cout<<"\n"<<city_name<<"\t"<<state_name;
		}
};
int main()

{
	city c1,c2,c3;
	c1.get_city_info();
	c2.get_city_info();
	c3.get_city_info();
	cout<<"***********state and city******************";
	cout<<"\ncity\tstate";
	c1.disp_city_info();
	c2.disp_city_info();
	c3.disp_city_info();
	return 0;
 } 
