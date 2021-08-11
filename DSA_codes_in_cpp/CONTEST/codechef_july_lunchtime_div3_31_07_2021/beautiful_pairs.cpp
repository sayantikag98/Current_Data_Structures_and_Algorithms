#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int arr[n];
		map<int,int> m;
		for(int i = 0; i<n; i++){
			cin>>arr[i];
			m[arr[i]]++;
		}
		int sub = 0;
		for(auto [key,value] : m){
			sub +=(value*(value-1));
		}
		cout<<(n*(n-1))-sub<<endl;
	}
}

