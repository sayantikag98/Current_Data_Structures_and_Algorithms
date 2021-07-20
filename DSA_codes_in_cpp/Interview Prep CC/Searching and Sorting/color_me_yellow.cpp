#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long


// BINARY SEARCH ON ANSWER

bool is_good(int mid, int n, int r, int g, int b){
    if(r>=mid and b>=mid){
        if((r-mid)+g+(b-mid)>=mid){
            return 1;
        }
        else return 0;
    }
    else return 0;
}

void func(int n, int r, int g, int b){
    int left = 0, ans = 0;
    int right = n;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(is_good(mid,n,r,g,b)){
            ans = mid;
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    cout<<ans<<"\n";
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, r, g, b;
        cin>>n>>r>>g>>b;
        func(n,r,g,b);
    }
    return 0;
}