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

    for(int i = 0; i<n; i++){
        int val = 1;
        for(int j = 0; j<=i; j++){
            cout<<val<<"\t";
            int val1 = (val * (i-j))/(j+1);
            val = val1;
        }
        cout<<"\n";
    }
    

    return 0;
}