#include<bits/stdc++.h>
using namespace std;

int glo = 10;  // global variable initialization
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int x = 20;

    int* y = &x;
    cout<<&x<<endl;
    cout<<*y<<endl;
    cout<<y<<endl;
    cout<<sizeof(long long int)<<endl;
    cout<<sizeof(y)<<endl;
    int arr [] = {1,2,3,4,5};
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i<5; i++){
        cout<<arr+i<<" "<<*(arr+i)<<" ";
    }
    cout<<endl;
    int *ptr = arr;
    for(int i = 0; i<5; i++){
        cout<<ptr<<" "<<*(ptr)<<" ";
        ptr++;
    }
    cout<<endl;
    cout<<glo<<endl;
    int* ptr1 = new int;
    delete (ptr1);
    cout<<*ptr1<<endl;
    int val = 10;
    int &val1 = val;
    cout<<val<<endl;
    cout<<val<<endl;
    val1=11;
    cout<<val<<endl;
    cout<<val<<endl;

    return 0;
}