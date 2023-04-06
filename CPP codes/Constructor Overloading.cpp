/* write a c++ proramm to take class 'product' having data members prod_id,prod_name,prod_price.
Accept and display data for 3 products using constructor overloading.
*/
#include<iostream>
#include<string.h>
using namespace std;
class product
{
	private:
		int prod_id;
		char prod_name[20];
		int prod_price;
	
	public:
		product()
	{
		prod_id=4656;
		strcpy(prod_name,"pencil");   //strcpy= string copy 
		prod_price=546;
	}
	
	product(int id)
	{
		prod_id=id;
		strcpy(prod_name,"notebook");
		prod_price=3452;
	}
	
	product(int id,char name[30],float price)
	{
		prod_id=id;
		strcpy(prod_name,name);
		prod_price=price;
	}
	
	void disp_prod_info()
	{
		cout<<"\n"<<prod_id<<"\t"<<prod_name<<"\t"<<prod_price;
	}
	
};
int main()
{
	product p1;
	product p2(6653);
	product p3(5342,"shopnar",634);
	cout<<"\n*******************************************************:";
	cout<<"\n***********Ganesh Dada Ejucaion Showroom****************:";
	cout<<"\nProd_id\tprod_name\tprod_price";
	p1.disp_prod_info();
	p2.disp_prod_info();
	p3.disp_prod_info();
	
	
	
	return 0;
}
