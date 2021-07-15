#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cout<<s.capacity()<<endl;
	getline(cin,s);
	cout<<s<<endl;
	cout<<s.size()<<endl;
	s+='a';
	s.push_back('a');
	cout<<s<<endl;
	cout<<s.size()<<endl;
	cout<<s.capacity()<<endl;
	
	cout<<s.substr(0,4)<<endl;
	int n = s.size();
	for(int i = 0; i<((n+1)/2); i++){
		char temp = s.at(i);
		s.at(i) = s.at(n-i-1);
		s.at(n-i-1) = temp;

	}
	cout<<s<<endl;
	reverse(s.begin(),s.end());
	cout<<s<<endl;
	// bool b = ((s.compare(reverse(s.begin(),s.end())))?0:1);

	int arr [26];
	cout<<arr[1]<<endl;
	memset(arr, 0, sizeof(arr));
	cout<<arr[1]<<endl;
	for(int i = 0; i<s.size(); i++){
		arr[s[i]-'a']++;
	}
	int count = 0;
	bool flag = true;
	for(int i = 0; i<s.size(); i++){
		if(arr[i]==1){
			count++;
		}
		if((((s.size())&1)and(count>1))and ((!((s.size())&1))and(count>0))){
			flag = 0;
			break;
		}
	}
	if(flag){
		cout<<"possible\n";
	}
	else{
		cout<<"Not possible\n";
	}





}