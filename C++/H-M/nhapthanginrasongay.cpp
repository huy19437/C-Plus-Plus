#include <iostream>
using namespace std;
int Sothang(int a)	
{
	if(a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
	{
		return 0;
	}
	else return 1;
}
int Sonam(int b)
{	
	if(b%4 == 0 && b%100 != 0 || b%400 == 0)
	return -1;
}
main()
{
	int a, b;
	cout << "nhap so thang:";
	cin >> a;
	if(a == 2) 
	{
	cout << "nhap so nam:";
	cin >> b;
	if(Sonam(b) == -1)
	{
		cout << "thang nay co 29 ngay";
	}
	else
	{
	 cout << "thang nay co 28 ngay";
	}
	}
	else if(Sothang(a) == 0)
	{
		cout << "thang nay co 31 ngay";
	}
	else cout << "thang nay co 30 ngay";
	return 0;
}
