#include<bits/stdc++.h>
using namespace std;

void findTwoRepeatingElement(int* arr, int n){

	int sum_array = 0, sum_set = 0, rep = arr[0];
	unordered_set<int> s;

	for(int i = 0; i<n; i++){
		sum_array += arr[i];
		s.insert(arr[i]);
	}

	for(auto it = s.begin(); it != s.end(); it++){
		sum_set += (*it);
	}

	while(arr[rep - 1] != -1){
		int temp = rep;
		rep = arr[rep - 1];
		arr[temp - 1] = -1;
	}

	cout<<rep<<" "<<sum_array - (sum_set + rep)<<endl;

}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	findTwoRepeatingElement(arr, n);
}