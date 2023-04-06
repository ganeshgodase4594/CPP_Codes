#include<iostream>
using namespace std;

int main(){
	
	string task[5]={"eat","wake up","sleep","brush","study"};
	int priority[5]={3,1,5,2,4};
	
	string ganesh[5]={};
	
	for(int i=0;i<=5;i++)
	{
	ganesh[priority[i]-1]=task[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<ganesh[i]<<endl;
	}
	return 0;
	
}
