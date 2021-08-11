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

	MyNode* returnHead(){
		return head;
	}

	MyNode* returnTail(){
		return tail;
	}

	MyNode* reverseLinkedList (MyNode* head){
		if(head == NULL or head->next == NULL) {
			return head;
		}
		MyNode* ans = reverseLinkedList(head->next);
		head -> next -> next = head;
		head->next = NULL;
		return ans;
	}


	MyNode* mergeTwoSortedList(MyNode* h1, MyNode* h2){
		if((h2->val) > (h1->val)){
			MyNode* temp = h1;
			h1 = h2;
			h2 = temp;
		}
		MyNode* p = h1;
		MyNode* q = h2;
		MyNode* prev = NULL;
		while(p!=NULL and q!=NULL){
			if(q->val <= p->val){
				prev = q;
				q = q->next;
			}
			else{
				prev->next = p;
				h1 = h1->next;
				p->next = q;
				p = h1;
				prev = prev->next;
			}
		}
		if(p!=NULL){
			prev ->next = p;
		}
		return h2;
	}

	MyNode* mergeTwoSortedListRecursive(MyNode* h1, MyNode* h2){
		if(h1!=NULL and h2==NULL) return h1;
		else if(h2!=NULL and h1==NULL) return h2;
		if((h1->val) < (h2->val)){
			h1->next = mergeTwoSortedListRecursive(h1->next, h2);
			return h1;
		}
		else{
			h2->next = mergeTwoSortedListRecursive(h1, h2->next);
			return h2;
		}
	}



	void display(MyNode* start){
		if(start == NULL) {
			cout<<"NULL\n";
			return;
		}
		cout<<start->val<<" -> ";
		display(start->next);
	}

};




int main(){
	MyLinkedList ll;
	ll.addEnd(1);
	ll.addEnd(2);

	ll.addFront(5);
	ll.addFront(7);
	MyNode* head = ll.returnHead();
	ll.display(head);
	head = ll.reverseLinkedList(head);
	ll.display(head);

	MyLinkedList ll_1;
	ll_1.addEnd(4);
	ll_1.addEnd(7);
	ll_1.addEnd(9);
	MyNode* head_1 = ll_1.returnHead();
	ll_1.display(head_1);

	MyLinkedList ll_2;
	ll_2.addEnd(1);
	ll_2.addEnd(2);
	ll_2.addEnd(4);
	ll_2.addEnd(19);
	MyNode* head_2 = ll_2.returnHead();
	ll_2.display(head_2);

	
	// MyNode* head_3 = ll_2.mergeTwoSortedList(head_1, head_2);
	// ll_2.display(head_3);

	MyNode* head_4 = ll_2.mergeTwoSortedListRecursive(head_1, head_2);
	ll_2.display(head_4);


}