 // function:call by refrence/address:
 #include<iostream>
using namespace std;

void vjtech(int *x);      //function declaration

int main()
{
	int a=100;
	cout<<"\nBefore calling function value of a="<<a;
	vjtech(&a);     //calling function; call by value       a means=> actual argument
	cout<<"\nAfter calling function,value of a="<<a;
	
	return 0;
}
void vjtech(int *x)   // function defination    x means=> format parameter
{
	*x=*x+200;
} 
