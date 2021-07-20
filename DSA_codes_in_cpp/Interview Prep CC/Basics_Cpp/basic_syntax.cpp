#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

int arr[10];

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n;
    cin>>n;
    loop(i,0,n){
        cin>>arr[i];
    }

    // cout<<max({1,2,3})<<endl;
    // int a=2, b = 2;
    // float div = (3*a)/(2*b);
    // cout<<div<<"\n";
    // int arr[10] {1,2,3};
    // cout<<arr[7]<<"\n";
    if(1e10+5==10000000005){
        cout<<"YES\n";
    }
    

    return 0;
}
