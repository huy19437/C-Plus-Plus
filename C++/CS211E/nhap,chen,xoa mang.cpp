#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void Nhapmang(int a[], int  &n)
{

	for(int i=0;i<n;i++)	
	{
		cin>>a[i];
	}
}
void Xuatmang(int a[], int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<endl;
}
void Xoamang(int a[],int &n,int k)
{
	if(k>=n)
	cout<<"Khong co vi tri nao can xoa! "<<endl;
	else
	{
		for(int i=k;i<n;i++)
			a[i]=a[i+1];		
	}
	n--;
	cout<<endl;
}
void Chenvaomang(int a[],int &n,int k)
{
	int i,m,j;
	cout<<"Nhap so can chen: ";
	cin>>m;
	if(k>=n)
	{
		a[n]=m;
		n++;
	}
	else
	{
		for(j=n-1;j>k;j--)
		{
			a[j+1]=a[j];
		}
		a[k+1] = m;
		n++;
		cout<<endl;  
	}
}
main()
{
	
	int n,k,l;
	cout<<"Nhap n "<<endl;
	cin>>n;
	int a[n];
	Nhapmang(a,n);cout<<endl;
	Xuatmang(a,n);
	cout<<"Nhap vi tri can xoa: "<<endl;
	cin>>k;
	Xoamang(a,n,k);
	cout<<"Mang sau khi xoa: "<<endl;
	Xuatmang(a,n);
	cout<<"Nhap vi tri can chen phia sau: "<<endl;
	cin>>l;
	Chenvaomang(a,n,l);
	cout<<"Mang sau khi chen: "<<endl;
	Xuatmang(a,n);
}
