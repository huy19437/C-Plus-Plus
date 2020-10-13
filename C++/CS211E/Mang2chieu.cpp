#include<iostream>
#include<ctime>
#include<cstdlib>
#define dong 10
#define cot 10
using namespace std;
void Nhapmang(int a[][cot], int m)
{
	srand(time(0));
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
		{
			a[i][j]=rand()%10+0;
		}
}
void Inmang(int a[][cot],int m)
{
	for(int i=0;i<m;i++)
		{for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<"\t";
			
		}
		cout<<endl<<endl;
		}
}
void Congmang(int a[][cot],int b[][cot],int c[][cot], int m)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
}
main()
{
	int a[dong][cot];
	int b[dong][cot];
	int c[dong][cot];
	int m;
	cout<<"Nhap dong va cot cua ma tran1: "<<endl;
	cin>>m;
	Nhapmang(a,m);
	Inmang(a,m);
	cout<<"Nhap dong va cot cua ma tran2: "<<endl;
	cin>>m;
	Nhapmang(b,m);
	Inmang(a,m);
	Congmang(a,b,c,m);
	cout<<"Mang sau khi cong: "<<endl;
	Inmang(c,m);
	
	
}
