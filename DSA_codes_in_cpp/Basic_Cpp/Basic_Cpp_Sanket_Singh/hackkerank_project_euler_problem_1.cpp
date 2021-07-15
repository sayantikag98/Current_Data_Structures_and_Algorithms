#include<bits/stdc++.h>
#define int long long
using namespace std;

int func(int n, int val){
	int fac = (n-1)/val;
	int sum = (((2 * val) + ((fac - 1) * val)) * fac) / 2;
	return sum;
}

int32_t main(){
	int t, n;
	cin>>t;
	while(t--){
		cin>>n;
		int sum_3 = func(n, 3);
		int sum_5 = func(n, 5);
		int sum_15 = func(n, 15);
		cout<<sum_3 + sum_5 - sum_15<<endl;
		cout<<(5>>2)<<" "<<(5<<2)<<endl;

	}
}