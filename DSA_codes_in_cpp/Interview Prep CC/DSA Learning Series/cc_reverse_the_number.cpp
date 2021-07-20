#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void func(int n){
    int rev_num = 0;
    while(n){
        rev_num = rev_num*10 + (n%10);
        n/=10;   
    }
    cout<<rev_num<<"\n";
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
        int n;cin>>n;
        func(n);
    }
    

    return 0;
}