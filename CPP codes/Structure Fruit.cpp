/*Array of structure variable; define a structure that represents fruit with properties ;
fruit name,fruit type,fruit color.write a program that accept data of four frits and display the result
*/
#include<iostream>
using namespace std;
struct Fruit
{
	char fruit_name[20];
	char fruit_type[20];
	char fruit_color[20];
};
int main()
{
	struct Fruit f1,f2,f3,f4;
	cout<<"Enter fruit name:";
	cin>>f1.fruit_name;
	cout<<"\nEnter fruit type:";
	cin>>f1.fruit_type;
	cout<<"\nEnter fruit color:";
	cin>>f1.fruit_color;
	cout<<"Enter fruit name:";
	cin>>f2.fruit_name;
	cout<<"\nEnter fruit type:";
	cin>>f2.fruit_type;
	cout<<"\nEnter fruit color:";
	cin>>f2.fruit_color;
	cout<<"Enter fruit name:";
	cin>>f3.fruit_name;
	cout<<"\nEnter fruit type:";
	cin>>f3.fruit_type;
	cout<<"\nEnter fruit color:";
	cin>>f3.fruit_color;
	cout<<"Enter fruit name:";
	cin>>f4.fruit_name;
	cout<<"\nEnter fruit type:";
	cin>>f4.fruit_type;
	cout<<"\nEnter fruit color:";
	cin>>f4.fruit_color;
	
	cout<<"\n********************************************************:";
	cout<<"\n***************Godase Fruit Stall***********************:";
	cout<<"\nName\tType\tcolor";
	cout<<"\n_________________________________________________";
	cout<<"\n"<<f1.fruit_name<<"\t"<<f1.fruit_type<<"\t"<<f1.fruit_color;
	cout<<"\n"<<f2.fruit_name<<"\t"<<f2.fruit_type<<"\t"<<f2.fruit_color;
	cout<<"\n"<<f3.fruit_name<<"\t"<<f3.fruit_type<<"\t"<<f3.fruit_color;
	cout<<"\n"<<f4.fruit_name<<"\t"<<f4.fruit_type<<"\t"<<f4.fruit_color;
return 0;	
}



