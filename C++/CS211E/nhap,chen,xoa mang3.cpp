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
void Sapxep(int a[],int &n)
{
	int tam;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j+1]<a[j])
			{
				tam=a[j];
				a[j]=a[j+1];
				a[j+1]=tam;
			}
		}
	}
}
void Chenvaomangtangdan(int a[],int &n)
{
	int i=n-1,k;
	cout<<"Nhap so k: ";
	cin>>k;
	while(i>=0 && a[i]>k)
	{
		a[i+1]=a[i];
		i--;
	}
	a[i+1]=k;
	n++;
}
void Kiemtramangdoixung(int a[],int &n)
{
	bool kt=true;
	for(int i=0;i<=n/2;i++)
	{
		if(a[i]!=a[n-1-i])
		{
			kt=false;
			break;
		}
	}
	if(kt)
	cout<<"Mang doi xung!\n";
	else cout<<"\nMang khong doi xung!";
}
void Xoamang(int a[],int &n,int k)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			for(int j=i;j<n;j++)
				a[j]=a[j+1];	
		}	
	}
	n--;
	cout<<endl;
}
void Chenvaomang(int a[],int &n,int k)
{
	int i,j,l;
	cout<<"Nhap so muon chen: ";
	cin>>l;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			for(j=n-1;j>i;j--)
			{
				a[j+1]=a[j];
			}
				a[i+1] = l;
				n++;
		}
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
//	Sapxep(a,n);
	Xuatmang(a,n);
//	cout<<"Nhap so can xoa: "<<endl;
//	cin>>k;
//	Xoamang(a,n,k);
//	cout<<"Mang sau khi xoa: "<<endl;
//	Xuatmang(a,n);
//	cout<<"Nhap so can chen phia sau: "<<endl;
//	cin>>l;
//	Chenvaomang(a,n,l);
//	cout<<"Mang sau khi chen: "<<endl;
//	Chenvaomangtangdan(a,n);
//	Xuatmang(a,n);
	Kiemtramangdoixung(a,n);
}
