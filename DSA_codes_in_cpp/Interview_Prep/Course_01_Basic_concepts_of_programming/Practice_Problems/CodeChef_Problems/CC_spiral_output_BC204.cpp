#include<bits/stdc++.h>
using namespace std;

void spiral_display(int** arr, int i, int n){
	if(i>=n) return;
	for(int k = i; k<n; k++){
		cout<<arr[i][k]<<" ";
	}
	for(int k = i+1; k<n; k++){
		cout<<arr[k][n-1]<<" ";
	}
	for(int k = n-2; k>=i; k--){
		cout<<arr[n-1][k]<<" ";
	}
	for(int k = n-2; k>=i+1; k--){
		cout<<arr[k][i]<<" ";
	}
	spiral_display(arr, i+1, n-1);
}

int main(){
	int n;
	cin>>n;
	int **arr = new int* [n];
	for(int i = 0; i<n; i++){
		arr[i] = new int [n];
		for(int j = 0; j<n; j++){
			cin>>arr[i][j];
		}
	}

	spiral_display(arr, 0, n);
}