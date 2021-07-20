#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void func(int n){
    vector <bool> v (n+1,1);
    v[0] = 0;
    v[1] = 0;
    for(int i = 2; i*i<=n; i++){
        if(v[i]){
            for(int j = i*i; j<=n; j+=i){
                v[j] = 0;
            }
        }
    }
    for(int i = 2; i<=n; i++){
        if(v[i]){
            cout<<i<<" ";
        }
    }
    cout<<"\n";

}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n;
    cin>>n;
    func(n);
    return 0;
}