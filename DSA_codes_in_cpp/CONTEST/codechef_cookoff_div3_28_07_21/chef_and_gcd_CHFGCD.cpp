#include<bits/stdc++.h>
#define int long long 
using namespace std;


int32_t main(){
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(__gcd(a,b)>1) cout<<0<<endl;
		else{
			if((__gcd(a+1,b)>1) or (__gcd(a,b+1)>1))
				cout<<1<<endl;
			else cout<<2<<endl;
		}

	}

	list<int>l;
	l.push_back(10);
	l.push_back(20);

	auto it = l.begin();
	it++;

}