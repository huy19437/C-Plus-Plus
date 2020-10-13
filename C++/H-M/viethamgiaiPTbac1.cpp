#include <iostream>
using namespace std;
float Giaiphuongtrinhbac1(float a,float b )
{
	return -b/a;
}
main()
{
	float X, a, b;
	cin >>a >>b;
	X = Giaiphuongtrinhbac1(a,b);
	cout << "nghiem cua phuong trinh la: x= " << X;
}
