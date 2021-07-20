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

    
    int nsp = 0;
    int nst = n;
    int nsp1 = n-4;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=nsp; j++){
            cout<<"\t";
        }
        if(i>n/2){
            for(int j = 1; j<=nst; j++){
               cout<<"*\t";
            }  
        }
        else{
            if(i==1){
                for(int j = 1; j<=n; j++){
                    cout<<"*\t";
                }
            }
            else{
                cout<<"*\t";
                for(int j = 1; j<=nsp1; j++){
                    cout<<"\t";
                }
                cout<<"*\t";
                
            }
            
        }
        
        cout<<"\n";
        if(i<=n/2){
            nsp++;
            nst-=2;
            if(i>1) nsp1-=2;
        }
        else{
            nsp--;
            nst+=2;
        }
    }
    

    return 0;
}