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
    
    for(int i = 1; i<=10; i++){
        cout<<n<<" * "<<i<<" = "<<(i*n)<<endl;
    }
    

    return 0;
}