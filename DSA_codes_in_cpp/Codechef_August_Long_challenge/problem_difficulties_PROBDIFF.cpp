#include<bits/stdc++.h>
using namespace std;

int main(){
	int test, a, b, c, d;
	cin>>test;
	while(test--){
		cin>>a>>b>>c>>d;
		map<int, int> m;
		m[a]++;
		m[b]++;
		m[c]++;
		m[d]++;
		bool flag = 0;
		for(auto it = m.begin(); it != m.end(); it++){
			if(it->second == 4){
				cout<<0<<endl;
				flag = 1;
				break;
			}
			else if(it->second == 3){
				cout<<1<<endl;
				flag = 1;
				break;
			}
		}
		if(!flag)cout<<2<<endl;
	}
}