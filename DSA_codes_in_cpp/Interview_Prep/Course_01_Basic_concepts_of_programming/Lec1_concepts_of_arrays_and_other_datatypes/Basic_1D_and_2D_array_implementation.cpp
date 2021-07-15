#include<bits/stdc++.h>
using namespace std;

void func(int**arr){
	for(int i = 0; i<3; i++){
		cout<<arr[0][i]<<" ";
	}
	cout<<"\n";
	for(int i = 0; i<4; i++){
		cout<<arr[1][i]<<" ";
	}
	cout<<"\n";
	for(int i = 0; i<5; i++){
		cout<<arr[2][i]<<" ";
	}
	cout<<"\n";
}




int main(){
	int arr [] = {1,2,3};
	for(int i:arr){
		i = 89;
		cout<<i<<" ";
	}
	cout<<"\n";
	int** arr1 = new int* [3];
	arr1[0] = new int [3];
	arr1[1] = new int [4];
	arr1[2] = new int [5];
	for(int i = 0; i<3; i++){
		arr1[0][i] = i;
	}
	for(int i = 0; i<4; i++){
		arr1[1][i] = i;
	}
	for(int i = 0; i<5; i++){
		arr1[2][i] = i;
	}
	func(arr1);
}