#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void func(int n, string s){
    if(s.size()>0) cout<<s<<endl; // to avoid printing the empty string
    else if(s.size()==0) cout<<0<<endl;
    int i = (s.size()==0)? 1 : 0;
    // at the first level the iteration should start from 1 otherwise it will throw stack overflow error
    // from the next level onwards the iteration should start from 0
    for(; i<10; i++){
        if(stoi(s+to_string(i))<=n){  // at each string concatenation we should check for whether the number formed becomes larger than n or not
            func(n,s+to_string(i)); // if its smaller than n then only concatenate
        }   
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
    cin>>n;
    func(n,"");
    return 0;
}