#include <iostream>
using namespace std;
main()
{
	int a, b;
	cout << "nhap a= " << endl;
	cin >> a;
	cout << "nhap b= " << endl;
	cin >> b;
	if(a > b)
	{
		cout << "a lon hon b";
	}
	else if (a < b)
	{
		cout << "b lon a";
	}
	else 
	{
		cout << " a va b bang nhau";
	}
}
