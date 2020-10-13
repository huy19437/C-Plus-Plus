#include <iostream>
using namespace std;
main()
{
	int a, i=1, gt=1;
	cin >> a;
	while (i<=a)
	{
		gt*=i;
		i++;
	}
	cout << gt;
}
