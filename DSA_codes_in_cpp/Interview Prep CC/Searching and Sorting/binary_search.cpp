#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void binary_search(int* arr, int* queries, int n, int k){
    loop(i,0,k){
        int l = 0;
        int r = n-1;
        int flag = 0;

        while(l<=r){
            int mid = ((2*l)+(r-l))/2;
            if(arr[mid]<queries[i]){
                 l = mid+1;
            }
            else if(arr[mid]>queries[i]){
                r = mid-1;
            }
            else{
                flag = 1;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int arr[n];
    loop(i,0,n){
        cin>>arr[i];
    }
    int queries[k];
    loop(i,0,k){
        cin>>queries[i];
    }
    binary_search(arr,queries,n,k);
    

    return 0;
}



