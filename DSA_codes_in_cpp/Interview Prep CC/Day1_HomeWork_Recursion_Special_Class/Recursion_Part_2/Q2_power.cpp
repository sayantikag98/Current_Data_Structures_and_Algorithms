#include<bits/stdc++.h>
using namespace std;

int func(int a, int b){
    // BASE CASE
    if(b==0) return 1;
    else if(b==1) return a;
    // RECURSIVE INTUITION
    int sub_ans = func(a,b/2);
    // SELF-WORK
    if((b & 1) == 1) return a * sub_ans * sub_ans;
    else return sub_ans * sub_ans;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    cout<<func(a,b)<<"\n";
    

    return 0;
}