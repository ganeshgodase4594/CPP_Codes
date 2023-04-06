// #include<iostream>
// using namespace std;

// void sum();    // function declaration




// int
//  main()


// {
//     sum();     //function calling


// }

// void sum()     //function definition
// {

//     int a,b,sum=0;
//     cout<<"Enter the value of a and b:";
//     cin>>a>>b;

//     sum=(a+b);

//     cout<<"Enter The Value Of Sum:"<<sum<<endl;

// }





// #include<iostream>
// using namespace std;

// void sum();    // function declaration




// int main()


// {
//     sum();     //function calling


// }

// void sum(5,4)     //function definition
// {

//     int a,b,sum=0;
//     cout<<"Enter the value of a and b:";
//     cin>>a>>b;

//     sum=(a+b);

//     cout<<"Enter The Value Of Sum:"<<sum<<endl;

// }


#include<iostream>
using namespace std;


int add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}

int main()
{
    int a=5;
    int b=5;

    cout<<add(a,b)<<endl;
}

