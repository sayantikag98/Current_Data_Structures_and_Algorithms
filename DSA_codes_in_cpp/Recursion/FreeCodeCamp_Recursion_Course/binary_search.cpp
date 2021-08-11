#include<bits/stdc++.h>
using namespace std;

void binary_search(int* arr, int low, int high, int k){
	if(low > high){
		cout<<"Not Found\n";
		return;
	}
	int mid = low + ((high - low)/2);
	if(arr[mid] == k){
		cout<<"found "<<k<<" at "<<mid<<" index\n";
		return;
	}
	else if(arr[mid]>k) binary_search(arr, low, mid-1, k);
	else binary_search(arr, mid+1, high, k);
}


int main(){
	int n,k;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	cin>>k;
	binary_search(arr, 0, n-1, k);
}