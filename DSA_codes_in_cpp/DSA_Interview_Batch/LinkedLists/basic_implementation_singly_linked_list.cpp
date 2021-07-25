#include<bits/stdc++.h>
using namespace std;

struct MyNode{
	int val;
	MyNode* next;

	MyNode(int val){
		this->val = val;
		next = NULL;
	}
};

struct MyLinkedList{
	MyNode* head;
	MyNode* tail;

	MyLinkedList(){
		head = NULL;
		tail = NULL;
	}

	void addFront(int data){
		MyNode* n = new MyNode(data);
		if(head == NULL){
			head = n;
			tail = n;
		}
		else{
			n->next = head;
			head = n;
		}
	}

	void addEnd(int data){
		MyNode* n = new MyNode(data);
		if(head == NULL){
			head = n;
			tail = n;
		}
		else{
			tail->next = n;
			tail = n;
		}
	}

	void deleteFront(){
		if(head == NULL){
			cout<<"Linked List is empty\n";
			return;
		}
		head = head->next;
		if(head == NULL) tail = NULL;
	}

	void deleteEnd(){
		if(head == NULL){
			cout<<"Linked List is empty\n";
			return;
		}
		MyNode* current = head;
		if(head->next == NULL){
			head = NULL;
			tail = NULL;
		}
		while(current->next->next != NULL){
			current = current -> next;
		}
		tail = current;
		tail -> next = NULL;
	}

	void display(){
		MyNode* current = head;
		while(current != NULL){
			cout<<current->val<<" -> ";
			current = current-> next;
		}
		cout<<"NULL\n";
	}

};

int main(){

	MyLinkedList ll;
	ll.display();
	ll.addEnd(1);
	ll.display();
	ll.addEnd(2);
	ll.display();

	ll.addFront(5);
	ll.display();
	ll.addFront(7);
	ll.display();
	ll.deleteFront();
	ll.display();
	ll.deleteEnd();
	ll.display();

}