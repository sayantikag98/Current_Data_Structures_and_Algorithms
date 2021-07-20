#include<bits/stdc++.h>
using namespace std;

void func(int n, int k) {
    int count = 0;
    int temp = n;
    int ans = 0;

    while (temp > 0) {
        temp /= 10;
        count++;
    }

    if (k == 0) cout << n << endl;

    else if (k < 0) {
        k = abs(k);
        k %= count;
        k = count - k;
    } else k %= count;

    int divisor = pow(10, k) + 0.5;
    int quo = n / divisor;
    int rem = n % divisor;
    int mul = pow(10, count - k) + 0.5;
    ans += (rem * mul) + (quo);
    cout << ans << endl;
}


//O(no of digits)


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    func(n, k);
    

    return 0;
}