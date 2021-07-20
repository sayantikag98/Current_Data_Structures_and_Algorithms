#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define int long long

void func(int* arr, int n){
    loop(i,0,n-1){
        int min = i;
        loop(j,i+1,n){
            if(arr[min]>arr[j]) min = j;
        }
        int temp = arr[min];
        for(int k = min; k>i; k--){
            arr[k] = arr[k-1];
        }
        
        arr[i] = temp;
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


