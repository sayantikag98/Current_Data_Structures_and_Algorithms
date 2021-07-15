#include<bits/stdc++.h>
using namespace std;



map<int, set<int>> m;
map<int, set<int>> m1;

int main(){
	int p[] = {300, 200, 400, 500, 911};
	int a[] = {1, 2, 1, 2, 2};
	int b[] = {2, 1, 2, 2, 1};

	// set<int> s1 {1,2,3,4};
	// for(auto it4 = s1.begin(); it4!=s1.end(); it4++){
	// 	cout<<*it4<<endl;
	// }
	// s1.erase(s1.find(2));
	// for(auto it4 = s1.begin(); it4!=s1.end(); it4++){
	// 	cout<<*it4<<endl;
	// }
	for(int i = 0; i<5; i++){
		m[a[i]].insert(p[i]);
		m1[b[i]].insert(p[i]);
	}
	for(auto it = m.begin(); it!=m.end(); it++){
		if(it->second.find(200)!=it->second.end()){
			(it->second).erase(it->second.find(200));
		}
		
	}

	for(auto it = m.begin(); it!=m.end(); it++){
		cout<<it->first<<"->";
		set<int> s = it->second;
		for(auto it1 = s.begin(); it1!=s.end(); it1++){
			cout<<*it1<<" ";
		}
		cout<<"\n";
	}
	// for(auto it = m1.begin(); it!=m1.end(); it++){
	// 	cout<<it->first<<"->";
	// 	set<int> s = it->second;
	// 	for(auto it1 = s.begin(); it1!=s.end(); it1++){
	// 		cout<<*it1<<" ";
	// 	}
	// 	cout<<"\n";
	// }

}
