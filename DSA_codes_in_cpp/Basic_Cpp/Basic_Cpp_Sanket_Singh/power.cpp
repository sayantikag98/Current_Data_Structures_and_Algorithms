#include<bits/stdc++.h>
using namespace std;


// RECURSIVE LOGIC
int power_rec(int a, int b){
	if(b==0) return 1;
	else if(b==1) return a;
	int ans = power_rec(a, b/2);
	if(b&1) ans *= (ans * a);
	else ans *= ans;
	return ans;
}


// ITERATIVE LOGIC
int power_itr(int a, int b){
	int ans = a;
	if(b == 0) ans = 1;
	else if(b>1){
		// for(int i = 2; i <= b; i*=2){
		// 	ans *= ans;
		// }
		int i = 2;
		while(i<=b){
			ans *= ans;
			i *= 2;
		}
		if(b&1) ans *= a;
	}
	return ans;
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<power_rec(a,b)<<" "<<power_itr(a,b)<<endl;
}

// O(log b)