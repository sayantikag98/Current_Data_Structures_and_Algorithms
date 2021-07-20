#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int arr [n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int l = 0;
    int r = n-1;
    while(l<=r){
        if(arr[l]==0) l++;
        else if(arr[l]==1){
            if(arr[r]==0){
                int temp = arr[l];
                arr[l] = arr[r];
                arr[r] = temp;
                l++;
                r--;
            }
            else if(arr[r]==1) r--;
        }
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}