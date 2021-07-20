#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)

int* func(int* arr1, int* arr2, int n, int m){
    int size = m+n;
    int* an = new int [size]; // int ans[m+n]; did not work don't know why?
    int i = 0, j = 0, k = 0;
    while(i<n and j<m){
        if(arr1[i]<arr2[j]) an[k++] = arr1[i++];
        else an[k++] = arr2[j++];
    }
    while(i<n) an[k++] = arr1[i++];
    while(j<m) an[k++] = arr2[j++];
    
    return an;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    loop(i,0,n){
        cin>>arr1[i];
    }
    loop(i,0,m){
        cin>>arr2[i];
    }
    int* ans = func(arr1, arr2, n, m);
    loop(i,0,m+n){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    delete(ans);
    return 0;
}