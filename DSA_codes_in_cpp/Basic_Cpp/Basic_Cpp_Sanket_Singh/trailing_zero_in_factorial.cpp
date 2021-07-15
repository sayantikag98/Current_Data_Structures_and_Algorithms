#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, x = 5, ans = 0;
	cin>>n;
	while((n/x)>0){
		ans += (n/x);
		x *= x;
	}
	cout<<ans<<endl;
}