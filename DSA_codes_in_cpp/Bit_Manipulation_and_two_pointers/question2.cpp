#include<bits/stdc++.h>
using namespace std;

void func(int n){
	int count = 0;
	int k = 0;
	while(n){
		if((n&(1<<k))==0){
			count++;
		}
		else{
			n = (n&(~(1<<k)));
		}
		k++;
	}
	int ans = (1<<count);
	cout<<ans<<endl;
}

int main(){
	int n;
	cin>>n;
	func(n);
}