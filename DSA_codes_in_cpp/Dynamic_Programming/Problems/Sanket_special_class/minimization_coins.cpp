#include<bits/stdc++.h>
using namespace std;



int minimizing_coins(int n_coins, int target_sum, int* coins, vector<int> &dp){
	if(dp[target_sum] != -2) return dp[target_sum];

	int min_amt = INT_MAX;
	
	for(int iter = 0; iter <n_coins; iter++){
		if(target_sum>=coins[iter]){
			min_amt = min(1+minimizing_coins(n_coins, target_sum - coins[iter], coins, dp), min_amt);
		}
	}
	cout<<min_amt<<endl;
	dp[target_sum] = min_amt;
	return dp[target_sum];
}

int main(){
	int n_coins, target_sum;
	cin>>n_coins>>target_sum;
	int coins[n_coins];
	for(int iter = 0; iter<n_coins; iter++){
		cin>>coins[iter];
	}
	vector<int>dp(target_sum+1,-2);
	dp[0]=0;


	cout<<minimizing_coins(n_coins, target_sum, coins, dp)<<"\n";
}


