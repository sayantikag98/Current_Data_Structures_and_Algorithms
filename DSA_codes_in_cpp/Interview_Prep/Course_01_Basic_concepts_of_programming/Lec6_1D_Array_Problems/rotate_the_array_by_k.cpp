#include<bits/stdc++.h>
using namespace std;


void func(int* arr, int n, int k){
	if(k>=n) k%=n;
	if(k<0) k = n + k;

	reverse(arr, arr+n);
	reverse(arr, arr+k);
	reverse(arr+k, arr+n);

	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";

	// TC --> O(n)

}

int main(){
	int n, k;
	cin>>n;
	int* arr = new int [n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	cin>>k;
	func(new int[5]{1,2,3,4,5}, 5, 2);//new way of passing array - array declared and initialized while calling functions
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";

	// cout<<-7%10<<endl;

}


// func(new int [6]{1,2,3,4,5,6});