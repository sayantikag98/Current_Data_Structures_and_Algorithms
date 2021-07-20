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
    int arr[7]{1,2,3,4,5,6,7};
    for(int i = 0; i<7; i+=2){
        cout<<arr[i]<<" ";
    }
    for(int i = 1; i<7; i+=2){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    vector<int>v;
    v.resize(20);
    cout<<v.size()<<"\n";
    loop(i,0,10){
        v.push_back(i);
    }
    cout<<v.back()<<"\n";
    

    return 0;
}