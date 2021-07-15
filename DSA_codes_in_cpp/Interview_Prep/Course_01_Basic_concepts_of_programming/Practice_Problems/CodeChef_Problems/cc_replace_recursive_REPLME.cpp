#include<bits/stdc++.h>
using namespace std;

void func(vector<int> &arr, int i){
	if(arr.size()==1){
		cout<<arr[0]<<endl;
		return;
	}
	sort(arr.begin(), arr.end());
	int a = arr[i];
	int b = arr[i+1];
	auto it = arr.begin();
	arr.erase(it, it+2);
	int ans = (3*a + 2*b)%100;
	arr.push_back(ans);
	func(arr, 0);
}


int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	if(arr.size()==1){
		int ans = (3*arr[0])%100;
		cout<<ans<<endl;
	}
	else func(arr, 0);
	// cout<<func(arr, 0, n)<<endl;

	// vector<int> v {1,2,3};
	// auto it = v.begin();
	// v.erase(it, it+2);
	// for(int &i : v){
	// 	cout<<i<<" ";
	// }
}