#include<bits/stdc++.h>
using namespace std;

vector<int> printPermutations(int* arr, int ind, int n){
	if(ind==n){
		vector<int>v;
		return v;
	}
	vector<int> ans = printPermutations(arr, ind+1,n);
	for(int i = 0; i<ans.size(); i++)
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	printPermutations(arr,0,n);
}