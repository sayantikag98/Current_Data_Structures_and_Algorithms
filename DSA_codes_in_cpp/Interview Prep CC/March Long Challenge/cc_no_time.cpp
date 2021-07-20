#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void func(int* arr, int n, int h){
    loop(i,0,n){
        if(arr[i]>=h){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n,h,x;
    cin>>n>>h>>x;
    int arr[n];
    loop(i,0,n){
        cin>>arr[i];
        arr[i]+=x;
    }
    func(arr,n,h);
    

    return 0;
}