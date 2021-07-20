#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

int func(int* arr, int n, int x){
    int l = 0, r = n-1, ans = -1;
    while(l<=r){
        int mid = l+((r-l)/2);
        if(arr[mid]>x){
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    return ans;
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int n,x;
    cin>>n;
    int arr[n];
    loop(i,0,n){
        cin>>arr[i];
    }
    cin>>x;
    int ans = func(arr,n,x);
    if(ans<0 or ans>=n) cout<<"No element found"<<"\n";
    else cout<<arr[ans]<<"\n";
    

    return 0;
}