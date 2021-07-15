#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	char data;
	Node* left;
	Node* right;

	Node(char data){
		this->data = data;
		left = NULL;
		right = NULL;
	}

};

class BinaryTree{
public:
	Node* construct_Tree(int i_pre, int n_pre, int i_in, int n_in, char* pre, char* in){
		if(i_pre == n_pre and i_in == n_in) return NULL;  // BASE CASE
		char val = pre[i_pre];
		Node* root = new Node(val);
		int ind;
		for(int j = i_in; j<n_in; j++){
			if(in[j] == val) {
				ind = j;
				break;
			}
		}
		int ran = ind - i_in + 1;

		root -> left = construct_Tree(i_pre+1, i_pre+ran, i_in, ind, pre, in);
		root -> right = construct_Tree(i_pre+ran, n_pre, ind+1, n_in, pre, in);

		return root; 

	}

	void inorder(Node* root){
		if(root == NULL) return;
		inorder(root->left);
		cout<<root->data<<" -> ";
		inorder(root->right);
	}

	void preorder(Node* root){
		if(root == NULL) return;
		cout<<root->data<<" -> ";
		preorder(root->left);
		preorder(root->right);
	}

	void postorder(Node* root){
		if(root == NULL) return;
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" -> ";
	}

};





int main(){
	int n;
	cin>>n;
	char pre[n];
	char in[n];
	for(int i = 0; i<n; i++){
		cin>>pre[i];
	}
	for(int i = 0; i<n; i++){
		cin>>in[i];
	}
	// for(int i = 0; i<n; i++){
	// 	cout<<pre[i]<<" ";
	// }
	// cout<<"\n";
	// for(int i = 0; i<n; i++){
	// 	cout<<in[i]<<" ";
	// }
	// cout<<"\n";

	BinaryTree bt;
	Node* root = bt.construct_Tree(0, n, 0, n, pre, in);
	bt.inorder(root);
	cout<<"\n";
	bt.preorder(root);
	cout<<"\n";
	bt.postorder(root);


}