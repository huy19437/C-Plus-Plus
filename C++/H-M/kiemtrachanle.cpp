#include <iostream>
using namespace std;
int chanle(int a)
{
	if(a%2 == 0)
	{
		return 0;
	}
	else return 1;
}
main()
{
	int a;
	cin >> a;
	if(chanle(a) == 1)
	{
		cout << "la so chan";
	}
	else cout << "la so le";
	return 0;
}
