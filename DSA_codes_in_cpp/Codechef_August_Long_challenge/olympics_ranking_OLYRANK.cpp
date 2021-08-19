#include<bits/stdc++.h>
using namespace std;

int main(){
	int test, g1, s1, b1, g2, s2, b2, sum1 = 0, sum2 = 0;
	cin>>test;
	while(test--){
		cin>>g1>>s1>>b1>>g2>>s2>>b2;
		sum1 = g1 + s1 + b1;
		sum2 = g2 + s2 + b2;
		if(sum1>sum2) cout<<1<<endl;
		else cout<<2<<endl; 
	}
}