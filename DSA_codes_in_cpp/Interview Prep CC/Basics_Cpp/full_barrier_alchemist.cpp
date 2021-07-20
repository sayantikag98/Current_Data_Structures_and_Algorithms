#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)

int count_ans,l;

void func(int h, int y1, int y2, int t, int x){
    if(t==2 and y2>=x){
        count_ans++;
    }
    else if(t==1 and h-y1<=x){
        count_ans++;
    }
    else if(t==1 and h-y1>x and l>1){
        count_ans++;
        l--;
    }
    else if(t==2 and y2<x and l>1){
        count_ans++;
        l--;
    }

}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,h,y1,y2,life;
        cin>>n>>h>>y1>>y2>>life;
        count_ans = 0;
        l = life;
        loop(i,0,n){
            int t,x;
            cin>>t>>x;
            func(h,y1,y2,t,x);
            
        } 
        cout<<count_ans<<"\n";
    }
    

    return 0;
}
