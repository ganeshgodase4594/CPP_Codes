#include<iostream>
using namespace std;
 int main()
 {
 	char opr;
 	int num1,num2;
 	cout<<"\nEnter Opreator Like +,-,*,/:";
 	cin>>opr;
 	cout<<"\nEnter Two Numbers:";
 	cin>>num1>>num2;
 	
 	switch(opr)
 	{
 		case '+':
 			cout<<"\nAddition Of Two Numbers:"<<num1+num2;
 			break;
 			
 		case '-':
		    cout<<"\nSubtraction Of Two Numbers:"<<num1-num2;
			break;	
 		
		 case '*':
		    cout<<"\nMultiplication Of Two Numbers:"<<num1*num2;
			break;
			
		case '/':
		    cout<<"\nDivision Of Two Numbers:"<<num1/num2;
			break;
		
		default:
		    cout<<"\nError! Your Opreator Is Incorrect:";
			break;		
	 }
 	return 0;
 }

