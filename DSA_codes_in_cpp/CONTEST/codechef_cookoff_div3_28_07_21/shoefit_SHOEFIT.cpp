#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	bool a, b, c, ans_or = 0, ans_and = 0;
	cin>>test;
	while(test--){
		cin>>a>>b>>c;
		ans_or = ((a | b) | c);
		ans_and = ((a & b) & c);
		if(ans_or == 0) cout<<0<<endl;
		else if(ans_and == 1) cout<<0<<endl;
		else cout<<1<<endl;

	}
}