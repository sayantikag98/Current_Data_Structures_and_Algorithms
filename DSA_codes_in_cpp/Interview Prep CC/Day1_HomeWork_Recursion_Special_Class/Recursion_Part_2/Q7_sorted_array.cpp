#include<bits/stdc++.h>
using namespace std;

bool func(int* arr, int n){
    if(n==1) return true;
    if(func(arr,n-1)){
        if(arr[n-1]>arr[n-2]) return true;
        else return false;
    }
    else return false;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    if(func(arr,n)) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    

    return 0;
}