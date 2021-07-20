#include<bits/stdc++.h>
using namespace std;

void nge_right(int* arr, int n){
	int nge[n];
	stack<int> s;
	for(int i = n-1; i>=0; i--){
		while((!s.empty()) and arr[i]>=s.top()){
			s.pop();
		}
		if(s.empty()) nge[i] = -1;
		else nge[i] = s.top();
		s.push(arr[i]);
	}
	for(int i = 0; i<n; i++){
		cout<<nge[i]<<" ";
	}
	cout<<"\n";
}

void nge_left(int* arr, int n){
	int nge[n];
	stack<int> s;
	for(int i = 0; i<n; i++){
		while((!s.empty()) and arr[i]>=s.top()){
			s.pop();
		}
		if(s.empty()) nge[i] = -1;
		else nge[i] = s.top();
		s.push(arr[i]);
	}
	for(int i = 0; i<n; i++){
		cout<<nge[i]<<" ";
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
	nge_right(arr,n);
	nge_left(arr,n);
}