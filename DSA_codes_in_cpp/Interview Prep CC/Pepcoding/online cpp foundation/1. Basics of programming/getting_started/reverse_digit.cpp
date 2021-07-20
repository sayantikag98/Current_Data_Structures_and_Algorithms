#include<bits/stdc++.h>
using namespace std;

void reverse_digit (int num){
    while(num>0){
        cout<<num%10<<endl;
        num/=10;
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

    reverse_digit(n);
    

    return 0;
}