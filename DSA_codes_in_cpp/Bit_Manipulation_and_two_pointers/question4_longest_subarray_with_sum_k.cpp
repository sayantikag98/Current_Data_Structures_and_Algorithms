#include<bits/stdc++.h>
using namespace std;

void func(int* arr, int n, int k){
	int i = 0, j = 0, sum = arr[0], len = 0, ans = 0;
	if(sum<=k){
		len++;
		ans++;
	}
	while(i<n and j<n){
		while(j<n and sum<=k){
			j++;
			if(j<n) sum+=arr[j];
			if(sum<=k and j<n){
				len = j-i+1;
				ans = max(ans, len);
			}
		}
		sum -= arr[i];
		i++;
	}
	cout<<ans<<endl;
}

void count_func(int* arr, int n, int k){
	int i = 0, j = 0, sum = arr[0], count = 0;
	if(sum<=k) count++;
	while(i<n and j<n){
		while(j<n and sum<=k){
			j++;
			if(j<n) sum+=arr[j];
			if(j<n and sum<=k) count+=(j-i+1);
		}
		sum-=arr[i];
		i++;
		if(j<n and sum<=k) count+=(j-i+1);
	}
	cout<<count<<endl;
}

int main(){
	int n,k;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cin>>k;
	func(arr,n,k);
	count_func(arr, n, k);
}

//O(n) --> n being the size of array