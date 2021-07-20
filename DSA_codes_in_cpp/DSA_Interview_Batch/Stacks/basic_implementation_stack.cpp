#include<iostream>
using namespace std;

struct Stack{
private:
	int* arr;
public:
	int top, size;

	Stack(int n){
		arr = new int [n];
		top = -1;
		size = n;
	}

	void push(int val){
		if((top - 1) == size){
			cout<<"Stack is full\n";
			return;
		}
		arr[++top] = val;
	}

	int pop(){
		if(top == -1){
			cout<<"Stack is empty\n";
			return -1;
		}
		return arr[top--];
	}

	int peek(){
		if(top == -1){
			cout<<"Stack is empty\n";
			return -1;
		}
		return arr[top];
	}

	bool isEmpty(){
		return (top == -1);
	}

	void display(){
		for(int i = top; i>=0; i--){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}

};

int main(){
	Stack s(5);
	cout<<s.peek()<<endl;
	s.push(1);
	cout<<s.peek()<<endl;
	s.push(2);
	// cout<<s.pop()<<endl;
	cout<<s.peek()<<endl;
	s.display();

}