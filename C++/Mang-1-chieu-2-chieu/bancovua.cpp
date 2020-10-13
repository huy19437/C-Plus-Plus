#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
main()
{
	int a[8][8], i, j, k, l, m, n;
	srand(time(0));
	do
	{
		k = 0 + rand()%7; // random vi tri con xe va vi tri bat ki
		l = 0 + rand()%7;
		m = 0 + rand()%7;
		n = 0 + rand()%7;
	}
	while(k == m && l == n); // lap den khi nao vi tri k dc trung nhau
	for(i = 0; i < 8; i++)
	{
		for(j = 0; j < 8; j++)
		{
			if(i == k && j == l)
			{
				cout << "x ";			
				continue;
			}
			if(i == m && j == n) cout << "o ";
			else cout << ". ";
		}
		cout << endl;
	}
	if( k == m || l == n) cout << "Xe an" << endl;
	else cout << "Xe khong an" << endl;
	cout << k << " " << l << " " << m << " " << n;          
}
