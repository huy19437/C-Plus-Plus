#include <iostream>
using namespace std;
main ()
{
	float a, b, c;
	cout << "nhap a, b, c lan luot:" << "\n";
	cin >> a;
	cin >> b;
	cin >> c;
	if(a > b && a > c)
	{
		cout << "gia tri lon nhat la:" << a;
	}
	else if (b > c)
	{
		cout << "gia tri lon nhat la: " << b;
	}
	else
	{
		cout << "gia tri lon nhat la: " << c;
	}
}

