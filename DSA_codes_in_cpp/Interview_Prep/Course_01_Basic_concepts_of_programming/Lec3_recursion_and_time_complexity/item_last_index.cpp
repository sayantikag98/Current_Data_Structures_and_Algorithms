#include<bits/stdc++.h>
using namespace std;

int last_ind(int* arr, int i, int item, int n){
	if(i == n){
		return -1;
	}
	int ans = last_ind(arr, i+1, item, n);
	if(ans == -1 and item == arr[i]){
		return i;
	}
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
	cout<<last_ind(arr, 0, item, n)<<endl;
}