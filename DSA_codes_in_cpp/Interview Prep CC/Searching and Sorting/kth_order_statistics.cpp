#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)

void swap(int* arr, int i , int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int* arr, int l, int r){
    int pivot = r, i = l, j = l+1;
    while(j<=r){
        if(arr[j]<=arr[pivot]){
            if(arr[i]<=arr[pivot]) i++;
            swap(arr, i, j);
        }
        j++;
    }
    return i;
}

int partition_random(int* arr, int l, int r){
    int random = l+(rand()%(r-l+1));
    swap(arr, random, r);
    return partition(arr, l, r);
}


int k_order(int* arr, int l, int r, int k){
    if(l>=r) return arr[l];

    int pivot = partition_random (arr, l, r);

    if(pivot==k-1) return arr[pivot];
    else if(k-1<pivot) return k_order(arr, l, pivot-1, k);
    else return k_order(arr, pivot+1, r, k);
    

}

// TC --> O(n)

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int n,k;
    cin>>n;
    int arr[n];
    loop(i,0,n){
        cin>>arr[i];
    }
    cin>>k;
    random_shuffle(arr,arr+n);
    cout<<k_order(arr, 0, n-1, k)<<"\n";
    
    

    return 0;
}