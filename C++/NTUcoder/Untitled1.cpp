#include<iostream>
using namespace std;
main()
{
	int n,tong1=0,tong,tong2=0,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		tong1+=a[i];
	}
	tong=tong1/2;
	
	i=0;
	while(tong2<tong)
	{
		tong2+=a[i];
		i++;
	}
	int tong3=tong1-tong2;
	if(tong2==tong3)
	cout<<"YES";
	else
	cout<<"NO";
}
