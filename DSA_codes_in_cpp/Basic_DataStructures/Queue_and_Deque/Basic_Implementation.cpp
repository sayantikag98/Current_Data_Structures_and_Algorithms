#include<bits/stdc++.h>
using namespace std;

class Node {

public:
	int data;
	Node* next;

	Node(int val): data(val), next(NULL) {}

};

class LinkedList_Implementation_Queue {

	Node* head;
	Node* tail;
	int size;

public:
	LinkedList_Implementation_Queue(): head(NULL), tail(NULL), size(0) {}

	void push(int val) {
		Node* n = new Node(val);
		if (!head) head = n;
		else tail->next = n;
		tail = n;
		size++;
	}

	int pop() {
		if (!head) {
			cout << "Deletion not possible\n";
			return -1;
		}
		Node* current = head;
		if (!(head->next)) {
			tail = NULL;
		}
		head = head -> next;
		size--;
		int val = current -> data;
		delete(current);
		return val;
	}

	int& front() {   // returns reference and not address
		if (size == 0) {
			cout << "Queue is empty\n";
			return size;
		}
		return head->data;

	}

	int& back() {
		if (size == 0) {
			cout << "Queue is empty\n";
			return size;
		}
		return tail->data;
	}

	int siz() {
		return size;

	}

	bool empty() {
		return (size == 0);
	}

	void clear() {
		while (size) {
			pop();
		}
	}

	void print() {
		cout << "Size = " << size << "\n";
		if (!size) {
			cout << "Queue is empty\n";
		}
		else {
			Node* current = head;
			while (current) {
				cout << current->data << " -> ";
				current = current -> next;
			}
			cout << "NULL\n";
		}

	}

};


class circularQueue {

	int* arr, start, end, size, cap;

public:

	circularQueue(int cap) {
		this-> cap = cap;
		arr = new int [cap];
		start = 0;
		end = -1;
		size = 0;
	}

	void push(int val) {
		if (size == cap) {
			cout << "Circular queue is full\n";
			return;
		}

		arr[start] = val;
		start = ((start + 1) % cap);
		size++;

	}

	int pop() {

		if (size == 0) {
			cout << "Circular queue is empty\n";
			return -1;
		}

		end = ((end + 1) % cap);
		int val = arr[end];
		size--;
		return val;

	}

	int& front() {
		if (size == 0) {
			cout << "Circular queue is empty\n";
			return size;
		}
		return arr[start];
	}

	int& front_cq() {
		if (size == 0) {
			cout << "Circular queue is empty\n";
			return size;
		}
		return arr[start];
	}

	int& back_cq() {
		if (size == 0) {
			cout << "Circular queue is empty\n";
			return size;
		}
		return arr[end];
	}



	int siz() {
		return size;
	}

	bool empty() {
		return (size == 0);
	}

	void clear() {
		while (size) {
			pop();
		}
	}

	void print() {
		if (!size) {
			cout << "Circular queue is empty\n";
		}
		else {
			for (int i = 0; i < cap; i++) {
				cout << arr[i] << " ";
			}
			cout << "\n";
		}
	}



};

class node {

public:
	int data;
	node* next;
	node* prev;

	node(int data) {
		this->data = data;
		next = NULL;
		prev = NULL;
	}

};

class Deque_Implementation_LL {

	node* head;
	node* tail;
	int size;

public:
	Deque_Implementation_LL(): head(NULL), tail(NULL), size(0) {}

	void push_front(int val) {
		node* n = new node (val);
		if (!head) {
			tail = n;
		}
		else {
			head->prev = n;
		}
		n->next = head;

		head = n;
		size++;
	}

	void push_back(int val) {
		node* n = new node(val);
		if (!head) {
			head = n;
		}
		else {
			tail->next = n;
			n->prev = tail;
		}
		tail = n;
		size++;
	}

	void pop_front() {
		if (!head) {
			cout << "Deque is empty\n";
			return;
		}
		node* temp = head;
		if (!(head->next)) {
			tail = NULL;
			head = NULL;
		}
		else {
			head = head->next;
			head->prev = NULL;
		}
		delete(temp);
		size--;
	}

	void pop_back() {
		if (!head) {
			cout << "Deque is empty\n";
			return;
		}
		node* temp = tail;
		if (!(head->next)) {
			head = NULL;
			tail = NULL;
		}
		else {
			tail = tail->prev;
			tail->next = NULL;
		}
		delete(temp);
		size--;
	}

	void print() {
		if (!size) {
			cout << "Deque is empty\n";
		}
		node* current = head;
		while (current) {
			cout << current->data << " <=> ";
			current = current->next;
		}
		cout << "NULL\n";

	}

};



int main() {

	LinkedList_Implementation_Queue lq;
	lq.print();
	lq.push(10);
	lq.print();
	lq.push(20);
	lq.print();
	lq.push(30);
	lq.print();
	lq.push(40);
	lq.print();
	lq.pop();
	lq.print();
	lq.pop(); lq.pop();
	lq.print();
	cout << lq.front() << " " << lq.siz() << "\n";
	cout << lq.empty() << "\n";
	lq.clear();
	lq.print();


	queue<int> q;
	q.push(10);
	q.push(20);
	cout << q.back() << "\n";
	cout << "__________________________\n";


	circularQueue cq(10);
	cq.print();
	cq.push(10);
	cq.print();
	cq.push(20);
	cq.print();
	cq.push(30);
	cq.print();
	cq.push(40);
	cq.print();
	cq.push(50);
	cq.print();
	cq.push(60);
	cq.print();
	cq.push(70);
	cq.print();
	cq.push(80);
	cq.print();
	cq.push(90);
	cq.print();
	cq.push(100);
	cq.print();
	cq.pop();
	cq.print();
	cq.pop(); cq.pop();
	cq.print();
	cout << cq.front_cq() << " " << cq.siz() << " " << cq.back_cq() << "\n";
	cout << cq.empty() << "\n";
	cq.clear();
	cq.print();
	cq.back_cq();

	cout << "DEQUE\n";
	cout << "____________________________________________\n";
	deque<int> dq;
	dq.push_front(10);
	cout << dq.size() << "\n";


	Deque_Implementation_LL d;
	d.print();
	d.push_front(10);
	d.print();
	d.push_front(20);
	d.print();
	d.push_back(30);
	d.print();
	d.push_back(40);
	d.print();
	d.pop_front();
	d.print();
	d.pop_back();
	d.print();

	cout << ((-1) % 2) << endl;


}


/*

Queue implementation using array

two pointers- front and rear

push an element => simply increment the rear pointer
pop an element => simply increment the front pointer


*/


/*
Circular Queue Implementation

int* start = -1, end = 0;

		for insertion of val:
		start = ((start+1)%capacity);
		arr[start] = val;

		for deletion:
		int val = arr[end];
		end = ((end+1)%capacity);

circular queue implemented using arrays and having two pointers -- start and end pointers


*/