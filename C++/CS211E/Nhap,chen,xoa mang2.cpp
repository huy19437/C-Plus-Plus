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
	int i,j,m,k=0;
	cout<<"Nhap mang co m phan tu: "<<endl;
	cin>>m;
	int max=a[0]+a[1]+a[2],tong=0,tong1=0;
	for(i=0;i<=n-m;i++)
	{	
		for(j=i;j<=i+m-1;j++)
		{
			cout<<a[j]<<" ";
			tong+=a[j];
			if(tong>max)
			{
				max=tong;
				b[k]=a[j];
				k++;
			}
		}
		cout<<" "<<tong<<" ";
		if(tong>max)
		{
			max=tong;
		}
		tong=0;
		cout<<endl;
	}
	cout<<"Tong cua mang con lon nhat la: "<<max<<endl;
	cout<<"Mang con la: "<<endl;
	for(i=k-m;i<k;i++)
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
