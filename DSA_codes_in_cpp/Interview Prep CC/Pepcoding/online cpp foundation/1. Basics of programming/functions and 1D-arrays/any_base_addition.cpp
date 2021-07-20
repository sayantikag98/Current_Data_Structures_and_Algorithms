#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i = (a); i<(b); i++)

void func(int b, int n1, int n2) {
    int carry = 0;
    int mul = 1, final_ans = 0;
    while (n1 > 0 or n2 > 0 or carry != 0) {
        int digit1 = n1 % 10;
        int digit2 = n2 % 10;
        int ans = digit1 + digit2 + carry;
        carry = ans/b;
        ans%=b;
        final_ans += (ans * mul);
        mul *= 10;
        n1 /= 10;
        n2 /= 10;
    }
    cout << final_ans << endl;

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