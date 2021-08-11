#include<bits/stdc++.h>
#define int long long 
using namespace std;



int32_t main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n], x = -1, ans = 0;
		for(int i = 0; i<n; i++){
			cin>>arr[i];
			x&=arr[i];
		}
		for(int i = 0; i<n; i++){
			ans|=(arr[i]^x);
		}
		cout<<x<<" "<<ans<<endl;
	}
}

