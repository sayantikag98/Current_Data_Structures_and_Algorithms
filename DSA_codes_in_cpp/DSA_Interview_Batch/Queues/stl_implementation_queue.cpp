#include<bits/stdc++.h>
using namespace std;

int main(){
	queue<int> q;
	queue<int> q1;
	stack<int>s;
	q.push(30);
	q.push(40);
	q.pop();
	cout<<q.front()<<" "<<q.back()<<endl;
	cout<<q.empty()<<" "<<q.size()<<endl;
	// q.swap(q1);
	cout<<q.front()<<" "<<q.back()<<endl;
	cout<<q.empty()<<" "<<q.size()<<endl;
	q.emplace(90);
	cout<<q.front()<<" "<<q.back()<<endl;
	cout<<q.empty()<<" "<<q.size()<<endl;
	s.push(30);
	s.pop();
}