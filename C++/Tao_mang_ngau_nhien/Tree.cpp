#include<bits/stdc++.h>
#include<fstream>5
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

void createT(Node *&T){
	T = insert(7,insert(6,insert(1,NULL,insert(3,NULL,NULL)),NULL),insert(9,insert(8,NULL,NULL),insert(4,insert(5,NULL,NULL),NULL)));
	
}

Node* newNode(int data) 
{ 
    Node* node = (Node*)malloc(sizeof(Node)); 
    node->data = data; 
    node->left = node->right = NULL; 
    return (node); 
} 
//Node* insertLevelOrder(int arr[], Node*T, 
//                       int i, int n) {
//    if (i < n) 
//    { 
//        Node* temp = newNode(arr[i]); 
//        T = temp;
//        T->left = insertLevelOrder(arr, 
//                   T->left, 2 * i + 1, n);
//        T->right = insertLevelOrder(arr, 
//                  T->right, 2 * i + 2, n); 
//    } 
//    return T; 
//} 
//bool isNotTree(Node *T){
//	if(T!=NULL){
//	
//		if(T->left ==NULL && T->right==NULL) return true;
//	}
//	return false;
//}
void inSert(Node *&T, int val)
{
    if(T == NULL){
    	Node *temp = newNode(val);
    	T = temp;
	}
    else if(T->data <= val)
        inSert(T->right, val);
    else if(T->data > val)
        inSert(T->left, val);
}
 
Node * getBST(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        inSert(T, arr[i]);
    return T;
}
int countHaftLeaftNode(Node *T){
	int n;
	if(T==NULL) return 0;
	if((T->left==NULL)&&(T->right==NULL)) return 0;
	if((T->left)&&(T->right)) n=1;
	else n=0;
	n+=countHaftLeaftNode(T->left)+countHaftLeaftNode(T->right);
	return n;
}
int isNodeHaftLeaftNodeLeaftNode(Node *T){
	int n;
	if(T==NULL) return 0;
	if (T->left == NULL ^ T->right == NULL) return 1;
	if((T->left)&&(T->right)) n=-1;
}

int heightOfTree(Node *T){
	int h1,h2;
	if(T==NULL)return 0;
	h1=heightOfTree(T->left);
	h2=heightOfTree(T->right);
	return h1<h2?h2+1:h1+1;
}
void preorder(Node *T){
	if(T!=NULL){
		cout<<T->data<<" ";
		preorder(T->left);
		preorder(T->right);
	}
}
int FindX(Node *T, int x){
	if(T==NULL) return 0;
		if(T->data==x) return 1;
//	int find = FindX(T->left,x);
//	if(find != 0) return find;
	return FindX(T->right,x);
	
}
int max(int a, int b) { 
    return (a >= b) ? a : b; 
}
int height(Node* node) {
    if (node == NULL) 
        return 0;
    return 1 + max(height(node->left), 
                   height(node->right)); 
} 
bool isBalanced(Node* T) { 
    int lh;
    int rh;
  
    if (T == NULL) 
        return true; 
  
    lh = height(T->left); 
    rh = height(T->right); 
  
    if (abs(lh - rh) <= 1 && isBalanced(T->left) && isBalanced(T->right)) 
        return true;
    return false; 
}
void Docfile(ifstream &f, int a[], int &n){
	
	
	f.open("treee.txt");
	f>>n;
	for(int i=0;i<n;i++)
	f>>a[i];
	f.close();
}
main(){
	T=NULL;
	int n,a[100];
	ifstream f;
	Docfile(f,a,n);
//  Node *T = insertLevelOrder(a, T, 0, n); 
	Node *T = getBST(a,n);
	preorder(T);
	cout<<endl;
	cout<<FindX(T,4);
//	createT(T);
//	cout<<"Dia Chi Bien "<<FindX(T,5)->data<<" Trong Tree: "<<FindX(T,5);
	cout<<endl;
//	countHaftLeaftNode(T,dem);
//	cout<<"So Node 1/2 la "<<countHaftLeaftNode(T);
	cout<<endl;
//	if(isBalanced(T)){
//		cout<<"can bang";
//	}else{
//		cout<<"khong can bang";
//	}
//	heightOfTree(T, height);
//	cout<<"Chieu cao cua Tree "<<heightOfTree(T);
}
