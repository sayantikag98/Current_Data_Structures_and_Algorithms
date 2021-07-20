#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void binary_search(int* arr, int l, int r, int x){
    if (l==r){
        if(arr[l] == x){
            cout<<l<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        return;
    }
    int mid = l + ((r-l)/2);
    if(arr[mid]==x){
        cout<<mid<<endl;
        return;
    }
    else if(arr[mid]>x){
        binary_search(arr, l, mid-1, x);
    }
    else{
        binary_search(arr, mid+1, r, x);
    }
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n;
    cin>>n;
    int* arr = new int [n];
    loop(i,0,n){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    binary_search(arr, 0, n-1, x);
    delete(arr);
    

    return 0;
}