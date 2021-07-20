#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long


void func(int n){
    int l = 0, r = n/2, flag = 0;
    while(l<=r){
        int mid = l+((r-l)/2);
        if((mid*mid)>n) r = mid-1;
        else if((mid*mid)<n) l = mid+1;
        else{
            flag = 1;
            break;
        } 
    }
    if(flag) cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n;
    cin>>n;
    func(n);
    

    return 0;
}