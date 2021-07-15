#include<bits/stdc++.h>
using namespace std;
#define int long long

void func(int n, int m, vector<int> &v){
	int mini = INT_MAX;
	for(int i = 0; i<n; i++){
		for(int j = i+1; j<n; j++){
			if(j!=i+m){
				mini = min(abs(v[j] - v[i]),mini);
			}
		}
	}
	cout<<mini<<endl;
}

int32_t main(){
	int t;
	cin>>t;
	int n,m, num;
	vector<int>v;
	v.reserve(n);
	while(t--){
		cin>>n>>m;
		v.clear();
		for(int i = 0; i<n; i++){
			cin>>num;
			v.emplace_back(num);
		}
		func(n,m, v);
	}
}