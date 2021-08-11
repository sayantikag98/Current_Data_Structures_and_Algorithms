#include<bits/stdc++.h>
using namespace std;

int ans = 0;

void decimal_to_binary(int n){
	if(n == 1){
		ans = 1;
		return;
	}
	decimal_to_binary(n/2);
	int mod = n%2;
	ans=(ans*10)+mod;
}

int main(){
	int n;
	cin>>n;
	decimal_to_binary(n);
	cout<<ans<<endl;

}