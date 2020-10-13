#include <iostream>
using namespace std;
struct Timer
{
	int hour;
	int min;
};
main()
{
	Timer timerIn, timerOut;
	int minute;	 
	cout << "Nhap gio va phut: " << endl;
	do
	{
		cin >> timerIn.hour;
		cin >> timerIn.min;
	}while(timerIn.hour < 0 && timerIn.min < 0 && timerIn.min > 59);
	cout << "Nhap so phut: ";
	do
	{
		cin>>minute;
	}while(minute < 0 && minute > 59);
	timerOut = timerIn;
	timerOut.hour = timerIn.hour + (timerIn.min + minute)/60;
	timerOut.min = (timerIn.min + minute)%60;
	cout << "Gio va phut sau khi cong la: " << timerOut.hour <<" gio "<< timerOut.min <<" phut ";
}
