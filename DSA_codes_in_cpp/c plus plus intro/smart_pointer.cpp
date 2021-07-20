#include<bits/stdc++.h>
using namespace std;

void wow (string s ){
    cout<<"wow "<<s<<"\n";
}

void happy (void (*ptr)(string) ){
    (*ptr)("Sayntika");
    cout<<"Happy "<<"\n";
}


int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    void (*ptr) (string) = wow;
    (*ptr)("Sayantika");

    void(*ptr1 []) (string) = {wow};
    (*ptr1[0])("Sayantika");

    happy(wow);

    return 0;
}
