#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

int gcd(int a, int b){
    if(b==0) {
        return a;
    }
    return gcd(b,a%b);
}

void func(vector <int> &v, int n, int l, int r){
    int i = 1, ans;
    if(l-1>0) ans = v[0];
    else ans = v[r];
    while(i<l-1){
        // ans = gcd(ans,v[i]);
        int ma = max(ans,v[i]);
        int su = ans+v[i];

        ans = ma%(su-ma);
        i++;
    }
    i = r;
    if(l-1==0) i = r+1;
    while(i<n){
        // ans = gcd(ans,v[i]);
        int ma = max(ans,v[i]);
        int su = ans+v[i];
        ans = ma%(su-ma);
        i++;
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
        int n,q;
        cin>>n>>q;
        vector<int>v;
        loop(i,0,n){
            int num;
            cin>>num;
            v.push_back(num);
        }
        loop(i,0,q){
            int l,r;
            cin>>l>>r;
            func(v,n,l,r);
        }
    }
    

    return 0;
}