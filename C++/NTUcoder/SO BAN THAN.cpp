#include<iostream>
using namespace std;
main()
{
	int n,m,i,j,tong=0,tong2=0;
	cin>>n;
	cin>>m;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			tong+=i;
	}
	for(j=1;j<m;j++)
	{
		if(m%j==0)
			tong2+=j;
	}
	if(tong==m && tong2==n)
	cout<<"YES";
	else cout<<"NO";
}
