// Array Of Object
#include<iostream>
using namespace std;
class Car
{
	private:
		int Car_No;
		char Car_Name[20];
		char Car_Color[20];
		char Car_Company[20];
		int Car_Price;
	
	public:
		void get_Car_Details()
		{
			cout<<"\nEnter Car No:";
			cin>>Car_No;
			cout<<"\nEnter Car Name:";
			cin>>Car_Name;
			cout<<"\nEnter Car Color:";
			cin>>Car_Color;
			cout<<"\nEnter Car Company:";
			cin>>Car_Company;
			cout<<"\nEnter Car price:";
			cin>>Car_Price;
		}
		
		void disp_Car_Details()
		{
			cout<<"\n"<<Car_No<<"t"<<Car_Name<<"t"<<Car_Color<<"t"<<Car_Company<<"t"<<Car_Price;
		}
};
int main()
{
	Car c[5];
	for(int i=0;i<5;i++)
	{
		c[i].get_Car_Details();
	}
	cout<<"\n***********************************************";
	cout<<"\n**********Ganesh Godase************************";
	cout<<"\nCar_No\tCar_Name\tCar_color\tCar_Company\tCar_Price";
	
	for(int i=0;i<5;i++)
	{
		c[i].disp_Car_Details();
	}
	return 0;
}
