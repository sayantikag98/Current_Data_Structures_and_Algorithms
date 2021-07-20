#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)

// #define loop(i,a,b) for(int i = a; i<b; i++)

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int n;
    cin>>n;
    vector<int> v (n,0);
    int q;
    cin>>q;
    while(q--){
        int l, r;
        cin>>l>>r;
        v[l]+=1;
        if(r+1<n){
            v[r+1]-=1;
        }
    }
    
    for(int i = 1; i<n; i++){
        v[i] += v[i-1];
    }

    loop(i,0,n){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    

    return 0;
}