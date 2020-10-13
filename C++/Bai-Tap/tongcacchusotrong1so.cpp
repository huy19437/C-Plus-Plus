#include <iostream>
using namespace std;
main()
{
	int a, tong;
	cout << "Nhap vao so co 5 chu so: " << endl;
	do
	{
		cin >> a;
	}while(a > 100000);
	tong = 0;
	while( a != 0)
	{
		tong += a%10; //chia lay phan du
		a = a/10; // chia lay phan nguyen
	}
	cout << tong<<endl;
}
