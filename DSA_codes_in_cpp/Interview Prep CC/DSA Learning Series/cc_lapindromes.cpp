#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)
#define rloop(i,b,a) for(int i = (b); i>(a); i--)
#define int long long

void func(string s){
    map <char,int> m;
    if(((s.size())&1)==0){
        loop(i,0,s.size()){
            m[s[i]]++;
        }
    }
    else{
        for(int i = 0; i<s.size(); i++){
            if(i==s.size()/2){
                continue;
            }
            m[s[i]]++;
        }
    }
    
     loop(i,0,s.size()){
        if(i==s.size()/2){
            continue;
        }
        else if((m[s[i]]%2)!=0){
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES\n";
}



void func1(string s){
    vector <int> v(26);
    int si = s.size();
    if((si&1)==0){
        loop(i,0,si){
            v[s.at(i)-'a']++;
        }   
    }
    else{
        loop(i,0,si){
            if(i==si/2){
                continue;
            }
            else{
                v[s.at(i)-'a']++;
            }
        }
    }
    loop(i,0,si){
        if(i==si/2){
            continue;
        }
        else if((v[s[i]-'a']%2)!=0){
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES\n";

}

bool isLapin(string S){
    int L = S.size();
    vector <int> cntL(26);
    vector <int> cntR(26);
	for(int i = 0; i < L/2; i++)
		cntL[S[i]-'a']++;
	for(int i = (L+1)/2; i < L; i++)
		cntR[S[i]-'a']++;
	bool ret = true;
	for(int c = 0; c < 26; c++){
        if(cntL[c] != cntR[c])
			ret = false;
    }	
	return ret;
}

bool isLapin1(string S){
    int L = S.size();
    vector <int> cntL(26);
	for(int i = 0; i < L; i++){
	     if ((L%2)!=0 and i==(L/2)) continue;
		 cntL[S[i]-'a']++;
	}
	bool ret = true;
	for(int c = 0; c < 26; c++){
        if(cntL[c]%2!=0)
			ret = false;
    }	
	return ret;
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
        string s;
        cin>>s;
        // func(s);
        func1(s);
        // bool ans = isLapin(s);
        // bool ans = isLapin1(s);
        // if(ans) cout<<"YES\n";
        // else cout<<"NO\n";
    }
    return 0;
}