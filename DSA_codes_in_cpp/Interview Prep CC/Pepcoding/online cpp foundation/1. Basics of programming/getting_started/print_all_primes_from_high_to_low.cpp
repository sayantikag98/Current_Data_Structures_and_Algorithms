#include<bits/stdc++.h>
using namespace std;

bool func(int num){
    for(int i = 2; i*i<=num; i++){
        if(num%i == 0) return 0;
    }
    return 1;
}

void func(int low, int high){  // function overloading
    
    //SIEVE OF ERATOSTHENES
    
    int n = sqrt(high);
    vector <int> v (n+1,1);
    v[0] = v[1] = 0;
    for(int i = 2; i*i<=n; i++){
        if(v[i]!=0){
            for(int j = i; j*i<=n; j+=(i>2)?2:1){
                v[j*i]=0;
            }
        }
    }
    vector <int> primes;
    for(int i = 0; i<=n; i++){
        if(v[i]) primes.push_back(i);
    }
    
    // SEGEMENTED SIEVE
    
    vector <int> range_primes (high-low+1,1);
    for(int i = 0; i<primes.size(); i++){
        for(int j = low; j<=high; j++){
            if(range_primes[j-low]!=0 and j%primes[i]==0){
                range_primes[j-low] = 0;
            }
        }
    }
    
    for(int i = 0; i<range_primes.size(); i++){
        if(range_primes[i]) cout<<i+low<<endl;
        
    }
    
    
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int low, high;
    cin >> low >> high;

    //write your code here
    // for(int i = low; i<=high; i++){
    //     if(func(i)) cout<<i<<endl;
    // }
    
    func(low, high);
    

    return 0;
}