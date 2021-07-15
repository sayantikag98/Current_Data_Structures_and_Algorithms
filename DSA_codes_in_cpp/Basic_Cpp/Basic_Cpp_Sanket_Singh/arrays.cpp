#include<bits/stdc++.h>
using namespace std;

void func(int** arr, int n, int m){
	// cout<<n<<m<<endl;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}


int main(){
	int n, m;
	cin>>n>>m;
	int** arr = new int* [n];
	for(int i = 0; i<n; i++){
		arr[i] = new int [m];
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			cin>>arr[i][j];
		}
	}
	func(arr, n, m);
}