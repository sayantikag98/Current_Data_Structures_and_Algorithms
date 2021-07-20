#include<bits/stdc++.h>
using namespace std;

int func(int i, int j, int n, int m, string s, int count){
    if(i>=n or j>=m) return count; // outside the grid condition
    else if(i==n-1 and j==m-1){  // has reached the destination
        cout<<s<<endl;  // print the path taken
        count+=1;   // increment the no of ways
        return count;
    }
    count = func(i,j+1,n,m,s+"R ",count);  // for moving right
    count = func(i+1,j,n,m,s+"D ",count);  // for moving down
    count = func(i+1,j+1,n,m,s+"Dia ",count);  // for moving diagonally
    return count;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    cout<<func(0,0,n,m,"",0)<<endl;
    

    return 0;
}

// Print and count the number of ways to traverse the 2D matrix from top-left to bottom-right when only downward, right and diagonal movements are allowed