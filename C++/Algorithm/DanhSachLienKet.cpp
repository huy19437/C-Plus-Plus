#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *link;
};
Node *L, *q;
void TAO(Node *&L){
	L = NULL;
	int code, x;
	do{
		printf("x=");
		code = scanf("%d",&x);
		if(code){
			Node *p = new (Node);
			p->data = x;
			p->link = L;
			L = p;
		}
	}while(code);
}
void TAO_2(Node *&L){
	L = NULL;
	int code, x;
	do{
		printf("x=");
		code = scanf("%d",&x);
		if(code){
			Node *p = new (Node);
			p->data = x; 
			p->link = NULL;
			if(L==NULL){
				L=p;
				q=p;
			}else{
				q->link=p;
				q=p;
			}
		}
	}while(code);
}
bool checkChan(int n){
	if(n%2==0) return true;
	return false;
}
//void DUYET(Node *L){
//	Node *p = L;
//	int tong;
//	while(p!= NULL){
//		printf("%d\t",p->data);	
//		p = p->link;
//	}
//	cout<<"\n";
//}
void duyet(Node *p){
	if(p == NULL) return ;
	cout<<p->data<<" ";
	return duyet(p->link);
}
Node *TIM_X(Node *L, int x){
	Node *p = L;
	while(p!=NULL){
		if(p->data == x){
			return p;
		}else{
			p = p->link;
		}
	}
}
void CHEN(Node *&L, int x, Node *pos){
	Node *p = new (Node);
	p->data = x;
	p->link = NULL;
	if(L==NULL){
		L=p;
	}else{
		if(pos == NULL){
			p->link = L;
			L=p;
		}else{
			p->link = pos->link;
			pos->link = p;
		}
	}
}
void XOA(Node *&L, Node *pos){
	Node *p = new (Node);
	if(L!=NULL){
		if(pos!=NULL){
			if(pos==L){
				L=L->link;
			}else{
				p=L;
				while(p->link!=pos){
					p=p->link;
				}
				p->link=pos->link;
				delete(pos);
			}
		}
	}
}
Node *XoaTatCaXCoTrongDanhSach_dequy(Node *p, int x){
	if(!p) return p;
	Node *link = p->link;
	if(p->data == x){
		delete(p);
		return XoaTatCaXCoTrongDanhSach_dequy(link, x);
	}else{
		p->link = XoaTatCaXCoTrongDanhSach_dequy(link, x);
		return p;
	}
}
void HoanVi(int &a, int &b) { 
	int c = a; 
	a = b; 
	b = c;
}
Node *sapXepChanTangDanDauDay(Node *T){
	Node *p = new(Node);
	Node *q = new(Node);
	int i,j;
	for(p=T;T != NULL; p=T->link){
		for(q=T->link;T != NULL; q=T->link){
			if((q->data)%2 == 0) {
				HoanVi(p->data, q->data);
			}
		}
	}
	return p;
}
main(){
	TAO_2(L);
//	CHEN(L, 100, TIM_X(L, 6));
//	XOA(L, TIM_X(L, 4));
//	Xoa_dequy(L, 5);
//	sapXepChanTangDanDauDay(L);
	duyet(L);
}
