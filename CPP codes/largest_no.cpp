#include<iostream>
using namespace std;
int main()
{
    int i;
   
    int a[]={8,10,5,7,9};

    int max =a[0],temp;

    for(int i=0;i<5;i++)
    {
        
        if(a[i] >=max)
        {
            temp =a[i];
            max= a[i];

        }
       
    }
    
    cout<<"\nMaximum Value is"<<max;


    return 0;
}


