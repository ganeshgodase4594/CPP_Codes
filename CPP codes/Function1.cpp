#include<iostream>
using namespace std;

void sum()
{

    int a,b,sum;
    cout<<"Enter the value of a and b:";
    cin>>a>>b;

    sum=(a+b);

    cout<<"Enter The Value Of Sum:"<<sum<<endl;

}

void even_odd_no()

{
    int a;

    cout<<"\nEnter No:";
    cin>>a;

    if(a%2==0)
    {
        cout<<"\nNo Is Even:";

    }

    else
    {
        cout<<"\nNo Is Odd:";

    }
}

void prime_no()
{
    int n,m,flag=0;

    cout<<"\nEnter The prime number:";
    cin>>n;

    m=(n/2);

    for(int i=2;i<=m;i++)

    {
        if(n%i==0)

        {
        cout<<"\nno is not prime:";

        flag=1;
        break;

        }

        else

        {
            cout<<"\nno is prime:";
        }
    }

   



}



int main()


{
    sum();
    cout<<"Hello:";
    even_odd_no();
    cout<<"\nhi:";
    prime_no();
   
}