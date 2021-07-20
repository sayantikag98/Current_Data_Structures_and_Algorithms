#include<bits/stdc++.h>
using namespace std;


bool func(int n){
    for(int i = 2; i*i<=n; i++){
        if(n%i==0) return 0;
    }
    return 1;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        bool ans = func(n);
        if(ans) cout<<"prime"<<"\n";
        else cout<<"not prime"<<"\n";
    }
    return 0;
}