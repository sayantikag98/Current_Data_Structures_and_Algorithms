#include<bits/stdc++.h>
using namespace std;

int func(int n){
    return ((n==1 or n==2) ? n: (func(n-1)+((n-1)*func(n-2))));

    // if(n==1 or n==2) return n;
    // return func(n-1)+((n-1)*func(n-2));
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int num;
    cin>>num;
    cout<<func(num)<<"\n";
    

    return 0;
}