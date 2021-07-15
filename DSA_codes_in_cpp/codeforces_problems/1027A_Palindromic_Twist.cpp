#include<bits/stdc++.h>
using namespace std;

void func(int len, string &str){
	bool ans = 1;
	for(int i = 0; i<len/2; i++){
		int num = abs(str[i] - str[len-i-1]);
		if((num != 2) and (num!=0)){
			ans = 0;
			break;
		}
	}
	if(ans){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
}

int main(){
	int test,len;
	string str;
	cin>>test;
	while(test--){
		cin>>len>>str;
		func(len,str);
	}
}