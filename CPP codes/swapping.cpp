#include<iostream>
using namespace std;
int main()
{
    int *a,*b , temp,x,y;

    cout<<"Enter the value of the x and y : ";
    cin>>x>>y;

    a=&x;
    b=&y;

    cout<<"\nThe value before swaping:"<<*a<<"\n"<<*b;

    temp = *a;
    *a = *b;
    *b= temp;

    cout<<"\nThe value after swaping:"<<*a<<"\n"<<*b;





    }