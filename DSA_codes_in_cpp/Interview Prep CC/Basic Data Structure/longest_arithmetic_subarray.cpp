#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// not solved completely on google kickstart 2020 round E

ll longest_subarray(ll* arr, ll n){
    ll cd = 0;
    ll len = 1;
    ll max_len = 1;
    ll prev_cd = arr[1] - arr[0];
    for(ll i = 0; i<n-1; i++){
        cd = arr[i+1] - arr[i];
        if(cd!=prev_cd){
            len = 2;
            prev_cd = cd;
        }
        else {
            len++;
            max_len = max(max_len,len);
        }
        
    }
    return max_len;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    ll t;
    cin>>t;
    ll i = 1;
    while(i<=t){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i = 0; i<n; i++){
            cin>>arr[i];
        }
        ll ans = longest_subarray(arr,n);
        cout<<"Case #"<<i<<":"<<ans<<"\n";
        i++;
    }
    
    

    return 0;
}