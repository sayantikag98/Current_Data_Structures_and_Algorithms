#include<bits/stdc++.h>
using namespace std;

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    // int arr [n][m]; 

    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<m; j++){
    //         cin>>arr[i][j];
    //     }
    // } 

    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<m; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }   

    int** arr1 = new int* [n];
    for(int i = 0; i<n; i++){
        arr1[i] = new int [m];
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>arr1[i][j];
        }
    } 

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }   


    return 0;
}