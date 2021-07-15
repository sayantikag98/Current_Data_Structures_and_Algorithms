#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int row = 1, n_sp = n-1, n_st = 1;
	while(row<=n){
		int val = 1;
		for(int i = 0; i<n_sp; i++){
			cout<<" \t";
		}
		for(int i = 0; i<n_st/2; i++){
			cout<<val<<"\t";
			val++;
		}
		for(int i = n_st/2; i<n_st; i++){
			cout<<val<<"\t";
			val--;
		}
		row++;
		n_sp--;
		n_st += 2;
		cout<<"\n";


	}
}