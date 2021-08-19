#include<bits/stdc++.h>
#define int long long int 
using namespace std;

int32_t main(){
	int test, n, a;
	cin>>test;
	while(test--){
		cin>>n>>a;
		int ans = floor(sqrt(n))*a;
		cout<<ans<<"\n";
	}
}