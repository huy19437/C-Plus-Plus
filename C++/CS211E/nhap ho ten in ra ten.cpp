#include<bits/stdc++.h>
#include<cstring>
using namespace std;
main()
{
	string st;
	cout<<"Nhap ho ten: ";
	getline(cin,st);
	int dem=0,i,j;
	int k=st.length();
	for(i=k;i>=1;i--)
	{
		if(st[i]==' ')
		{
			cout<<"Ten cua nguoi do la: ";
			for(j=i+1;j<=k;j++)
			{
				cout<<st[j];
			}
			break;
		}
		else
		dem++;
	}
	if(dem==k)
	cout<<"Ban chi nhap moi ten!";
}
