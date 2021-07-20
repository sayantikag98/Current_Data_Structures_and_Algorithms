#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int i = 1;
    while(i<=t){
        int n;
        cin>>n;
        // int j = 1;
        // int sum = 0;
        // while(j<n){
        //     if(j%3==0 || j%5==0) sum+=j;
        //     j++;
        // }
        // cout<<sum<<endl;
        int x = (n-1)/3; // for the number of multiples of 3
        int y = (n-1)/5; // for the number of multiples of 5
        int z = (n-1)/15; // for the number of multiples of 15
        int sum3 = (x*((2*3)+((x-1)*3)))/2;
        int sum5 = (y*((2*5)+((y-1)*5)))/2;
        int sum15 = (z*((2*15)+((z-1)*15)))/2;
        int ans = (sum3+sum5)-sum15;
        cout<<ans<<endl;
        cout<<sizeof(int)<<endl;
        i++;
    }
    return 0;
}