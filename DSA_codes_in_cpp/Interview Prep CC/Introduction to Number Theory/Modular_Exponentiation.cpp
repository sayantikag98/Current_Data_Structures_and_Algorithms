#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

int modular_exponentiation(int a, int b, int c){
    if(b==1) return a % c;
    int ans = modular_exponentiation(a, b/2, c) % c;
    if(b&1) return (ans * ans * a)%c;
    else return (ans * ans)%c;
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int a, b, c;
    cin>>a>>b>>c;

    cout<<modular_exponentiation(a, b, c)<<endl;
    

    return 0;
}