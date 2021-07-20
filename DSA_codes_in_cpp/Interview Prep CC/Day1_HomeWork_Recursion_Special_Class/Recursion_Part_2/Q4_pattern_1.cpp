#include<bits/stdc++.h>
using namespace std;

void func(int i, int n, int temp){
    if(i==n+1) return;
    else if(temp==i+1){
        cout<<"\n";
        func(i+1,n,1);
        return;
    }
    cout<<"* ";
    func(i,n,temp+1);
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
    func(1,num,1);
    

    return 0;
}