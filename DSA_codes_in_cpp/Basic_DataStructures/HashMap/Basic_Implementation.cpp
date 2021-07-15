#include<bits/stdc++.h>
using namespace std;


class Node {
public:
	pair<string, int> data;
	Node* next;
	Node* prev;

	Node(pair<string, int> data) {
		this->data = data;
		next = NULL;
		prev = NULL;
	}
};

class LinkedList {

	Node* head;
	Node* tail;
	int size;

public:
	LinkedList() {
		head = NULL;
		tail = NULL;
		size = 0;
	}

	void push_front(pair<string, int> val) {
		Node* n = new Node(val);
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

	void push_back(pair<string, int> val) {
		Node* n = new Node(val);
		if (!head) {
			head = n;
		}
		else {
			tail->next = n;
		}
		n->prev = tail;
		tail = n;
		size++;
	}

	void pop_front() {
		if (!head) {
			cout << "LinkedList is empty\n";
			return;
		}
		if (!(head->next)) {
			tail = NULL;
		}
		Node* temp = head;

		head = head -> next;
		delete(temp);
		head->prev = NULL;
		size--;
	}

	void pop_back() {
		if (!head) {
			cout << "LinkedList is empty\n";
			return;
		}
		Node* temp = tail;
		if (!(head->next)) {
			head = NULL;
		}
		tail = tail->prev;
		delete(temp);
		tail->next = NULL;
		size--;
	}

	int siz() {
		return size;
	}

	auto rethead() {
		return head;
	}

	void print() {
		if (!size) {
			cout << "Linked List is empty\n";
		}
		else {
			Node* current = head;
			while (current) {
				cout << current->data.first << " : " << current->data.second << " <=> ";
				current = current -> next;
			}
			cout << "NULL\n";
		}
	}

};


class HashMap {

	int bucket_count;
	vector<Node*> v;

	double load_factor, max_load_factor;

	int size;

public:
	HashMap(int bucket_count, double max_load_factor) {
		this->bucket_count = bucket_count;
		this->max_load_factor = max_load_factor;


	}

	void print() {
		cout << v.size() << endl;
	}


};



int main() {
	LinkedList ll;
	ll.push_front({"Amit", 10});
	ll.push_front({"Sumit", 20});
	ll.push_front({"Kamal", 30});
	Node* he = ll.rethead();

	vector<Node*> v;
	v.push_back(he);
	cout << v[0]->next->data.first << "\n";

	vector<pair<int, int>> v1;
	v1.push_back({20, 30});
	cout << v1[0].first << "\n";

	HashMap hm(10, 0.45);
	hm.print();


	unordered_map<int, int> m;
	cout << m.max_load_factor() << endl;
	m.reserve(1024);
	cout << m.bucket_count() << endl;

	unordered_set<int>st;
	st.insert(10);
	st.insert(20);
	st.insert(30);
	st.delete(20);
	cout << st.size() << endl;




}



/*
hash function
--------------
size is prime

hash fn = ((s[0]*(p^0))+(s[1]*(p^1))+(s[2]*(p^2))+(s[3]*(p^3)) + .........+(s[n-1]*(p^(n-1))))%(bucket_count)
p is a prime number

*/