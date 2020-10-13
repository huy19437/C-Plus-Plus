#include<bits/stdc++.h>
#include<string>
using namespace std;
main()
{
	char st[100];
	ifstream f1;
	ofstream f2;
	f1.open("diemthi.txt");
	f2.open("dsthilai.txt");
	if(f1.fail())
	cout<<"Mo file loi";
	else
	{
		while(!f1.eof())
		{
			f1.getline(st,100);
			for (int i = 0 ; i < 100 ; i++)
			{
				if (st[i] < 52 && st[i] >= 48 && isspace(st[i-1]) && st[i+1] != '0')
				{
					f2<<st;
					f2<<"\n";
				}
			}
	}
	f1.close();
	f2.close();
}
}
