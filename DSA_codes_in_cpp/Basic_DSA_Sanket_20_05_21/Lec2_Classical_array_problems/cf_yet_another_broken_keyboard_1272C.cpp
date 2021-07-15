#include<bits/stdc++.h>
#define int long long
using namespace std;

bool present(char* key, int k, char data){
	bool flag = 0;
	for(int i = 0; i<k; i++){
		if(data == key[i]){
			flag = 1;
			break;
		}
	}
	return flag;

}

void func(int n, int k, string &s, char* key){
	int count = 0;
	int ans = 0;
	for(int i = 0; i<n; i++){
		char data = s.at(i);
		if(present(key, k, data)){
			count++;
		}
		else{
			ans +=((count*(count+1))/2);
			count=0;
		}
		// cout<<count<<endl;

	}
	ans +=((count*(count+1))/2);
	cout<<ans<<endl;

}


int32_t main(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	char* key = new char[k];
	for(int i = 0; i<k; i++){
		cin>>key[i];
	}
	func(n,k,s,key);
}