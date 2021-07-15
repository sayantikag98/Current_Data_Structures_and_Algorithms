#include<bits/stdc++.h>
using namespace std;

class Array_Implementation {
	int* arr;
	int size;
	int* peek;

public:
	Array_Implementation() {
		arr = new int [1000];
		size = 0;
	}

	void push(int val) {
		if (size == 1000) {
			cout << "stack is full\n";
			return;
		}
		arr[size++] = val;
	}

	int pop() {
		if (size == 0) {
			cout << "Deletion not possible because stack is empty\n";
			return -1;
		}
		int val = arr[size - 1];
		size--;
		return val;
	}

	int top() {
		if (isEmpty()) {
			cout << "Stack is empty\n";
			return -1;
		}
		return arr[size - 1];
	}

	int siz() {
		return size;
	}

	bool isEmpty() {
		if (size == 0) return true;
		else return false;
	}

	void clear() {
		size = 0;
	}

	void print() {
		if (size == 0) {
			cout << "Stack is empty\n";
		}
		else {
			int* temp = arr;
			while (temp != (arr + size)) {
				cout << (*temp) << " ";
				temp++;
			}
			cout << "\n";
		}
	}
};


class VectorImplementation {

	vector<int> arr;
	int size;

public:


	VectorImplementation() {
		size = 0;
	}

	void push(int val) {
		arr.push_back(val);
		size++;
	}

	int pop() {
		if (size == 0) {
			cout << "Stack is empty\n";
			return -1;
		}
		int val = arr[size - 1];
		arr.pop_back();
		size--;
		return val;
	}

	int top() {
		if (size == 0) {
			cout << "Stack is empty\n";
			return -1;
		}
		return arr[size - 1];
	}

	int siz() {
		return size;
	}

	bool isEmpty() {
		return (size == 0);
	}

	void clear() {
		while (size--) {
			arr.pop_back();
		}
	}

	void print() {
		if (size == 0) {
			cout << "Stack is empty\n";
		}
		else {
			for (int i : arr) {
				cout << i << " ";
			}
			cout << "\n";
		}
	}

};

class Node {

public:
	int data;
	Node* next;

	Node(int data) {
		this -> data = data;
		next = NULL;
	}

};

class LinkedList_Implementation {

	Node* head;
	int size;

public:

// Another way of defining constructor
	LinkedList_Implementation(): head (NULL), size (0) {}

	void push(int val) {
		Node* n = new Node(val);
		n->next = head;
		head = n;
		size++;

	}

	int pop() {
		if (!head) {
			cout << "Stack is empty\n";
			return -1;
		}
		Node* current = head;
		head = head->next;
		size--;
		int val = current->data;
		delete(current);
		return val;
	}

	int top() {
		if (head == NULL) {
			cout << "Stack is empty\n";
			return -1;
		}
		return head->data;
	}

	int siz() {
		return size;
	}

	bool isEmpty() {
		return (size == 0);
	}

	void clear() {
		while (size) {
			pop();
		}
	}

	void print() {
		if (size == 0) {
			cout << "Stack is empty\n";
		}
		else {
			Node* current = head;
			while (current != NULL) {
				cout << current->data << " -> ";
				current = current->next;
			}
			cout << "NULL\n";
		}
	}

};

int main() {

	VectorImplementation as;
	as.print();
	as.push(10);
	as.print();
	as.push(20);
	as.print();
	as.push(60);
	as.print();
	as.push(100);
	as.print();
	as.pop();
	as.print();
	cout << as.top() << " " << as.siz() << "\n";
	as.pop();
	as.print();
	as.pop();
	as.print();
	as.pop();
	as.print();
	as.pop();
	as.print();

	vector<int> v;
	v.pop_back(); // No error even after popping from an empty vector in C++17

	cout << "HELLO LINKED LIST IMPLEMENTATION\n";

	LinkedList_Implementation ls;
	ls.print();
	ls.push(10);
	ls.print();
	ls.push(20);
	ls.print();
	ls.push(60);
	ls.print();
	ls.push(100);
	ls.print();
	ls.pop();
	ls.print();
	cout << ls.top() << " " << ls.siz() << "\n";
	ls.pop();
	ls.print();
	ls.pop();
	ls.print();
	ls.pop();
	ls.print();
	ls.pop();
	ls.print();
	ls.clear();
	ls.print();

}

/*
Linked List:

Insertion and deletion at head is O(1)

Insertion at tail is O(1) but deletion is O(n)

*/

/*
Another way of defining constructor:
------------------------------------

*********************************************************************************************************
constructor_name(): attribute_name(initialization value), another_attribute_name(initialization value){}
*********************************************************************************************************


*/

/*
vector <int> v;
v.push();
v.pop();
v.top();
v.clear();
v.empty();
v.size();




*/