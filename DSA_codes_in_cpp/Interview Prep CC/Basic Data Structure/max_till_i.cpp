#include<bits/stdc++.h>
using namespace std;

void max_till_i (int* arr, int n){
    int max_ele = arr[0];
    cout<<max_ele<<endl;
    for(int i = 1; i<n; i++){
        max_ele = max(arr[i],max_ele);
        cout<<max_ele<<endl;
    }
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
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    max_till_i(arr, n);
    

    return 0;
}