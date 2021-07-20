#include<bits/stdc++.h>
using namespace std;

void func(int n){
    vector <int> visited (n+1);
    visited[0] = visited[1] = 0;
    for(int i = 2; i<=n; i++){
        visited[i] = i;
    }
    for(int i = 2; i*i<=n; i++){
        if(visited[i]==i){
            for(int j = i; j*i<=n; j+=(i>2)?2:1){
                visited[j*i] = i; 
            }
        }
    }

    // for(int i = 0; i<visited.size(); i++){
    //     cout<<visited[i]<<" ";
    // }
    // cout<<endl;
    while(n>1){
        cout<<visited[n]<<endl;
        n/= visited[n];
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n;
    cin>>n;
    func(n);
    

    return 0;
}