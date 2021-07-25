#include<bits/stdc++.h>
using namespace std;

queue <char> q;
int arr[26];
void first_non_repeating(string &s){
	for(int i = 0; i<s.size(); i++){
		if((!q.empty()) and s[i]==q.front()) q.pop();
		else{
			if(!(arr[s[i]-97])){
				q.push(s[i]);
			}
		} 
		arr[s[i]-97]++;
		while((!q.empty()) and (arr[q.front()-97] != 1)){
			q.pop();
		}
		if(q.empty()) cout<<-1<<" ";
		else cout<<q.front()<<" ";
	}
}

int main(){
	string str;
	cin>>str;
	first_non_repeating(str);
}