#include<bits/stdc++.h>
using namespace std;

void swap(int* arr, int i, int j);


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	int low = 0, mid = 1, high = n-1;
	while(mid<=high){
		if(arr[mid] == 1) mid++;
		else if(arr[mid] == 0){
			if(arr[low] == 0) low++;
			else if(arr[low] == 1){
				swap(arr, low, mid);
				mid++; low++;
			}
			else{
				swap(arr, mid, low);
				low++;
			}
		}
		else{
			if(arr[high] == 0){
				swap(arr, mid, high);
				high--;
			}
			else if(arr[high] == 1){
				swap(arr, mid, high);
				mid++; high--;
			}
			else{
				high--;
			}
		}
	}
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}


void swap(int* arr, int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}