#include<stdio.h>
int main(void)
{
	int a=13;
	a=a++ + a++;;
	
	int b=13;
	b=b++ + ++b;
	printf("%d %d",a,b);
	return 0;
}
