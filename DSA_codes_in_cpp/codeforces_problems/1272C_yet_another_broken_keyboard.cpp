#include<bits/stdc++.h>
#define int long long 
using namespace std;

unordered_set <char> st;

void countSubstrings(int n, int k, string &s){
	int count = 0, low = 0, high = 0, m;
	for(int i = 0; i<n; i++){
		char ch = s.at(i);
		if(st.find(ch)!=st.end()){
			high++;
		}
		else{
			m = high - low;
			count+=((int)(((float)m/2)*(m+1)));
			high++;
			low = high;
		}
	}
	m = high - low;
	count+=((int)(((float)m/2)*(m+1)));
	cout<<count<<endl;
}

int32_t main(){
	int n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	char x;
	for(int i = 0; i<k; i++){
		cin>>x;
		st.insert(x);
	}
	countSubstrings(n,k,s);
}