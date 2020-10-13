#include<bits/stdc++.h>
#include<string>
using namespace std;
main()
{
	char st[1000];
	string line[225];
	ifstream f1;
	ofstream f2;
	f1.open("test.txt");
	f2.open("laydong2.txt");
	if(f1.fail())
	cout<<"Mo file loi";
	else
	{
		int i=1;
		while(!f1.eof())
		{
			f1.getline(st,100);
			line[i]=st;			
			if(i==2){			
			f2<<line[2];
			}
			i++;
	}
	f1.close();
	f2.close();
}
}
