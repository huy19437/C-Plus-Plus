#include <iostream>
using namespace std;
main()
{
	int i, n;
	cout << "Nhap vao so n: " << endl;
	cin >> n;
	if(n < 2)
	{
		cout << "khong phai so nguyen to";
	}
	else 
	{
		for(i = 2 ; i < n-1 ; i++)
		{
			if(n%i == 0)
			{
				cout << "khong phai so nguyen to";
				break;
			}
			else
			{
				cout << "la so nguyen to";
				break;
			}
		}
	}
}
