#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

int arr[100];

int linear_search_recursive(int n, int tar){
    if(n == 1){
        if(arr[n-1] == tar) return n-1;
        else return -1;
    }
    int ans = linear_search_recursive(n-1,tar);
    if(ans != -1){
        return ans;
    }
    else{
        if(arr[n-1]==tar){
            return n-1;
        }
        else return -1;
    }
}

int linear_search_iterative (int n, int tar){
    loop(i,0,n){
        if(arr[i]==tar){
            return i;
        }
    }
    return -1;
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
    loop(i,0,n){
        cin>>arr[i];
    }
    int tar;
    cin>>tar;
    cout<<linear_search_recursive(n,tar)<<"\n";
    cout<<linear_search_iterative(n,tar)<<"\n";

    

    return 0;
}