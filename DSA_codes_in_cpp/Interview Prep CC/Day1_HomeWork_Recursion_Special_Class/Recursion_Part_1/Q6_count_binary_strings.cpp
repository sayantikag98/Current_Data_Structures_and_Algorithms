#include<bits/stdc++.h>
using namespace std;

int func(int n){
    if(n==1) return 2;
    else if(n==2) return 3;
    return func(n-1)+func(n-2);
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