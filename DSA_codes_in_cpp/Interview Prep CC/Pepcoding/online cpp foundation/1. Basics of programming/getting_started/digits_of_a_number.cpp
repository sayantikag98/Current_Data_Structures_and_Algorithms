#include<bits/stdc++.h>
using namespace std;

void print_digits(long long int num){
    int no_of_digits = 0;
    long long int temp = num;
    while(temp>0){
        temp/=10;
        no_of_digits++;
    }
    long long int divisor = pow(10, no_of_digits-1) + 0.5;
    cout<<divisor<<endl;
    while(divisor>0){
        cout<<num/divisor<<endl;
        num%=divisor;
        divisor/=10;
    }
    
}



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    long long int n;
    cin>>n;
    print_digits(n);
    return 0;
    
}


