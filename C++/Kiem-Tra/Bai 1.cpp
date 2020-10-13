#include <iostream>
using namespace std;
main()
{
	int a, b, c, dTB;
	string tensv;
	cout<<"nhap ten cua ban: "<<endl;
	getline(cin,tensv);
	do
	{
		cout<<"Nhap diem 3 mon Toan,Ly,Hoa lan luot la: "<<endl;
		cin>>a>>b>>c;
	}
	while((a < 0 || a >= 10) || (b < 0 || b >= 10) || (c < 0 || c >= 10));
	dTB=(float)(a+b+c)/3; 
	cout<<"Ten cua ban: "<<tensv<<endl;
	cout<<"Diem trung binh la: "<<dTB<<endl;
	if(dTB>=8)
	{
		cout<<"Xep loai xuat sac";
	}
	else if(dTB >= 7 && dTB < 8)
	{
		cout<<"Xep loai Gioi";
	}else if(dTB >=6 && dTB <7)
	{
		cout<<"Xep loai Kha";
	}
	else if(dTB >= 5 && dTB <6)
	{
		cout<<"Xep loai Trung binh";
	}
	else 
	{
		cout<<"Xep loai Yeu";
	}
}
