#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

int arr[100];

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n;cin>>n;
    loop(i,0,n){
        cin>>arr[i];
    }
    cout<<arr[2]<<" "<<(arr+1)[1]<<" "<<(arr+2)[0]<<"\n";
    

    return 0;
}