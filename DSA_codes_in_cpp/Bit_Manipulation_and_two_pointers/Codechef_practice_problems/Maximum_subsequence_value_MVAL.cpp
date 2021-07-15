#include<bits/stdc++.h>
#define int long long
using namespace std;



void func(int* arr, int n, vector<int> &v){
	int sum = 0, count = 0;
	for(int i = 0; i<n; i++){
		if(arr[i]>=0){
			sum += arr[i];
			count++;
			v.emplace_back(arr[i]);
		}
	}
	cout<<sum<<endl;
	cout<<count<<" ";
	for(auto it = v.begin(); it!=v.end(); it++){
		cout<<*it<<" ";
	}
	cout<<"\n";
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
		vector<int> v;
		func(arr,n, v);
	}
}