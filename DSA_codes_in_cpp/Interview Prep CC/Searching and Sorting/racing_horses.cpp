#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void func(int* arr, int n){
    int min = arr[1] - arr[0];
    loop(i,2,n){
        int diff = arr[i] - arr[i-1];
        if(diff<min) min = diff;
    }
    cout<<min<<"\n";
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
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        loop(i,0,n){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        func(arr,n);
    }
    

    return 0;
}