//write a c++Lang Program to implement Arithmeticusing pointer;
#include<iostream>
using namespace std;
int main()
{ 
int a=420;
int *p;
p=&a;
cout<<"\nEnter value of p before decrementation:"<<p;
p--;
cout<<"\nEnter value of after decremenation:"<<p;
return 0;
}
