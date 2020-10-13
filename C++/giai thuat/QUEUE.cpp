#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *link;
};
struct Queue{
	Node *front;
	Node *rear;
};
Queue Q;
Queue T;
void createQ(Queue &Q){
	Q.front = NULL;
	Q.rear = NULL;
}
int emptyQ(Queue Q){
	if(Q.front == NULL && Q.rear == NULL) return 1;
		return 0;
	
}
void addQ(Queue &Q, int x){
	Node *p = new (Node);
	p->data = x; p->link = NULL;
	if(emptyQ(Q)){
		Q.front = p;
		Q.rear = p;
	}else{
		Q.rear->link = p;
		Q.rear = p;
	}
}
void removeQ(Queue &Q, int &x){
	if(emptyQ(Q)) return ;
	Node *p;
	p = Q.front;
	x = p->data;
	if(Q.front == Q.rear){
		Q.front = Q.front->link;
		Q.rear = NULL;
	}else{
		Q.front = Q.front->link;
	}
	delete(p);
}
int x;
void TravelQ(Queue Q){
	createQ(T);
	while(!emptyQ(Q)){
		removeQ(Q,x);
		cout<<x<<" ";
		addQ(T,x);
	}
	while(!emptyQ(T)){
		removeQ(T,x);
		addQ(Q,x);
	}
}
void deletePos(Queue &Q, int viTriCanXoa){
	int dem = 0;
	createQ(T);
	while(!emptyQ(Q)){
		removeQ(Q,x);
		dem++;
		if(dem == viTriCanXoa){
			continue;
		}else{
			addQ(T,x);
		}
	}
	while(!emptyQ(T)){
		removeQ(T,x);
		addQ(Q,x);
	}
}
void deleteFirstPos(Queue &Q){
	if(!emptyQ(Q)){
		removeQ(Q,x);
	}
}
void deleteLastPos(Queue &Q){
//		int dem = 0;
	createQ(T);
//	Node *p = new (Node);
	while(!emptyQ(Q)){
		if(Q.front == Q.rear){
			removeQ(Q,x);
		}else{
			removeQ(Q,x);
			addQ(T,x);
		}
	}
	while(!emptyQ(T)){
		removeQ(T,x);
		addQ(Q,x);
	}
}
main(){
	createQ(Q);
	int code;
	int pos;
	do{
		cin>>code;
		if(code){
			addQ(Q,code);
		}
	}while(code);
	cout<<"input pos ";
	//xoa loi vung nho
	fflush(stdin);
	scanf("%d",&pos);
	deletePos(Q,pos);
	deleteFirstPos(Q);
	deleteLastPos(Q);
	TravelQ(Q);
}
