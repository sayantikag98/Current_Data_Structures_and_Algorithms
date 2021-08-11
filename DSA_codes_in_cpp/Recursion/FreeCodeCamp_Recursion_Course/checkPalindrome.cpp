#include<bits/stdc++.h>
using namespace std;

bool check_palindrome(string s){
	if(s.size()==0 or s.size()==1) return true;
	bool ans = check_palindrome(s.substr(1, s.size()-2));
	if(!ans) return false;
	else{
		if(s[0]==s[s.size()-1]) return true;
		else return false;
	}
}

int main(){
	string s;
	cin>>s;
	bool ans = check_palindrome(s);
	if(ans) cout<<"Palindrome\n";
	else cout<<"Not a Palindrome\n";
}