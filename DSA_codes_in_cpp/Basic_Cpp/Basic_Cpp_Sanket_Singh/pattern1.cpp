#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int row = 1, n_sp = n-1, n_st = 1;
	while(row<=n){
		for(int i = 0; i<n_sp; i++){
			cout<<" \t";
		}
		for(int i = 0; i<n_st; i++){
			cout<<"*\t";
		}
		row++;
		n_sp--;
		n_st+=2;
		cout<<"\n";
	}
}