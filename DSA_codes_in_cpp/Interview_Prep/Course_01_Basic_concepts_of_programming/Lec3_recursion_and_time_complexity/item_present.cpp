#include<bits/stdc++.h>
using namespace std;

bool func(int* arr, int n, int item){
	if(n==1){
		if(arr[0] == item) return true;
		else return false;
	}
	if(!func(arr, n-1, item)){
		if(arr[n-1] == item) return true;
		else return false;
	}
	else return true;

}

int main(){
	int n, item;
	cin>>n;
	int* arr = new int [n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	cin>>item;
	bool ans = func(arr, n, item);
	if(ans == 1) cout<<"Present\n";
	else cout<<"Absent\n";
}