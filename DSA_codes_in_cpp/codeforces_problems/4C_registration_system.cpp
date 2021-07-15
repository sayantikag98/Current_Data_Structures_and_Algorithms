#include<bits/stdc++.h>
using namespace std;

map<string, int> m;

void func(string s){
	string ans;
	if(!m[s]) ans = "OK";
	else if(m[s]) ans = s+to_string(m[s]);
	m[s]++;
	cout<<ans<<"\n";

}

// TC--> O(nlogn)

int main(){
	int n;
	cin>>n;
	string s;
	while(n--){
		cin>>s;
		func(s);
	}

	cout<<"________________________________________________________\n";

	// pair <string, int> pans = *(m.begin());
	// cout<<"->"<<pans.first<<endl;
	// cout<<*(m.begin())<<endl;
	map<string,int> :: iterator it;
	for(it = m.begin(); it != m.end(); it++){
		cout<<it->first<<" "<<(*it).second<<endl;
	}
	cout<<int('a')<<endl;

	map<string, int> :: reverse_iterator rit;
	for(rit = m.rbegin(); rit != m.rend(); rit++){
		cout<<rit->first<<" "<<rit->second<<"\n";
	} 

	vector<int> v = {10,203,49,70};
	for(auto &i: v){
		cout<<i<<" ";
	}
	cout<<"_____________________________________\n";

	vector<int>:: iterator iit;
	for(iit = v.begin(); iit != v.end(); iit++){
		cout<<*iit<<" ";
	}
	cout<<"_____________________________________\n";

	vector<int> :: reverse_iterator riit;
	for(riit = v.rbegin(); riit != v.rend(); riit++){
		cout<<*riit<<" ";
	}
	cout<<"_____________________________________\n";

	for(auto &iiit:m){
		cout<<iiit.first<<" "<<iiit.second<<endl;
	}


	cout<<m.count("first")<<endl;
	cout<<m.count("second")<<endl;
	cout<<m.find("first")->second<<endl;


	map <int , int> m2 = {{1,2},{2,4},{4,7}};
	set<int> s2 = {1,2,3,4,55,55,6,77,77};
	vector <int> v2 = {1,2,3,4,5};
	cout<<m2.size()<<endl;
	cout<<s2.size()<<endl;
	cout<<v2.size()<<endl;
	s2.insert(90);
	s2.insert(89);
	for(auto &i:s2){
		cout<<i<<" ";
	}
	cout<<"\n"; 
	set<int>:: iterator iti;
	for(iti = s2.begin(); iti!=s2.end(); iti++){
		cout<<*iti<<" ";
	}
	cout<<"\n";
	cout<<s2.count(55)<<endl;
	cout<<*s2.begin()<<endl;
	cout<<*s2.end()<<endl;
	cout<<*s2.rbegin()<<endl;
	cout<<*s2.find(800)<<endl;
	cout<<*s2.rend()<<endl;

	set<pair<int, string>> sprob;

	int n;
	cin>>n;
	



}