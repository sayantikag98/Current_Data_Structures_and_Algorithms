#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define int long long

// keeping a track of the number of swaps it make during each iteration 
// will help us know whether the array has already been sorted or not
// If the array is already sorted then it will make zero number of swaps.


void func(int* arr, int n){
    //iterations 
    loop(i,0,n-1){
        //comparison
        int count = 0;// for optimization of the code so that no swapping is done if the array has already become sorted
        loop(j,0,n-1-i){
            //swap
            if(arr[j]>arr[j+1]){
                count++;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }   
        }
        if(count == 0) return;
        
        // loop(k,0,n){
        //     cout<<arr[k]<<" ";
        // }
        // cout<<"\n";
    }
}

int32_t main(){
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
    func(arr,n);
    loop(i,0,n){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    

    return 0;
}