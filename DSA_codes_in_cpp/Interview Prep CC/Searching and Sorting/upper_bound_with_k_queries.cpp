#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void func(int* arr, int n, int x){
    int l = 0, r = n-1, ans = -1;
    while(l<=r){
        int mid = l+((r-l)/2);
        if(arr[mid]<=x){
            ans = mid+1;
            l = mid+1;
        }
        else r = mid-1;
    }
    if(ans>=1 and ans<=n) cout<<ans<<"\n";
    else cout<<0<<"\n";
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    int arr[n];
    loop(i,0,n){
        cin>>arr[i];
    }
    while(k--){
        int x;
        cin>>x;
        func(arr,n,x);
    }
    return 0;
}