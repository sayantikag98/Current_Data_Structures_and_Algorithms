#include<bits/stdc++.h>
using namespace std;

void merge(int* arr, int low, int mid, int high){
	int i = low, j = mid+1, k = 0;
	int n = high - low + 1;
	int ans [n];
	while(i<=mid and j<=high){
		if(arr[i]<=arr[j]){
			ans[k++] = arr[i++];
		}
		else{
			ans[k++] = arr[j++];
		}
	}
	while(i<=mid){
		ans[k++] = arr[i++];
	}
	while(j<=high){
		ans[k++] = arr[j++];
	}
	for(i = low; i<=high; i++){
		arr[i] = ans[i-low];
	}
}


void merge_sort(int* arr, int low, int high){
	if(low == high){
		return;
	}
	int mid = low + ((high - low)/2);
	merge_sort(arr, low, mid);
	merge_sort(arr, mid+1, high);
	merge(arr, low, mid, high);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}

	merge_sort(arr, 0, n-1);
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}