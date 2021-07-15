#include<bits/stdc++.h>
using namespace std;

void func(int* arr){
	int siz = sizeof(arr)/sizeof(arr[0]);
	cout<<siz<<endl;
	for(int i = 0; i<siz; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int sum_func(int a, int b){
	return a+b;
}
// bool sum_func(int a, int b){
// 	return (a+b)>0;
// }

int main(){
	int a = 10, b = 20;
	int ans = sum_func(a,b);

	func(new int [3]);

	int arr[3] = {};
	for(int i = 0; i<3; i++){
		cout<<arr[i]<<" ";
	} 
	cout<<endl;




}