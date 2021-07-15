#include<bits/stdc++.h>
using namespace std;


void func(const string &str){
	if(str.size()==2){
		cout<<str<<endl;
		return;
	}
	string ans = "";
	ans += str[0];
	for(int i = 1; i<str.size()-1; i++){
		if(i&1){
			ans += str[i];
		}
	}
	ans+=str[str.size()-1];
	cout<<ans<<endl;


}

int main(){
	int test;
	string str;
	cin>>test;
	while(test--){
		cin>>str;
		func(str);
	}
}