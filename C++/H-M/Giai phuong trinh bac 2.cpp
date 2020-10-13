#include <iostream>
#include <math.h>
using namespace std;
float Giaiphuongtrinhbac2(float a,float b,float c)
{
	if (a == 0)
	{
		if(b == 0)
		{
			if(c == 0)
			{
				return 0;
			}
		}
		else 
		{
			return 1;
		}
	}
	else if(a != 0)
	{
		if(b*b-4*a*c >0)
		{
		  return 2;
		}	
		if(b*b-4*a*c <0)
		{
		 return 3;
		}
		else 
	{
		return 4; // phuong trinh co nghiem kep
	}
	}
}
main()
{
	float a, b, c;
	float delta=sqrt(b*b-4*a*c);
	cout<<"nhap a, b, c lan luot la: "<<endl;
	cin >>a >>b >>c;
	if((Giaiphuongtrinhbac2(a,b,c) == 0))
	{
		cout<<"phuong trinh co vo so nghiem";
	}
	if((Giaiphuongtrinhbac2(a,b,c) == 1))
	{
		cout<<"phuong trinh co duy nhat 1 nghiem: "<< (float)-c/b;
	}
	if((Giaiphuongtrinhbac2(a,b,c) == 2))
	{
		cout<<"phuong trinh co 2 nghiem phan biet: X1= "<<(float)(-b - delta/4*a)<<"\t"<<"X2="<<(float)(-b + delta/4*a);
	}
	if(Giaiphuongtrinhbac2(a,b,c) ==  3)
	{
		cout<<"phuong trinh vo nghiem";
	}
	else
	{
		cout<<"phuong trinh co nghiem kep: X="<<(float)-b/2*a;
	}
	return 0;
}
