#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long


void func(string s){
    int count_ans = 0;
    int counter = 0;
    loop(i,0,s.size()){
        if(s.at(i)=='1'){
            counter++;
        }
        else if(s.at(i)=='0' and counter>0){
            counter=0;
            count_ans++;
        }
    }
    if(counter>0) count_ans++;
    cout<<count_ans<<"\n";
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
        string s;
        cin>>s;
        func(s);
    }
    

    return 0;
}