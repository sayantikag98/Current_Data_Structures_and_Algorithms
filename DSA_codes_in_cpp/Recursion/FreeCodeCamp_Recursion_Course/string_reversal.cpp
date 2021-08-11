#include<bits/stdc++.h>
using namespace std;

string ans = "";

void string_reversal(string s){
	if(s.size()==1){
		ans+=s;
		return;
	}

	//****MOVING RIGHT TO LEFT****//
// 	char ch = s.at(s.size()-1);
// 	ans = ch+ans;
// 	string_reversal(s.substr(0,s.size()-1));

	//****MOVING LEFT TO RIGHT****//
	char ch = s[0];
	string_reversal(s.substr(1));
	ans = (ans + ch);
}

string string_reversal1(string s){
	if(s.size()==1) return s;
	char ch = s[0];
	string ans = string_reversal1(s.substr(1));
	return ans+ch;
}

int main(){
	string s;
	getline(cin,s);
	string_reversal(s);
	cout<<ans<<endl;
	cout<<string_reversal1(s)<<endl;
}