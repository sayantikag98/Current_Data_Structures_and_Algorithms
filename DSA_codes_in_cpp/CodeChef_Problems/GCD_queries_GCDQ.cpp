
// This code implementation had major improvement in time

// Firstly did not include bits/stdc++.h instead used the specific 
// libraries required.

// Secondly replaced all the endl with "\n"

// Thirdly used fast i/o       
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);

// Fourthly did not use long long int because the answer
// cannot exceed 10^5 well within the bound of integer.


#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int test, n, q, l, r, leftGcd, rightGcd;;
	cin>>test;
	while(test--){
		cin>>n>>q;
		int arr[n];
		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}
		int prefix[n], suffix[n];
		prefix[0] = arr[0];
		suffix[n-1] = arr[n-1];
		for(int i = 1; i<n; i++){
			prefix[i] = __gcd(prefix[i-1],arr[i]);
			suffix[n-1-i] = __gcd(suffix[n-i], arr[n-1-i]);
		}

        while(q--){
			cin>>l>>r;
			if(l>=2 and r<n){
				leftGcd = prefix[l-2];
				rightGcd = suffix[r];
				cout<<__gcd(leftGcd, rightGcd)<<"\n";
			}
			else if(l==1 and r==n){
				cout<<0<<"\n";
			}
			else if(l==1){
				rightGcd = suffix[r];
				cout<<rightGcd<<"\n";
			}
			else{
				leftGcd = prefix[l-2];
				cout<<leftGcd<<"\n";
			}
		}
	}
}


