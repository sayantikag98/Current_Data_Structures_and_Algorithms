#include<bits/stdc++.h>
using namespace std;


int main(){
	bool choice;
	cout<<"Enter the value of choice\n";
	cin>>choice;
	int a, b;
	double ans = 0;
	char operand;
	while(choice){
		cout<<"Enter the numbers:\n";
		cin>>a>>b;
		cout<<"Enter the operator:\n";
		cin>>operand;
		switch(operand){
			case('+'): ans = a+b;
					cout<<"The ans is "<<ans<<endl;
					break;
			case('-'): ans = a-b;
					cout<<"The ans is "<<ans<<endl;
					break;
			case('*'): ans = a*b;
					cout<<"The ans is "<<ans<<endl;
					break;
			case('/'): ans = a/b;
					cout<<"The ans is "<<ans<<endl;
					break;
			case('^'): ans = (a^b);
					cout<<"The ans is "<<ans<<endl;
					break;
			default: cout<<"Enter a valid operand\n";
		}
		cout<<"Enter the value of choice\n";
		cin>>choice;


	}
}