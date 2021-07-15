#include<bits/stdc++.h>
using namespace std;

int first_index(int* arr, int i, int n, int item){
	if(i == n){
		return -1;
	}
	if(arr[i] == item){
		return i;
	}
	else return first_index(arr, i+1, n, item);
}


int main(){
	int n, item;
	cin>>n;
	int* arr = new int [n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	cin>>item;
	cout<<first_index(arr, 0, n, item)<<endl;
}