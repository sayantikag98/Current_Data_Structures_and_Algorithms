#include<bits/stdc++.h>
using namespace std;

void func(int n, string &str){
	stack<char>sta;
	int ans = 0;
	for(int i = 0; i<n; i++){
		if(str[i]=='('){
			sta.push(str[i]);
		}
		else{
			if(sta.size()>0 and sta.top()=='('){
				sta.pop();
			}
			else{
				sta.push(str[i]);
			}
		}
	}
	if(sta.size()>0){
		ans = sta.size()/2;
	}
	cout<<ans<<endl;

}

int main(){
	int test;
	cin>>test;
	int n;
	string s;
	while(test--){
		cin>>n>>s;
		func(n,s);
	}
}