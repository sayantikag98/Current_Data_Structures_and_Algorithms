#include<bits/stdc++.h>
using namespace std;


void func(int* arr, int n, int s){
	int target, lo, hi, sum;
	for(int i = 0; i<n-2; i++){
		if(s-arr[i]>0){
			target = s - arr[i];
			lo = i+1;
			hi = n-1;
			while(lo<hi){
				sum = arr[lo] + arr[hi];
				if(sum == target){
					cout<<"Pair Found\n";
					cout<<arr[i]<<" "<<arr[lo]<<" "<<arr[hi]<<"\n";
					return;
				}
				else if (sum> target){
					hi--;
				}
				else{
					lo++;
				}
			}

		}

	}
}

int main(){
	int n,s;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	cin>>s;
	func(arr, n, s);
}