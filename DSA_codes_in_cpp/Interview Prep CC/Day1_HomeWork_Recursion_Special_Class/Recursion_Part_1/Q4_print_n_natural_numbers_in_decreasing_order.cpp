#include<bits/stdc++.h>
using namespace std;

void func(int n){
    // BASE CASE
    if(n==1){
        cout<<n<<"\n";
        return;
    }
    
    // SELF-WORK
    cout<<n<<"\n";

    // RECURSIVE INTUITION
    func(n-1);
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
    func(num);
    

    return 0;
}