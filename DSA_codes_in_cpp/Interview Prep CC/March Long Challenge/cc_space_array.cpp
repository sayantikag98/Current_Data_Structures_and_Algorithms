#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void func(int* arr, int n){
    int sum = 0;
    loop(i,0,n){
        if(arr[i]<(arr[0]+i)) sum+=((arr[0]+i)-arr[i]);
    }
    if(sum&1) cout<<"First\n";
    else cout<<"Second\n";
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int arr[n];
        loop(i,0,n){
            cin>>arr[i];
        }
        func(arr,n);
    }

    return 0;
}