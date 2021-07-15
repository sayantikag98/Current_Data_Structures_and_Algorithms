#include<bits/stdc++.h>
#define int long long
using namespace std;

bool comparator(int a, int b){
	return (a>b)?1:0;
}

bool sorted_check_reverse(list<int>&l){
	bool flag;
	flag = is_sorted(l.begin(),l.end(),comparator);
	if(flag){
		for(auto it2 = l.begin(); it2!=l.end(); it2++){
			cout<<*it2<<"\n";
		}
	}
	return flag;
}

bool sorted_check_forward(list<int>&l){
	bool flag;
	flag = is_sorted(l.begin(),l.end());
	if(flag){
		for(auto it2 = l.begin(); it2!=l.end(); it2++){
			cout<<*it2<<" ";
		}
		cout<<"\n";
	}
	return flag;
}


void func(list<int> &l, int n){

	if(!sorted_check_forward(l) and !sorted_check_reverse(l)){
		while(l.size()>0){
			int com = 0;
			if(!sorted_check_forward(l) and !sorted_check_reverse(l)){
				for(auto it = l.begin(); it!=l.end();){
				if(com<(*it)){
					cout<<*it<<" ";
					com = (*it);
					list<int> :: iterator it1 = it;
					it++;	
					l.erase(it1);
				}
				else it++;
			}
			cout<<"\n";
			}
			else{
				return;
			}
			
		
		}
	}
	
	
}

int32_t main(){
	int n, num;
	cin>>n;
	list<int>l;
	while(n--){
		cin>>num;
		l.push_back(num);
	}
	func(l, n);


}