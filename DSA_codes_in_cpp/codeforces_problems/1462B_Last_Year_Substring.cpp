#include<bits/stdc++.h>
using namespace std;


void func(int n, string &s){
	if(n==4 and ((s.compare("2020"))==0)){
		cout<<"YES\n";
		return;
	}
	string sub1 = s.substr(0,4);
	string sub2 = s.substr(n-4, 4);
	string sub3 = s.substr(0,2);
	string sub4 = s.substr(n-2,2);
	string sub5 = s[0] + s.substr(n-3,3);
	string sub6 = s.substr(0,3) + s[n-1];
	string sub34 = sub3 + sub4;  
	if(((sub1.compare("2020"))==0) or ((sub2.compare("2020"))==0) or ((sub34.compare("2020"))==0) or ((sub5.compare("2020"))==0) or ((sub6.compare("2020"))==0)){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	

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