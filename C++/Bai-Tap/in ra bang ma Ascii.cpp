#include<iostream>
using namespace std;
main()
{
	for (int i=1; i<=255; i++)
	{
		if(isprint(i))
			cout<< "ma ASCII cua "<<i<<" la "<<char(i)<<endl;
	}
	return 0;
}
