#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int* arr, int n){
    for(int i = 1; i<n; i++){
        int j = i-1;
        int temp = arr[i];
        while(j>=0 and temp<arr[j]){
            arr[j+1] = arr[j];
            j--;   
        }
        arr[j+1] = temp;
    }
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
    insertion_sort(arr,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}