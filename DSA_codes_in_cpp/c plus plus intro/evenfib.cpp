#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a = 0, b = 2, c;
    while(n>0){
        cout<<a<<endl;
        c = (4*b)+a;
        a = b;
        b = c;
        n--;

    }
    return 0;
}