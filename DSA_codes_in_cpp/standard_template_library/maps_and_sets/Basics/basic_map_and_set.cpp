#include<bits/stdc++.h>
using namespace std;

int main(){

	pair<int, int> p1 = make_pair(2,3);
	// cout<<p1.first<<endl;
	// cout<<p1.second<<endl;
	pair<int,string> p2 = make_pair(2,"Sayantika");
	// cout<<p2.first<<" "<<p2.second<<endl;
	map<int, string> m;
	m[2] = "Sayantika";
	m[3] = "Ghosh";
	m[4] = "Kolkata";
	// m.erase(m.find(2));
	for(auto it = m.begin(); it!=m.end(); it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	// cout<<m.at(2)<<endl;

	// pair<pair<pair<string, int>, vector<int>>, map<int,string>> p5;

	// tuple<int, int, int, string> t = make_tuple(1,2,2,"Sayantika");
	// cout<<get<3>(t)<<endl;

	cout<<m.count(2)<<endl;
	// cout<<(*m.find(2)).second<<endl;

	vector<int> v{1,2,3,4};
	v.erase(v.begin()+2);
	for(int &i: v){
		cout<<i<<" ";
	}
	cout<<endl;

	map<int,string> m10;
	unordered_map <int,string> m11;
	multimap<int,string> m12;
	// unordered_map<pair<int,double>,int> m89;

	set<int> s;
	s.insert(2);
	s.insert(3);
	s.insert(2);
	for(auto it = s.begin(); it!=s.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	cout<<s.count(2)<<endl;
	cout<<*s.find(2)<<endl;

	multimap <string,string> m34;
	m34.insert({"Sayantika","Ghosh"});
	m34.insert({"Sayantika", "Ghosal"});
	for(auto it = m34.begin(); it!=m34.end(); it++){
		cout<<it->second<<" ";
	}
	cout<<endl;
	cout<<m34.find("Sayantika")->second<<endl;

}