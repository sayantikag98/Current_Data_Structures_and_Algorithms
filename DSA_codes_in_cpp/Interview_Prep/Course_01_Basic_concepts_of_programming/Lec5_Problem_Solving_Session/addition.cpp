#include<bits/stdc++.h>
using namespace std;

vector<int> func(int *arr, int *arr1, int n , int m){
	int i = n-1, j = m-1;
	int carry = 0;
	int siz = (m>n)?m+1:n+1;
	vector<int> ans (siz,0);
	int k = siz-1;
	while(i>=0 and j>=0){
		int sum = arr[i] + arr1[j] + carry;
		int digit;
		if(sum>9){
			digit = sum%10;
			carry = sum/10; 
		}
		else {
			digit = sum;
			carry = 0;
		}
		ans[k--]=digit;
		i--;
		j--;
	}
	while(i>=0){
		int sum = arr[i] + carry;
		int digit;
		if(sum>9){
			digit = sum%10;
			carry = sum/10; 
		}
		else digit = sum;
		ans[k--] = digit;
		i--;

	}
	while(j>=0){
		int sum = arr1[j] + carry;
		int digit;
		if(sum>9){
			digit = sum%10;
			carry = sum/10; 
		}
		else digit = sum;
		ans[k--] = digit;
		j--;

	}
	if(carry!=0){
		ans[k--] = carry;
	}
	return ans;

}

int main(){

	int n, m;
	cin>>n>>m;
	int* arr = new int [n];
	int* arr1 = new int [m];

	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}

	for(int i = 0; i<m; i++){
		cin>>arr1[i];
	}

	vector<int> ans = func(arr, arr1, n, m);
	for(auto it = ans.begin(); it!=ans.end(); it++){
		if(it == ans.begin() and (*it)==0){
			continue;
		}
		cout<<*it<<" ";
	}
	cout<<"\n";
}

// TC --> O(m + n)
// SC --> O(max(m,n))