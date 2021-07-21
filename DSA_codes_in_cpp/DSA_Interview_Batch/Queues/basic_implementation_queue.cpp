#include<bits/stdc++.h>
using namespace std;

class Queue{
	int* arr, front, rear, curr_size, max_size;
public:

	Queue(int n){
		arr = new int [n];
		front = 0;
		rear = 0;
		curr_size = 0;
		max_size = n;
	}

	void enqueue(int val){
		if(curr_size == max_size){
			cout<<"Queue overflow\n";
			return;
		}
		arr[rear] = val;
		rear = (rear + 1) % max_size;
		curr_size++;
	}

	int dequeue(){
		if(!curr_size){
			cout<<"Queue underflow\n";
			return -1;
		}
		int temp = arr[front];
		front = (front + 1) % max_size;
		curr_size--;
		return temp;
	}

	int front_ele(){
		if(!curr_size){
			cout<<"Queue underflow\n";
			return -1;
		}
		return arr[front];
	}

	int back_ele(){
		if(!curr_size){
			cout<<"Queue underflow\n";
			return -1;
		}
		return arr[rear-1];
	}

	int size(){
		if(!curr_size){
			cout<<"Queue underflow\n";
			return -1;
		}
		return curr_size;
	}

	bool isEmpty(){
		return (curr_size == 0);
	}

	void display(){
		if(!curr_size){
			cout<<"Queue underflow\n";
			return;
		}
		for(int i = front; i!=rear; i=(i+1)%max_size){
			cout<<arr[i]<<" ";
		}
		// cout<<arr[rear]<<endl;
		cout<<"\n";
	}

};

int main(){
	int n;
	cin>>n;
	Queue q(n);

	q.enqueue(20);
	q.display();//1
	q.enqueue(30);
	q.display();//2
	q.enqueue(40);
	q.display();//3
	cout<<q.dequeue()<<endl;//4
	q.display();//5
	cout<<q.dequeue()<<endl;//6
	q.display();//7
	cout<<q.front_ele()<<endl;//8
	cout<<q.back_ele()<<endl;//9
	cout<<q.size()<<endl;//10
	cout<<q.dequeue()<<endl;//11
	q.display();//12
	cout<<q.isEmpty()<<endl;//13



}