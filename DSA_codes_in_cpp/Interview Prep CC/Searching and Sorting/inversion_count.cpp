#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)

int c = 0;

int merge(int* arr, int l, int mid, int r){
    int c_i = 0;
    int i = l, j = mid+1, k = 0;
    int new_arr[r-l+1];
    while (i<=mid and j<=r){
        if(arr[i]<=arr[j]){
            new_arr[k++] = arr[i++];
        }
        else{
            c_i += (mid-i+1);
            new_arr[k++] = arr[j++];
        }
    }
    while(i<=mid){
        new_arr[k++] = arr[i++];
    }
    while(j<=r){
        new_arr[k++] = arr[j++];
    }
    loop(y,0,k){
        arr[l++] = new_arr[y];
    }
    return c_i;
}

int func(int* arr, int l, int r){
    if(l==r) return 0;
    int mid = (l+r)/2;
    func(arr,l,mid);
    func(arr,mid+1,r);
    c+=merge(arr,l, mid, r);
    return c;

    
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
    loop(i,0,n){
        cin>>arr[i];
    }
    cout<<func(arr, 0, n-1)<<"\n";
    return 0;
}