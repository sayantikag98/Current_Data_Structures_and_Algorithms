#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		int n, m, x;
		cin>>n>>m>>x;
		vector<pair<int, int>> l;
		int k;
		set<int> s;
		int count = 0;
		int num = 0;
		for(int i = 0; i<n; i++){
			cin>>k;
			l.push_back(make_pair(k,i+1));
			if(l[i].first >= m) {
				s.insert(l[i].second);
				count++;
			}
		}
		num = count;
		if(count<x){
			sort(l.begin(), l.end());
			while(l.size()>0 and l[l.size()-1].first>=m){
				l.pop_back();
			}
			int rem_count = x-count;
			num += rem_count;
			while(rem_count--){
				int ind = l[l.size()-1].second;
				l.pop_back();
				s.insert(ind);
			}
			
		}
		cout<<num<<" ";
		for(auto it = s.begin(); it!=s.end(); it++){
			cout<<*it<<" ";
		}
		
		cout<<"\n";
	}
}