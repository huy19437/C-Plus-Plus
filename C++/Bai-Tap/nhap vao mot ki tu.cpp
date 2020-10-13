#include <iostream>
#include <string>
using namespace std;
main()
{
	char a;
	cout << "Nhap ki tu: ";
	cin >> a;
	int b = int(a) - 32;
	cout <<"Ki tu sau khi viet hoa la: " << char(b);
}
