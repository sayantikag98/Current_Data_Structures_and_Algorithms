#include<bits/stdc++.h>
using namespace std;

void func(int* arr, int n){
	int* ans = new int [n];
	for(int i = 0; i<n; i++){
		ans[arr[i]] = i;
	}
	for(int i = 0; i<n; i++){
		cout<<ans[i]<<" ";
	}
}

int main(){
	func(new int [5] {3, 4, 1, 2, 0},5);
}