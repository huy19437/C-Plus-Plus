#include <iostream>
using namespace std;
main()
{
	int i, j, n, tong;
	cout << "Nhap so n tu ban phim: " << endl;
	cin >> n;
	tong = 0;
	if(n%2 == 0)
	{
		j = 2;
		for(i = 1 ; i <= n-1 ; i += 2)
		{
			tong += i*j;
			j += 2;
		}
	}
	else 
	{
		j = 1;
		for(i = 0 ; i <= n-1 ; i += 2)
		{
			tong += i*j;
			j += 2;
		}
	}
	cout <<"Tong cua day so la: " << tong;
}
