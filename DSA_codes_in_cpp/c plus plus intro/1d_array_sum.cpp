#include<bits/stdc++.h>
using namespace std;

// using prefix sum  // O(n^2)
int func1 (int* arr, int n){
    int sum = arr[0];
    for(int i = 1; i<n; i++){
        arr[i] = arr[i] + arr[i-1];
        sum+=arr[i];
    }
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            sum+=(arr[j] - arr[i]);
        }
    }
    return sum;


}

int func(int* arr, int n){   // O(n^3)
    int total_sum = 0;
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            for(int k = i; k<=j; k++){
                cout<<arr[k]<<" ";
                sum+=arr[k];
            }
            cout<<"\n";
            
        }
        total_sum+=sum;
    }
    
    return total_sum;
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
    int sum = func1(arr,n);
    cout<<sum<<"\n";
    return 0;
}