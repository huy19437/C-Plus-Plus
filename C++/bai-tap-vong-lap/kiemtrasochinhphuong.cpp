#include <iostream>
#include <math.h>
using namespace std;
main()
{
	int a, t, j;
	cout << "Nhap a tu ban phim: ";
	cin >> a;
	t = sqrt(a);
	j = t;
	if(pow(t,2) == a)
	{
		cout << "la so chinh phuong";
	}
	else 
	{
		cout << a << "khong phai la so chinh phuong";
	}
}
