#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define int long long

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    unordered_map <string,int> m;
    m["Kolkata"] = 20;
    m["Delhi"] = 30;
    m["Chennai"] = 50;
    m["Goa"] = 40;
    m["Mumbai"] = 60;
    cout<<m.at("Kolkata")<<endl;
    cout<<m.at("Delhi")<<endl;
    cout<<m.at("Chennai")<<endl;
    cout<<m.at("Goa")<<endl;
    cout<<m.at("Mumbai")<<endl;
    // int arr [] {1,2,3,4,5};
    // for(auto a:arr){
    //     cout<<a<<" ";
    // }
    // cout<<"\n";
    cout<<pow(10,4.5)<<endl;
    

    return 0;
}