#include<bits/stdc++.h>
using namespace std;

int func(int* arr, int n){
	if(n==1){
		return arr[0];
	}
	int max_num = func(arr, n-1);
	max_num = max(max_num, arr[n-1]);
	return max_num;

}

int main(){
	int n;
	cin>>n;
	int* arr = new int [n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	cout<<func(arr, n)<<endl;
}