#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)

vector <int> str (255);

void func(string* s, int n){
    loop(i,0,n){
        loop(j,0,s[i].size()){
            str[(int)s[i][j]]++;
            cout<<typeid(s[i][j]).name()<<endl;
        }
    }
    string ans = "";
    loop(i,0,255){
        if(str[i]) {
            while(str[i]--){
                ans+=(char)i;
            }
        }
    }
    cout<<ans<<"\n";
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
    string s [n];
    loop(i,0,n){
        cin>>s[i];
    }
    func(s,n);
    

    return 0;
}