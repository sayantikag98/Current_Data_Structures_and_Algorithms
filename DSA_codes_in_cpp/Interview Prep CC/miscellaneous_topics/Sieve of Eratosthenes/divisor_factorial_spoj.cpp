#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int func(int n){
    vector <bool> visited (n+1,1);
    visited[0] = 0;
    visited[1] = 0;

    for(int i = 2; i*i<=n; i++){
        if(visited[i]){
            for(int j = i; j*i<=n; j+=(i>2)?2:1){
                visited[j*i] = 0;
            }
        }
    }

    vector <int> primes;
    for(int i = 2; i<=n; i++){
        if(visited[i]) primes.push_back(i);
    }

    // TC of the first part --> O(n loglog n) --> Sieve of Eratosthenes

    int count = 1;

    for(int i = 0; i<primes.size(); i++){
        int ans = 0, j = 1;
        while(floor((n/floor(pow(primes[i],j))))>0){
            ans= (ans+(floor(n/floor(pow(primes[i],j)))));
            j++;
        }
        if(ans>0) count = (count*(ans+1));

    }

    // total no of primes --> n/log n
    // TC of the second part --> O((n/log n) * (highest power))
    // Total TC --> O(n loglog n)
    return count;

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
    while(t--){
        int n;
        cin>>n;
        cout<<func(n)<<endl;
    }
    

    return 0;
}