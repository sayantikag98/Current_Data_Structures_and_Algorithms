#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long



int func5 (int n, int e, int h, int a, int b, int c){
    int ans = 1e15;
    if((n<=e) and (n<=h)){
        ans = min(ans, n*c);
    }
    if (3*n<=h){
        ans =  min(ans, n*b);
    }
    if(2*n <= e){
        ans = min(ans, n*a);
    }
    if((h-n)/2 >=1 and ((h-n)/2 >= n-e)){
        if(b-c<0){
            int temp = min(n-1, (h-n)/2);
            ans = min(ans, (b-c) * temp + n*c);
        }
        else{
            int temp = max((long long)1,n-e);
            ans = min(ans, (b-c) * temp + n * c);

        }
    }
    if(e-n>=1 and e-n>=n-h){
        if (a-c<0){
            int temp = min(n-1,e-n);
            ans = min(ans, (a-c)*temp + n*c);
        }
        else{
            int temp = max ((long long) 1, n-h);
            ans = min(ans, (a-c)* temp + n*c);
        }
    }
    
    if((e/2 >=1) and (e/2 >= (3*n - h + 2)/3)){
        if(a-b<0){
            int temp = min(n-1, e/2);
            ans = min(ans, (a-b) * temp + n*b);

        }
        else{
            int temp = max ((long long)1, (3*n - h +2)/3);
            ans = min(ans, (a-b)* temp + n * b);

        }
    }
    if(e>=3 and h>=4 and n>=3){
        ans = min(ans, a+b+c + func5(n-3,e-3, h-4,a,b,c));
    }
    return ans;

}





// void func3 (int n, int e, int h, int a, int b, int c){
//     int ans = 1e15;
//     if((2*n)>=e){
//         ans = min(ans, (n*a));
//     }
//     else if((3*n)>=h){
//         ans = min(ans, (n*b));
//     }
//     else if (n>=e and n>=h){
//         ans = min(ans, (n*c));
//     }
//     else if (((e/2)+(h/3))>=n){
//         ans = min(ans, (((e/2) * a) + ((n - (e/2)) * b)));
    // }
    // else if (((e/2) + (e - (2*(e/2))) >=n) and ((e - (2*(e/2)))>=h)){
    //     ans = min(ans, (((e/2) * a) + ((n - (e/2)) * c)));
    // }
    // else if (e>h){
    //     if(h + ((e-h)/2) >=n){
    //         ans = min(ans, ((h*c) + ((n-h) * a)));
    //     }
    // }
    // else if (h>e){
    //     if(e>=n){
    //         ans = min(ans, n*c);
//         }
//     }
//     else if (((h/3) + (h - (3 * (h/3)))>=n) and ((h - (3 * (h/3)))>=e)){
//         ans = min (ans, (((h/3)* b) + ((n - (h/3))*c)));
//     }
//     else if (h>e){
//         if(e + ((h-e)/3) >=n){
//             ans = min (ans, ((e*c) + ((n-e) * b)));
//         }
//     }
//     else if (e>h){
//         if(h>=n){
//             ans = min(ans, n*c);
//         }
//     }
//     // else if (e<n and h<n){
//     //     ans = -1;
//     // }
//     else if (n>=3 and e>=3 and h>=4){
//         ans = helper1 (n,e,h,a,b,c,ans);
//         ans = helper2 (n,e,h,a,b,c,ans);
//         ans = helper3 (n,e,h,a,b,c,ans);
//         ans = helper4 (n,e,h,a,b,c,ans);
//     }
//     else{
//         ans = -1;
//     }
//     // if(ans == LONG_LONG_MAX){
//     //     cout<<-1<<"\n";
//     // }
//     cout<<ans<<"\n";
// }

// bool helper (int mid, int n, int e, int h, int a, int b, int c){
//     if(e<n and h<n) return 0;
//     else if (e<n and h>n){
//         int n_o = e/2;
//         int n_cm = h/3;
//         int rem_e = e%2;
//         int rem_h = h%3;
//         int min_n = min(rem_e, rem_h);
//         if(n_o + n_cm + min_n>=n){
//             return 1;
//         }
//         else if(e + (h-e)/3 >=n){
//             return 1;
//         }
//         else return 0;

//     }
//     else if(e>n and h<n){
//         int n_o = e/2;
//         int n_cm = h/3;
//         int rem_e = e%2;
//         int rem_h = h%3;
//         int min_n = min(rem_e, rem_h);
//         if(n_o + n_cm + min_n>=n){
//             return 1;
//         }
//         else if(h + (e-h)/2 >=n){
//             return 1;
//         }
//         else return 0;
//     }
//     else return 1;
// }

// void func1(int n, int e, int h, int a, int b, int c){
//     int l = 0;
//     int max_n = max(a, max(b,c));
//     int r = max_n * n, ans = -1;
//     while(l<=r){
//         int mid = l + (r-l)/2;
//         if(helper(mid, n, e, h, a, b, c)){
//             ans = mid;
//             r = mid - 1;
//             e--; h--;
//         }
//         else {
//             l = mid + 1;
//             e--;
//             h--;
//         }

//     }
//     cout<<ans<<"\n";
// }

// void func(int n, int e, int h, int a, int b, int c){
//     int ans = 0;
//     int minimum = min(a,min(b,c));
//     if(e<n and h<n) ans = -1;
//     else if((e==n and h==n) or (minimum==c)){
//         ans = c*n;
//     }
//     else  if(minimum==a){
//         if(e>=(2*n)){
//             ans = a*n;
//         }
//         else{
//             int n_o = e/2;
//             int n_cm = h/3;
//             int rem_e = e%2;
//             if(c<b and rem_e>0 and (n_o+1)>=n){
//                 ans = (n_o *a)+c;
//             }
//             else{
//                 int rem_c = h%3;
//                 int min_n = min(rem_e,rem_c);
//                 if((n_o + n_cm + min_n)>=n){
//                     ans = (n_o * a)+(n_cm * b)+(min_n * c);
//                 }
//                 else if(e>n and h>n) {
//                     ans = n * c;
//                 }
//                 else ans = -1;
//             }
            
//         }
        
//     }
//     else if(minimum==b){
//         if(h>=(3*n)){
//             ans = b*n;
//         }
//         else{
//             int n_cm = h/3;
//             int n_o = e/2;
//             int rem_h = h%3;
//             if(c<a and rem_h>0 and (n_cm + min(e,rem_h)>=n)){
//                 (ans = n_cm * b) + (min(e,rem_h) *c);
//             }
//             else{
//                 int rem_e = e%2;
//                 int min_n = min(rem_e,rem_h);
//                 if(n_cm+n_o+min_n>=n){
//                     ans = (n_cm * b)+(n_o * a)+(min_n * c);
//                 }  
//                 else if(e>n and h>n){
//                     ans = n*c;
//                 }
//                 else ans = -1;
//             }
//         }

//     }
//     cout<<ans<<"\n";
// }

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int t;
    cin>>t;
    int n,e,h,a,b,c;
    while(t--){
        cin>>n>>e>>h>>a>>b>>c;
        int ans = func5(n,e,h,a,b,c);
        if(ans == 1e15){
            ans = -1;
        }
        cout<<ans<<"\n";
    }
    

    return 0;
}