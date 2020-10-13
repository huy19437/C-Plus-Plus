#include <iostream>
using namespace std;
main()
{
  int a, i=1, gt=1;
  cin >>a;
  do 
  {
  	gt*=i;
	i++;
  }	while(i<=a);
  cout << gt;
  
}
