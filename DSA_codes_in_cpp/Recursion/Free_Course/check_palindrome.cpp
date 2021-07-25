#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str){
	if((!str.size()) or (str.size()==1)) return true;
	bool ans = checkPalindrome(str.substr(1,str.size()-2));
	if(!ans) return false;
	else{
		if(str[0]==str[str.size()-1]) return true;
		else return false;
	}
}

int main(){
	string str;
	cin>>str;
	bool ans = checkPalindrome(str);
	if(ans) cout<<"PALINDROME\n";
	else cout<<"NOT PALINDROME\n";
}