#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
	int test, n, p, k;
	cin>>test;
	while(test--){
		cin>>n>>p>>k;
		int rem = ((n-1)%k)+1;
		int quo = ((n-1)/k)+1;
		int ele_left = k - rem;
		int cat_left = quo-1;
		int rem_ans = (p%k)+1;
		int cat_ans = (p/k)+1;
		int ans = 0;
		if(cat_ans<=cat_left){
			if(rem_ans<=((k-ele_left)+1)){
				ans = cat_ans + ((rem_ans-1)* quo);
			}
			else{
				ans = cat_ans + ((k-ele_left) * quo);
				ans += ((rem_ans - ((k-ele_left)+1)) * cat_left);
			}
		}
		else{
			ans = cat_ans + ((rem_ans - 1) * quo);
		}
		cout<<ans<<endl;
	}
}