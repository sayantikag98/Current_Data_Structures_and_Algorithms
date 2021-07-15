#include<bits/stdc++.h>
using namespace std;

vector<int> func(int *arr, int *arr1, int n , int m){
	int i = 0, j = 0;
	vector<int> ans;
	while(i<n and j<m){
		if(arr[i] == arr1[j]){
			ans.push_back(arr[i]);
			i++;
			j++;
		}
		else if(arr[i]>arr1[j]){
			j++;
		}
		else if(arr[i]<arr1[j]){
			i++;
		}
	}
	return ans;

}

int main(){
	int arr[] = {1, 1, 2, 3, 4, 7, 8};
	int arr1[] = {0, 1, 3, 3, 4, 5};

	vector<int> ans = func(arr, arr1, 7, 6);
	for(int &i: ans){
		cout<<i<<" ";
	}
	cout<<"\n";
}