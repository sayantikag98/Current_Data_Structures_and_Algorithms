#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

void func(vector<int> &prefix, vector<int>&suffix, int l, int r){
	int sub1, sub2;
	l-=1;
	r-=1;
	if(l == 0){
		cout<<suffix[r+1]<<endl;
	}
	else if(r == suffix.size()-1){
		cout<<prefix[l-1]<<endl;
	}
	else if(l == 0 and r == suffix.size()-1){
		cout<<0<<endl;
	}
	else{
		sub1 = prefix[l-1];
		sub2 = suffix[r+1];
		cout<<gcd(sub1,sub2)<<"\n";
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int test, n, q, l, r;
	cin>>test;
	while(test--){
		cin>>n>>q;
		vector<int> arr(n);
		vector<int>prefix(n);
		vector<int>suffix(n);
		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}
		prefix[0] = arr[0];
		for(int i = 1; i<n; i++){
			prefix[i] = gcd(prefix[i-1], arr[i]);
		}
		suffix[n-1] = arr[n-1];
		for(int i = n-2; i>=0; i--){
			suffix[i] = gcd(suffix[i+1], arr[i]);
		}

		while(q--){
			cin>>l>>r;
			func(prefix, suffix, l,r);
		}

	}
}