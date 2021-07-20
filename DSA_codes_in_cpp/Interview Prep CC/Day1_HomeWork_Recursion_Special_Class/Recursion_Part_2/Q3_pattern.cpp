#include<bits/stdc++.h>
using namespace std;

void func(int n, int temp){
    // BASE CASE
    if(n==0) return;
    else if(temp==0){
        // SELF-WORK
        cout<<"\n";
        // RECURSIVE INTUITION
        func(n-1,n-1);
        return;
    }
    // SELF-WORK
    cout<<"* ";
    // RECURSIVE INTUITION
    func(n,temp-1); 

    // TC --> O(N^2) 
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
    func(num, num);

    return 0;
}