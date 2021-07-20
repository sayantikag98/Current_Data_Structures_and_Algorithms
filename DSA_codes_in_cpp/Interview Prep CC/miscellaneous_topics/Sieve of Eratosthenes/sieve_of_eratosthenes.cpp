#include<bits/stdc++.h>
using namespace std;

void func(int n);

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


void func(int n){
    bool visited [n+1];
    for(int i = 2; i<=n; i++){
        visited[i] = 1;
    }
    int count = 0;
    for(int i = 2; i*i<=n; i++){ 
        if(visited[i]!=0){
            for(int j = i; j*i<=n; j+=(i>2)?2:1){  // j --> factors of i
                visited[j*i] = 0;
            }
        }
    }

    for(int i = 2; i<=n; i++){
        if(visited[i]) {
            cout<<i<<" ";
            count++;
        }
    }
    cout<<"\n";

    cout<<count<<endl;

}