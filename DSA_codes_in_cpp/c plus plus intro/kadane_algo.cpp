// kadane algorithm to find the maximum sum of the subarray
// if all the negative numbers are present then the maximum sum 
// would be the largest negative number given that the answer 
// cannot be an empty subarray

#include<bits/stdc++.h>
using namespace std;

int func(int* arr, int n){
    int global_sum = INT_MIN;
    int max_sum_till_now = 0;
    int largest_element = INT_MIN;
    for(int i = 0; i<n; i++){
        max_sum_till_now = max(max_sum_till_now+arr[i],0);
        global_sum= max(max_sum_till_now,global_sum);
        largest_element = max(largest_element,arr[i]);
    }
    if(!global_sum) global_sum = largest_element;
    return global_sum;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int arr [n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int ans = func(arr,n);
    cout<<ans<<endl;
    return 0;
}