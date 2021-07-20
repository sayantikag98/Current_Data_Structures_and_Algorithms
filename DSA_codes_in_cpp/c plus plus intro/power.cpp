#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    long long result = 1;
    while(b>0){
        if(b%2!=0){
            result *=a;
        }
        b/=2;
        a*=a;
    }
    cout<<result<<endl;
    return 0;
}