#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nsp = n-1;
    int nst = 1;
    int row = 1;
    while(row<=n){
        for(int i = 0; i<nsp; i++){
            cout<<"  ";
        }
        for(int i = 0; i<nst; i++){
            cout<<"* ";
        }
        cout<<endl;
        nsp--;
        nst+=2;
        row++;
    }
    return 0;

}