#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

bool is_good(double mid, int* arr, int n, int k){
    int sum = 0;
    loop(i,0,n){
        sum+=(arr[i]/mid);
    }
    return sum>=k;
}


void func(int* arr, int n, int k){
    double l = 0, r = 1e8;
    int limit = log2(pow(10,18)+0.5);
    loop(i,0,limit){
        double mid = l+(r-l)/2;
        if(is_good(mid,arr,n,k)){
            l=mid;
        }
        else r = mid;
    }
    // printf("%0.20f",l);
    cout<<fixed<<setprecision(20)<<l<<endl;
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int arr[n];
    loop(i,0,n){
        cin>>arr[i];
    }
    func(arr,n,k);
    

    return 0;
}