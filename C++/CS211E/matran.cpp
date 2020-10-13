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
void Search(int a[][cot], int m,int n)
{
	int dem=0;
	cout<<"Vi tri xuat hien cua so n trong ma tran: "<<endl;
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==n)
			{
				dem++;
				cout<<"Dong: "<<i+1<<" Cot "<<j+1<<endl;
			}
		
		}
	cout<<endl;
	cout<<"So lan xuat hien cua so n la: "<<dem;
}
void Tongcheo(int a[][cot],int m)
{
	int tong;
	for(int i = 0; i < m; i++)
    {
    	for(int j = 0; j < m; j++)
    	{
    		if(i == j && a[i][j]>0) 
    		tong += a[i][j];
		}
	}
	cout<<tong;
}
main()
{
	int a[dong][cot];
	int m,n;
	cout<<"Nhap dong va cot cua mang: "<<endl;
	cin>>m;
	Nhapmang(a,m);
	Inmang(a,m);
	cout<<"Nhap vao so n: "<<endl;
	cin>>n;
	Search(a,m,n);
	cout<<endl;
	cout<<"tong cheo trong mang: "<<endl;
	Tongcheo(a,m);
	
}
