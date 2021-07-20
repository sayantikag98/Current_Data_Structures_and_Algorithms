#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

int a[1003][1003];
int b[1003][1003];

bool func(int r, int c, int x){
    loop(i,0,r){
        loop(j,0,c){
            if(a[i][j]!=b[i][j]) return false;
        }
    }
    return true;
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int r,c,x;
        cin>>r>>c>>x;

        loop(i,0,r){
            loop(j,0,c){
                cin>>a[i][j];
            }
        }
        loop(i,0,r){
            loop(j,0,c){
                cin>>b[i][j];
            }
        }
        if(r<x and c<x){
            if(func(r,c,x)) cout<<"Yes\n";
            else cout<<"No\n";
        }
        else if (r<x){
            loop(i,0,r){
                loop(j,0,c-x+1){
                    if(a[i][j] == b[i][j]) continue;
                    else{
                        int diff = b[i][j] - a[i][j];
                        a[i][j] +=diff;
                        int k=1;
                        while(k<x){
                            a[i][j+k] +=diff;
                            k++;
                        }
                    }
                }
            }
            if(func(r,c,x)){
                cout<<"Yes\n";
            }
            else cout<<"No\n";
        }
        else if (c<x){
            loop(i,0,c){
                loop(j,0,r-x+1){
                    if(a[j][i] == b[j][i]) continue;
                    else{
                        int diff = b[j][i] - a[j][i];
                        a[j][i]+=diff;
                        int k = 1;
                        while(k<x){
                            a[j+k][i]+=diff;
                            k++;
                        }
                    }
                }
            }
            if(func(r,c,x)){
                cout<<"Yes\n";
            }
            else cout<<"No\n";
        }
        else if (c>=x and r>=x){
            loop(i,0,r){
                loop(j,0,c-x+1){
                    if(a[i][j] == b[i][j]) continue;
                    else{
                        int diff = b[i][j] - a[i][j];
                        a[i][j]+=diff;
                        int k = 1;
                        while(k<x){
                            a[i][j+k]+=diff;
                            k++;
                        }
                    }
                }
            }
            loop(i,0,c){
                loop(j,0,r-x+1){
                    if(a[j][i] == b[j][i]) continue;
                    else {
                        int diff = b[j][i] - a[j][i];
                        a[j][i] +=diff;
                        int k = 1;
                        while(k<x){
                            a[j+k][i]+=diff;
                            k++;
                        }
                    }
                }
            }
            if(func(r,c,x)){
                cout<<"Yes\n";
            }
            else cout<<"No\n";
        }
    }


    return 0;
}