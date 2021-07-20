#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int n;
    cin >> n;

    int nsp = 2*n-3;
    int nst = 1;
    for(int i = 1; i<=n; i++){
        int val = 1;
        for(int j = 1; j<=nst; j++){
            cout<<val<<"\t";
            val++;
        }
        for(int j = 1; j<=nsp; j++){
            cout<<"\t";
        }
        if(i==n){
            nst--;
            val--;
        }
        for(int j = 1; j<=nst; j++){
            val--;
            cout<<val<<"\t";
            
        }
        cout<<"\n";
        nsp-=2;
        nst++;
        
        
        
    }
    

    return 0;
}