#include<bits/stdc++.h>
using namespace std;

int fact(int num);

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;
    return 0;
}

int fact(int num){
    if(num==1) return 1;
    else return num * fact(num-1);
}