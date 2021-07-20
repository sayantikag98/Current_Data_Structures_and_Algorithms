#include<bits/stdc++.h>
using namespace std;

void func(int n){
    int a = 0;
    int b = 1;
    while(n--){
        cout<<a<<endl;
        int c = a+b;
        a = b;
        b = c;
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
    cin >> n;
    
    func(n);
    
    

    return 0;
}