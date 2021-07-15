#include<bits/stdc++.h>
using namespace std;
#define int long long

map<int,set<int>>m;
map<int,set<int>>m1;

void func(int num){
	if(m.find(num)!=m.end() and m1.find(num)!=m1.end()){
		if(m[num].size()==0 and m1[num].size()==0){
			cout<<-1<<" ";
			return;
		}
	}
	int comp1 = -1, comp2 = -1, del_ans;
	if(m.find(num)!=m.end() and m[num].size()>0){
		comp1 = *(m[num].begin());
	}
	if(m1.find(num)!=m1.end() and m1[num].size()>0){
		comp2 = *(m1[num].begin());
	}
	if(comp1>0 and comp2>0) del_ans = min(comp1,comp2);
	else if(comp1<0 and comp2>0) del_ans = comp2;
	else if(comp1>0 and comp2<0) del_ans = comp1;
	else del_ans = -1;
	cout<<del_ans<<" ";
	for(auto it = m.begin(); it!=m.end(); it++){
		if(it->second.find(del_ans)!=it->second.end()){
			it->second.erase(it->second.find(del_ans));
		}
		
	}
	// for(auto it = m.begin(); it!=m.end(); it++){
	// 	cout<<it->first<<"->";
	// 	set<int> s = it->second;
	// 	for(auto it1 = s.begin(); it1!=s.end(); it1++){
	// 		cout<<*it1<<" ";
	// 	}
	// 	cout<<"\n";
	// }
	for(auto it = m1.begin(); it!=m1.end(); it++){
		if(it->second.find(del_ans)!=it->second.end()){
			it->second.erase(it->second.find(del_ans));
		}	
	}

}

int32_t main(){
	int n;cin>>n;
	int* price = new int[n];
	int* a = new int [n];
	int* b = new int [n];
	
	for(int i = 0; i<n; i++){
		cin>>price[i];
	}
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	for(int i = 0; i<n; i++){
		cin>>b[i];
	}
	for(int i = 0; i<n; i++){
		m[a[i]].insert(price[i]);
		m1[b[i]].insert(price[i]);
	}


	// for(auto it = m.begin(); it!=m.end(); it++){
	// 	cout<<it->first<<"->";
	// 	set<int> s = it->second;
	// 	for(auto it1 = s.begin(); it1!=s.end(); it1++){
	// 		cout<<*it1<<" ";
	// 	}
	// 	cout<<"\n";
	// }
	// for(auto it = m1.begin(); it!=m1.end(); it++){
	// 	cout<<it->first<<"->";
	// 	set<int> s = it->second;
	// 	for(auto it1 = s.begin(); it1!=s.end(); it1++){
	// 		cout<<*it1<<" ";
	// 	}
	// 	cout<<"\n";
	// }

	
	int m_no, num;
	cin>>m_no;
	
	while(m_no--){
		cin>>num;
		func(num);
	}

}

// 1-> 200, 300, 400, 911
// 2-> 200, 