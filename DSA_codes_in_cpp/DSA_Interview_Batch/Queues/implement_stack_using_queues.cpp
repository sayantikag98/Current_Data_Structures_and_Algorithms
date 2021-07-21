#include<bits/stdc++.h>
using namespace std;


class Stack{

	queue<int> q1;
	queue<int> q2;

public:

	void push(int val){
		if(q1.empty() and q2.empty()) q1.push(val);
		else if(q1.empty() and (!q2.empty())) q2.push(val);
		else if((!q1.empty()) and q2.empty()) q1.push(val);
	}

	int pop(){
		if(q1.empty() and q2.empty()){
			cout<<"Stack underflow\n";
			return -1;
		}
		int val;
		if(q1.empty() and (!q2.empty())){
			while(q2.size() != 1){
				val = q2.front();
				q2.pop();
				q1.push(val);
			}
			val = q2.front();
			q2.pop();

		}
		else{
			while(q1.size() != 1){
				val = q1.front();
				q1.pop();
				q2.push(val);
			}
			val = q1.front();
			q1.pop();
			return val;
		}
		return val;

	}


	int size(){
		if(q1.empty() and q2.empty()){
			cout<<"Stack is empty\n";
			return 0;
		}
		else if(!q1.empty()){
			return q1.size();
		}
		else{
			return q2.size();
		}
	}

	int top(){
		if(q1.empty() and q2.empty()){
			cout<<"Stack underflow\n";
			return -1;
		}
		else if(!q1.empty()){
			return q1.back();
		}
		else{
			return q2.back();
		}
	}

	bool empty(){
		if(q1.empty() and q2.empty()) return 1;
		else return 0;
	}

};

int main(){

	Stack s;
	cout<<s.size()<<" "<<s.empty()<<endl;
	s.push(20);
	cout<<s.size()<<" "<<s.empty()<<endl;
	s.push(30);
	s.push(40);
	cout<<s.size()<<" "<<s.empty()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<" "<<s.empty()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<" "<<s.empty()<<endl;

}