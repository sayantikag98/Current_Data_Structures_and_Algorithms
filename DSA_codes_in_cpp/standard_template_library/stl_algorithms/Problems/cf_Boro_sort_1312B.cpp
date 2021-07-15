#include<bits/stdc++.h>
using namespace std;

void boro_sort(int len, int *nums){
	if(len==1){
		cout<<nums[0]<<"\n";
		return;
	}
	sort(nums, nums+len, 
		[] (int a, int b){
			return a>b;
		}
		);
	for(int iter = 0; iter < len; iter++){
		cout<<nums[iter]<<" ";
	}
	cout<<"\n";
}

int main(){
	int test;
	cin>>test;
	int len;
	while(test--){
		cin>>len;
		int *nums = new int [len];
		for(int iter = 0; iter<len; iter++){
			cin>>nums[iter];
		}
		boro_sort(len, nums);
	}
}
