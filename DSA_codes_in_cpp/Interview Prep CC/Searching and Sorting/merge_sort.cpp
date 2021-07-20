#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)

vector<int> helper(vector<int> arr1, vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();
    int size = m+n;
    vector<int>an(size);
    int i = 0, j = 0, k = 0;
    while(i<n and j<m){
        if(arr1[i]<arr2[j]) an[k++] = arr1[i++];
        else an[k++] = arr2[j++];
    }
    while(i<n) an[k++] = arr1[i++];
    while(j<m) an[k++] = arr2[j++];

    return an;
}

vector<int> func(int* arr, int l, int r){
    if(l==r){
        vector<int> ans;
        ans.push_back(arr[l]);
        return ans;
    }
    int mid = (l+r)/2;
    vector<int> left = func(arr, l, mid);
    vector<int> right = func(arr, mid+1, r);
    vector<int> ans = helper(left,right);
    return ans;
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    loop(i,0,n){
        cin>>arr[i];
    }

    vector <int> ans = func(arr, 0, n-1);
    loop(i,0,n){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";

    

    return 0;
}