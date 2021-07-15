#include<bits/stdc++.h>
#define int long long
using namespace std;

void func(int* arr, int n){
	sort(arr, arr+n);
	int min_diff = INT_MAX;
	for(int i = 1; i<n; i++){
		int diff = arr[i] - arr[i-1];
		if(diff<min_diff) min_diff = diff;
	}
	cout<<min_diff<<endl;
}


int32_t main(){
	int test,n;
	cin>>test;
	while(test--){
		cin>>n;
		int arr[n];
		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}
		func(arr, n);
	}
}