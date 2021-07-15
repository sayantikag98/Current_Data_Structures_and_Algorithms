#include<bits/stdc++.h>
#define int long long
using namespace std;

int func_memo(int n, vector<int> &v, vector<int> &dp){
	if(n==1) return v[0];
	if(n==2) return max(v[0], v[1]);
	if(dp[n] != -1) return dp[n];
	dp[n] = max(func_memo(n-1, v, dp), func_memo(n-2, v, dp) + v[n-1]);
	return dp[n];
}

int32_t main(){
	int t, n;
	vector<int> v;
	cin>>t;
	while(t--){
		cin>>n;
		v.resize(n);
		vector<int> dp(n+1, -1);
		for(int i = 0; i<n; i++){
			cin>>v[i];
		}
		cout<<func_memo(n, v, dp)<<endl;
	}
}