#include<iostream>
#include<string>
using namespace std;
class Sotietkiem
{
public:
	float ID;
	float CMND;
	string hoten;
	double tiengui;
	int ngay,thang,nam;
	float laisuat;
	int loaiso;

	void user();
	void getthongtin();
	void output();
	
	int thanggui;
	float tienlai();
};
float Sotietkiem::tienlai()
{
	cout<<tiengui*laisuat*thanggui;
}
void Sotietkiem::user()
{
	cout << "Hoten: ";
	getline(cin, hoten);
	cout << "Loai so tiet kiem: ";
	cin >> loaiso;

}
void Sotietkiem::getthongtin()
{
	cout << "Nhap thong tin chu so huu: "<<endl;
	cout << "ID: ";
	cin>>ID;
	cout << "CMND: ";
	cin>>CMND;
	cout << "So tien gui: ";
	cin>>tiengui;
	cout << "Nhap lan luot ngay thang nam lam so tiet kiem: "<<endl;
	cin>>ngay>>thang>>nam;
	cout << "Nhap lai suat: ";
	cin>>laisuat;
	cout << "So thang gui tiet kiem: ";
	cin>>thanggui;
}
void Sotietkiem::output()
{
	cout << "Thong tin chu so huu la: "<<endl;
	cout<<"Ho ten la: ";
	cout<<hoten<<endl;
	cout<<"Loai so tiet kiem la: ";
	cout<<loaiso<<endl;
	cout<<"ID cua nguoi dung la: ";
	cout<<ID<<endl;
	cout<<"Chung minh nhan la: ";
	cout<<CMND<<endl;
	cout<<"So tien gui la: ";
	cout<<tiengui<<endl;
	cout<<"Ngay thang lap so tiet kiem la: ";
	cout<<ngay<<"/"<<thang<<"/"<<nam<<endl;
	cout<<"Lai suat la: ";
	cout<<laisuat<<endl;
	cout<<"So thang gui la: ";
	cout<<thanggui<<endl<<endl;
}
int main()
{
	cout << "So tiet kiem co Ky han: phim so 1"<<endl;
	cout << "So tiet kiem khong co Ky han: phim so 2"<<endl;
	cout << "Ky han la: 5 thang";
	cout << endl<<endl;
	Sotietkiem stk;
	stk.user();
	stk.getthongtin();
	stk.output();
	if(stk.loaiso == 1)
	{
		cout << "Tien lai la: ";
		stk.tienlai();
	}
	else if(stk.thanggui >= 5 )
	{
		cout << "Tien lai la: ";
		stk.tienlai();
	}
	else 
	cout << "Tien lai bang 0.";
}

