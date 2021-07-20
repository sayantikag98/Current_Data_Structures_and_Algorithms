#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void func(int n){
    int nsp = n-2;
    int row = 1;
    while(row<=n){
        if(row!=(n+1)/2){
            cout<<"*\t";
            loop(j, 0, nsp){
                cout<<"\t";
            }
            cout<<"*\t";
        }
        else{
            loop(j,0,n){
                cout<<"*\t";
            }
        }
        cout<<"\n";
        row++;
        
    }
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int n;
    cin>>n;
    func(n);
    

    return 0;
}