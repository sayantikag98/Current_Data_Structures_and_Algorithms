#include<bits/stdc++.h>
using namespace std;

int func(int* arr, int n){
    
    int sum = 0;
    int* ans = new int [n];
    int max_sum = INT_MIN;
    for(int i = 0; i<n; i++){
        sum+=arr[i];
        ans[i] = sum;
        max_sum = max(max_sum,ans[i]);
    }
    
    
    for(int i = 0; i<n-1; i++){
        for(int j = 1; j<n; j++){
            int an = ans[j] - ans[i];
            if(max_sum<an) max_sum = an;
        }
    }
    
    return max_sum;
    

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
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int ans = func(arr, n); 
    cout<<ans<<endl;   

    return 0;
}