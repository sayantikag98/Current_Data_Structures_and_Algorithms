#include<bits/stdc++.h>
using namespace std;

void func(long long a, long long b){
	cout<<(a+b)<<endl;
}

int main(){
	int test;
	cin>>test;
	long long a,b;
	while(test--){
		cin>>a>>b;
		func(a,b);
	}
}