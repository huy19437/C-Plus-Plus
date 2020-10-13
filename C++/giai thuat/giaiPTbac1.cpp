#include<bits/stdc++.h>
using namespace std;
main(){
	int a, b;
	cout<<"nhap a \n";
	cin>>a;
	cout<<"nhap b \n";
	cin>>b;
	if(a == 0){
		if(b == 0){
			cout<<"VSN";
		}else{
			cout<<"VN";
		}
	}else{
		float x = -b/a;
		cout<<x;
	}
}
