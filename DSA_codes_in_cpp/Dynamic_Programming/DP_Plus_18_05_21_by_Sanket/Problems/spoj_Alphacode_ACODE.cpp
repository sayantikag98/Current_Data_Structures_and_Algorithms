#include<bits/stdc++.h>
#define int long long
using namespace std;

int func(string &s, int n){
	if(n == 0 or n == 1) return n;
	vector<pair<pair<int, char>, int>> dp(n+1);
	dp[1].first.first = 1;
	dp[1].first.second = s.at(0);
	dp[1].second = 0;

	for(int i = 2; i<=n; i++){
		int sub = dp[i-1].first.second - 48;
		if((sub == 1 and (s.at(i-1)-48)>0) or (sub == 2 and (s.at(i-1)-48)<7)){
			dp[i].second = dp[i-1].first.first;	
			dp[i].first.first = dp[i-1].first.first + dp[i-1].second;
			dp[i].first.second = s.at(i-1);	
		}
		else if((sub == 2 and (s.at(i-1)-48)>=7) or (sub > 2 and (s.at(i-1)-48)>0)){
			dp[i].second = 0;	
			dp[i].first.first = dp[i-1].first.first + dp[i-1].second;
			dp[i].first.second = s.at(i-1);
		}
		else if(sub == 0 and s.at(i-1)-48 == 0){
			dp[i].second = 0;	
			dp[i].first.first = 0;
			dp[i].first.second = s.at(i-1);
		}
		else if(sub > 0 and sub<3 and s.at(i-1)-48 == 0){
			// cout<<"Hi\n";
			dp[i].second = dp[i-1].first.first;	
			dp[i].first.first = 0;
			dp[i].first.second = s.at(i-1);
		}
		else if(sub >= 3 and s.at(i-1)-48 == 0){
			dp[i].second = 0;	
			dp[i].first.first = 0;
			dp[i].first.second = s.at(i-1);
		}
		else if(sub == 0 and s.at(i-1)-48 > 0){
			dp[i].second = 0;	
			dp[i].first.first = dp[i-1].second;
			dp[i].first.second = s.at(i-1);
		}

	}
	return dp[n].first.first + dp[n].second;

}

// pair<int, int> func(string &s, int n, int i, vector<pair<pair<int, char>, int>> &dp){
// 	if(n==1) return make_pair(0,1);
// 	if(i>n) return;
// 	if(dp[i].first.first != -1 and dp[i].first.second != 'S' and dp[i].second != -1){
// 		return make_pair(dp[i].first.first, dp[i].second);
// 	}
// 	int sub = dp[i-1].first.second - 48;
// 	pair<int, int> p = func(s, n, i+1, dp);
// 	if(sub == 1){
		
// 		dp[i].second = p.first;	
// 		dp[i].first.first = p.first + p.second;
// 		dp[i].first.second = s.at(i-1);	
// 	}
// 	else if(sub == 2 and (s.at(i-1)-48)<7) {
		
// 		dp[i].second = p.first;	
// 		dp[i].first.first = p.first + p.second;
// 		dp[i].first.second = s.at(i-1);
// 	}
// 	else if(sub == 2 and (s.at(i-1)-48)>=7){
		
// 		dp[i].second = 0;	
// 		dp[i].first.first = p.first + p.second;
// 		dp[i].first.second = s.at(i-1);
// 	}
// 	else if(sub > 2){
		
// 		dp[i].second = 0;	
// 		dp[i].first.first = p.first + p.second;
// 		dp[i].first.second = s.at(i-1);
// 	}
// 	return make_pair(dp[i].first, dp[i].second);

// }


int32_t main(){
	string s;
	while(cin>>s){
		if(s == "0") continue;
		int n = s.size();
		// vector<pair<pair<int, char>, int>> dp (n+1);
		// for(int i = 0; i<=n; i++){
		// 	dp[i].first.first = -1;
		// 	dp[i].first.second = 'S';
		// 	dp[i].second = -1;
		// }
		// dp[1].first.first = 1;
		// dp[1].first.second = s.at(0);
		// dp[1].second = 0;

		// for(int i = 0; i<=n; i++){
		// 	cout<<dp[i].first.first<<" "<<dp[i].first.second<<" "<<dp[i].second<<endl;
		// }
		cout<<func(s, n)<<endl;
	}

}