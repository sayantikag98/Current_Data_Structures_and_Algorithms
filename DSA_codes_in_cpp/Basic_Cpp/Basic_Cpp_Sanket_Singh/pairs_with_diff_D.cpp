#include<bits/stdc++.h>
using namespace std;

void func(int* arr, int n, int d){
	int tar, lo, hi, mid, count = 0;
	for(int i = 0; i<n-1; i++){
		tar = d + arr[i];
		lo = i+1;
		hi = n-1;
		while(lo<=hi){
			mid = lo + ((hi-lo)/2);
			if(arr[mid] == tar){
				cout<<arr[i]<<" "<<arr[mid]<<"\n";
				count++;
				break;
			}
			else if(arr[mid]>tar){
				hi = mid-1;
			}
			else{
				lo = mid+1;
			}
		}
	}
	cout<<count<<endl;
}

int main(){
	int n,d;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	cin>>d;
	func(arr, n, d);
}