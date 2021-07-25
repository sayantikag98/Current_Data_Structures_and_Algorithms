#include<bits/stdc++.h>
using namespace std;

struct Node{
	int val;
	Node* prev;
	Node* next;

	Node(int val){
		this->val = val;
		next = NULL;
		prev = NULL;
	}

};

struct DoublyLinkedList{
	Node* head;
	Node* tail;

	DoublyLinkedList(){
		head = NULL;
		tail = NULL;
	}

	void addFront(int data){
		Node* n = new Node(data);
		if(head == NULL){
			head = n;
			tail = n;
		}
		else{
			n->next = head;
			head->prev = n;
			head = n;
		}
	}

	void addEnd(int data){
		Node* n = new Node(data);
		if(head == NULL){
			head = n;
			tail = n;
		}
		else{
			tail->next = n;
			n->prev = tail;
			tail = n;
		}
	}

	void deleteFront(){
		if(head == NULL){
			cout<<"Linked List is empty\n";
			return;
		}
		else if(head->next == NULL){
			head = NULL;
			tail = NULL;
		}
		head = head->next;
		head->prev = NULL;
	}

	void deleteEnd(){
		if(head == NULL){
			cout<<"Linked List is empty\n";
			return;
		}
		else if(head->next == NULL){
			head = NULL;
			tail = NULL;
		}
		tail = tail->prev;
		tail->next = NULL;
	}

	void reverseEntireDoublyLinkedList(){
		if(head == NULL or head->next == NULL) return;
		tail = head;
		Node* current = head;
		Node* left = NULL;
		while(current!=NULL){
			left = current->prev;
			current->prev = current->next;
			current->next = left;
			current = current->prev;
		}
		head = left->prev;
	}

	void reversePartOfLinkedList(Node* n){
		if(n == NULL or n->next == NULL) return;
		Node* current = n->next;
		Node* left = NULL;
		while(current!=NULL){
			left = current->prev;
			current->prev = current->next;
			current->next = left;
			if(current->next == n) current->next = NULL;
			current = current->prev;
		}
		tail = n->next;
		n->next = left->prev;
		left->prev->prev = n;
	}

	Node* displayMid(){
		Node* slow = head;
		Node* fast = head;
		while((fast->next != NULL) and (fast->next->next!=NULL)){
			slow = slow->next;
			fast = fast->next->next;
		}

		return slow;
	}

	bool checkPalindrome(){
		Node* ans = displayMid();
		Node* current1 = head;
		Node* current2 = tail;
		while(current2!=ans){
			if(current1->val != current2->val) return false;
			current1 = current1->next;
			current2 = current2->prev;
		}
		return true;
	}

	void display(){
		Node* current = head;
		cout<<"--------------------------------\n";
		cout<<"NULL <=> ";
		while(current!=NULL){
			cout<<current->val<<" <=> ";
			current = current->next;
		}
		cout<<"NULL\n";
		current = tail;
		cout<<"NULL <=> ";
		while(current!=NULL){
			cout<<current->val<<" <=> ";
			current = current->prev;
		}
		cout<<"NULL\n";
	}

};


int main(){

	DoublyLinkedList dl;
	dl.display();
	dl.addEnd(1);
	dl.display();
	dl.addEnd(2);
	dl.display();
	dl.addEnd(3);
	dl.display();

	dl.addFront(2);
	dl.display();
	dl.addFront(5);
	dl.display();
	dl.addFront(6);
	dl.display();
	dl.deleteEnd();
	dl.display();
	dl.deleteFront();
	dl.display();
	cout<<"=====================\n";
	dl.reverseEntireDoublyLinkedList();
	dl.display();
	Node* ans = dl.displayMid();
	if(ans != NULL) cout<<"Middle element -> "<<ans->val<<endl;
	dl.reversePartOfLinkedList(ans);
	dl.display();
	bool isPalindrome = dl.checkPalindrome();
	if(isPalindrome) cout<<"PALINDROME\n";
	else cout<<"NOT PALINDROME\n";



}