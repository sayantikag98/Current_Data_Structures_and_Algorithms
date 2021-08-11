#include<bits/stdc++.h>
using namespace std;

void printSubsequences(int* arr, int ind, int n, int k, int sum, vector<int>&ans){
	if(ind==n){
		if(!(sum%k)){
			for(int &i: ans){
				cout<<i<<" ";
			}
			cout<<endl;
		}
		return;
	}

	ans.emplace_back(arr[ind]);
	sum+=arr[ind];
	printSubsequences(arr, ind+1, n, k, sum, ans);
	ans.pop_back();
	sum-=arr[ind];
	printSubsequences(arr,ind+1, n, k, sum, ans);
}

int main(){
	int n,k;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	cin>>k;
	vector<int>v;
	printSubsequences(arr,0,n,k,0,v);
}