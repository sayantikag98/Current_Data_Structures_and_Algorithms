#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
	int test;
	cin>>test;
	while(test--){
		int n,d,h;
		cin>>n>>d>>h;
		int arr[n];
		bool flag = 0;
		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}
		int ans = 0;
		for(int i = 0; i<n; i++){
			if(arr[i]>0){
				ans += arr[i];
			}
			else if(arr[i]==0){
				ans = max(ans-d,0);
			}
			if(ans>h){
				flag = 1;
				break;
			}
		}
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
}