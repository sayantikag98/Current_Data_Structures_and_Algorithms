#include<bits/stdc++.h>
using namespace std;

int func_memo(int n, vector<int>&dp){
	if(dp[n] == -1) dp[n] = func_memo(n-1, dp) + func_memo(n-2, dp);
	return dp[n];

}

int func_tabu(int n){
	vector<int> dp(n+1, -1);
	dp[0] = 0;
	dp[1] = 1;
	for(int i = 2; i<=n; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n];
}



int main(){
	int n;
	cin>>n;
	vector<int> dp (n+1, -1);
	dp[0] = 0;
	dp[1] = 1;
	cout<<func_memo(n, dp)<<endl;
	cout<<func_tabu(n)<<endl;
}