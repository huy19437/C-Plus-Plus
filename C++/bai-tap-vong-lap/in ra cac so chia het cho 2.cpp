#include <iostream>
using namespace std;
main()
{
	int a[20], n;
	cin >> n;
	cin >> n;
	for(n=0;n<20;n++)
	{
		cin >> a[n];
		if(a[n]%2==0)
			cout << a[n];
	}
}
