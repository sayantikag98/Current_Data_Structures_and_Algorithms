#include<bits/stdc++.h>
using namespace std;

class Node{
public:

	int data;
	Node* left;
	Node* right;

	Node(int data){
		this->data = data;
		left = NULL;
		right = NULL;
	}
};


class Tree{
public:
	Node* createTree(){
		int val;
		cin>>val;
		if(val == -1) return NULL;

		Node* root = new Node(val);
		root -> left = createTree();
		root -> right = createTree();
		return root;
	}

	void inorder(Node* root){
		if(root == NULL) return;
		inorder(root->left);
		cout<<root->data<<" -> ";
		inorder(root->right);

	}
};




int main(){

	// Tree t;
	// Node* root = t.createTree();
	// t.inorder(root);

	//ALTERNATE APPROACH OF OBJECT CREATION OF A CLASS

	Tree* t1 = new Tree();
	Node* root1 = t1->createTree();
	t1->inorder(root1);

}