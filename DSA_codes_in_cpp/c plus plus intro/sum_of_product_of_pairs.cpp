#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    long long int sum = 0, sum_sq = 0;
    while(i<=n){
        int num;
        cin>>num;
        sum+=num;
        sum_sq+=(num*num);
        i++;
    }
    cout<<((sum*sum)-sum_sq)/2<<endl;
    return 0;
}