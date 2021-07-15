#include<bits/stdc++.h>
using namespace std;

unordered_map <char, int> m;

bool helper(){
	int val;
	for(auto it = m.begin(); it!=m.end(); it++){
		val = (*it).second;
		if(val>1) return false;
	}
	return true;
}

void func(string &s){
	int i = 0, j=0,len = 1, maxlen = 1;
	char ch = s.at(i);
	m[ch]++;
	int n = s.size();
	while(i<n and j<n){
		if(helper()){
			j++;
			if(j<n){
				ch = s.at(j);
				m[ch]++;
				if(helper()){
					len = j-i+1;
					maxlen = max(maxlen, len);
				}
			}
		}
		else{
			ch = s.at(i);
			m[ch]--;
			i++;
		}
	}
	cout<<maxlen<<endl;
}

int main(){
	for(int i = 97; i< 123; i++){
		char ch = (char) i;
		m.insert(make_pair(ch,0));
	}
	string s;
	cin>>s;
	func(s);
}