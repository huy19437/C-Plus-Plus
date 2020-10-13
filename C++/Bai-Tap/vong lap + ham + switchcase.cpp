#include <iostream>
using namespace std;
void bai1()
{
	int a, b, c; 
string s;
	cout << "Nhap tuoi cua hoc sinh: " << endl;
	cin >> a;
	s =  (a >= 16 ? "Du tuoi hoc lop 10" : "Khong du tuoi hoc lop 10");
	cout << s << endl;
}
void bai2()
{
	int a;
	cout << "Nhap so nguyen bat ki tu ban phim: ";
	cin >> a;
	cout << (a == 100 ? "So ban vua nhap la 100" : a > 100  ? "So ban vua nhap lon hon 100" : "So ban vua nhap nho hon 100") << endl;
}
void bai3()
{
	int a, b, c;
	cout << "Nhap 3 so nguyen tu ban phim: " << endl;
	cin >> a >> b >> c;
	if(a > c && a > b)
		cout << "So lon nhat la: " << a << endl;
	else if(b > c)
	    cout << "So lon nhat la: " << b << endl;
	else
	    cout << "So lon nhat la: " << c << endl;
}
void bai4()
{
	int a, b, c;
	cout << "Nhap 3 so nguyen tu ban phim: " << endl;
	cin>>a>>b>>c;
	if((a > c && a < b) || (a > b && a < c)) cout << "So o giua la: " << a << endl;
	if((b > a && b < c) || (b > c && b < a)) cout << "So o giua la: " << b << endl;
	if((c > a && c < b) || (c > b && c < a)) cout << "So o giua la: " << c << endl;	
}
void bai5()
{
	int a, b, c;
	float dtb;
	cout << "Nhap diem kiem tra, giua ki va cuoi ki lan luot: " << endl;
	cin >> a >> b >> c;
	dtb = (float)(a + b + c)/3;
	if(dtb >= 9)
		cout << "Hang A";
	else if(dtb >= 7 && dtb < 9)
		cout << "Hang B";
	else if(dtb >= 5 && dtb < 7)
		cout << "Hang C";
	else 
		cout << "Hang F";
}
main()
{
	int sobai;
	cout << "Nhap so bai: ";
	cin >> sobai;
	switch(sobai)
	{
		case 1:
			bai1();
			break;
		case 2:
			bai2();
			break;	
		case 3:
			bai3();
			break;
		case 4:
			bai4();
			break;
		case 5:
			bai5();
			break;
		default:
			cout << "fail";
	}
}
