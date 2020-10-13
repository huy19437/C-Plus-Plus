#include <iostream>
using namespace std;
main()
{
	int a[20],i;
	
	for(i=0;i<20;i++)
	{
		cin >> a[i];
	}
	for(i=19;i>=0;i--)
	{
		cout << a[i]<<"\t";
	}
}
