#include<bits/stdc++.h>
using namespace std;
int  Tuso(int n)
{
	return pow(-1,n-1);
}
int Mauso(int n)
{
	return pow(2*n,2);
}
float Bieuthuc(int n)
{
	float s=0;
	for(int i=1;i<=n;i++)
	 s+=(float)Tuso(i)/Mauso(i);
	return s;
}
main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<Bieuthuc(n);
}

