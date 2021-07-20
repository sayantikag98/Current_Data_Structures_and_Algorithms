#include<bits/stdc++.h>
using namespace std;

int max_area_hist(int* arr, int n){
	int nse_left[n], nse_right[n];
	stack<int> s;
	for(int i = n-1; i>=0; i--){
		while((!s.empty()) and arr[i]<=arr[s.top()]){
			s.pop();
		}
		if(s.empty()) nse_right[i] = -1;
		else nse_right[i] = s.top();
		s.push(i);
	}
	while(!s.empty()){
		s.pop();
	}
	for(int i = 0; i<n; i++){
		while((!s.empty()) and arr[i]<=arr[s.top()]){
			s.pop();
		}
		if(s.empty()) nse_left[i] = -1;
		else nse_left[i] = s.top();
		s.push(i);
	}
	int max_area = 0;
	for(int i = 0; i<n; i++){
		if(nse_right[i]!= -1 and nse_left[i] != -1){
			max_area = max(max_area, (nse_right[i] - nse_left[i] - 1)*arr[i]);
		}
		else if(nse_right[i] == -1 and nse_left[i] != -1){
			max_area = max(max_area, (n-1 - nse_left[i]) * arr[i]);
		}
		else if(nse_right[i] != -1 and nse_left[i] == -1){
			max_area = max(max_area, nse_right[i] * arr[i]);
		}
		else{
			max_area = max(max_area, n*arr[i]);
		}
	}
	return max_area;
}

int main(){
	int n;
	cin>>n; 
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	int ans = max_area_hist(arr, n);
	cout<<ans<<endl;
}