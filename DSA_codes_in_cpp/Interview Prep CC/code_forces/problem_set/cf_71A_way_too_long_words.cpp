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
    while(n--){
        string s;
        cin>>s;
        if(s.size()>10){
            string ans = "";
            ans+=s[0];
            ans+=to_string(s.size()-2);
            ans+=s[s.size()-1];
            cout<<ans<<"\n";
        }
        else{
            cout<<s<<"\n";
        }
        
    }
    

    return 0;
}