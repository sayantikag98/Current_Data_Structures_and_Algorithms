#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin>>test;
	while(test--){
		bool arr[10];
		int sum_odd = 0, sum_even = 0;
		for(int i = 0; i<10; i++){
			cin>>arr[i];
			if(((i+1)&1) and arr[i]){
				sum_odd += 1;
			}
			else if(!((i+1)&1) and arr[i]){
				sum_even += 1;
			}
		}
		if(sum_odd>sum_even) cout<<1<<endl;
		else if(sum_odd == sum_even) cout<<0<<endl;
		else cout<<2<<endl;
    }
}