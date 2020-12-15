#include <iostream>
#include <math.h>


using namespace std;

struct Node{
	int data;
	Node *link;
};
struct STACK{
	Node *top;
};
	STACK S; 
	STACK T;
	STACK T1;
	STACK T2;
	int x, x1,x2,x3;
void Create(STACK &S){
	S.top = NULL;
}


int Empty(STACK &S){
//	return S.top == NULL;
	if (S.top == NULL) return 1;
	return 0;
}

void Push(STACK &S, int x){
	Node *p = new Node();
	p->data = x;
	p->link = S.top;
	S.top = p;
}

void Pop(STACK &S, int &x){
	if (Empty(S)) return;
	Node *p = S.top;
	x = p->data;
	S.top = p->link;
	delete(p);
}

void View(STACK &S){
	Create(T);
	while (!Empty(S)){
		Pop(S,x);
		cout<<x<<"\t";
		Push(T,x);
	}
	while (!Empty(T)){
		Pop(T,x);
		Push(S,x);
	}
}
//sap xep Stack tang dan
void sortStack(STACK &S) 
{ 
    while (!Empty(S)) 
    { 
        int tmp = S.top->data; 
        Pop(S, x); 
        while (!Empty(T1) && T1.top->data > tmp) 
        {
            Push(S,T1.top->data); 
			Pop(T1, x);
        }
		Push(T1, tmp);
    }
    while (!Empty(T1)){
		Pop(T1,x);
		Push(S,x);
	}
}
//sap xep Stack giam dan
void sortStack2(STACK &S) 
{ 
    while (!Empty(S)) 
    { 
        int tmp = S.top->data; 
        Pop(S,x); 
        while (!Empty(T1) && T1.top->data < tmp) 
        {
            Push(S,T1.top->data); 
        	Pop(T1, x);
        }
		Push(T1,tmp);
    }
    while (!Empty(T1)){
		Pop(T1,x);
		Push(S,x);
	}
}
int main(){
	Create(S);
	Empty(S);
	int code;
	do{
		cout<<"Nhap x = ";
		cin>>x;
		code = x;
		if (code)
			Push(S,x);
	}while(code);
	sortStack2(S);
	View(S);
	return 0;
}
