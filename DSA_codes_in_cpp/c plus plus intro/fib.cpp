#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = 0, b = 1, c = 0;
    while(n>0){
        cout<<a<<endl;
        c = a+b;
        a=b;
        b=c;
        n--;
    }
    return 0;
}