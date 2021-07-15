#include<bits/stdc++.h>
using namespace std;

vector<int> all_index(int* arr, int i, int n, int item, vector<int> &ans){
	if(i == n){
		return ans;
	}
	if(arr[i] == item){
		ans.push_back(i);
	}
	ans = all_index(arr, i+1, n, item, ans);
	return ans;
}

int main(){
	int n, item;
	cin>>n;
	int* arr = new int [n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	cin>>item;
	vector<int> ans;
	ans = all_index(arr, 0, n, item, ans);
	for(int i = 0; i<ans.size(); i++){
		cout<<ans[i]<<" ";
	}
	cout<<"\n";
}