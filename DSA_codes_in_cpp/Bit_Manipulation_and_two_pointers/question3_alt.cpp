#include<bits/stdc++.h>
using namespace std;

unordered_map <char, int> m;

void func(string &s){
	int i = 0, j = 0, ans = 0, n = s.size(), val;
	char ch;
	while(j<n){
		ch = s.at(j);
		if(m.find(ch) == m.end()) ans = max(ans, j-i+1);
		else{
			val = m[ch];
			if(val<i) ans = max(ans, j-i+1);
			else i = val;
		}
		m[ch] = ++j;
	}
	cout<<ans<<endl;
}

int main(){
	string s;
	cin>>s;
	func(s);
}