#include<bits/stdc++.h>
using namespace std;

int main(){
	int x, n;
	cin>>x>>n;
	int ans = x*n;
	for(int i = 1; i<=n; i++){
		x*=2;
		n--;
		ans+=(x * n);
	}
	cout<<ans<<endl;
}