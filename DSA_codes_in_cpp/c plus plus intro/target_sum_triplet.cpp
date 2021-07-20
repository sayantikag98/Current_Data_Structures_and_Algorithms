#include<bits/stdc++.h>
using namespace std;

bool func(int arr [], int n, int s);

int main(){

     #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    int n,s;
    cin>>n;
    int arr [n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cin>>s;
    if(func(arr,n,s)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

bool func(int arr [], int n, int s){
    for(int i = 0; i<n-2; i++){
        int l = i+1, r = n-1;
        while(l<r){
            if((arr[l]+arr[r])==(s-arr[l-1])) return 1;
            else if((arr[l]+arr[r])>(s-arr[l-1])){
                r--;
            }
            else if((arr[l]+arr[r])<(s-arr[l-1])){
                l++;
            }
        }
    }
    return 0;    

}