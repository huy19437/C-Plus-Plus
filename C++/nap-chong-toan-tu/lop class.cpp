#include<iostream>
using namespace std;
class Phanso
{
public:
	int tuso;
	int mauso;
	Phanso(int tu, int mau);
	void output();
};
Phanso::Phanso(int tu, int mau):tuso(tu),mauso(mau)
{
	cout << "Phan so duoc tao la: ";
}
void Phanso::output()
{
	cout<<tuso<<"/"<<mauso;
}

int main()
{
	Phanso phanso(2,3);
	phanso.output();
}
