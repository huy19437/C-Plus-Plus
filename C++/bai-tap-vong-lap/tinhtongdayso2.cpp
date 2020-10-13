#include <iostream>
using namespace std;
main()
{
	// tach so 1 de rieng.
	int i, j, n, hieu;
	cout << "Nhap so n tu ban phim: " << endl;
	cin >> n;
	if(n%2 == 0)
	{
		j = 2;
		for(i = 3 ; i <= n-1 ; i += 2) // 2-3+4-5+6-7+8. tach so n(8) nhap vao de rieng
		{
			hieu += j - i;
			j += 2;
		}
		hieu += n;
	}
	else 
	{
		j = 3;
		for(i = 2 ; i <= n ; i += 2)
		{
			hieu += i - j;
			j += 2;
		}
	}
	cout << "Hieu cua day so la: " << hieu + 1;
	
}
