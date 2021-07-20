#include<bits/stdc++.h>
using namespace std;

int arr[5];
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    // int arr[5];
    for(int i = 0; i<5; i++){
        cout<<arr+i<<" ";
    }
    cout<<"\n";
    for(int i = 0; i<5; i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<"\n";
    for(int i = 0; i<5; i++){
        cout<<i[arr]<<" ";
    }



    return 0;
}