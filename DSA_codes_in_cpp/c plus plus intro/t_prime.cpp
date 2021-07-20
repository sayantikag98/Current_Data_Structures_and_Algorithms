#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    while(num--){
        long long int n;
        cin>>n;
        long long int low = 1;
        long long int high = n;
        long long int sqrt = 0;

        //FINDING SQUARE ROOT USING BINARY SEARCH
        // O(log n)
        while(low<=high){
            long long int mid = (low+high)/2;
            if((mid*mid) == n){
                sqrt = mid;
                break;
            }
            else if((mid*mid)>n){
                high = mid-1;
            }
            else if((mid*mid)<n){
                low = mid+1;
                sqrt = mid;
            }
        }
    
        bool isPrime = true;
        for(int i = 2; i*i<=sqrt; i++){
            if(sqrt%i == 0){
                isPrime = false;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(isPrime and (sqrt*sqrt==n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;

}

// In c++ 1 is true and 0 is false