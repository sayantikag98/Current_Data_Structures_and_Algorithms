#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
	for(int i = 2; i*i<=n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void prime_range(int n){
	vector<bool> visited(n+1, 1);
	visited[0] = 0;
	visited[1] = 0;
	for(int i = 2; i*i<=n; i++){
		if(visited[i]){
			for(int j = i; j<=n; j++){
				visited[j*i] = 0;
			}
		}
	}
	for(int i = 2; i<=n; i++){
		if(visited[i]){
			cout<<i<<" ";
		}
	}
	cout<<"\n";
}


int main(){
	int n;
	cin>>n;
	if(prime(n)){
		cout<<"Prime Number\n";
	}
	else{
		cout<<"Not a prime number\n";
	}
	prime_range(15);
}