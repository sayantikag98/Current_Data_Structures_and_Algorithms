#include<bits/stdc++.h>
using namespace std;

void print(int* arr, int n){
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

void swap(int* arr, int left, int right){
	int temp = arr[left];
	arr[left] = arr[right];
	arr[right] = temp;
}

void func(int* arr, int n){
	int left = 0, mid = 1, right = n-1;

	while(mid<=right){
	    if(arr[mid] == 1){
	        if(arr[left]==0) left = mid;
	        mid++;
	    }
	    else if(arr[mid] == 0 and arr[left]==2){
	        swap(arr, mid, left);
	        left++;
	    }
	    else if(arr[mid] == 0 and arr[left]!=2){
	        swap(arr, mid, left);
	        left++;
	        mid++;
	    }
	    else if(arr[mid]==2 and arr[right] == 1){
	        swap(arr, mid, right);
	        if(arr[left]==0) left = mid;
	        mid++;
	        right--;
	    }
	    else if(arr[mid]==2 and arr[right] == 2){
	        right--;
	    }
	    else if(arr[mid]==2 and arr[right]== 0){
	        swap(arr, mid, right);
	        right--;
	    }
	}	
}

void func_alt_soln(int *arr, int n){
	int left = 0, mid = 0, right = n-1;
	while(mid <= right){
		if(arr[mid] == 0){
			swap(arr, left, mid);
			left++;
			mid++;
		}
		else if(arr[mid]==1){
			mid++;
		}
		else if(arr[mid]==2){
			swap(arr, mid, right);
			right--;
		}
	}
}

int main(){
	int n;
	cin>>n;
	int* arr = new int [n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	// func(arr, n);
	func_alt_soln(arr, n);
	print(arr, n);
	
}