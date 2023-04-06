#include<iostream>
using namespace std;


int main(){

        string task[5]={"Eat","brush","wake up","sleep","study"};
        int priority[5]={3,2,1,5,4};

		string schedule[5]={};

for(int i=0;i<5;i++)
{
	schedule[priority[i]-1]=task[i];
}
for(int i=0;i<5;i++)
{
	cout<<i+1<<"-"<<schedule[i]<<endl;
}

    return 0;
}
