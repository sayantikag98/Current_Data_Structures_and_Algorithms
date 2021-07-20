#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int c = 0;

void func(int i, int n, string s){
    if(i==n-1){  // reached the last cell
        s.pop_back();
        s.pop_back();
        cout<<s<<endl;  // print all possible path taken
        c+=1;  // increment the number of ways
        return;
    }
    else if(i>=n) return;  // outside the block
    for(int j = 1; j<=6; j++){   // all possible jumps that can be taken
        func(i+j,n,s+to_string(j)+"->");
    }
    

}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n;
    cin>>n;
    func(0,n,"");
    cout<<c<<endl;
    

    return 0;
}