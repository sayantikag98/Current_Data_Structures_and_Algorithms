#include<bits/stdc++.h>
using namespace std;

void func(int* arr, int n){
	if(n==3 and (arr[0]==arr[2])){
		cout<<"YES\n";
	}
	else if(n==3 and (arr[0]!=arr[2])){
		cout<<"NO\n";
	}
	else{
		for(int i = 0; i<n; i++){
			for(int j = n-1; j>=i+2; j--){
				if(arr[i] == arr[j]){
					cout<<"YES\n";
					return;
				}

			}
		}
		cout<<"NO\n";
	}

	

}

int main(){
	int test;
	cin>>test;
	int n;
	while(test--){
		cin>>n;
		int arr[n];
		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}
		func(arr, n);
	}

}