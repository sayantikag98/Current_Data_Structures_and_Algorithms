#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

bool is_good(int num, int x, int y, int n){
    int ans = (num/x)*(num/y);
    if(ans>=n) return 1;
    else return 0;
}

void func(int x, int y, int n){
    int l = 0;
    int iter = 1;
    while(is_good(iter,x,y,n)==0){
        iter<<=1;
    }
    int r = iter, ans = 0;
    while(l<=r){
        int mid = l+((r-l)/2);
        if(is_good(mid,x,y,n)){
            ans = mid;
            r = mid-1;
        }
        else{
            l=mid+1;
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
    int x,y,n;
    cin>>x>>y>>n;
    func(x,y,n);
    

    return 0;
}