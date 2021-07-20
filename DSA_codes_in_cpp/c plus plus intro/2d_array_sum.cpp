#include<bits/stdc++.h>
using namespace std;


int func(int **arr, int n , int m){
    int sum = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            sum+=(arr[i][j]*(i+1)*(j+1)*(n-i)*(m-j));
        }
    }
    return sum;
}

bool func(int ** arr, int n, int m, int x){
    int i = 0;
    int j = m - 1;
    while(i<n and j>=0){
        if(arr[i][j]==x) return true;
        else if(arr[i][j]>x) j--;
        else if(arr[i][j]<x) i++;
    }
    return false;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,m;
    cin>>n>>m;
    int arr [n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int ans = func(arr, n, m);
    cout<<ans<<"\n";
}