#include<bits/stdc++.h>
using namespace std;

void printSubsequences(int* arr, int ind, int n, vector<int>&ans){
	if(ind == n){
		for(int &i:ans){
			cout<<i<<" ";
		}
		cout<<"\n";
		return;
	}
	ans.emplace_back(arr[ind]);
	printSubsequences(arr, ind+1, n, ans);
	ans.pop_back();
	printSubsequences(arr, ind+1, n, ans);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	vector<int>v;
	printSubsequences(arr, 0, n, v);
}