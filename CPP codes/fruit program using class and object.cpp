#include<iostream>
using namespace std;

	class fruit
{
public:
	string name;
	string colour;
	int price;
	string taste; 
	


void details()
{
cout<<"\nthe fruit name is "<<name<<"  and its colours is "<<colour;
cout<<"\nthe fruit price is "<<price<<" and its test is "<<taste;
}
};

	
int main()
{
fruit f1;
f1.colour="pink";
f1.name="mango";
f1.price=350;
f1.taste="sweet";

f1.details();
	
	return 0;
}

