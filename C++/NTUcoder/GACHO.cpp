#include<iostream>
using namespace std;
main()
{
	int n,m,g=0,c=0;
	cin>>n>>m;
	int t=-1;
	for(int i=0;i<n;i++)
	{
		if((2*i+4*(n-i))==m)
			t=i;
	}
	cout<<t<<" ";
	if(t!=-1)
		cout<<n-t;
}
