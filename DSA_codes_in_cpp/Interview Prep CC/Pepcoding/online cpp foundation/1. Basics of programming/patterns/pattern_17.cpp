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
    int val = (n+1)/2;
    
    for(int i = 1; i<=n; i++){
        if(i==(n+1)/2){
            for(int j = 1; j<=n; j++){
                cout<<"*\t";
            }
        }
        else{
            for(int j = 1; j<(n+1)/2; j++){
                cout<<"\t";
            }
            
            for(int j = (n+1)/2; j<=val; j++){
                cout<<"*\t";
            }
            if(i<n/2){
                val++;
            }
            else if(i>(n/2)){
                val--;
            }
        }
        cout<<"\n";
    }
    

    return 0;
}