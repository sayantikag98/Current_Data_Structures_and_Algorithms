#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    
    if ((((a * a) + (b * b)) == (c * c)) or(((b * b) + (c * c)) == (a * a)) or(((a * a) + (c * c)) == (b * b))) cout << "true" << endl;
    else cout << "false" << endl;
    

    return 0;
}