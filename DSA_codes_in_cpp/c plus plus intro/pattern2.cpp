#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    int nsp = n-1;
    int nst = 1;
    int val = 1;

    while(row<=n){
        for(int i = 0; i<nsp; i++){
            cout<<"  ";
        }
        for(int i = 0; i<nst; i++){
            cout<<val<<" ";
            if(i<nst/2){
                val++;
            }
            else{
                val--;
            }
            
        }
        cout<<endl;
        row++;
        nsp--;
        nst+=2;
        val = 1;

    }
    return 0;
}