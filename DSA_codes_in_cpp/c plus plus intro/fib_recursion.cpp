#include<bits/stdc++.h>
using namespace std;

int func(int n){
    if(n<2) return n;
    else return func(n-1)+func(n-2);
}


//MEMOIZATION IN C++
int func_memo (int n, vector <int> &v){
    v[0] = 0;
    v[1] = 1;
    if(v[n]!=-1) return v[n];
    int ans = func_memo(n-1,v) + func_memo(n-2,v);
    v[n] = ans;
    return ans;

}

int main(){
    int n;
    cin>>n;
    int ans = func(n);
    vector <int> v (n+1,-1);
    int ans1 = func_memo(n, v);
    cout<<ans<<endl;
    cout<<ans1<<endl;
    return 0;
}

// Write function body above the main function
