#include<bits/stdc++.h>
using namespace std;

int func(int n1, int n2) {
    int divisor = min(n1, n2);
    while (divisor--) {
        if (n1 % divisor == 0 and n2 % divisor == 0) return divisor;
    }
}

int func1(int n1, int n2) {
    int divisor = n1;
    int dividend = n2;

    while (dividend % divisor != 0) {
        int rem = dividend % divisor;
        dividend = divisor;
        divisor = rem;
    }
    return divisor;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int num1, num2;
    cin >> num1 >> num2;

    int gcd = func(num1, num2);
    int lcm = (num1 * num2) / gcd;
    cout << gcd << endl;
    cout << lcm << endl;
    

    return 0;
}