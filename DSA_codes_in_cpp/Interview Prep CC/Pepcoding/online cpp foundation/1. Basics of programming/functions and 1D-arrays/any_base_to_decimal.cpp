#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)

void func(int n, int b){
    int ans = 0, mul = 1;
    while(n>0){
        int rem = n%10;
        n/=10;
        ans+=(rem*mul);
        mul*=b;
    }
    cout<<ans<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int n,b;
    cin>>n>>b;
    func(n,b);
    

    return 0;
}