#include<bits/stdc++.h>
using namespace std;


// input string with unique characters
void func(string str, int n, string s){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    for(int i = 0; i<n; i++){
        func((str.substr(0,i)+str.substr(i+1)),n-1,s+str.at(i));
    }
    
}

// input string with repeating characters
// works for both repeating and unique characters
void func1(string str, int n, string s){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    unordered_set <char> us;
    for(int i = 0; i<n; i++){
        char ch = str.at(i);
        if(us.count(ch)==0){
            func1((str.substr(0,i)+str.substr(i+1)),n-1,s+ch);
            us.insert(ch);
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
    string str;
    cin>>str;
    int n = str.size();
    // func(str,n,"");
    func1(str,n,"");

    return 0;
}