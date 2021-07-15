#include<bits/stdc++.h>
using namespace std;

set<int> s;


int main(){
	int n, num;
	cin>>n;
	while(n--){
		cin>>num;
		s.insert(num);
	}
	if(s.size()==1){
		cout<<"NO\n";
		return 0;
	}
	set<int> :: iterator it = s.begin();
	it++;
	cout<<*it<<endl;
}