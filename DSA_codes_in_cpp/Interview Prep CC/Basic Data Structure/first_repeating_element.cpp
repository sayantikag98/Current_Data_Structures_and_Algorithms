#include<bits/stdc++.h>
using namespace std;

int func(int* arr, int n){
    const int N = 1e6+1;
    vector <int> v (N,-1);
    int min_idx = INT_MAX;
    for(int i = 0; i<n; i++){
        if(v[arr[i]]==-1){
            v[arr[i]] = i;
        }
        else{
            min_idx = min(min_idx,v[arr[i]]);
        }
    }
    min_idx = min(-1,INT_MAX);
    return min_idx;
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
    int ans = func(arr,n);
    cout<<ans<<endl;
    

    return 0;
}