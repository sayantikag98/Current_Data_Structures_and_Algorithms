

/*

Contains the basic implementation of singly linked list 
and few problems on that- like reversing the entire 
linked list, reversing a part of the linked list, 
finding the middle node of the linked list, checking 
whether the linked list is palindrome or not

*/

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


	MyNode* findMid(){
		if(head == NULL) return NULL;
		MyNode* slow = head;
		MyNode* fast = head;
		while((fast->next != NULL) and (fast->next->next != NULL)){
			slow = slow->next;
			fast = fast -> next -> next;
		}
		return slow;
	}

	void reverseLinkedListFromStart(){
		if((head == NULL) or (head->next == NULL)) return;
		MyNode* prev = NULL;
		MyNode* current = head;
		MyNode* right = head->next;
		tail = head;
		while(current != NULL){
			current -> next = prev;
			prev = current;
			current = right;
			if(right != NULL) right = current->next;
		}
		head = prev;
	}

	void reverseLinkedListFromParticularNode(MyNode* n){
		if((n==NULL) or (n->next == NULL)) return;
		MyNode* prev = NULL;
		MyNode* current = n->next;
		MyNode* right = current->next;

		while(current != NULL){
			current->next = prev;
			prev = current;
			current = right;
			if(right!=NULL) right = right->next;
		}
		n->next = prev;
	}

	bool checkPalindrome(){
		if(head == NULL or head->next == NULL) return true;
		MyNode* mid = findMid();
		reverseLinkedListFromParticularNode(mid);
		MyNode* current1 = head;
		MyNode* current2 = mid->next;
		while(current2 != NULL){
			if((current1->val) != (current2->val)) return false;
			// cout<<"hi"<<current1->val<<"---"<<current2->val<<endl;
			current1 = current1->next;
			current2 = current2->next;
		}
		// cout<<"Hi\n";
		return true;
	}



};



int main(){

	MyLinkedList ll;
	ll.display();
	ll.addEnd(1);
	ll.display();
	ll.addEnd(2);
	ll.display();

	ll.addEnd(2);
	ll.display();
	ll.addEnd(1);
	ll.display();
	
	ll.reverseLinkedListFromStart();
	ll.display();
	MyNode* ans = ll.findMid();
	if(ans!= NULL) cout<<"middle element -> "<<ans->val<<endl;
	// ll.reverseLinkedListFromParticularNode(ans);
	// ll.display();
	bool ans1 = ll.checkPalindrome();
	if(ans1) cout<<"Palindrome\n";
	else cout<<"Not Palindrome\n";

}