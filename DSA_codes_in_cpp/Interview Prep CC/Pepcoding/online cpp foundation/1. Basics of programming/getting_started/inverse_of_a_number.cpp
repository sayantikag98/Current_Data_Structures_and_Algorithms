#include<bits/stdc++.h>
using namespace std;

void func(int num) {
    int count = 0;
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        count++;
    }
    int arr[count];
    int k = 1;
    while (num > 0) {
        int digit = num % 10;
        arr[count - 1 - (digit - 1)] = k;
        num /= 10;
        k++;

    }

    for (int i = 0; i < count; i++) {
        cout << arr[i];
    }
    cout << "\n";
}

void func1(int num) {
    int new_num = 0;
    int k = 1;

    while (num > 0) {
        int digit = num % 10;
        int mul = pow(10, digit - 1) + 0.5;
        new_num += (mul * k);
        num /= 10;
        k++;
    }
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