#include<bits/stdc++.h>
using namespace std;

void func(int i, int *arr, int n, string s){
    if(i==n){
        cout<<"["<<s<<"]"<<"\n";
        return;
    }
    
    string sub = to_string(arr[i]);
    
    func(i+1, arr,n,s+sub);
    func(i+1, arr,n,s);
    

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
    func(0,arr,n,"");
    

    return 0;
}