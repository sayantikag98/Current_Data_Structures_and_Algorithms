#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void merge (int* arr, int l, int mid, int r){
    int i = l, j = mid+1, k = 0;
    int new_arr[r-l+1];
    while(i<=mid and j<=r){
        if(arr[i]<=arr[j]){
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
    loop(y, 0, k){
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

void func(int* arr, int n){
    int p1=0, p2=0;
    
    loop(i, 0, n){
        if((arr[i]&1)==0 and p1==p2){
            p1++;
            p2++;
        }
        else if ((arr[i]&1)==0 and p1!=p2){
            int temp = arr[p2];
            arr[p2] = arr[p1];
            arr[p1] = temp;
            p1++;
            p2++;
        }
        else p2++;
    }
    merge_sort(arr,p1,n-1);
    merge_sort(arr,0,p1-1);
    
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
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    func(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    

    return 0;
}