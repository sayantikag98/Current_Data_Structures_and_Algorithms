#include<bits/stdc++.h>
using namespace std;


int main(){
	int n; cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	int left = 0, right = n-1;
	while(left<=right){
		if(arr[left] == 1 and arr[right] == 0){
			arr[left] = 0;
			arr[right] = 1;
			left++;
			right--;
		}
		else if(arr[left] == 1 and arr[right] == 1){
			right--;
		}
		else if (arr[left] == 0 and arr[right] == 0){
			left++;
		}
		else{
			left++;
			right--;
		}
	}
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}