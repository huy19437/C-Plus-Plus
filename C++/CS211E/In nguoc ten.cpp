#include<bits/stdc++.h>
#include<cstring>
using namespace std;
main()
{
	string st;
	cout<<"Nhap ho ten: ";
	getline(cin,st);
	int k=st.length();
	int i=k,j,space=k;
	do
	{
		if(st[i]==' ' || i==0)
		{
			for(int j=i;j<space;j++)     //sau khi gap khoang trang se in ra tu khoang trang ve sau
			{
				if(st[i]==' ')
				cout<<st[j+1];			
				else
				cout<<st[j];
			}
			space=i;
		}
		i--;
	}while(i>=0);
}

