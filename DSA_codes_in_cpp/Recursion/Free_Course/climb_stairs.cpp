#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n){
	if(n==0 or n==1) return 1; // if n==0 then that means we are already at our destination step so 1 way to reach there
	else return climbStairs(n-1) + climbStairs(n-2);
} 

int main(){
	int n;
	cin>>n;
	cout<<climbStairs(n)<<endl;
}