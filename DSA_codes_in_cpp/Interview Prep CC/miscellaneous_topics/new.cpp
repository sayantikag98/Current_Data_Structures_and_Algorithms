#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)


void swap_copy(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

void swap_reference(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int a = 10, b = 20;
    cout<<a<<" "<<b<<"\n";
    swap_copy(a,b);
    cout<<a<<" "<<b<<"\n";
    swap_reference(a,b);
    cout<<a<<" "<<b<<"\n";

    int d = 10;
    int e = d;
    cout<<d<<" "<<e<<endl;
    e = 20;
    cout<<d<<" "<<e<<endl;


    int s = 10;
    int &t = s;
    cout<<s<<" "<<t<<endl;
    t=20;
    cout<<s<<" "<<t<<endl;
    

    return 0;
}


