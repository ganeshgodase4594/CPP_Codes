/*
pointer to string :dispaly string usig pointer
*/
#include<iostream>
using namespace std;
int main()
{
	char str[20];
	char *ptr;
	
     cout<<"\nEnter Any string:";
     cin.getline(str,20);
     cin>>str;
     ptr=&str[0];
     cout<<"\nYour String is";
     while(*ptr!='\0')
     {
     	cout<<*ptr;
     	ptr++;
	 }
	return 0;
}
