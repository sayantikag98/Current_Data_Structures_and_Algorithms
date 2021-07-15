#include<bits/stdc++.h>
using namespace std;

void func(int* arr, int n){
	int x = 0;
	for(int i = 0; i<n; i++){
		x^=arr[i];
	}
	int dig = 0;
	dig = (x ^ (x & (x - 1)));
	int xor_ans1 = 0, xor_ans2 = 0;
	for(int i = 0; i<n; i++){
		if((arr[i] & dig) == 0){
			xor_ans1 ^= arr[i];
		}
		else{
			xor_ans2 ^= arr[i];
		}
	}
	cout<<xor_ans1<<" "<<xor_ans2<<endl;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	func(arr, n);
}