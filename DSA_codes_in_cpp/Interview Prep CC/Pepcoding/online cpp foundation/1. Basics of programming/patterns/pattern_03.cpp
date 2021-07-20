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
    int nst = 1;
    int row = 1;
    while(row<=n){
        for(int i = 1; i<=nsp; i++){
            cout<<"\t";
        }
        for(int i = 1; i<=nst; i++){
            cout<<"*\t";
        }
        row++;
        nsp--;
        nst++;
        cout<<"\n";
    }
    

    return 0;
}