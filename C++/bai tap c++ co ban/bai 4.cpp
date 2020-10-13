#include <iostream>
using namespace std;
main()
{
	int month, Year;
    cout << "Month: " << endl;
    cin >> month;
    switch(month)
    {
    	case 1: cout << "31 ngay" << endl;
    	break;
    	case 2: if(Year%4 == 0 && Year%100 !=0 || Year % 400 == 0)
		{
		cout << "Year:" << endl;
        cin >> Year; 
		cout << "29 ngay" << endl;
	}
    	else cout << "28 ngay";
    	break;
    	case 3: cout << "31 ngay" << endl;
    	break;
    	case 4: cout << "30 ngay" << endl;
    	break;
    	case 5: cout << "31 ngay" << endl;
    	break;
    	case 6: cout << "30 ngay" << endl;
    	break;
    	case 7: cout << "31 ngay" << endl;
    	break;
    	case 8: cout << "31 ngay" << endl;
    	break;
    	case 9: cout << "30 ngay" << endl;
    	break;
    	case 10: cout << "31 ngay" << endl;
    	break;
    	case 11: cout << "30 ngay" << endl;
    	break;
    	case 12: cout << "31 ngay" << endl;
    	break;

	}
}
