#include<bits/stdc++.h>
using namespace std;

class Node {

public:
	int data;
	Node* prev;
	Node* next;

	Node(int data) {
		this -> data = data;
		next = NULL;
		prev = NULL;
	}

};

class My_LinkedList {
	Node* head;
	Node* tail;
	int size;

public:
	My_LinkedList() {
		head = NULL;
		tail = NULL;
		size = 0;
	}

	void insert_front(int val) {
		Node* n = new Node(val);
		if (head == NULL) {
			head = n;
			tail = n;
		}
		else {
			n -> next = head;
			head -> prev = n;
			head = n;
		}
		size++;
	}

	void insert_end(int val) {
		Node* n = new Node (val);
		if (head == NULL) {
			head = n;
			tail = n;
		}
		else {
			tail -> next = n;
			n -> prev = tail;
			tail = n;
		}
		size++;
	}

	void insert_at_index(int val, int ind) {
		Node* n = new Node(val);
		if (ind == 0) {
			insert_front(val);
		}
		else if (ind == size) {
			insert_end(val);
		}
		else if (ind > 0 and ind < size) {
			Node* current = head;
			int counter = 0;
			while (counter != ind - 1) {
				current = current -> next;
				counter++;
			}
			n -> next = current -> next;
			current -> next -> prev = n;
			current -> next = n;
			n->prev = current;
			size++;
		}
		else {
			cout << "Insertion not possible\n";
		}
	}

	void delete_front() {
		if (head == NULL) {
			cout << "Deletion not possible\n";
			return;
		}
		Node* current = head;
		if (head -> next == NULL) {
			head = NULL;
			tail = NULL;
		}
		else {
			head = head->next;
			head -> prev = NULL;
		}
		delete(current);
		size--;
	}

	void delete_end() {
		if (head == NULL) {
			cout << "Deletion not possible\n";
			return;
		}
		if (head->next == NULL) {
			head = NULL;
			tail = NULL;
		}
		else {
			Node* current = tail;
			tail = tail-> prev;
			tail->next = NULL;
			delete(current);
		}
		size--;
	}


	void delete_at_index(int ind) {
		if (ind == 0) {
			delete_front();
		}
		else if (ind == size) {
			delete_end();
		}
		else if (ind > 0 and ind < size) {
			Node* current = head;
			int counter = 0;
			while (counter != ind - 1) {
				current = current -> next;
				counter++;
			}
			Node* temp = current -> next;
			current -> next = temp -> next;
			temp->next->prev = current;
			delete(temp);
			size--;
		}
		else {
			cout << "Deletion not possible\n";
		}
	}


	void print() {
		cout << "SIZE = " << size << "\n";
		if (head == NULL) {
			cout << "Linked List is empty\n";
		}
		else {
			Node* current = head;
			while (current != NULL) {
				cout << current->data << " <=> ";
				current = current->next;
			}
			cout << "NULL\n";
		}
	}

	Node* ret_head() {
		return head;
	}

	void print_rec(Node* current) {
		if (current == NULL) {
			cout << "NULL\n";
			return;
		}
		cout << current -> data << " <=> ";
		print_rec(current->next);
	}
};

int main() {

	My_LinkedList ll;
	ll.print();
	ll.insert_front(5);
	ll.print();
	ll.insert_front(4);
	ll.print();
	ll.insert_end(10);
	ll.print();
	ll.insert_end(30);
	ll.print();
	ll.insert_front(5);
	ll.print();
	ll.insert_front(6);
	ll.print();
	ll.insert_front(7);
	ll.print();
	ll.insert_front(8);
	ll.print();
	ll.insert_end(10);
	ll.print();
	ll.insert_end(12);
	ll.print();
	ll.insert_end(14);
	ll.print();
	ll.insert_at_index(50, 5);
	ll.print();
	ll.insert_at_index(500, 7);
	ll.print();
	ll.insert_at_index(500, 9);
	ll.print();
	ll.delete_front();
	ll.print();
	ll.delete_front();
	ll.print();
	ll.delete_end();
	ll.print();
	ll.delete_end();
	ll.print();
	ll.delete_at_index(3);
	ll.print();
	ll.delete_at_index(3);
	ll.print();
	Node* head1 = ll.ret_head();
	ll.print_rec(head1);


}