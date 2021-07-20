#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x = 5;
    int count = 0;
    while(n/x!=0){
        count += n/x;
        x*=x;
    }
    cout<<count<<endl;
    return 0;
}