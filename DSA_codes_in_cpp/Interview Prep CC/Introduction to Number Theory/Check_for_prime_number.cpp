#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void prime_number (int n){
    int flag = 1;
    for(int i = 2; i*i<=n; i++){
        if(n%i==0){
            flag = 0;
            break;
        }
    }
    if(flag and n!=1) cout<<n<<"  "<<"Prime Number\n";
    else cout<<n<<"  "<<"Not a Prime Number\n";
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
        int n;
        cin>>n;
        prime_number(n);
    }
    return 0;
}