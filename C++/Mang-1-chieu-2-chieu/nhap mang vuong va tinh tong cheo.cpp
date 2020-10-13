#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
main()
{
    int a[4][4], i, j, tong = 0;
    srand(time(0));
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j ++)
        {
            a[i][j] = 0 + rand()%50;
            cout << a[i][j] << "\t";
            
        }
        cout << endl;
    }
    for(i = 0; i < 4; i++)
    {
    	for(j = 0; j < 4; j++)
    	{
    		if(i == j) 
    		tong += a[i][j];
		}
	}
    cout << "Tong cac so cheo: " << tong;
  
    
    
    
}
