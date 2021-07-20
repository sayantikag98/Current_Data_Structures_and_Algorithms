#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)

int func(int n, int tar);

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n, tar;
    cin>>n>>tar;
    
    int ans = func(n,tar);
    cout<<ans<<endl;
    return 0;
}

int func(int n, int tar){
    int count = 0;
    while(n>0){
        int digit = n%10;
        if(digit == tar) count++;
        n/=10;
    }
    return count;
}
