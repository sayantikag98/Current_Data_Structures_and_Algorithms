#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void func(int* arr[3], int n, int m){

}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n,m;
    cin>>m>>n;
    int arr[n][3];
    loop(i,0,n){
        loop(j,0,3){
            cin>>arr[i][j];
        }
    }
    func(arr, n, m);
    

    return 0;
}
