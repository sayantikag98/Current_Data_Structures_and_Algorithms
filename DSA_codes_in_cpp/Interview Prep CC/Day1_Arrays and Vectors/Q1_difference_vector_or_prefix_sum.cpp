#include<bits/stdc++.h>
using namespace std;

void func(vector<int> &v){
    int q;
    cin>>q;

// DIFFERENCE VECTOR/ARRAY TRICK

    while(q--){
        int l,r;
        cin>>l>>r;
        v[l]+=1;
        if(r<v.size()-1){
            v[r+1]-=1;
        }
    }// O(q)


// PREFIX SUM TRICK


    for(int i = 1; i<v.size(); i++){
        v[i]+=v[i-1];
    } // O(n)

// total time complexity --> O(n+q)
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    vector<int> v(n,0);
    

    func(v);

    for(int i = 0; i<n; i++){
        cout<<v[i]<<"  ";
    }
    cout<<"\n";

    return 0;

}