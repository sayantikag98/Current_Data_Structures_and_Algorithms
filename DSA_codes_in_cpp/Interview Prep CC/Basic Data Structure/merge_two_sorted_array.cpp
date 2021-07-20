#include<bits/stdc++.h>
using namespace std;

int* merge_sorted(int* arr1, int* arr2, int m, int n){
    int i = 0, j = 0, k = 0;
    int* result = new int [m+n];
    while(i<m and j<n){
        if(arr1[i]>=arr2[j]){
            result[k] = arr2[j];
            j++;
            k++;
        }
        else{
            result[k] = arr1[i];
            i++;
            k++;
        }
    }
    while(i<m){
        result[k] = arr1[i];
        i++;
        k++;
    }
    while(j<n){
        result[k] = arr2[j];
        j++;
        k++;
    }
    return result;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int m,n;
    cin>>m>>n;
    int arr1[m];
    int arr2[n];
    for(int i = 0; i<m; i++){
        cin>>arr1[i];
    }
    for(int i = 0; i<n; i++){
        cin>>arr2[i];
    }
    int * result = merge_sorted(arr1,arr2,m,n);
    for(int i = 0; i<(m+n); i++){
        cout<<result[i]<<" ";
    }
    cout<<"\n";
    

    return 0;
}