#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)

// int arr[]{12, 10, 9, 7, 5, 4, 3, 2, 1};
// int size = sizeof(arr)/sizeof(arr[0]);

void merge(int* arr, int l, int mid, int r){
    int i = l, j = mid+1, k = 0;
    int new_arr [r-l+1];
    while(i<=mid and j<=r){
        if(arr[i]<arr[j]){
            new_arr[k++] = arr[i++];
        }
        else{
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
}


void merge_sort(int* arr, int l, int r){
    if(l==r) return;
    int mid = (l+r)/2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid+1, r);
    merge(arr, l, mid, r);
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int size;
    cin>>size;
    int arr[size];
    loop(i,0,size){
        cin>>arr[i];
    }

    merge_sort(arr, 0, size-1);
    
    loop(i,0,size){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}