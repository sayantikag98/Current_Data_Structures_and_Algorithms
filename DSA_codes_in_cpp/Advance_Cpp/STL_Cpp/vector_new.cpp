#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
	for(int &i:v){
		cout<<i<<" ";
	}
	cout<<"\n";
}

int main(){
	vector<int> v{1,2,3,4,5}; 
	cout<<v.size()<<" "<<v.capacity()<<endl;
	print(v);
	v.resize(10);
	print(v);
	v.resize(3);
	print(v);
	vector<int> v1 = {v.begin(), v.end()};
	print(v1);
}