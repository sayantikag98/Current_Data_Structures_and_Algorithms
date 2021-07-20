#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

int gcd (int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void func(int a, int b){
    int ans_gcd = gcd(a, b);
    int ans_lcm = (a*b)/ans_gcd;
    cout<<ans_gcd<<" "<<ans_lcm<<"\n";
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        func(a,b);
    }
    

    return 0;
}