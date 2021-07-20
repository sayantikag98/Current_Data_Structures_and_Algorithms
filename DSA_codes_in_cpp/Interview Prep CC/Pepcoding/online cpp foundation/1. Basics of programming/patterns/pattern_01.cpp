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
    
   //write your code here
   for(int i = 1; i<=n; i++){
       for(int j = 1; j<=i; j++){
           cout<<"*\t";
       }
       cout<<"\n";
   }
    

    return 0;
}