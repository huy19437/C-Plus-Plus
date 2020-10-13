#include<bits/stdc++.h>
using namespace std;
int UCLN(int a, int b){
	if(b == 0) return a;
	return UCLN(b, a%b);
}
main(){
	int a,b;
	cout<<"nhap a ";
	cin>>a;
	cout<<"nhap b ";
	cin>>b;
	if(a == 0){
		if(b == 0){
			cout<<"VSN";
		}else{
			int UCLN = b;
			cout<<"UCLN cua a va b la: "<<b;
		}
	}else if(b == 0){
		int UCLN = a;
		cout<<"UCLN cua a va b la: "<<a;
	}else{
		while(a!=b){
			if(a>b){
				a = b;
//				a = a - b;
			}else{
				b = a%b;
//				b = b - a;
			}
		};
	cout<<"UCLN cua a va b la: "<<a;
	}
	
}
