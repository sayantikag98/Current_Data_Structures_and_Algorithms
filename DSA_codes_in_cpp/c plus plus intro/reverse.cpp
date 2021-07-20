#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cin>>num;
    int ans = 0;
    while(num!=0){
        int digit = num%10;
        num/=10;
        ans = (10*ans)+digit;
    }
    cout<<ans<<endl;
    return 0;
}