#include<bits/stdc++.h>
using namespace std;

bool targetsum (int arr[], int n, int s){
    sort(arr, arr+n);
    int l = 0, r = n-1;
    while(l<r){
        if((arr[l] + arr[r])==s) return 1;
        else if((arr[l] + arr[r])>s) r--;
        else if((arr[l] + arr[r])<s) l++;
    } 
    return 0;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,s;
    cin>>n;
    int arr [n];
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }
    cin>>s;
    bool ans = targetsum(arr,n,s);
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}