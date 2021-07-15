#include<bits/stdc++.h>
using namespace std;

vector<pair<string, int>> vector_pair;


bool compare(const pair <string, int> &i, const pair <string, int> &j){
	if(i.second != j.second) return i.second>j.second;
		
	else return (((i.first).compare(j.first)<0)?1:0);
}

int main(){
	int n;
	cin>>n;
	int num;
	string s;
	while(n--){
		cin>>s>>num;
		vector_pair.push_back({s,num});
	}
	sort(vector_pair.begin(),vector_pair.end(),compare);
	for(auto &it: vector_pair){
		cout<<it.first<<" "<<it.second<<"\n";
	}

	
}