#include <iostream>
using namespace std;
void maxmin()
{
	int a[5], i, max, min;
	cout << "Nhap cac phan tu: " << endl;
	for(i = 0 ; i < 5 ; i++)
	{
		cin >> a[i];
	}
	max = 0;
	for(i = 0; i < 5 ; i++)
	{
		if(max < a[i])
		max = a[i];
	}
	min = a[0];
	for(i = 0; i < 5; i++)
	{
		if(min > a[i])
		min = a[i];
	}
	cout << "Phan tu nho nhat la: " << min << "\t";
	cout << "Phan tu lon nhat la: " << max << endl;
}
void daomang()
{
	int a[5], i;
	cout << "Nhap cac phan tu: " << endl;
	for(i = 0; i < 5; i++ )
	{
		cin >> a[i];
	}
	for(i = 4; i >= 0; i--)
	{
		cout << a[i];
	}
	cout << endl;
}
void tong()
{
	int a[5], i, tong;
	cout << "nhap cac phan tu: " << endl;
	tong = 0;
	for(i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	for(i = 0; i < 5; i++)
	{
		if(a[i] % 2 == 0 && a[i] % 3 == 0 )
		tong += a[i];
	}
	cout << "Tong cac phan tu chan chia het cho 3 " << tong << endl;
}
void kiemtra()
{
	int a[5], i, b;
	cout << "nhap cac phan tu: " << endl;
	for(i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	cout << "Nhap vao 1 so: ";
	cin >> b;
	for(i = 0; i < 5; i++)
	{
		if(a[i] == b)
		{
			cout << "Co trong mang";
			break;
		}
	}
}
void sapxep()
{
	int a[5], i, j, t;
	cout << "Nhap cac phan tu: " << endl;
	for(i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	for(i = 1;i < 5; i++ )
	{
	for(j=0;j<4;j++)
	if(a[j+1] < a[j])
	{
		t = a[j];
		a[j] = a[j+1];
		a[j+1] = t;
	}
	}
	cout << "Cac phan tu sau khi sap xep la: " << endl;
	for(i = 0; i < 5; i++) cout << a[i] << "\t";
}
using namespace std;
main()
{
	
	int cau;
	cout << "Nhap cau hoi: ";
	cin >> cau;
	switch(cau)
	{
		case 1:
			maxmin();
			break;
		case 2:
			daomang;
			break;
		case 3:
			tong();
			break;
		case 4:
			kiemtra();
			break;
		case 5:
			sapxep();
			break;
		default:
			cout << "Nhap sai.";
	}
}
