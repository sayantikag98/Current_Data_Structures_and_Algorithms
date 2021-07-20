#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

int l[55];
int r[55];

int func(int max, int min, int n, int k){
    int left = min, right = max, ans = -1;
    while(left<=right){
        int mid = left + (right - left) / 2;
        
        int count_ans = 0;
        loop(i,0,n){
            if(mid>l[i] and mid<=r[i]){
                count_ans += mid - l[i];
            }
            else if (mid>r[i]){
                count_ans += r[i] - l[i] + 1;
            }
        }
        if(count_ans <= k){
            ans = mid;
            left = mid + 1;
        }
        else right = mid - 1;
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
    int n,k;
    cin>>n>>k;
    int min = INT_MAX, max = INT_MIN;
    loop(i,0,n){
        cin>>l[i];
        if(min>l[i]) min = l[i];
        cin>>r[i];
        if(max<r[i]) max = r[i];
    }
    cout<<func(max,min,n,k)<<"\n";
    return 0;
}