#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
main()
{
	int a[20],i, tong;
	srand(time(0));
	for(i=0;i<20;i++)
	{
		a[i] = 10 + rand()%20;
	}
	cout<<"In ra cac so tu 1 den 20"<<endl;
	for(i=0;i<20;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	cout<<"In ra cac so tu 20 den 1"<<endl;
	for(i=20;i>0;i--)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	cout<<"In ra cac so chan"<<endl;
	for(i=0;i<20;i++)
	{
		if(a[i]%2 == 0) cout<<a[i]<<"\t";
	}
	cout<<endl;
	cout<<"In ra cac so le"<<endl;
	for(i=0;i<20;i++)
	{
		if(a[i]%2 != 0) cout<<a[i]<<"\t";
	}
	cout<<endl;
	cout<<"In ra Tong day so"<<endl;
	for(i=0;i<=20;i++)
	{
		tong += a[i];
	}
	cout<<tong;
}
