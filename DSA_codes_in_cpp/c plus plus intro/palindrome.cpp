#include<bits/stdc++.h>
using namespace std;

bool func (string str){
    int l = 0;
    int r = str.size()-1;
    bool isPalindrome = true;
    while(l<=str.size()/2){
        if(str.at(l)!=str.at(r)){
            isPalindrome = false;
            break;
        }
        l++;
        r--;
    }
    return (isPalindrome);
}

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    string str = "madam";
    cout<<func(str)<<endl;
    

    return 0;
}