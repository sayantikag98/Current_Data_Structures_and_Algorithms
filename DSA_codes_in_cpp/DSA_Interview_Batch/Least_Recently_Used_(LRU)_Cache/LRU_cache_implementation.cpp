#include<bits/stdc++.h>
using namespace std;

struct Node{
	int val;
	Node* prev;
	Node* next;

	Node(int val){
		this->val = val;
		prev = NULL;
		next = NULL;
	}

};

struct LRU_cache{
	unordered_map<int, Node*>m;
	Node* head;
	Node* tail;
	int size;

	LRU_cache(){
		head = NULL;
		tail = NULL;
		size = 0;
	}


	void push_back(int data, int req_size){
		if(size>=req_size){
			pop_front();
		}
		Node* newNode = new Node(data);
		if(head == NULL){
			head = newNode;
			tail = newNode;
			m[newNode->val] = newNode;
		}
		else{
			if(m.find(newNode->val) == m.end()){
				m[newNode->val] = newNode;
				tail->next = newNode;
				newNode->prev = tail;
				tail = newNode;
			}
			else{
				Node* oldNode = m[newNode->val];
				if(oldNode->prev!=NULL and oldNode->next!=NULL){
					Node* prevNode = oldNode->prev;
					Node* nextNode = oldNode->next;
					prevNode->next = nextNode;
					nextNode->prev = prevNode;
					tail->next = oldNode;
					oldNode->prev = tail;
					oldNode->next = NULL;
					tail = oldNode;
					m[oldNode->val] = oldNode;
					size--;
				}
				else if((oldNode->prev!=NULL and oldNode->next == NULL) or (oldNode->prev==NULL and oldNode->next == NULL)){
					size--;
				}
				else if(oldNode->next!=NULL and oldNode->prev== NULL){
					head = head->next;
					head->prev = NULL;
					oldNode->prev = tail;
					tail->next = oldNode;
					tail = oldNode;
					tail->next = NULL;
					size--;
				}
				
			}	
		}
		size++;
	}

	// void push_front(int data){
	// 	Node* newNode = new Node(data);
	// 	if(head == NULL){
	// 		head = newNode;
	// 		tail = newNode;
	// 	}
	// 	else{
	// 		newNode->next = head;
	// 		head->prev = newNode;
	// 		head = newNode;
	// 	}
	// 	size++;
	// }


	// void pop_back(){
	// 	if(head == NULL){
	// 		cout<<"List is empty\n";
	// 		return;
	// 	}
	// 	else if(head->next == NULL){
	// 		head = NULL;
	// 		tail = NULL;
	// 	}
	// 	else{
	// 		tail = tail->prev;
	// 		tail->next = NULL;
	// 	}
	// 	if(size) size--;
	// }

	void pop_front(){
		if(head == NULL){
			cout<<"List is empty\n";
			return;
		}
		else if(head->next == NULL){
			m.erase(m.find(head->val));
			head = NULL;
			tail = NULL;
		}
		else{
			m.erase(m.find(head->val));
			head = head->next;
			head->prev = NULL;
		}
		if(size) size--;
	}

	bool is_empty(){
		return (size==0);
	}

	int give_size(){
		return size;
	}

	void display(){
		if(head == NULL){
			cout<<"List is empty\n";
			return;
		}
		Node* current = head;
		cout<<"-------------------------------------------\n";
		cout<<"SIZE = "<<size<<endl;
		cout<<"NULL <=> ";
		while(current){
			cout<<current->val<<" <=> ";
			current = current->next;
		}
		cout<<"NULL\n";
		cout<<"-------------------------------------------\n";
	}

};


int main(){
	LRU_cache lc;
	int req_size;
	cin>>req_size;
	lc.push_back(10, req_size);
	lc.display();
	lc.push_back(10, req_size);
	lc.display();
	lc.push_back(30, req_size);
	lc.display();
	lc.push_back(10, req_size);
	lc.display();
	lc.push_back(40, req_size);
	lc.display();
	lc.push_back(20, req_size);
	lc.display();
	lc.push_back(40, req_size);
	lc.display();
	lc.push_back(50, req_size);
	lc.display();
	lc.push_back(60, req_size);
	lc.display();
	lc.push_back(70, req_size);
	lc.display();

	
	



}