#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n;
    cin>>n;
    int count_ans = 0;
    while(n--){
        int x, y, z;
        cin>>x>>y>>z;
        int sum = x+y+z;
        if(sum>=2){
            count_ans++;
        }

    }
    cout<<count_ans<<"\n";
    

    return 0;
}