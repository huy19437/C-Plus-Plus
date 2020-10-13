#include<iostream>
using namespace std;
int UCLN(int x,int y){
	int i = 1;
	while ( (x*i)% y != 0)
	{
		i++;
	}
		return x*i;

}
main()
{
	int a, b;
	cin >> a >> b;
	cout << UCLN(a, b);
}
    
