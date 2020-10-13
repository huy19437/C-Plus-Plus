#include <iostream>
using namespace std;
int solonnhat(int a)
{
	int max=0;
	while(a > 0)
	{
		int t = a % 10;
		if(max < t)
			max =t;
		a = a / 10;
	}
	cout<<max;
}
main()
{
	int a;
	cout<<"nhap so a"<<endl;
	cin>>a;
	cout<<"Chu so lon nhat trong so vua nhap la: "<<endl;
	solonnhat(a);
}
