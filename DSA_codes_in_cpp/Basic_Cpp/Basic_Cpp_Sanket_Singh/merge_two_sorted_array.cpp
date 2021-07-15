#include<bits/stdc++.h>
using namespace std;

int* func(int* arr1, int* arr2, int n, int m){
	int* ans = new int [m+n];
	int i = 0, j = 0, k = 0;
	while(i<n and j<m){
		if(arr1[i]<arr2[j]){
			ans[k++] = arr1[i++];
		}
		else{
			ans[k++] = arr2[j++];
		}
	}
	while(i<n){
		ans[k++] = arr1[i++];
	}
	while(j<m){
		ans[k++] = arr2[j++];
	}
	// delete[](ans);
	return ans;
}

int main(){
	int n, m;
	cin>>n>>m;
	int arr1[n], arr2[m];
	for(int i = 0; i<n; i++){
		cin>>arr1[i];
	}
	for(int i = 0; i<m; i++){
		cin>>arr2[i];
	}
	int* ans = func(arr1, arr2, n, m);
	for(int i = 0; i<(n+m); i++){
		cout<<ans[i]<<" ";
	}
	cout<<"\n";
}