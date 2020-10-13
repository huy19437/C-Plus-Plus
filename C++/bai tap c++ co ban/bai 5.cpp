#include <iostream>
using namespace std;
main ()
{
	int i, Thang;
do {
	cout << "Nhap so thang: ";
	cin >> Thang;
	i = Thang;
}  while ( i > 12 );
		if(i == 1 || i == 2 || i == 3)
		{
			cout << "Quy 1";
		}
		else if (i == 4 || i == 5 || i == 6)
		{
			cout << "Quy 2";
		}
		else if(i == 7 || i == 8 || i == 9)
		{
			cout << "Quy 3";
		}
		else
		{
			cout << "Quy 4";
		} 

	
}
