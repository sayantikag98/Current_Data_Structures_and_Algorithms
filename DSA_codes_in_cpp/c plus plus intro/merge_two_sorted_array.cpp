#include<bits/stdc++.h>
using namespace std;

int* func(int arr1 [], int arr2 [], int n, int m){
    int* ans = new int [n+m];   // made inside heap
    int p1 = 0, p2 = 0, p3 = 0;
    while(p1<n and p2<m){
        if(arr1[p1]<arr2[p2]){
            ans[p3] = arr1[p1];
            p1++;
            p3++;
        }
        else if(arr1[p1]>arr2[p2]){
            ans[p3] = arr2[p2];
            p2++;
            p3++;
        }
    }
    while(p1<n){
        ans[p3]=arr1[p1];
        p1++;
        p3++;
    }
    while(p2<m){
        ans[p3]=arr2[p2];
        p2++;
        p3++;
    }
    delete [] ans; // delete the heap memory
    return ans;
}

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n, m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }
    for(int i = 0; i<n; i++){
        cin>>arr2[i];
    }
    
    int *p = func(arr1, arr2, n, m);
    for(int i = 0; i<n+m; i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    delete(p);

    return 0;
}