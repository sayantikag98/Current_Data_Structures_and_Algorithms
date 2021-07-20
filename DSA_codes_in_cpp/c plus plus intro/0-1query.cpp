#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];  // array initialization with garbage values
    int* arr1 = new int [n] ();  // array initializes with zeros
    vector <int> v (n+1,0);
    while(q--){    // good thing to implement bcoz in c++ 0 is falsre and 1 is true
        int l, r;   //O(q)
        cin>>l>>r;
        v[l]++;
        v[r+1]--;
    }


    //Prefix-sum method
    for(int i = 1; i<n; i++){  //O(n)
        v[i] += v[i-1];
    }
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}

//Total TC ---> O(q) + O(n)