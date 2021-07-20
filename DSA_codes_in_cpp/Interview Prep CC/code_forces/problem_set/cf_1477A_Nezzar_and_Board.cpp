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
    int total = t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v;
        loop(i,0,n){
            int num;
            cin>>num;
            v.push_back(num);
        }
        // loop(i,0,n){
        //     cout<<v[i]<<" ";
        // }
        // cout<<"\n";
        cout<<"iter"<<" "<<total - t<<"\n";
        if(find(v.begin(),v.end(),k)!=v.end()) cout<<"YES"<<"\n";
        
        

    }
    

    return 0;
}