#include<bits/stdc++.h>
using namespace std;

int val;

int func(int* arr, int n, vector<int> &dp){
	if(dp[n] != -1) {
		val = arr[n-1];
		return dp[n];
	}

	int len = func(arr, n-1, dp);
	if(val<=arr[n-1]) {
		len++;
		val = arr[n-1];
	}
	dp[n] = len;
	return dp[n];
}

int func_tabu(int* arr, int n){
	if(n==1 or n==0) return n;
	int len_current = 1;
	int lon_sub = arr[0];
	for(int i = 1; i<n; i++){
		if(arr[i]>=lon_sub){
			len_current++;
			lon_sub = arr[i];
		}
	}
	return len_current;

}



int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	vector<int> v(n+1,-1);
	v[0] = 0;
	v[1] = 1;
	cout<<func(arr, n, v)<<endl;
	cout<<func_tabu(arr, n)<<endl;

}


