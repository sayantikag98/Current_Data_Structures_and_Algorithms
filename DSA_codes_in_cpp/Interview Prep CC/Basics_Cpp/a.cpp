#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void func(int n){
    int nsp1 = n-1;
    int nsp2 = -1;
    int row = 1;
    while(row<=n){
        loop(j,0,nsp1){
            cout<<"\t";
        }
        cout<<"*\t";
        if(row!=(n+1)/2){
            loop(j,0,nsp2){
                cout<<"\t";
            }
        }
        else{
            loop(j,0,nsp2){
                cout<<"*\t";
            }
        }
        
        if(row!=1){
            cout<<"*\t";
        }
        nsp1--;
        nsp2+=2;
        
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