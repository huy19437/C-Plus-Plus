#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
};
Node *T;
Node *insert(int x, Node *l, Node *r){
	Node *p = new (Node);
	p->data = x;
	p->left = l;
	p->right = r;
	return p;
}
Node *insertt(int x, Node *l, Node *r){
	Node *p = new (Node);
//	p->data = x;
//	p->left = l;
//	p->right = r;
	int x,y,z;
	cin>>x;
	cin>>y;
	cin>>z;
	p->data=x;
	p->left=y;
	p->right=z;
	if(l==NULL && r==NULL) return p;
	return insert(p->data,p->left,p->right);
}
void createT(Node *&T){
//	T = insert(7,insert(6,insert(1,NULL,insert(3,NULL,NULL)),NULL),insert(9,insert(8,NULL,NULL),insert(4,insert(5,NULL,NULL),NULL)));
T= insertt()
}
bool isNotTree(Node *T){
	if(T!=NULL){
	
		if(T->left ==NULL && T->right==NULL) return true;
	}
	return false;
}
void countHaftLeaftNode(Node *T, int &dem){
	if(T!=NULL){
		if(T->left==NULL && isNotTree(T->right) || (T->right==NULL && isNotTree(T->left))) {
			dem++;
		}
		countHaftLeaftNode(T->left,dem);
		countHaftLeaftNode(T->right,dem);
	}
}
void heightOfTree(Node *T, int &height){
	if(T!=NULL){
		height++;
		heightOfTree(T->left,height);
		heightOfTree(T->right,height);
	}
}
void preorder(Node *T){
	if(T!=NULL){
		cout<<T->data<<" ";
		preorder(T->left);
		preorder(T->right);
	}
}
main(){
	int dem=0;
	int height=0;
	T=NULL;
	createT(T);
	preorder(T);
	cout<<endl;
	countHaftLeaftNode(T,dem);
	cout<<"So Node 1/2 la "<<dem;
	cout<<endl;
	heightOfTree(T, height);
	cout<<"Chieu cao cua Tree "<<height/2;
}
