#include<bits/stdc++.h>
using namespace std;

int func_tabu (int n){
    vector <int> v (n+1,0);
    int val = pow(10,9)+0.5+7;
    v[0] = 1;
    v[1] = 1;
    v[2] = 2;
    for(int i = 3; i<=n; i++){
        for(int j = 1; j<=6; j++){
            if(j>i){
                break;
            }
            else{
                v[i] = ((v[i]%val)+(v[i-j]%val))%val; 
                
            }
        }
    }
        
    return v[n];
    
}

int main(){
    int n;
    cin>>n;
    int ans = func_tabu(n);
    cout<<ans<<endl;
    return 0;
}