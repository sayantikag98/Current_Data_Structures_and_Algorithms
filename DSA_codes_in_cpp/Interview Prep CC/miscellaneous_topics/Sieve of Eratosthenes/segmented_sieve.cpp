#include<bits/stdc++.h>
using namespace std;

vector <int> primes;

void func(int m){
    int limit = sqrt(m);
    vector <bool> visited (limit+1,1);
    visited[0] = 0;
    visited[1] = 0;
    for(int i = 2; i*i<=limit; i++){
        if(visited[i]){
            for(int j = i; j*i<=limit; j+=(i>2)?2:1){
                visited[j*i] = 0;
            }
        }
    }
    for(int i = 2; i<visited.size(); i++){
        if(visited[i]) primes.push_back(i);
    }

}

void segmented_sieve (int n, int m){
    int size = m-n+1;
    vector <bool> visited (size,1);
    for(int i = 0; i<primes.size(); i++){
        if(primes[i]<=sqrt(m)){
            int first = (n/primes[i]) * primes[i];  // this was to get the first factor
            if(first<n) first+=primes[i];
            for(int j = first; j<=m; j+=primes[i]){
                if(j!=primes[i]) visited[j - n] = 0;  // this should not include the prime numbers itself
            }
            
        }
        else break;
    }

    for(int i = 0; i<visited.size(); i++){
        if(visited[i] and (i+n)>1) cout<< i+n<<" ";  // any number less than 1 should not be included
    }
    cout<<endl;

}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int t;
    cin>>t;
    func(1000000000);
    while(t--){
        int n,m;
        cin>>n>>m;
        segmented_sieve(n,m);
        
    }
    return 0;
}