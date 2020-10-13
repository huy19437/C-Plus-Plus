#include <iostream>
using namespace std;
main()
{
	float toan, ly, hoa, diemTB;
	string tensinhvien;
	cout << "nhap ten cua ban:" << endl;
	getline(cin, tensinhvien);
	do
	{
	cout << "nhap diem mon toan: " << "\n";cin >> toan;
	cout  << "nhap diem mon ly: " << "\n";cin >> ly;
	cout << "nhap diem mon hoa: " << "\n";cin >> hoa;
}
	while(( toan < 0 || toan >= 10) || ( ly < 0 || ly >= 10) || ( hoa < 0 || hoa >= 10));
	diemTB=(toan+ly+hoa)/3;	
	cout << "ten sinh vien la: " << tensinhvien << endl;
	cout << "diem trung binh la: " << diemTB << endl;
	if(diemTB >= 8)
	{
		cout << "Xep loai Xuat Sac";
	}
	else if(diemTB >=7 && diemTB < 8)
	{
		cout << "Xep loai Kha";
	}
	else if (diemTB >= 5 && diemTB < 6)
	{
		cout << "Xep loai Tb";
	}
	else 
	{
		cout << "Xep loai Yeu";
	}
	 return 0;
	
}
