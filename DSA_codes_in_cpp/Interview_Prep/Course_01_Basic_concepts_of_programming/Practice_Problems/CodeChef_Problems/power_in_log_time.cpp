#include<bits/stdc++.h>
using namespace std;

int func(int a, int b){
	if(b == 0) return 1;
	
	int ans = func(a, floor(b/2));
	if(b&1) return ans * ans * a;
	else return ans * ans;
}
//O(log b)

int func_alt(int a, int b){
	if(b==0) return 1;

	int ans = func_alt(a, b-1);
	return a*ans;
}

//O(b)

int main(){
	int a, b;
	cin>>a>>b;
	cout<<func(a, b)<<"\n";
	cout<<func_alt(a, b)<<"\n";
}