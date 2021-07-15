#include<bits/stdc++.h>
#define int long long
using namespace std;


// both ways are correct but the first method requires the use of extra space for storing the given numbers which the second method does not require


//*********************************//
// FIRST METHOD
//*********************************//

// int32_t main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i = 0; i<n; i++){
// 		cin>>arr[i];
// 	}
// 	int sum = 0, ans = 0;
// 	for(int i = n-1; i>0; i--){
// 		sum += arr[i];
// 		ans += (arr[i-1] * sum);
// 	}
// 	cout<<ans<<endl;
// }

//*********************************//
// SECOND METHOD
//*********************************//

int32_t main(){
	int n;
	cin>>n;
	int x, sum = 0, sq_sum = 0; 
	for (int i = 0; i<n; i++){
		cin>>x;
		sum += x;
		sq_sum += (x*x);
	}
	cout<<(sum*sum - sq_sum)/2<<endl;
}