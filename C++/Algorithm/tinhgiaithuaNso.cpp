#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cout<<"nhap n: ";
	cin>>n;
	int s=1;
	for(int i=1; i<=n; i++){
		s*=i;
	}
	
	cout<<"giai thua n so: ";
	cout<<s;
}
