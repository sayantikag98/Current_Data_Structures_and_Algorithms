#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int x = 0;
    while(i<=n){
        int num;
        cin>>num;
        x^=num;
        i++;
    }
    cout<<x<<endl;

    return 0;
}

// A^A = 0
// A^0 = A