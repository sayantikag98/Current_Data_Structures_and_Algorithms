#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int n;
    cin >> n;


    int nsp = n-1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=nsp; j++){
            cout<<"\t";
        }
        cout<<"*\n";
        nsp--;
    }
    

    return 0;
}