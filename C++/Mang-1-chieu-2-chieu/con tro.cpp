#include <iostream>
using namespace std;
main()
{
	int a = 10;
	int &p = a;
	int* b = &a;
	*b= 20;
	cout << &a << endl;
	cout << &p << endl;
	cout << &b;
}
