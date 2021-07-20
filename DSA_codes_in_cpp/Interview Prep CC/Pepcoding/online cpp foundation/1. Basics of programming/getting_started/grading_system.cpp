#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);
    int marks;
    cin>>marks;
    
    if(marks>90) cout<<"excellent"<<endl;
    else if (marks<=90 and marks>80) cout<<"good"<<endl;
    else if (marks<=80 and marks>70) cout<<"fair"<<endl;
    else if (marks<=70 and marks>60) cout<<"meets expectations"<<endl;
    else cout<<"below par"<<"\n";
    
    

    return 0;
}