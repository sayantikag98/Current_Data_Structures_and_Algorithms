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

    
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(j==(n+1)/2){
                cout<<"*\t";
            }
            else if(i==(n+1)/2){
                cout<<"*\t";
            }
            else if(i==1 and j<=n/2){
                cout<<"*\t";
            }
            else if(j==n and i<=n/2){
                cout<<"*\t";
            }
            else if(j==1 and i>n/2){
                cout<<"*\t";
            }
            else if(i==n and j>n/2){
                cout<<"*\t";
            }
            else {
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
    

    return 0;
}