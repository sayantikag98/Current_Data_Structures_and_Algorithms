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
    int t;
    cin>>t;
    while(t--){
        int c1,c2,n;
        cin>>c1>>c2>>n;
        int sum1 = 0, sum2 = 0;
        loop(i,0,n){
            int x,y;
            cin>>x>>y;
            sum1+=x;
            sum2+=y;
        }
        int max_sum = max(sum1,sum2);
        int min_sum = min(sum1, sum2);
        int max_price = max(c1,c2);
        int min_price = min(c1,c2);
        int ans = (max_sum*min_price)+(min_sum*max_price);
        cout<<ans<<"\n";


    }
    

    return 0;
}