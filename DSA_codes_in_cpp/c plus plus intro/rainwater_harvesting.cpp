#include<bits/stdc++.h>
using namespace std;

int func(int* arr, int n){
    int ans = 0;
    int templ [n];
    int tempr [n];
    for(int i = 0; i<n; i++){
        tempr[i] = templ[i]= 0;
    }
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]<arr[j]){
                tempr[i]=arr[j];
            }
        }

    }
    for(int i = 0; i<n; i++){
        cout<<tempr[i]<<" ";
    }
    cout<<endl;
    for(int i = 1; i<n; i++){
        for(int j = i-1; j>=0; j--){
            if(arr[i]<arr[j]){
                templ[i]=arr[j];
            }
        }

    }
    for(int i = 0; i<n; i++){
        cout<<templ[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i<n; i++){
        int val = min(templ[i],tempr[i])-arr[i];
        if(val>0) ans+=val;
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
    int ans = func(arr,n);
    cout<<ans<<endl;
    return 0;
}