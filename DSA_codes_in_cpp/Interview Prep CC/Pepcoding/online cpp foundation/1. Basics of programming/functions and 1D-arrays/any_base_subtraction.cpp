#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)

void func(int b, int n1, int n2) {
    int carry = 0;
    int final_ans = 0, mul = 1;
     while (n2 > 0) {
        int dig1 = n1 % 10;
        int dig2 = n2 % 10;
        dig1+=carry;
        if(dig2<dig1){
            dig2+=b;
            carry = 1;
        }
        else carry = 0;
        int ans = dig2 -dig1;
        final_ans +=(ans*mul);
        mul*=10;
        n1/=10;
        n2/=10;
    }
    cout<<final_ans<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int b, n1, n2;
    cin >> b >> n1 >> n2;
    func(b, n1, n2);

    return 0;
}