#include<bits/stdc++.h>
using namespace std;

void swap(int* arr, int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void func(int* arr, int n){
	int ran = floor((n-1)/2);
	for(int i = 0; i<=ran; i++){
		swap(arr, i, n-i-1);
	}
}

int main(){
	int n; cin>>n;
	int* arr = new int [n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	func(arr, n);
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}