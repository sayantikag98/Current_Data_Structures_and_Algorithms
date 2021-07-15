#include<bits/stdc++.h>
using namespace std;

float func(){
	
}

int main(){
	int val = 100;
	int* ptr = &val;
	int** double_ptr = &ptr;

	cout<<val<<endl;
	cout<<&val<<endl;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	cout<<&ptr<<endl;
	cout<<double_ptr<<endl;
	cout<<*double_ptr<<endl;
	cout<<**double_ptr<<endl;
	cout<<&double_ptr<<endl;
	cout<<*(&ptr)<<endl;
	cout<<*(&double_ptr)<<endl;
	cout<<sizeof(double_ptr)<<" "<<sizeof(ptr)<<endl;
	cout<<ptr<<" "<<++ptr<<" "<<--ptr<<endl;
	long long int x = 10000000000;
	long long int* lptr = &x;
	cout<<lptr<<" "<<++lptr<<" "<<--lptr<<endl;

	int* ptr1 = new int;
	cout<<ptr1<<" "<<*ptr1<<endl;

	ptr1 = new int(10);
	cout<<ptr1<<" "<<*ptr1<<endl;

	func();
}