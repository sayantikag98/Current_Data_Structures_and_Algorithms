#include<bits/stdc++.h>
using namespace std;

class Queue{
	stack <int> s1;
	stack <int> s2;

public:
	void enqueue(int val){
		s1.push(val);
	}

	int dequeue(){
		int val;
		if(s1.empty() and s2.empty()){
			cout<<"Queue underflow\n";
			val = -1;
		}
		else if((!s1.empty()) and s2.empty()){
			while(!s1.empty()){
				val = s1.top();
				s1.pop();
				s2.push(val); 
			}
			val = s2.top();
			s2.pop();
		}
		else{
			val = s2.top();
			s2.pop();
		}
		return val;
	}

	int size(){
		return (s1.size() + s2.size());
	}

	bool empty(){
		if(s1.empty() and s2.empty()) return 1;
		else return 0;
	}

};

int main(){

	Queue q;
	cout<<q.empty()<<" "<<q.size()<<endl;
	q.enqueue(20);
	cout<<q.empty()<<" "<<q.size()<<endl;
	q.enqueue(30);
	q.enqueue(40);
	cout<<q.empty()<<" "<<q.size()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.empty()<<" "<<q.size()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.empty()<<" "<<q.size()<<endl;



}