#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	while(true){
	RAND_MAX;
	string confession;
	getline(cin,confession);
	int b=rand();
	string arr[5]={"Ganesh","Arbaj","Aniket","Animesh","Abhishek"};
	if(b<100)
	cout<<arr[0]<<endl;
	else if(b>=100&& b<=500)
	cout<<arr[1]<<endl;
	else if(b>500&&b%2==0)
	cout<<arr[2];
	else if(b<500&&b%2!=0)
	cout<<arr[3];
	else if(b<1000&&b>500)
	cout<<arr[4];
}
}
