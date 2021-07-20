#include<bits/stdc++.h>
using namespace std;


void nse_right(int* arr, int n){
	int nse[n];
	stack<int> s;
	for(int i = n-1; i>=0; i--){
		while((!s.empty()) and arr[i]<=s.top()){
			s.pop();
		}
		if(s.empty()) nse[i] = -1;
		else nse[i] = s.top();
		s.push(arr[i]);
	}
	for(int i = 0; i<n; i++){
		cout<<nse[i]<<" ";
	}
	cout<<"\n";
}

void nse_left(int* arr, int n){
	int nse[n];
	stack<int> s;
	for(int i = 0; i<n; i++){
		while((!s.empty()) and arr[i]<=s.top()){
			s.pop();
		}
		if(s.empty()) nse[i] = -1;
		else nse[i] = s.top();
		s.push(arr[i]);
	}
	for(int i = 0; i<n; i++){
		cout<<nse[i]<<" ";
	}
	cout<<"\n";
}



int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	nse_right(arr, n);
	nse_left(arr, n);
}