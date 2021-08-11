#include<bits/stdc++.h>
using namespace std;

struct Node{

	int val;
	Node* left;
	Node* right;

	Node(int val){
		this->val = val;
		left = NULL;
		right = NULL;
	}

};


class BinarySearchTree{

	Node* root;

public:

	BinarySearchTree(){
		root = NULL;
	}

	Node* returnRoot(){
		return root;
	}

	Node* addValue(Node* root, int data){
		Node* newNode = new Node(data);
		if(root == NULL){
			root = newNode;
		}
		else{
			if(root->val < data){
				root->right = addValue(root->right, data);
			}
			else{
				root->left = addValue(root->left, data);
			}
		}
		return root;
	}

	void print(Node* root){
		if(root == NULL){
			cout<<"NULL\n";
			return;
		}
		cout<<root->val<<" ";
		print(root->left);
		cout<<root->val<<" ";
		print(root->right);
	}

};

int main(){

	BinarySearchTree bst;
	Node* root = bst.returnRoot();
	bst.addValue(root, 10);
	bst.addValue(root, 20);
	bst.addValue(root, 30);
	bst.print(root);



	
}