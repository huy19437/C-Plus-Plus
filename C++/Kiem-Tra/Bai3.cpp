#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
main()
{
	int a[10],i, max, min, t, j;
	srand(time(0));
	cout<<"Nhap vao day so ngau nhien:"<<endl;
	for(i=0;i<10;i++)
	{
		a[i] = 1 + rand()%20;
	}
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	cout<<"So lon nhat va be nhat cua mang 20 so ngau nhien nhap vao la: "<<endl;
	max=a[0];
    for(i=1;i<10;i++)
    {
    	if(max < a[i])
    	max = a[i];
	}
	cout<<max<<endl;
	min=a[0];
    for(i=1;i<10;i++)
    {
    	if(min > a[i])
    	min = a[i];
	}
	cout<<min<<endl;
	cout<<"Sap xep tu lon den be:"<<endl;
	for(i=1;i<10;i++)
	{
		for(j=0;j<9;j++)
		if(a[j+1] > a[j])
		{
			t=a[j+1];
			a[j+1] = a[j];
			a[j] = t;
		}
	}
	for(i=1;i<10;i++)
	{
		cout<<a[i]<<"\t";
	}
}
