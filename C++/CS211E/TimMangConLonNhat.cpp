#include<conio.h>
#include<iostream>
using namespace std;
void nhapmang(int a[], int &n)
{
	cout<<"\n Nhap n= ";
	   cin>>n;
	int i,j,m;
	for( i=0;i<n;i++)
	{
	  	cout<<"\n Nhap a["<<i<<"]=";
	   	cin>>a[i];
	}
}
void inmang(int a[], int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
void Mangm(int a[],int b[],int &n)
{
	int m;
	cout<<"Nhap mang co m phan tu: "<<endl;
	cin>>m;
	int o=0,p=n-m;
	int max=0,tong=0,k=0,i;
	while(p>=0)
	{
		for(i=o;i<n-p;i++)
		{
			cout<<a[i]<<" ";
			tong+=a[i];
			if(tong>max)
			{
				max=tong;
				b[k]=a[i];
				k++;
			}
		}
		cout<<" Tong la: "<<tong;
		
		tong=0;
		o++;
		p--;
		cout<<endl;
	}
	cout<<"Tong cua mang con lon nhat la: "<<max<<endl;
	cout<<"Mang con la: "<<endl;
	for(i=k-m;i<k;i++)                    // k-m: de in ra duoc m ki tu
	{
		cout<<b[i]<<" ";
	}
}
int main()
{
	int a[100],n,b[100];
	nhapmang(a,n);
	Mangm(a,b,n);
}
