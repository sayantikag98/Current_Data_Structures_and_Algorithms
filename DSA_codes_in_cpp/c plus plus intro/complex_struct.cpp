#include<bits/stdc++.h>
using namespace std;

struct Complex {
    int real;
    int img;

    Complex(int r, int i){
        real = r;
        img = i;
    }

    Complex operation_add (Complex a, Complex b){
        Complex ans(0,0);
        ans.real = a.real + b.real;
        ans.img = a.img + b.img;
        return ans;
    }

    Complex operation_multiply (Complex a, Complex b){
        Complex ans (0,0);
        ans.real = a.real * b.real - a.img * b.img;
        ans.img = a.real * b.img + a.img * b.real;
        return ans;
    }
    void display();
};

void Complex::display (){
    cout<<real<<" + "<<img<<"i\n";
}






int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    Complex a (10,50);
    Complex b (20,60);
    Complex ans (0,0);
    Complex ans1(0,0);
    cout<<ans.real<<" "<<ans.img<<"\n";
    ans = ans.operation_add(a,b);
    cout<<ans.real<<" "<<ans.img<<"\n";
    ans.display();
    ans1 = ans1.operation_multiply(a,b);
    ans1.display();
    

    return 0;
}