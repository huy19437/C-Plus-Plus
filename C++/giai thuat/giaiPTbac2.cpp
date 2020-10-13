#include<bits/stdc++.h>
using namespace std;
main(){
	int a, b, c;
	cout<<"nhap a \n";
	cin>>a;
	cout<<"nhap b \n";
	cin>>b;
	cout<<"nhap c \n";
	cin>>c;
	if(a == 0){
		if(b == 0){
			if(c == 0){
				cout<<"VSN";
			}else{
				cout<<"VN";
			}
		}else{
			int x = -c/b;
			cout<<x;
		}
	}else{
		float delta = sqrt(pow(b,2) - 4*a*c);
		if(delta == 0){
			cout<<"nghiem kep: \n";
			int y = -b/2*a;
			cout<<y;
		}else if(delta > 0){
			float x1 = (-b + sqrt(delta))/2*a;
			float x2 = (-b - sqrt(delta))/2*a;
			cout<<"nghiem x1: ";
			cout<<x1<<"\n";
			cout<<"nghiem x2: ";
			cout<<x2;
		}else{
			cout<<"VN";
		}
	}
}
