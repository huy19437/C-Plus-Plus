#include<iostream>
using namespace std;
main()
{
	int n,m;
	cin>>n>>m;
	int g=0,c=0;
	while(2*g + 4*(n-g)<=m)
	{
		g++;
	}
	cout<<g<<" ";
	
}
