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


    int nsp1 = n/2;
    int nsp2 = -1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=nsp1; j++){
            cout<<"\t";
        }
        cout<<"*\t";
        
        if(i!=1 and i!=n){
            for(int j = 1; j<=nsp2; j++){
                cout<<"\t";
            }
            cout<<"*\n";
        }
        
        else cout<<"\n";
        if(i<=n/2){
            nsp1--;
            nsp2+=2;
        }
        else{
            nsp1++;
            nsp2-=2;
        }
    }
    

    return 0;
}