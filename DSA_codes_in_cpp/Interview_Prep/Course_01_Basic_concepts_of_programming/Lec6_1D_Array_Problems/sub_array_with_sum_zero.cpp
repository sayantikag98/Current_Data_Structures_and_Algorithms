#include<bits/stdc++.h>
using namespace std;

unordered_set<int>s;  // will contain the prefix sum

bool func(int* arr, int n){
	if(arr[0]==0) return 1;   // checks if the first element is zero or not
	int sum = arr[0];
	s.insert(sum);
	for(int i = 1; i<n; i++){
		sum += arr[i];
		if(sum == 0) return 1;    // checks if the sum till the current index from index 0 is zero or not 
		if(s.find(sum) != s.end()){   // checks if the prefix sum repeats or not
			s.insert(sum);
		}
		else{
			return 1;
		}
	}
	return 0;
}


int main(){
	int* arr = new int [7]{1, 4, -1, 0, 5, -4, 3};
	int n = 7;
	cout<<func(arr, 7)<<endl;
	
}