#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isPrime = true;
    for(int i = 2; i*i<=n; i++){
        if(n%i==0){
            isPrime = false;
            cout<<"It is not a prime number"<<endl;
            break;
        }
    }
    if(isPrime) cout<<"It is a prime number"<<endl;
    return 0;
}