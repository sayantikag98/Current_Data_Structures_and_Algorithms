#include<bits/stdc++.h>
using namespace std;

//MEMOIZATION
int func_memo(int n , vector <int> v){
    v[0] = 0;
    v[1] = 1;
    v[2] = 2;
    if(v[n]!=-1) return v[n];
    int ans = func_memo(n-1,v) + ((func_memo(n-2,v))*(n-1));
    v[n] = ans;
    return ans;
}

//TABULATION
int func_tabu (int n){
    vector <int> v (n+1,0);
    v[1] = 1;
    v[2] = 2;
    for(int i = 3; i<=n; i++){
        v[i] = v[i-1] + ((i-1)*v[i-2]);
    }
    return v[n];
}

int main(){
    int n;
    cin>>n;
    vector <int> v (n+1, -1);
    int ans = func_memo(n,v);
    int ans1 = func_tabu(n);
    cout<<ans<<endl;
    cout<<ans1<<endl;
    return 0;
}