#include<bits/stdc++.h>
using namespace std;

int sum_subarray (int* arr, int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        int sub_sum = 0;
        for(int j = i; j<n; j++){
            sub_sum+=arr[j];
            sum+=sub_sum;
        }
    }
    return sum;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int ans = sum_subarray(arr,n);
    cout<<ans<<endl;
    

    return 0;
}