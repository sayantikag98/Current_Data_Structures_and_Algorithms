#include<bits/stdc++.h>
using namespace std;

void print(vector <int> &v){
	for(int &i: v){
		cout<<i<<" ";
	}
	cout<<"\n";
	for(auto it = v.begin(); it != v.end(); it++){
		cout<<*it<<" ";
	}
	cout<<"\n";
}

int main(){
	vector<int> v;
	for(int i = 0; i<=10; i++){
		v.emplace_back(i);
	}
	print(v);
	cout<<v.size()<<endl; 
	cout<<v.at(1)<<"\n";
	
	cout<<v.max_size()<<"\n";
	v.resize(5,7);
	print(v);
}


// emplace_back is more efficient than push_back as avoid constructing and destroying an unnecessary temporary string object.