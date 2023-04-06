 
#include<iostream>
#include<string.h>
using namespace std;
struct Staff
{
	char Staff_name[20];
	char Staff_post[20];
	float Staff_salary;
};
int main()
{
	struct Staff s[40
	];
	int i,N;
	cout<<"\nHow much staff do you want to enter:";
	cin>>N;
	for(int i=0;i<N;i++)
	{
	cout<<"Enter Staff name:";
	cin>>s[i].Staff_name;
	cout<<"\nEnter Staff Post:";
	cin>>s[i].Staff_post;
	cout<<"\nEnter Staff salary:";
	cin>>s[i].Staff_salary;	
	}
	
	cout<<"\n********************************************************:";
	cout<<"\n***************Godase staff Managment***********************:";
	cout<<"\nName\tpost\tsalary";
	cout<<"\n_________________________________________________";
	for(int i=0;i<N;i++)
	{
	if(strcmp(s[i].Staff_post,"HOD")==0)
	cout<<"\n"<<s[i].Staff_name<<"\t"<<s[i].Staff_post<<"\t"<<s[i].Staff_salary;
	}
return 0;	
}



