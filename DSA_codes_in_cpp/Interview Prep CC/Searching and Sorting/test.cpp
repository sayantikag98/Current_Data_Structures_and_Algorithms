#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)

bool comparator(int a,int b){
    return a>b;
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    vector<int> v {3,2,4,1};
    sort(v.begin(),v.end(),comparator);
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<*(v.begin())<<"\n";
    int a = 7.89;
    cout<<a<<"\n";
    

    return 0;
}