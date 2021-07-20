#include<bits/stdc++.h>
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    vector<int> v = {1,2, 3};
    vector<int> v1 = {2};
    cout<<(v>v1)<<endl;
   cout<<*(v.begin())<<endl;
   cout<<*(v.end()-1 )<<endl;


    return 0;
}