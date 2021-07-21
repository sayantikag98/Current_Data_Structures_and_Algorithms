#include<bits/stdc++.h>
using namespace std;

int main(){
	stack <int> s;
	s.push(20);
	cout<<s.empty()<<" "<<s.size()<<endl;
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.size()<<endl;
}