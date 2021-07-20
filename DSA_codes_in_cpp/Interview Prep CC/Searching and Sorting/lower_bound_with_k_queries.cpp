#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void func(int* arr, int* queries, int n, int k){
    loop(i,0,k){
        int x = queries[i];
        int l = 0, r = n-1, ans = -1;
        while(l<=r){
            int mid = l+((r-l)/2);
            if(arr[mid]>=x){
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        if(ans>=0 and ans<n) cout<<ans+1<<"\n";
        else cout<<n+1<<"\n";
    }
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
    int queries[k];
    loop(i,0,k){
        cin>>queries[i];
    }
    func(arr, queries, n, k);
    return 0;
}