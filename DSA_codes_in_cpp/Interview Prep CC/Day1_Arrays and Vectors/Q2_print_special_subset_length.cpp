#include<bits/stdc++.h>
using namespace std;


int func(vector <int> &v){
    int n = v.size(), result = 0;
    for(int i = 0; i<n; i++){
        int count = 0;
        int curr = i;
        while(v[curr]!=INT_MIN){
            int temp = curr;
            count++;
            curr = v[curr];
            v[temp] = INT_MIN;
        }
        result = max(result,count);    
    }
    return result;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    vector <int> v;
    for(int i = 0; i<n; i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    int ans = func(v);
    cout<<ans<<"\n";

    return 0;
}