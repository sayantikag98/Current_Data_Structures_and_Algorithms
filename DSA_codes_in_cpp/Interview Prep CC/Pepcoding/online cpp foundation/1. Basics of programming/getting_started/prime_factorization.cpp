#include<bits/stdc++.h>
using namespace std;

//SIEVE OF ERATOSTHENES
void func(int n) {
    int size = (int) sqrt(n);
    vector < int > v(size + 1, 1);
    v[0] = v[1] = 0;
    for (int i = 2; i * i <= size; i++) {
        if (v[i]) {
            for (int j = i; j * i <= size; j += (i > 2) ? 2 : 1) {
                v[i * j] = i;
            }
        }
    }
    int i = 2;
    while (n != 1 and i <= v.size()) {
        if (v[i] == 1 and n % i == 0) {
            cout << i << " ";
            n /= i;
        } else i++;

    }
    if (n != 1) cout << n << endl;


}


void func1(int n) {
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n != 1) cout << n << endl;
}



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int n;
    cin >> n;

    func(n);
    

    return 0;
}