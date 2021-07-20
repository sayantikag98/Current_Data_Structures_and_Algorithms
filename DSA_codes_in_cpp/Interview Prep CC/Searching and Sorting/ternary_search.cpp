#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

int arr[50];

int ternary_search(int n, int target){
    int left = 0, right = n-1, ans = -1;
    while(left<=right){
        int mid1 = left + (right - left)/3;
        int mid2 = right - (right - left)/3;
        if(arr[mid1] == target){
            ans = mid1;
            break;
        }
        else if (arr[mid2] == target){
            ans = mid2;
            break;
        }
        else if (arr[mid1] > target){
            right = mid1 - 1;
        }
        else if ((arr[mid1] < target) && (arr[mid2] > target)){
            left = mid1 + 1;
            right = mid2 - 1;
        }
        else if (arr[mid2] < target){
            left = mid2 + 1;
        }
    }
    return ans;
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int n,target;
    cin>>n;
    loop(i,0,n){
        cin>>arr[i];
    }
    cin>>target;
    cout<<ternary_search(n,target)<<"\n";
    

    return 0;
}