#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v (2,1);
    for(int i = 0; i<10; i++){
        v.push_back(10);
    }
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i<5; i++){
        v.pop_back();
    }
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}