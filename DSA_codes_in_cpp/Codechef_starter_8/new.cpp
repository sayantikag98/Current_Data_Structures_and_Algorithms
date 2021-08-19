#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
	int test, n, p, k;
	cin>>test;
	while(test--){
		cin>>n>>p>>k;
		for(int i = 0; i<n; i++){
			// if((i%k)<=((n-1)%k)){
				cout<<((i%k)*(((n-1)/k)+1)) + (i/k) + 1<<" ";
			// }
			// else{
			// 	cout<<((((n-1)%k)+1)*(((n-1)/k)+1)) + ((i%k)-((n-1)%k))<<" ";
			// }
		}
		cout<<"\n";
	}
}