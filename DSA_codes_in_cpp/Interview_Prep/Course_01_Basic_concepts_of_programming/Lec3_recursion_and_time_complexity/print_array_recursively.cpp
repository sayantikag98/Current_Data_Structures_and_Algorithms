#include<bits/stdc++.h>
using namespace std;

void func(int* arr, int n){
	if(n==0){
		return;
	}
	func(arr, n-1);
	cout<<arr[n-1]<<" ";
}


int main(){
	int n;
	cin>>n;
	int* arr = new int [n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	func(arr, n);
}