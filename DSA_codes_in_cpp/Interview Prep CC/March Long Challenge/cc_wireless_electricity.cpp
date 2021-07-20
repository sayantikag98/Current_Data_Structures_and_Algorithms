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
    int n,m;
    cin>>n>>m;
    int x[n],y[n];
    loop(i,0,n){
        cin>>x[i]>>y[i];
    }
    int a[n],b[n],c[n],d[n];
    loop(i,0,m){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    loop(i,0,m){
        if(a[i]>c[i]){
            swap(a[i],c[i]);
            swap(b[i],d[i]);
        }
        if((i%2)==0){
            cout<<-a[i]<<" "<<-b[i]-1<<"\n";
        }
        else{
                cout<<1000000+1-a[i]<<" "<<1000000-b[i]<<"\n";
            }
        }
        return 0;
    }
    