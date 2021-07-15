#include<bits/stdc++.h>
#define int long long
using namespace std;

bool present (int* b, int n, int val){
	for(int i = 0; i<n; i++){
		if(b[i] == val){
			return true;
		}
	}
	return false;
}

void func(int* a, int* b, int n){
	int max_len = 0;
	int loc_len = 0;
	for(int i = 0; i<n; i++){
		if(present(b, n, a[i])){
			loc_len++;
		}
		else{
			max_len = max(max_len, loc_len);
			loc_len = 0;

		}
	}
	max_len = max(max_len, loc_len);
	cout<<max_len<<endl;

}

int32_t main(){
	int test,n;
	cin>>test;
	while(test--){
		cin>>n;
		int* a = new int [n];
		int* b = new int [n];
		for(int i = 0; i<n; i++){
			cin>>a[i];
		}
		for(int i = 0; i<n; i++){
			cin>>b[i];
		}
		func(a, b, n);

	}
}