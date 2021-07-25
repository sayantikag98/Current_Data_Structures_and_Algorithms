#include<bits/stdc++.h>
using namespace std;

vector<int> v;

void subsetSum(int* arr, int ind, int n, int csum){
	if(ind==n){
		v.push_back(csum);
		return;
	}
	subsetSum(arr, ind+1, n, csum + arr[ind]);
	subsetSum(arr, ind+1, n, csum);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	subsetSum(arr, 0, n, 0);

	for(int &i:v){
		cout<<i<<" ";
	}
	cout<<endl;
}