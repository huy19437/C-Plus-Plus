#include <iostream>
using namespace std;
main()
{
	int a, bien, Chuso,i, b, dem=0,n;
	cout << "Nhap vao so bat ki: " << endl;
	do
	{
		cin >> a;
		n=a;
	}while(a < 0);
	while(a > 0)
	{
		bien = a%10;
		dem++;
		a/=10;
	}
	a=n;
	int c[dem];
	for(i=0;i<dem;i++)
	{
		bien = a%10;
		c[i] = bien;
		a = a/10;
	}
	for(i=0;i<dem;i++)
	{
		cout<<c[i];
	}
}
