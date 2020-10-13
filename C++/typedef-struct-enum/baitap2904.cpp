#include <iostream>
#include <string>
using namespace std;
struct hocsinh 
{
	string ten;
	float diem;
};
enum gioitinh {trai, gai};

main()
{
	int n,i,j;
	cout << "0: trai      1: gai"<<endl<<endl;

	cout << "Nhap n hoc sinh: ";
	cin >> n;
	int a[n];
	hocsinh profile[n];
	int gender[n];
	cout << "Nhap ten va diem lan luot cua cac hoc sinh"<<endl;
	for(i=0;i<n;i++)
	{
        cin.ignore();
    	cout << "Nhap Ho Ten sv "<<": ";
		getline(cin, profile[i].ten);
    	fflush(stdin);
        cout << "Nhap diem sv "<<": ";
        cin >> profile[i].diem;
        cout << "Nhap gioi tinh: ";
        cin >> gender[i];
        cout << endl;
	}
	
	for(i=0;i<n;i++)
	{
		if(profile[i].diem <= 3 || profile[i].diem >= 9)
		{
			if(profile[i].diem <= 3 && gender[i] == 0)
			{
				cout << "Hoc sinh nam co hoc luc yeu la "<<": "<<profile[i].ten<<endl;
			}
			if(profile[i].diem >= 9 && gender[i] == 1)
			{
				cout << "Hoc sinh nu co hoc luc xuat sac la "<<": "<<profile[i].ten<<endl;
			}
		}
		else cout << "Khogn co hoc sinh nam HL yeu va khong co hoc sinh nu HL xuat sac.";
	}

}
