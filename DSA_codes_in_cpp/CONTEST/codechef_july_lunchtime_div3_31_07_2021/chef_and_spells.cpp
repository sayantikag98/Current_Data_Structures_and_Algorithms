#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
	int test;
	cin>>test;
	while(test--){
		int a, b, c;
		cin>>a>>b>>c;
		int max_no = max(a,max(b,c));
		int min_no = min(a,min(b,c));
		int sec_max = (a+b+c) - (max_no+min_no);
		cout<<max_no+sec_max<<endl;

	}
}