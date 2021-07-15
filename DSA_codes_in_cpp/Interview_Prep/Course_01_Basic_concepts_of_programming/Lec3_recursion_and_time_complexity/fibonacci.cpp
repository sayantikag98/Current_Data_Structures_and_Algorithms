#include<bits/stdc++.h>
using namespace std;

int func_fib(int n){
	if(n == 0 or n == 1) return n;
	int ans = func_fib(n-1) + func_fib(n-2);
	return ans;
}



int main(){
	int n;
	cin>>n;
	cout<<func_fib(n)<<endl;
}