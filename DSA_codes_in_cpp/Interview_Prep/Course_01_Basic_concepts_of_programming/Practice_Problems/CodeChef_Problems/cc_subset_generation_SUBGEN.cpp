#include<bits/stdc++.h>
using namespace std;

void func(int n, string ans){
	if(n<=0){
		cout<<ans<<endl;
		return;
	}
	
	func(n-1, ans);
	func(n-1, to_string(n)+" "+ans);

}



int main(){
	int test, n;
	cin>>test;
	while(test--){
		cin>>n;
		func(n, "");
	}

}