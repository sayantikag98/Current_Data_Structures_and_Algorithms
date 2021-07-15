#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
	int test; cin>>test;
	while(test--){
		int a = 2, b = 8, sum = 0, n, c;
		cin>>n;
		while(a<=n){
			sum += a;
			c = 4 * b + a;
			a = b;
			b = c;
		}
		cout<<sum<<endl;
	}
	
}

