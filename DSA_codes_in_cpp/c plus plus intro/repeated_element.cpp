#include<bits/stdc++.h>
using namespace std;

int* func(int* arr, int n){
    int* ans = new int [2];  // array made in heap
    for(int i = 0; i<n; i++){
        if(arr[abs(arr[i])-1]>0) arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        else{
            ans[0] = abs(arr[i]);
        }
    }
    for(int i = 0; i<n; i++){
        if(arr[i]>0){
            ans[1]=i+1;
            break;
        }
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
    int arr [n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int* ans = func(arr,n);
    if(ans[0]<1 or ans[0]>n) cout<<"NO REPEATED AND MISSING ELEMENT"<<endl;
    else{
        cout<<"The repeated element is "<<ans[0]<<endl;
        cout<<"The missing element is "<<ans[1]<<endl;
    }
    delete(ans);

    return 0;

}