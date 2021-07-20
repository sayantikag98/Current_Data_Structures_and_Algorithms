#include<bits/stdc++.h>
using namespace std;

bool func(string s){
	int n = s.length();
	stack <char> st;
	for(int i = 0; i<n; i++){
		if((s.at(i)=='(') or (s.at(i)=='{') or (s.at(i)=='[')){
			st.push(s.at(i));
		}
		else{
			if(st.empty()==false){
				if((s.at(i)==']' and st.top()=='[') or (s.at(i)=='}' and st.top()=='{') or (s.at(i)==')' and st.top()=='(')){
					st.pop();
				}
				else return false;  // for incorrect bracket combination condition
			}
			else return false;  // for more number of closing braces condition
		}
	}
	if(st.empty() == false) return false;  // for more number of opening braces condition
	else return true;  // for correct bracket combination condition
}



int main(){
	string s;
	cin>>s;
	bool ans = func(s);
	if(ans) cout<<"YES\n";
	else cout<<"NO\n";
}