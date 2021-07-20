#include<bits/stdc++.h>
using namespace std;

int func(int *arr, int n, int d){
    int l = 0;
    int h = 1;
    int count = 0;
    while(h<n){
        if(arr[h]-arr[l]==d){
            count++;
            h++;
            l++;
        }
        else if(arr[h]-arr[l]>d){
            l++;
        }
        else if(arr[h]-arr[l]<d){
            h++;
        }
    }
    return count;
}

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n, d;
    cin>>n>>d;
    int arr [n];
    for(int i = 0; i<n; i++) cin>>arr[i];
    int ans = func(arr,n,d);
    cout<<ans<<endl;
    return 0;
}