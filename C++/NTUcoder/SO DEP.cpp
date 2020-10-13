#include <iostream>
using namespace std;
main()
{
	int a, bien, tong=0,i;
		cin >> a;
	if(a==0)
	cout<<"NO";
	else
	{
		while(a > 0)
	{
		bien = a%10;
		tong+=bien;
		a/=10;
	}
	(tong%10)-9==0?cout<<"YES":cout<<"NO";
	}
}
