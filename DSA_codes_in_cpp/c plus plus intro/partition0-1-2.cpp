#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>

using namespace std;

void func (int arr [], int n){
    int l = 0, m=0, r = n-1;
    while(m<=r){
        if(arr[m]==0){
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        else if(arr[m]==1) m++;
        else if(arr[m]==2){
            swap(arr[m],arr[r]);
            r--;
        }
    }
    

}
int main(){
    // #ifndef ONLINE JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    // #endif
    int n;
    cin>>n;
    int arr [n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    func(arr,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}