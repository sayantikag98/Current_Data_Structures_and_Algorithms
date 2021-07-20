#include<bits/stdc++.h>
using namespace std;

struct Node{
	
	int val;
	Node* next;

	Node(int val){
		this->val = val;
		next = NULL;
	}

};

struct LinkedList{
	Node* head;
	Node* tail;

	LinkedList(){
		head = NULL;
		tail = NULL;
	}

	void insertFront(int data){
		Node* n = new Node(data);


		if(head == NULL){
			head = n;
			tail = n;
		}

		else{
			n->next = head;
			head = n;
		}

	}

	void insertEnd(int data){
		Node* n = new Node(data);

		if(head == NULL){
			head = n;
			tail = n;
		}

		else{
			tail->next = n;
			tail = tail->next;
		}
	}

	void deleteFront(){

		if(head == NULL){
			cout<<"Deletion not possible\n";
			return;
		}

		else{
			head = head->next;
		}
	}

	void deleteEnd(){

		if(head == NULL){
			cout<<"Deletion not possible\n";
			return;
		}

		else{
			Node* current = head;
			while(current->next->next != NULL){
				current = current->next;
			}
			tail = current;
			tail->next = NULL;
		}
	}

	void display(){

		Node* current = head;
		if(current == NULL){
			cout<<"Linked List is empty\n";
			return;
		}
		else{
			while(current != NULL){	
				cout<<current->val<<"->";
				current = current->next;
			}
			cout<<"NULL\n";
		}
	
	}

};


int main(){

	LinkedList ll;
	ll.display();
	ll.insertFront(20);
	ll.display();
	ll.insertFront(30);
	ll.display();
	ll.insertEnd(40);
	ll.display();
	ll.insertEnd(50);
	ll.display();
	ll.deleteFront();
	ll.display();
	ll.deleteEnd();
	ll.display();


}