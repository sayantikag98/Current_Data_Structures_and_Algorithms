#include<bits/stdc++.h>
using namespace std;

void func(const string &str){
	string ans = "";
	for(int i = 0; i<str.size(); i++){
		char ch = str[i];
		if(ch!='A' and ch!='E' and ch!='I' and ch!='O' and ch!='U' and ch!='Y' and ch!='a' and ch!='e' and ch!='i' and ch!='o' and ch!='u' and ch!='y'){
			ans +=".";
			if(!islower(ch)) ch = ch - 'A' + 'a';
			ans+=ch;
		}
	}
	cout<<ans<<"\n";
}

int main(){
	string str;
	cin>>str;
	func(str);
}