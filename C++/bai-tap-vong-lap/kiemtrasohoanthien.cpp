#include <iostream>
using namespace std;
main()
{
	int a, i, tong;
	cout << "Nhap so a: ";
	cin >> a;
	tong = 0;
	for(i = 1 ; i < a ; i++)
	{
		if(a % i == 0)
		{
			tong += i;
		}
	}
	if(tong == a)
	{
		cout << a << " la so hoan thien";
	}
	else
	{
		cout << a << " khong phai la so hoan thien";
	}
}
