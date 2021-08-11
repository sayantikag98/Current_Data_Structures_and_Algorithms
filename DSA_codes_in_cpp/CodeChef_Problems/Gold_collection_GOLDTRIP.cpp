#include<iostream>
#include<vector>
#define int long long
using namespace std;


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test, n, q, l, r;
	cin>>test;
	while(test--){
		cin>>n;
		vector<int> arr(n,0);
		for(auto &i:arr)
			cin>>i;
		
		cin>>q;
		int prefix[n];
		prefix[0] = arr[0];
		for(int i = 1; i<n; i++){
			prefix[i] = prefix[i-1]+arr[i];
		}
		while(q--){
			cin>>l>>r;
			if(l>=2)
				cout<<prefix[r-1] - prefix[l-2]<<"\n";
			else
				cout<<prefix[r-1]<<"\n";
		}

	}
} 