#include<bits/stdc++.h>
using namespace std;

void func(int* arr, int n, int tar){
    map <int, int> m;
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum+=arr[i];
        m[sum]=i;
        if(m.find(sum-tar)!=m.end()){
            cout<<m.at(sum-tar)+1<<" "<<m.at(sum)<<endl;
            return;
        }
    }
    cout<<"Not found"<<endl;

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
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int tar;
    cin>>tar;
    func(arr, n, tar);    

    return 0;
}