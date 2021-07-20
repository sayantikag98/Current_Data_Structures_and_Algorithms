#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)

int partition(int* arr, int l, int r){
    int pivot = r, i = l, j = l+1;
    while(j<=r){
        if(arr[j]<=arr[pivot]){
            if(arr[i]<=arr[pivot]) i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        j++;  
    }
    return i;
}

void quick_sort(int* arr, int l, int r){
    if(l>=r) return;
    int pivot = partition(arr, l, r);
    quick_sort(arr,l,pivot-1);
    quick_sort(arr,pivot+1,r);
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
    random_shuffle(arr,arr+n);
    quick_sort(arr, 0, n-1);
    loop(i,0,n){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}