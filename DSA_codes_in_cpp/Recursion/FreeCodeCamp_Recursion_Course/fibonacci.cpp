#include<bits/stdc++.h>
using namespace std;

int n_fibonacci(int n){
	if(n<=1) return n;
	int ans1 = n_fibonacci(n-1);
	int ans2 = n_fibonacci(n-2);
	return ans1 + ans2;
}

// 0 1 1 2 3 5 8 13 21 34 55
// 0 1 2 3 4 5 6  7 8  9  10



int main(){
	int n;
	cin>>n;
	cout<<n_fibonacci(n)<<endl;
}