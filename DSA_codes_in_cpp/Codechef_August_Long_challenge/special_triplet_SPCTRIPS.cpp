#include<bits/stdc++.h>
using namespace std;

int numFunc(int n, vector<int> &v){
	if(v[n-3]!=0)

}

int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		vector<int>v(n+1, 0);
		v[2] = 1;
		v[3] = 3;
		v[4] = 6;
		numFunc(n, v);
	}
}