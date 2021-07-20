#include<bits/stdc++.h>
using namespace std;

void sort_binary(int* arr, int n){
    int left = 0;
    int right = n-1;
    while(left<right){
        if(arr[left]==0 and arr[right]==1){
            left++;
            right--;
        }
        else if(arr[left]==0 and arr[right]==0) left++;
        else if(arr[left]==1 and arr[right]==1) right--;
        else if(arr[left]==1 and arr[right]==0){
            arr[left]=0;
            arr[right]=1;
            left++;
            right--;
        }
    }
    // for(int i = 0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

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
    sort_binary(arr,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    

    return 0;
}