#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	int i=100;
	
	while (i<2000){
		Beep(i,700);
		i+=100;
		
	}
	Beep(400,2000);
}
