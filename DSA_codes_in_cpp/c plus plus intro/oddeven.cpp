#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    // APPROACH 1
    // if(n%2==0) cout<<"Even"<<endl;
    // else cout<<"Odd"<<endl;

    // APPROACH 2
    if(n&1) cout<<"Odd"<<endl;
    else cout<<"Even"<<endl;

   // for every even number the least significant bit or the rightmost bit is 0 and for odd numbers it is 1
   // so 1&1 is true then odd otherwise even

    return 0;

}