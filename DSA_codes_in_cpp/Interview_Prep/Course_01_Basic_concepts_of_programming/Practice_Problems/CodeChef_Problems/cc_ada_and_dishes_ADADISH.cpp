#include<bits/stdc++.h>
using namespace std;

void func(vector<int> &arr, int n){
	sort(arr.begin(), arr.end(), greater<int>());
	int ans = arr[0];
	if(n==3){
		if(ans<(arr[1] + arr[2])){
			ans+=(arr[1] + arr[2] -arr[0]);
		}
	}
	else if(n==4){
		int sub_ans = arr[1] + arr[2];
		if(arr[0]>sub_ans){
			if(arr[0]<(sub_ans+arr[3])){
				ans+=(sub_ans + arr[3] - arr[0]);
			}
			
		}
		else if(arr[0] == sub_ans){
			ans+=arr[3];
		}
		else{
			if(arr[0] + arr[3]>=sub_ans){
				ans+=arr[3];
			}
			else{
				ans = sub_ans;
			}
		}
	}
	cout<<ans<<endl;
}

int main(){
	int test, n;
	cin>>test;
	while(test--){
		cin>>n;
		vector<int> arr(n);
		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}
		func(arr, n);
	}
}