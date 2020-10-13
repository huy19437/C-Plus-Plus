#include<iostream>
using namespace std;
main()
{
	int n,m,dem=1;
	cout<<"Nhap n: "<<endl;
	cin>>n;
	int a[n];
	int max1=a[0];
	cout<<"\nNhap gia tri cho mang "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max1)
		max1=a[i];
	}
	int max2=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<max1 && a[i]>max2)
			max2=a[i];
	
	}
	if(max2!=0)
		cout<<"Max2 la: "<<max2<<endl;
	else cout<<"Khong co max2 "<<max2<<endl;
	
}
