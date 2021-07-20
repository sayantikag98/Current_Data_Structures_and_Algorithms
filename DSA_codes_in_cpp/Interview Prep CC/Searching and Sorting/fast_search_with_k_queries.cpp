#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void func(int* arr, int n, int x, int y){
    int l = 0, r = n-1, nge=n,nse=-1;
    while(l<=r){
        int mid = l+((r-l)/2);
        if(arr[mid]>y){
            nge = mid;
            r = mid-1;
        }
        else l = mid+1;
    }

    l = 0, r = n-1;
    
    while(l<=r){
        int mid = l+((r-l)/2);
        if(arr[mid]<x){
            nse= mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    int ans = nge-nse-1;
    if(ans) cout<<ans<<"\n";
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
    cin>>n;
    int arr[n];
    loop(i,0,n){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cin>>k;
    while(k--){
        int x,y;
        cin>>x>>y;
        func(arr,n,x,y);
    }
    return 0;
}