#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

int s[(int)10e5];
int d[(int)10e5];

double is_good(double mid, int n, int k){
    double max1 = 0.0;
    double min1 = 10e5;
    double ft;
    loop(i,0,n){
        ft = s[i] * mid + d[i];
        max1 = max(ft,max1);
        min1 = min(ft,min1);
    } 
    return max1 - min1;
}

double func(int n, int k){
    double left = 0.0;
    double right = k;
    loop(i,0,100){
        double mid1 = left + (right - left)/3;
        double mid2 = right - (right - left)/3;
        if(is_good(mid1,n,k) > is_good(mid2,n,k)){
            left = mid1;
        }
        else if (is_good(mid1,n,k) < is_good(mid2,n,k)){
            right = mid2;
        }
    }
    return is_good(left, n, k);
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
    loop(i,0,n){
        cin>>s[i]>>d[i];
    }
    double ans = func(n,k);
    printf("%0.6f",ans);
    return 0;
}