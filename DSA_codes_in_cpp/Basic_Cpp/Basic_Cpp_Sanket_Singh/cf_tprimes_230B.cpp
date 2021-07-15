#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> visited(1e6+1, 1);

void sieve (){
	int n = 1e6;
	visited[0] = 0;
	visited[1] = 0;
	for(int i = 2; i * i <= n; i++){
		if(visited[i]){
			for(int j = i; j * i <= n; j++){
				visited[j*i] = 0;
			}
		}
	}
}


int32_t main(){
	int n, x;
	cin>>n;
	sieve();
	for(int i = 0; i<n; i++){
		cin>>x;
		if((floor(sqrt(x)) == ceil(sqrt(x))) and (visited[floor(sqrt(x))])){
			cout<<"YES\n";
		}
		else cout<<"NO\n";
	}

}