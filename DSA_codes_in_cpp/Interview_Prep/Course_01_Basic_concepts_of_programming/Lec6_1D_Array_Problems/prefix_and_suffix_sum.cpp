#include<bits/stdc++.h>
using namespace std;

void prefix(int* arr, int n){
	for(int i = 1; i<n; i++){
		arr[i] += arr[i-1];
	}
}

int main(){
	int *arr = new int [5]{10,20,30,5,15};
	prefix(arr, 5);
	int q, left, right;
	cin>>q;
	while(q--){
		cin>>left>>right;
		if(left == 0 and right == 4){
			cout<<arr[4]<<endl;
		}
		else if(left>0 and right<=4){
			cout<<arr[right] - arr[left-1]<<endl;
		}
		else if(left == 0 and right<5){
			cout<<arr[right]<<endl;
		}
		else if(left > 0 and right>4){
			cout<<arr[4] - arr[left-1]<<endl;
		}

	}
	for(int i = 0; i<5; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}