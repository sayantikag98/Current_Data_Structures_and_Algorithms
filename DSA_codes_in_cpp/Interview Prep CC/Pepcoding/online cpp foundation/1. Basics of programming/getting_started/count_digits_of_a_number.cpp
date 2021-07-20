#include<bits/stdc++.h>
using namespace std;

int func (int n){
    int count = 0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}

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
    int ans = func(n);
    cout<<ans<<"\n";
    

    return 0;
}