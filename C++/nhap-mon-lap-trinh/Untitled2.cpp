#include <iostream>
#include <cmath>
using namespace std;
main ()
{
	float a, b, c, delta;
	cout << "nhap a, b, c lan luot" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	delta= pow(b, 2) - 4*a*c;
	if(a == 0)
	{
     	if(b == 0 && c == 0)
	{
		cout << "phuong trinh co vo so nghiem";
	}
	else if (b!= 0 && c != 0 )
	{
		cout << "phuong trinh co 1 nghiem duy nhat la: x=  " << -c/b;
	}
    else 
	{
		cout <<	"phuong trinh vo nghiem";
	}		
	}
	else
	{
	   if(delta > 0)
	   {
	   	 cout << "phuong trinh co nghiem x1= " << (-b +delta)/(2*a) << "\t" << "x2= " << (-b - delta)/(2*a);
	   }
	   else if(delta <0)
	   {
	   	 cout << "phuong trinh vo nghiem";
	   }
	   else
	   {
	   	 cout << "phuong trinh co nghiem kep x= " << -b/(2*a);
	   }
	}
}
