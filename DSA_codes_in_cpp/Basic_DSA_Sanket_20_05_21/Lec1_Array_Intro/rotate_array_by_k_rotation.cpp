#include<bits/stdc++.h>
using namespace std;

int* func(int* arr, int n, int k){
	if(k>0 and k>n){
		k = k%n;
	}
	else if(k<0){
		k = abs(k);
		if(k>n){
			k = k%n;
		}
		k = n-k;
	}
	if(k==0 or k==n){
		return arr;
	}

	int* temp = new int [n];
	int count = k-1;
	for(int i = 0; i<k; i++){
		temp[count--] = arr[n-i-1];
	}
	count = k;
	for(int i = 0; i<(n-k); i++){
		temp[count++] = arr[i];
	}
	arr = temp;
	return arr;
}

void swap(int* arr, int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void reverse(int* arr, int i, int j){
	for(int it = i; it<((j+i)/2); it++){
		if(i!=0) swap(arr, it, j-(it-i)-1);
		else swap(arr, it, j-it-1);
	}
}

void func_alt(int* arr, int n, int k){
	if(k>0 and k>n){
		k%=n;
	}
	else if(k<0){
		k = abs(k);
		if(k>n){
			k%=n;
		}
		k = n-k;
	}
	if(k==0 or k==n){
		return;
	}
	reverse(arr, 0, n);
	reverse(arr, 0, k);
	reverse(arr, k, n);

}

int main(){
	int n,k;
	cin>>n;
	int* arr = new int [n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	cin>>k;
	func_alt(arr, n, k);
	int i;
	for(i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<i<<endl;
	cout<<"\n";

}