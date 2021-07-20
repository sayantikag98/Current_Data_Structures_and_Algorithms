#include<bits/stdc++.h>
using namespace std;


void func(int n){
    vector <bool> visited (n+1,1);
    visited[0] = 0;
    visited[1] = 1;
    for(int i = 2; i*i*i<=n; i++){
        if(visited[i]){
            for(int j = i*i*i; j<=n; j+=(i*i*i)){
                visited[j] = 0;
            }
        }
    }
    int counter = 1;
    for(int i = 1; i<visited.size(); i++){
        if(visited[i]) {
            cout<<counter<<endl;
            counter++;
        }
        else{
            cout<<"NOT A CUBE FREE NUMBER"<<endl;
        }

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