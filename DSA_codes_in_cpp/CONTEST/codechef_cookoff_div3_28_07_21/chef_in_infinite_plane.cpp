#include<bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main(){
	int t;
	cin>>t;
	int n;
	
	while(t--){
		cin>>n;
		int ele;
		map <int, int> m;
		for(int i = 0; i<n; i++){
			cin>>ele;
			m[ele]++;
		}
		int ans = 0;
		for(auto [val, freq_count]:m){
			ans += min(val-1, freq_count);
		}
		cout<<ans<<"\n";
	}
}