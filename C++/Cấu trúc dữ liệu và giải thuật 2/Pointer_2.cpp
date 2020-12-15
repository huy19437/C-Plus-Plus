#include <iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#define MAX 100

typedef struct
{
  int ID;
  char brand[30];
  char model[30];
  char CPU[10];
  int RAM;
}COMPUTER;

typedef struct NODE
{
	COMPUTER Info;
	NODE *pNext; //dia chi cua ban ke tiep
};

typedef struct
{
	NODE *pHead; //nguoi dau tien
} LIST;

void Initialize(LIST &list)
{
	list.pHead = NULL;
}

bool isEmpty(LIST list)
{
	return list.pHead == NULL;
}


NODE *CreateNode(COMPUTER x)
{
	NODE *p = new (NODE); //cap phat vung nho
	if(p != NULL)
	{
		p->Info = x;
		p->pNext = NULL;
	}
	return p;
}


void InsertHead(LIST &list, COMPUTER x)
{
	NODE *p = CreateNode(x);
	if(p!=NULL) //tao duoc NODE
	{
		p->pNext = list.pHead;
		list.pHead = p;
	}
}


void Input1Computer(COMPUTER &c)
{
  cout << "Input ID: " ;
  cin>>c.ID;

  std::cout << "Input brand: ";
  cin>>c.brand;
  cout<<"Input model: ";
  cin>> c.model;
  cout<<"Input CPU: ";
  cin>>c.CPU;
  cout<<"Input RAM: ";
  cin>>c.RAM;
}


void CreateList(LIST &list)
{
	COMPUTER x;

	char tt;
	do
	{
		Input1Computer(x);
		InsertHead(list, x); //them x vao dau danh sach

		cout<<"Nhan 'y'|'Y' de tiep thuc them mot may tinh"<<endl;
		tt = getch();
	}while(tt == 'y' || tt == 'Y');
}


void OutputComputer(COMPUTER c)
{
	cout<<c.ID<<"\t";
	cout<<c.brand<<"\t";
	cout<<c.model<<"\t";
	cout<<c.CPU<<"\t";
	cout<<c.RAM<<"\n";
}


void OutputList(LIST list)
{
	for(NODE *p = list.pHead; p!=NULL; p=p->pNext)
		OutputComputer(p->Info);

	cout<<endl;
}


void ghiFile(LIST list)
{
	FILE *f = fopen("Computer.txt", "wb");
	if(f == NULL)
	{
		cout<<"Loi mo file"<<endl;
		return;
	}

	for(NODE *p = list.pHead; p!=NULL; p=p->pNext)
		fwrite(&p->Info, sizeof(COMPUTER), 1, f);

	fclose(f);
}

void docFile(LIST &list)
{
	COMPUTER x;

	FILE *f = fopen("Computer.txt", "rb");
	if(f == NULL)
	{
		cout<<"Loi mo file"<<endl;
		return;
	}

	//nhap1SV(x);
	while(!feof(f)) //khi chua het file
	{
		if(fread(&x, sizeof(COMPUTER), 1, f))
			InsertHead(list, x); //them x vao dau danh sach
	}
}


  void FindComputerBrand(LIST list, char BRAND[])
  {
  	NODE *tmp = list.pHead;
  	for(tmp; tmp!=NULL; tmp=tmp->pNext)
  		if(tmp->Info.brand == BRAND)
  		{
  			OutputComputer(tmp->Info);
  			return;
  		}
  	cout<<"KHONG TIM THAY  MAY TINH CO HANG SX LA: "<<BRAND<<endl;
  }

int main()
{
  LIST list;
  Initialize(list);
  CreateList(list);
  OutputList(list);
  ghiFile(list);
  docFile(list);

  char brand[30];
  char tt;
  do
  {
      cout<<"Input the brand you want to find: ";
      cin>>brand;

      FindComputerBrand(list,brand);
      cout<<"Press y/Y to continue to find the brand"<<endl;
      tt=getch();
  }
  while(tt=='y'||tt=='Y');
}
