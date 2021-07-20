#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long
#define sec second
#define fir first

int orient(pair<int, int> p, pair<int, int> q, pair<int,int> r){
    int val = (q.sec - p.sec) * (r.fir - q.fir) - (q.fir - p.fir) * (r.sec - q.sec);
    if(val== 0){
        return 0;
    }
    else if(val>0) return 1;
    else return 2;
}

pair<int, int>secondTop(stack<pair<int,int>> &s){
    pair<int, int> p = s.top();
    s.pop();
    pair<int, int> r = s.top();
    s.push(p);
    return r;
}

int abs1(int a, int b){
    if(a>b) return a-b;
    return b-a;
}

int32_t main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        vector<pair<int,int>> v(n);
        loop(i,0,n){
            int temp;
            cin>>temp;
            v[i] = {i+1,temp};
        }
        stack<pair<int,int>> st;
        st.push(v[0]);
        st.push(v[1]);
        loop(i,2,n){
            if(st.size()<2){
                st.push(v[i]);
            }
            else{
                if(orient(secondTop(st), st.top(), v[i])==1){
                    st.push(v[i]);
                }
                else{
                    while(st.size()>=2 && orient(secondTop(st),st.top(),v[i])!=1){
                        st.pop();
                    }
                    st.push(v[i]);
                }
            }
        }
        int ans = 1;
        while(st.size()>=2){
            pair<int, int> pt = st.top();
            st.pop();
            pair<int, int> qt = st.top();
            ans = max(ans,abs1(pt.fir,qt.fir));
        }
        cout<<ans<<"\n";
    }
    return 0;
}