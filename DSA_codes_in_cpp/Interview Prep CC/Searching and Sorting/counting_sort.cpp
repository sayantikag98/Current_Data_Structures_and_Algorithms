#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)

int* func(int* arr, int n){
    int max = arr[0];
    loop(i,1,n){
        if(max<arr[i]) max = arr[i];
    }
    vector <int> a(max+1,0);
    loop(i,0,n){
        a[arr[i]]++;
    }
    
    loop(i,1,max+1){
        a[i] += a[i-1];
    }
    int* ans = new int [n];
    for(int i = n-1; i>=0; i--){
        int ind = arr[i];
        a[ind]--;
        ans[a[ind]] = arr[i];
    }
    return ans;
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
    loop(i,0,n){
        cin>>arr[i];
    }
    int* ans = func(arr, n);
    loop(i,0,n){
        cout<<ans[i]<<" ";
    }  
    cout<<"\n";

    return 0;
}