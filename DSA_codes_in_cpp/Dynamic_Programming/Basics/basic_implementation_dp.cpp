#include<bits/stdc++.h>
using namespace std;

// TOP-DOWN APPROACH OR MEMOIZATION

int fibo(int num, int* dp){
	if(dp[num]!=-1) return dp[num];
	dp[num] = fibo(num-1,dp) + fibo(num-2,dp);
	return dp[num];
}

// BOTTOM - UP APPROACH OR TABULATION

int fibo_tabu(int num, int* dp){
	for(int i = 2; i<= num; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[num];
}


int climbing_stair_memo(int num, int* dp){
	if (dp[num]) return dp[num];
	dp[num] = climbing_stair_memo(num-1, dp) + climbing_stair_memo(num-2, dp);
	return dp[num];
}

int climbing_stair_tabu(int num){
	if(num<=2) return num;
	int dp_t [3];
	dp_t[1] = 1;
	dp_t[2] = 2;
	for(int i = 3; i<=num; i++){
		int temp = dp_t[2] + dp_t[1];
		dp_t[1] = dp_t[2];
		dp_t[2] = temp; 
	}
	return dp_t[2];
}

//dp_t[1] = 3
//dp_t[2] = 5




int main(){
	int num;
	cin>>num;
	int dp[num+1];
	memset(dp,-1,sizeof(dp));
	dp[0] = 0;
	dp[1] = 1;
	for(int i = 0; i<=num; i++){
		cout<<dp[i]<<" ";
	}
	cout<<"\n";
	cout<<fibo(num,dp)<<"\n";
	cout<<fibo_tabu(num,dp)<<"\n";

	// int num;
	// cin>>num;
	// int dp[num+1] = {0};
	// dp[1] = 1;
	// dp[2] = 2;
	// cout<<climbing_stair_memo(num, dp)<<"\n";
	// cout<<climbing_stair_tabu(num)<<"\n";


}

// if(num==0) or if(!num)  //OPPOSITE
// if(num!=0) or if(num)



