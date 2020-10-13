#include<iostream>
#include<cstring>
#include<fstream>
#define max 100
using namespace std;
void Docfile(ifstream &f, int a[], int &n)
{
	
	
	f.open("input.txt");
	f>>n;
	for(int i=0;i<n;i++)
	f>>a[i];
	f.close();
}
void Inmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void Tinhtong(int a[],int &n)
{
	int tong=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		tong+=a[i];
	}
	cout<<"Tong cac so le la: "<<endl;
	cout<<tong;
}
//void Sapxep(int a[], int &n)
//{
//	int tam;
//	for(int i = 1;i < n; i++ )
//	{
//	for(int j=0;j<n-1;j++)
//	if(a[j+1] < a[j])
//	{
//		tam = a[j];
//		a[j] = a[j+1];
//		a[j+1] = tam;
//	}
//	} 
//}
void Ghifile(ofstream &k, int a[], int &n)
{
	char tenfile[max];
	cout<<"\nNhap tenfile: "<<endl;
	gets(tenfile);
	strcat(tenfile,".txt");
	k.open(tenfile);
	if(k.fail())
	{
		cout<<"Loi ghi file "<<endl;
	}
	else 
	{
//		Sapxep(a,n);
		k<<n;
		k<<"\n";
		for(int i=0;i<n;i++)
			k<<a[i]<<" ";
	}
	
	k.close();
	
	
}
main()
{
	ifstream f;
	ofstream k;
	int n,a[max];
	Docfile(f,a,n);
	Inmang(a,n);
	cout<<endl;
	Tinhtong(a,n);
	Ghifile(k,a,n);
	cout<<"File da ghi la: "<<endl;
	Inmang(a,n);
	
}
