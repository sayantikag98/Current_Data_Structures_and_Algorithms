#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c || b+c>a || a+c>b){  // to check whether its a triangle or not
        if(((a*a)+(b*b))==(c*c) or  ((c*c)+(b*b))==(a*a) or ((a*a)+(c*c))==(b*b)) cout<<"Right Angled Triangle"<<endl; // to check whether its a right angled triangle or not by pythagoras theorem
        else cout<<"Its not"<<endl;
    }
    else cout<<"Its not a triangle"<<endl;
    return 0;
}