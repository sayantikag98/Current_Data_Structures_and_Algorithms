#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void func(int c){
    int max_counter = 1;
    while(max_counter<=c){
        max_counter = (max_counter<<1);
    }
    int num = (max_counter-1)/2;
    int ans = num*(c^num);
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
    int c;
    while(t--){
        cin>>c;
        func(c);

    }
    

    return 0;
}