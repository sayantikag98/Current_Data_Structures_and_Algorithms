#include<bits/stdc++.h>
using namespace std;

void func(int n){
	list<int>l;
	while(n){
		int digit = n%10;
		n/=10;
		if(l.size()>0 and l.back()!=0 and digit == 0){
			l.push_back(digit);
		}
		else if(l.size()==0 and digit!=0){
			l.push_back(digit);
		}
		else if(l.size()>0 and l.back()!=0 and digit != 0){
			l.push_back(digit);
		}
		else if(l.size()>0 and l.back()==0 and digit != 0){
			l.push_back(digit);
		}
		else if(l.size()>0 and l.back()==0 and digit==0 and l.front()!=0){
			l.push_back(digit);
		}
	}
	for(auto it = l.begin(); it!=l.end(); it++){
		cout<<*it;
	}
	cout<<"\n";
}

int main(){
	int test,n;
	cin>>test;
	while(test--){
		cin>>n;
		func(n);
	}
}