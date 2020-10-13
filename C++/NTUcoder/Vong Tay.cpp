#include<iostream>
using namespace std;
main()
{
	int n, i;
	cin>>n;
	if(n<=7)
	cout<<7-n<<" "<<n;
	else
	{
		if((n/7)%2 == 0)
		cout<<7-n%7<<" "<<n%7;
		else
		cout<<n%7<<" "<<7-n%7;
	}
}
