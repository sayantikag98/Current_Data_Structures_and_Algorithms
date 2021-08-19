#include<bits/stdc++.h>
#define int long long int 
using namespace std;

int32_t main(){
	int test, n, m, q;
	cin>>test;
	while(test--){
		cin>>n>>m>>q;
		char ch;
		int i;
		bool flag = 0;
		unordered_set <string> st;

		while(q--){
			cin>>ch>>i;
			if(!flag){
				string s = "";
				s+=ch;
				s+=to_string(i);

				if(s[0]=='+'){
					if (st.size()==m){
                        flag = 1;
                    }
					else st.insert(s);
				}
				else{
					string s1 = "";
					s1 += '+';
					s1 += s[1];
					if(st.find(s1) != st.end()){
						st.erase(s1);
					}
					else{
						flag = 1;
					}
				}
			}
		}
		
		if(flag) cout<<"Inconsistent\n";
		else cout<<"Consistent\n";
	}
}