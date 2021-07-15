#include<bits/stdc++.h>
using namespace std;

int prefix[4];
int suffix[4];

int* func(int* arr, int n){
	prefix[0] = arr[0];
	suffix[n-1] = arr[n-1];
	for(int i = 1; i<n; i++){
		prefix[i] = prefix[i-1]*arr[i];
	}
	for(int i = n-2; i>=0; i--){
		suffix[i] = suffix[i+1] * arr[i];
	}
	int *ans = new int[n];
	ans[0] = suffix[1];
	ans[n-1] = prefix[n-2];
	for(int i = 1; i<n-1; i++){
		ans[i] = prefix[i-1] * suffix[i+1];
	}
	return ans;

}



int main(){
	int* ans = func(new int [4]{1,2,3,4},4);
	for(int i=0; i<4; i++){
		cout<<ans[i]<<" ";
	}
	cout<<"\n";

}