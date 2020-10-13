#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
main()
{
	int a[10],i, t, j;
	srand(time(0)); //sau moi lan random thi lenh nay se giup doi gia tri cua gia tri nhap vao 
	for(i=0;i<10;i++)
	{
		a[i] = 10 + rand()%51; //10 là diem bat dau, 51 la diem ket thuc, ham nay tu random gia tri nhap vao
	}
	srand(time(0)); //sau moi lan random thi lenh nay se giup doi gia tri cua gia tri nhap vao 
	for(i = 1;i < 10; i++ )
	{
	for(j=0;j<9;j++)
	if(a[j+1] > a[j])
	{
		t = a[j];
		a[j] = a[j+1];
		a[j+1] = t;
}
} 
	cout << "cac so sau khi sap xep la: " << endl;
	for(i=0;i<10;i++) cout << a[i]<<"\t";
}
