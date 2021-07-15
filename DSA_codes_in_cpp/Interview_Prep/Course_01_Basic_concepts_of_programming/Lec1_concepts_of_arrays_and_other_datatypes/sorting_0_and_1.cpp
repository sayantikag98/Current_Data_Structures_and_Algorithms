#include<bits/stdc++.h>
using namespace std;

void swap(int *arr, int left, int right){
	int temp = arr[left];
	arr[left] = arr[right];
	arr[right] = temp;
}

void prob1(int* arr, int n){
	int left = 0, right = 1;
	while(right<n){
		if(arr[left] == 1 and arr[right] == 0){
			swap(arr, left, right);
			left++;
		}
		else if((arr[left] == 0 and arr[right] == 0) or (arr[left] == 0 and arr[right] == 1)){
			left++;
		}
		right++;
	}
}

void prob1_alt_soln(int *arr, int n){
	int left = 0, right = n-1;
	while(left <= right){
		if(arr[left] == 0){
			left++;
		}
		else if(arr[left] == 1){
			swap(arr, left, right);
			right--;
		}
	}
}

void prob1_alt_soln_1(int* arr, int n){
	int left = 0, right = n-1;
	while(left <= right){
		if(arr[left] == 0){
			left++;
		}
		else if(arr[left] == 1 and arr[right] == 0){
			swap(arr, left, right);
			left++;
			right--;
		}
		else if(arr[left] == 1 and arr[right] == 1){
			right--;
		}
	}
}


int main(){
	int n;
	cin>>n;
	int* arr_prob_1 = new int [n];

	for(int i = 0; i<n; i++){
		cin>>arr_prob_1[i];
	}
	// prob1(arr_prob_1,n);
	// prob1_alt_soln(arr_prob_1,n);
	prob1_alt_soln_1(arr_prob_1,n);

	for(int i = 0; i<n; i++){
		cout<<arr_prob_1[i]<<" ";
	}
	cout<<"\n";
}

	