#include<bits/stdc++.h>
using namespace std;

void func(int* A, int* B, int n, int m){
	int res[m];
	int p = 0, q = 0, count = 0;
	while(q<m and p<n){
		if(A[p]<=B[q]) {
			count++;
			p++;
		}
		else res[q++] = count;
	}
	while(q<m){
		res[q++] = count;
	}
	for(int i = 0; i<m; i++){
		cout<<res[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	int n, m;
	cin>>n>>m;
	int A[n], B[m];
	for(int i = 0; i<n; i++){
		cin>>A[i];
	}
	for(int i = 0; i<m; i++){
		cin>>B[i];
	}
	func(A, B, n, m);
}