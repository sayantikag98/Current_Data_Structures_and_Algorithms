#include<bits/stdc++.h>
using namespace std;

int func(int* arr, int n){
    int count = 0;
    if(n==1) return 1;
    int max = arr[0];
    if(arr[1]<max) count++;

    for(int i = 1; i<n-1; i++){
        int k = 0;
        if(arr[i]>max) {
            max = arr[i];
            k = 1;
        }
        if(max>arr[i+1] and k==1){
            count++;
        }

    }
    if(arr[n-1]>max) count++; 
    return count;
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int t;
    cin>>t;
    int i = 1;
    while(i<=t){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int ans = func(arr,n);
        cout<<"Case #"<<i<<": "<<ans<<endl;
        i++;
    }
    return 0;
}
