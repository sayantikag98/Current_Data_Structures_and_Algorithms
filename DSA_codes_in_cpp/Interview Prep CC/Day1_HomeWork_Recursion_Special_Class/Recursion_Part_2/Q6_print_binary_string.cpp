#include<bits/stdc++.h>
using namespace std;

void func(int temp, int n, string s){
    if(n==0){
        if(s.size()==temp) cout<<s<<endl;
        return;
    }
    if(s.size()>=1 and s.back()=='0') func(temp,n-1,s+"1");
    else if (s.size()==0) func(temp,n-1,s+"1");
    func(temp,n-1,s+"0");
    func(temp,n-1,s);
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
    func(n,n,"");

    return 0;
}