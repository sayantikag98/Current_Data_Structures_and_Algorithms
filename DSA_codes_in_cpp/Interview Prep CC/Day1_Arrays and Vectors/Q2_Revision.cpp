#include<bits/stdc++.h>
using namespace std;

int func(int* arr, int n){
    int result = 0;
    for(int i = 0; i<n; i++){
        int curr = i, count = 0;
        while(arr[curr]!=-1){
            int temp = curr;
            curr = arr[curr];
            arr[temp] = -1;
            count++;
        }
        result = max(count,result);
    }
    return result;
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
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int ans = func(arr,n);
    cout<<ans<<"\n";
    

    return 0;
}