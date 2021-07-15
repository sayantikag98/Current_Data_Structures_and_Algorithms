#include<bits/stdc++.h>
#define int long long
using namespace std;

int special_cracker_func(int* arr, int n){
	int ans_xor = 0;
	for(int i = 0; i<n; i++){
		ans_xor ^= arr[i];
	}
	return ans_xor;
}

int32_t main(){
	int test,n;
	cin>>test;
	while(test--){
		cin>>n;
		int arr[n];
		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}
		int ans = special_cracker_func(arr, n);
		cout<<ans<<endl;

	}

}