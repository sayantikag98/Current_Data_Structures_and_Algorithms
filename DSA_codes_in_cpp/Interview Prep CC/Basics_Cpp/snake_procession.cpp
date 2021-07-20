#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void func(string s, int l){
    string str = "";
    loop(i,0,l){
        if(s.at(i)!='.') str+=s[i];
    }
    // cout<<str<<"\n";
    if(str.size()==0) {
        cout<<"Valid"<<"\n";
        return;
    }
    else if(str.at(0)=='T' or str.at(str.size()-1)=='H'){
        cout<<"Invalid"<<"\n";
        return;
    }
    loop(i,0,str.size()){
        if(i%2==0){
            if(str.at(i)=='T'){
                cout<<"Invalid"<<"\n";
                return;
            }
        }
        else{
            if(str.at(i)=='H'){
                cout<<"Invalid"<<"\n";
                return;
            }
        }
    }
    cout<<"Valid"<<"\n";

}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int r;
    cin>>r;
    while(r--){
        int l;
        cin>>l;
        string s;
        cin>>s;
        func(s,l);
    }
    

    return 0;
}