#include<bits/stdc++.h>
using namespace std;

void func(int n, const vector<vector<int>> &a, const vector<vector<int>> &b){
	int ans [n][n];
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			ans[i][j] = 0;
		}
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			for(int k = 0; k<n; k++){
				ans [i][j] += (a[i][k] * b[k][j]);
			}
		}
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	}

}

int main(){
	int n;
	cin>>n;
	vector<vector<int>> a;
	vector<vector<int>> b;
	int num;
	for(int i = 0; i<n; i++){
		vector<int> v;
		for(int j = 0; j<n; j++){
			cin>>num;
			v.push_back(num);	
		}
		a.push_back(v);
	}
	for(int i = 0; i<n; i++){
		vector<int> v1;
		for(int j = 0; j<n; j++){
			cin>>num;
			v1.push_back(num);
		}
		b.push_back(v1);
	}

	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			cout<<a[i][j];
		}
		cout<<"\n";
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			cout<<b[i][j];
		}
		cout<<"\n";
	}
	func(n, a, b);
}