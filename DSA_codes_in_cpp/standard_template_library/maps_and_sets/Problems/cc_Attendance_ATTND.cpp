#include<bits/stdc++.h>
using namespace std;

int main(){
	int test,n;
	cin>>test;
	while(test--){
		cin>>n;
		string firstname, lastname;
		multiset<string> ms;
		vector<pair<string,string>> v;
		while(n--){
			cin>>firstname>>lastname;
			ms.insert(firstname);// O(log n)
			v.push_back(make_pair(firstname,lastname)); //O(1)
		}
		for(auto it = v.begin(); it!=v.end(); it++){
			if(ms.count(it->first)>1){ //O(n log n)
				cout<<it->first<<" "<<it->second<<endl;
			}
			else{
				cout<<it->first<<endl;
			}	
		}

	}
}