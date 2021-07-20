#include<bits/stdc++.h>
using namespace std;

int* func(int* arr, int n){
    int* ans = new int [2];
    int x = 1, y = 1, k = 0;
    
    for(int i = 0; i<n; i++){
        if(abs(arr[i])<=n){
            arr[abs(arr[i])-1]*=-1;
        }
        else{
            if(abs(arr[i])==n+1) x*=-1;
            else if(abs(arr[i])==n+2) y*=-1;
        }
    }
    for(int j = 0; j<n; j++){
        if(arr[j]>0){
            ans[k] = j+1;
            k++;
        }
    }
    if(x>0) {
        ans[k]=n+1;
        k++;
    }
    if(y>0){
        ans[k]=n+2;
    }
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int* ans = func(arr,n);
    for(int i = 0; i<2; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    delete(ans);
    return 0;
}