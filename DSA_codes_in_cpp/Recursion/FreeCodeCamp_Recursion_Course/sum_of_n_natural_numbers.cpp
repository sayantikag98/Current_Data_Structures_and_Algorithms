#include<bits/stdc++.h>
using namespace std;

int ans = 0, ans1 = 0;

int sum_N_Natural_Numbers(int n){
	if(n == 1 or n == 0) return n;
	else return n + sum_N_Natural_Numbers(n-1);
}

void sum_N_Natural_Numbers_1(int n){
	if(n == 1 or n == 0){
		ans += n;
		return;
	}
	ans += n;
	sum_N_Natural_Numbers_1(n-1);
	// 5 + 4 + 3 + 2 + 1
}

void sum_N_Natural_Numbers_2(int n){
	if(n == 1 or n == 0){
		ans1 = n;
		return;
	}
	sum_N_Natural_Numbers_2(n-1);
	ans1 += n;
	// 1 + 2 + 3 + 4 + 5
}

void sum_N_Natural_Numbers_3(int n, int ans){
	if(n == 1 or n == 0){
		ans += n;
		cout<<ans<<endl;
		return;
	}
	sum_N_Natural_Numbers_3(n-1, ans + n);
}

int main(){
	int n;
	cin>>n;
	cout<<sum_N_Natural_Numbers(n)<<endl;
	sum_N_Natural_Numbers_1(n);
	cout<<ans<<endl;
	sum_N_Natural_Numbers_2(n);
	cout<<ans1<<endl;
	sum_N_Natural_Numbers_3(n, 0);

}