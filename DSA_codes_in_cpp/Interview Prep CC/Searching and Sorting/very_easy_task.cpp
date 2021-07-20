#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

bool is_good(int mid, int n, int x, int y){
    int min_time = min(x,y);
    int sum = x+y;
    return (mid/min_time)+((mid-min_time)/(sum-min_time))>=n;
}

void func(int n, int x, int y){
    int l = 0;
    int r = max(x,y) * n;
    int ans = 0;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(is_good(mid, n, x, y)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
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
    int n, x, y;
    cin>>n>>x>>y;
    func(n,x,y);
    

    return 0;
}