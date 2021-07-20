#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)

int helper(int n, int b1){
   int ans = 0, mul = 1;
    while(n>0){
        int rem = n%10;
        n/=10;
        ans+=(rem*mul);
        mul*=b1;
    } 
    return ans;
}


void func(int n, int b1, int b2){
    int n_10 = helper(n,b1);
    int ans = 0, mul = 1;
    while(n_10>0){
        int rem = n_10%b2;
        n_10/=b2;
        ans+=(rem*mul);
        mul*=10;
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

    int n,b1,b2;
    cin>>n>>b1>>b2;
    func(n,b1,b2);
    

    return 0;
}