#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long


void func(int c, int d, int l){
    if(l%4!=0 or l<(4*d) or l>((4*d)+(4*c))){
        cout<<"no"<<"\n";
        return;
    }
    if(c>(2*d)){
        int rem = c-(2*d);
        if(l<((d*4)+(rem*4))){
            cout<<"no"<<"\n";
            return;
        }
    }
    cout<<"yes"<<"\n";
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
        int c,d,l;
        cin>>c>>d>>l;
        func(c,d,l);
    }
    

    return 0;
}