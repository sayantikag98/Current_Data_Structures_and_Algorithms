#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int arr[n];
		int count = 0;
		bool one = false;
		for(int i = 0; i<n; i++){
			cin>>arr[i];
			if(arr[i] != 1){
				int sq = sqrt(arr[i]);
				if((sq*sq) == arr[i]) count++;
			}
			
			if(arr[i] == 1) one = true;
		}
		n--;
		if(count == 0){
			cout<<(n*(n+1))/2<<endl;
		}
	}
}