#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

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
        int n;
        cin>>n;
        if(n%6==0 or n%6==1){
            int div = n/6;
            if((div&1)==0){
                if(n%6==1){
                    cout<<n+11<<" ";
                }
                else{
                    cout<<n-11<<" ";
                }
            }
            else{
                if(n%6==1){
                    cout<<n-1<<" ";
                }
                else{
                    cout<<n+1<<" ";
                }
            }
            cout<<"WS"<<"\n";
        }
        else if((n+1)%3==0){
            if(n==2 or ((n-2)%12==0)) cout<<n+9<<" ";
            else if(n==11 or ((n-11)%12==0)) cout<<n-9<<" ";
            else if(n==5 or ((n-5)%12==0)) cout<<n+3<<" ";
            else if(n==8 or ((n-8)%12==0)) cout<<n-3<<" ";
            cout<<"MS"<<"\n";            
        }

        else{
            if(n==3 or ((n-3)%12==0)) cout<<n+7<<" ";
            else if(n==10 or ((n-10)%12==0)) cout<<n-7<<" ";
            else if(n==4 or ((n-4)%12==0)) cout<<n+5<<" ";
            else if(n==9 or ((n-9)%12==0)) cout<<n-5<<" ";
            cout<<"AS"<<"\n";
        }
    }
    

    return 0;
}