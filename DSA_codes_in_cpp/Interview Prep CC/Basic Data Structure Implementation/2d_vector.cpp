#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v;
    for(int i = 0; i<n; i++){
        vector<int> temp(m);
        for(int j = 0; j<m; j++){
            int x; 
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    
for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
        cout<<(v[i][j])<<" ";
    }
    cout<<endl;
}

int arr[10];
cout<<arr<<endl;
cout<<arr+1<<endl;

    

    return 0;
}